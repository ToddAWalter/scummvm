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

/*
 * This file is based on WME Lite.
 * http://dead-code.org/redir.php?target=wmelite
 * Copyright (c) 2011 Jan Nedoma
 */

#include "engines/wintermute/wintypes.h"
#include "engines/wintermute/base/base_game.h"
#include "engines/wintermute/base/gfx/base_surface.h"

namespace Wintermute {

//////////////////////////////////////////////////////////////////////
BaseSurface::BaseSurface(BaseGame *inGame) : BaseClass(inGame) {
	_referenceCount = 0;

	_width = _height = 0;

	_filename = "";

	_ckDefault = true;
	_ckRed = _ckGreen = _ckBlue = 0;
	_lifeTime = 0;
	_keepLoaded = false;

	_lastUsedTime = 0;
	_valid = false;
}

//////////////////////////////////////////////////////////////////////
BaseSurface::~BaseSurface() {
}

//////////////////////////////////////////////////////////////////////
bool BaseSurface::restore() {
	return STATUS_FAILED;
}

//////////////////////////////////////////////////////////////////////
bool BaseSurface::isTransparentAt(int x, int y) {
	if (startPixelOp()) {
		bool retval = isTransparentAtLite(x, y);
		endPixelOp();
		return retval;
	} else {
		return false;
	}
}

//////////////////////////////////////////////////////////////////////
bool BaseSurface::displayHalfTrans(int x, int y, Rect32 rect) {
	return STATUS_FAILED;
}

//////////////////////////////////////////////////////////////////////////
bool BaseSurface::create(int width, int height) {
	return STATUS_FAILED;
}

//////////////////////////////////////////////////////////////////////////
bool BaseSurface::invalidate() {
	return STATUS_FAILED;
}

//////////////////////////////////////////////////////////////////////////
bool BaseSurface::prepareToDraw() {
	_lastUsedTime = _gameRef->getLiveTimer()->getTime();

	if (!_valid) {
		//_gameRef->LOG(0, "Reviving: %s", _filename);
		return create(_filename.c_str(), _ckDefault, _ckRed, _ckGreen, _ckBlue, _lifeTime, _keepLoaded);
	} else {
		return STATUS_OK;
	}
}


//////////////////////////////////////////////////////////////////////////
void BaseSurface::setSize(int width, int height) {
	_width = width;
	_height = height;
}

} // End of namespace Wintermute
