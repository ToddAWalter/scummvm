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

#ifndef SCUMM_SCRIPT_H
#define SCUMM_SCRIPT_H

#include "common/func.h"

namespace Scumm {

typedef Common::Functor0<void> Opcode;

struct OpcodeEntry : Common::NonCopyable {
	Opcode *proc;
#ifndef REDUCE_MEMORY_USAGE
	const char *desc;
#endif

#ifndef REDUCE_MEMORY_USAGE
	OpcodeEntry() : proc(0), desc(0) {}
#else
	OpcodeEntry() : proc(0) {}
#endif
	~OpcodeEntry() {
		setProc(0, 0);
	}

	void setProc(Opcode *p, const char *d) {
		if (proc != p) {
			delete proc;
			proc = p;
		}
#ifndef REDUCE_MEMORY_USAGE
		desc = d;
#endif
	}
};


// This is to help devices with small memory (PDA, smartphones, ...)
// to save abit of memory used by opcode names in the Scumm engine.
#ifndef REDUCE_MEMORY_USAGE
#	define _OPCODE(ver, x)	setProc(new Common::Functor0Mem<void, ver>(this, &ver::x), #x)
#else
#	define _OPCODE(ver, x)	setProc(new Common::Functor0Mem<void, ver>(this, &ver::x), "")
#endif

/**
 * The number of script slots, which determines the maximal number
 * of concurrently running scripts, and the number of local variables
 * in a script.
 * WARNING: Do NOT changes these values unless you really have to, as
 * this will break savegame compatibility if done carelessly. If you
 * have to change them, make sure you update saveload.cpp accordingly!
 */
enum {
	NUM_SCRIPT_SLOT = 80,
	NUM_SCRIPT_LOCAL = 25
};

/* Script status type (slot.status) */
enum {
	ssDead = 0,
	ssPaused = 1,
	ssRunning = 2
};

struct ScriptSlot {
	uint32 offs;
	int32 delay;
	uint16 number;
	uint16 delayFrameCount;
	bool freezeResistant, recursive;
	bool didexec;
	byte status;
	byte where;
	byte freezeCount;
	byte cutsceneOverride;
	byte cycle;
};

struct NestedScript {
	uint16 number;
	uint8 where;
	uint8 slot;
};

enum {
	/**
	 * The maximal number of cutscenes that can be active
	 * in parallel (i.e. nested).
	 */
	kMaxCutsceneNum = 5,

	/**
	 * The maximal 'nesting' level for scripts.
	 */
	kMaxScriptNesting = 15,
	kMaxScriptNestingHE = 40
};

enum {
	kScriptNumEXCD = 10001,
	kScriptNumENCD = 10002
};

/** Small helper to avoid `readVar(0x8000 + var)` repetition. */
#define ROOM_VAL(val)	(0x8000 + (val))

struct VirtualMachineState {
	uint32 cutScenePtr[kMaxCutsceneNum];
	byte cutSceneScript[kMaxCutsceneNum];
	int16 cutSceneData[kMaxCutsceneNum];
	int16 cutSceneScriptIndex;
	byte cutSceneStackPointer;
	ScriptSlot slot[NUM_SCRIPT_SLOT];
	// Why does localvar have space for one extra local variable?
	int32 localvar[NUM_SCRIPT_SLOT][NUM_SCRIPT_LOCAL + 1];

	NestedScript nest[kMaxScriptNestingHE]; // Changed from 15 to 40 because of later HE games
	byte numNestedScripts;
};

} // End of namespace Scumm

#endif
