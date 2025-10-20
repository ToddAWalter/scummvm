/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "mediastation/audio.h"
#include "mediastation/debugchannels.h"
#include "mediastation/actors/sound.h"

namespace MediaStation {

void SoundActor::readParameter(Chunk &chunk, ActorHeaderSectionType paramType) {
	switch (paramType) {
	case kActorHeaderActorId: {
		// We already have this actor's ID, so we will just verify it is the same
		// as the ID we have already read.
		uint32 duplicateActorId = chunk.readTypedUint16();
		if (duplicateActorId != _id) {
			warning("Duplicate actor ID %d does not match original ID %d", duplicateActorId, _id);
		}
		break;
	}

	case kActorHeaderChunkReference:
		_chunkReference = chunk.readTypedChunkReference();
		break;

	case kActorHeaderHasOwnSubfile:
		_hasOwnSubfile = static_cast<bool>(chunk.readTypedByte());
		break;

	case kActorHeaderSoundInfo:
		_chunkCount = chunk.readTypedUint16();
		_sequence.readParameters(chunk);
		break;

	case kActorHeaderMovieLoadType:
		_loadType = chunk.readTypedByte();
		break;

	default:
		Actor::readParameter(chunk, paramType);
	}
}

void SoundActor::process() {
	if (!_isPlaying) {
		return;
	}

	processTimeEventHandlers();
	if (!_sequence.isActive()) {
		_isPlaying = false;
		_sequence.stop();
		runEventHandlerIfExists(kSoundEndEvent);
	}
}

ScriptValue SoundActor::callMethod(BuiltInMethod methodId, Common::Array<ScriptValue> &args) {
	ScriptValue returnValue;

	switch (methodId) {
	case kSpatialShowMethod:
		// WORKAROUND: No-op to avoid triggering error on Dalmatians
		// timer_6c06_AnsweringMachine, which calls SpatialShow on a sound.
		// Since the engine is currently flagging errors on unimplemented
		// methods for easier debugging, a no-op is used here to avoid the error.
		assert(args.empty());
		return returnValue;

	case kTimePlayMethod: {
		assert(args.empty());
		timePlay();
		return returnValue;
	}

	case kTimeStopMethod: {
		assert(args.empty());
		timeStop();
		return returnValue;
	}

	default:
		return Actor::callMethod(methodId, args);
	}
}

void SoundActor::readSubfile(Subfile &subfile, Chunk &chunk) {
	uint32 expectedChunkId = chunk._id;

	debugC(5, kDebugLoading, "Sound::readSubfile(): Reading %d chunks", _chunkCount);
	readChunk(chunk);
	for (uint i = 1; i < _chunkCount; i++) {
		debugC(5, kDebugLoading, "Sound::readSubfile(): Reading chunk %d of %d", i, _chunkCount);
		chunk = subfile.nextChunk();
		if (chunk._id != expectedChunkId) {
			error("%s: Expected chunk %s, got %s", __func__, tag2str(expectedChunkId), tag2str(chunk._id));
		}
		readChunk(chunk);
	}
}

void SoundActor::timePlay() {
	if (_isPlaying) {
		return;
	}

	if (_sequence.isEmpty()) {
		warning("%s: Sound has no contents, probably because the sound is in INSTALL.CXT and isn't loaded yet", __func__);
		_isPlaying = false;
		return;
	}

	_isPlaying = true;
	_startTime = g_system->getMillis();
	_lastProcessedTime = 0;
	_sequence.play();
	runEventHandlerIfExists(kSoundBeginEvent);
}

void SoundActor::timeStop() {
	if (!_isPlaying) {
		return;
	}

	_isPlaying = false;
	_sequence.stop();
	runEventHandlerIfExists(kSoundStoppedEvent);
}

} // End of namespace MediaStation
