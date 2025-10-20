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

#ifndef MEDIASTATION_MEDIASCRIPT_FUNCTION_H
#define MEDIASTATION_MEDIASCRIPT_FUNCTION_H

#include "common/array.h"
#include "common/hashmap.h"

#include "mediastation/clients.h"
#include "mediastation/datafile.h"
#include "mediastation/mediascript/codechunk.h"

namespace MediaStation {

class ScriptFunction {
public:
	ScriptFunction(Chunk &chunk);
	~ScriptFunction();

	ScriptValue execute(Common::Array<ScriptValue> &args);

	uint _contextId = 0;
	uint _id = 0;

private:
	CodeChunk *_code = nullptr;
};

class FunctionManager : public ParameterClient {
public:
	FunctionManager() {};
	virtual ~FunctionManager();

	virtual bool attemptToReadFromStream(Chunk &chunk, uint sectionType) override;
	ScriptValue call(uint functionId, Common::Array<ScriptValue> &args);
	void deleteFunctionsForContext(uint contextId);

	ScriptValue script_Random(Common::Array<ScriptValue> &args);

private:
	Common::HashMap<uint, ScriptFunction *> _functions;
};

} // End of namespace MediaStation

#endif
