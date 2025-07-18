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

#ifndef DIRECTOR_SCORE_H
#define DIRECTOR_SCORE_H

#include "director/cursor.h"

namespace Graphics {
	struct Surface;
	class ManagedSurface;
	class Font;
	class MacWindow;
	struct ZoomBox;
}

namespace Common {
	class ReadStreamEndian;
	class MemoryReadStreamEndian;
	class SeekableReadStreamEndian;
}

namespace Director {

class Window;
class Archive;
class DirectorEngine;
class DirectorSound;
class Frame;
class Movie;
struct Resource;
class Cursor;
class Channel;
class Sprite;
class CastMember;
class AudioDecoder;

struct Label {
	Common::String comment;
	Common::String name;
	uint16 number;
	Label(Common::String name1, uint16 number1, Common::String comment1) { name = name1; number = number1; comment = comment1;}
};

class Score {
public:
	Score(Movie *movie);
	~Score();

	Movie *getMovie() const { return _movie; }

	void loadFrames(Common::SeekableReadStreamEndian &stream, uint16 version);
	bool loadFrame(int frame, bool loadCast);
	bool readOneFrame();
	void updateFrame(Frame *frame);
	Frame *getFrameData(int frameNum);

	void loadLabels(Common::SeekableReadStreamEndian &stream);
	void loadActions(Common::SeekableReadStreamEndian &stream);
	void loadSampleSounds(uint type);

	static int compareLabels(const void *a, const void *b);
	uint16 getLabel(Common::String &label);
	Common::String *getLabelList();
	Common::String *getFrameLabel(uint id);
	void setStartToLabel(Common::String &label);
	void gotoLoop();
	void gotoNext();
	void gotoPrevious();
	void startPlay();
	void step();
	void stopPlay();
	void setDelay(uint32 ticks);

	void setCurrentFrame(uint16 frameId);
	uint16 getCurrentFrameNum() { return _curFrameNumber; }
	int getNextFrame() { return _nextFrame; }
	uint16 getFramesNum() { return _numFrames; }

	void setPuppetTempo(int16 puppetTempo);

	CastMemberID getCurrentPalette();

	Channel *getChannelById(uint16 id);
	Sprite *getSpriteById(uint16 id);
	Sprite *getOriginalSpriteById(uint16 id);

	void setSpriteCasts();

	int getPreviousLabelNumber(int referenceFrame);
	int getCurrentLabelNumber();
	int getNextLabelNumber(int referenceFrame);

	uint16 getSpriteIDFromPos(Common::Point pos);
	uint16 getMouseSpriteIDFromPos(Common::Point pos);
	uint16 getActiveSpriteIDFromPos(Common::Point pos);
	bool checkSpriteRollOver(uint16 spriteId, Common::Point pos);
	uint16 getRollOverSpriteIDFromPos(Common::Point pos);
	Common::List<Channel *> getSpriteIntersections(const Common::Rect &r);
	uint16 getSpriteIdByMemberId(CastMemberID id);
	bool refreshPointersForCastMemberID(CastMemberID id);
	bool refreshPointersForCastLib(uint16 castLib);

	bool renderTransition(uint16 frameId, RenderMode mode);
	void renderFrame(uint16 frameId, RenderMode mode = kRenderModeNormal);
	void incrementFilmLoops();
	void updateSprites(RenderMode mode = kRenderModeNormal, bool withClean = false);
	bool renderPrePaletteCycle(RenderMode mode = kRenderModeNormal);
	void setLastPalette();
	bool isPaletteColorCycling();
	void renderPaletteCycle(RenderMode mode = kRenderModeNormal);
	void renderCursor(Common::Point pos, bool forceUpdate = false);
	void updateWidgets(bool hasVideoPlayback);

	void invalidateRectsForMember(CastMember *member);

	void playSoundChannel(bool puppetOnly);

	Common::String formatChannelInfo();
	bool processFrozenPlayScript();

private:
	bool isWaitingForNextFrame();
	void updateCurrentFrame();
	void updateNextFrameTime();
	void update();
	void playQueuedSound();

	void screenShot();
	bool checkShotSimilarity(const Graphics::Surface *surface1, const Graphics::Surface *surface2);

	bool processImmediateFrameScript(Common::String s, int id);
	bool processFrozenScripts(bool recursion = false, int count = 0);

public:
	Common::Array<Channel *> _channels;
	Common::SortedArray<Label *> *_labels;
	Common::HashMap<uint16, Common::String> _actions;
	Common::HashMap<uint16, bool> _immediateActions;

	Common::Array<Frame *> _scoreCache;

	// On demand frames loading
	uint32 _version;
	Frame *_currentFrame;
	uint32 _curFrameNumber;
	uint32 _numFrames;
	uint32 _framesVersion;
	uint32 _numChannels;
	uint8 _currentTempo;
	CastMemberID _currentPaletteId;

	uint _firstFramePosition;
	uint _framesStreamSize;
	Common::MemoryReadStreamEndian *_framesStream;

	byte _currentFrameRate;
	byte _puppetTempo;

	bool _puppetPalette;
	int _paletteTransitionIndex;
	byte _paletteSnapshotBuffer[768];

	PlayState _playState;
	uint32 _nextFrameTime;
	uint32 _nextFrameDelay;
	int _lastTempo;
	int _waitForChannel;
	int _waitForVideoChannel;
	bool _waitForClick;
	bool _waitForClickCursor;
	bool _cursorDirty;
	bool _activeFade;
	bool _exitFrameCalled;
	bool _stopPlayCalled;
	Cursor _defaultCursor;
	CursorRef _currentCursor;
	bool _skipTransition;

	int _numChannelsDisplayed;

private:
	DirectorEngine *_vm;
	Lingo *_lingo;
	Movie *_movie;
	Window *_window;

	uint16 _nextFrame;
	int _currentLabel;
	DirectorSound *_soundManager;

	int _previousBuildBotBuild = -1;
};

} // End of namespace Director

#endif
