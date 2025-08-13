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

#include "engines/wintermute/ad/ad_response.h"
#include "engines/wintermute/base/base_game.h"
#include "engines/wintermute/base/base_sprite.h"
#include "engines/wintermute/base/font/base_font_storage.h"
#include "engines/wintermute/utils/utils.h"

namespace Wintermute {

IMPLEMENT_PERSISTENT(AdResponse, false)

//////////////////////////////////////////////////////////////////////////
AdResponse::AdResponse(BaseGame *inGame) : BaseObject(inGame) {
	_text = nullptr;
	_textOrig = nullptr;
	_icon = _iconHover = _iconPressed = nullptr;
	_font = nullptr;
	_iD = 0;
	_responseType = RESPONSE_ALWAYS;
}


//////////////////////////////////////////////////////////////////////////
AdResponse::~AdResponse() {
	delete[] _text;
	_text = nullptr;
	delete[] _textOrig;
	_textOrig = nullptr;
	delete _icon;
	_icon = nullptr;
	delete _iconHover;
	_iconHover = nullptr;
	delete _iconPressed;
	_iconPressed = nullptr;
	if (_font) {
		_gameRef->_fontStorage->removeFont(_font);
	}
}


//////////////////////////////////////////////////////////////////////////
void AdResponse::setText(const char *text) {
	BaseUtils::setString(&_text, text);
	BaseUtils::setString(&_textOrig, text);
}


//////////////////////////////////////////////////////////////////////////
bool AdResponse::setIcon(const char *filename) {
	delete _icon;
	_icon = new BaseSprite(_gameRef);
	if (!_icon || DID_FAIL(_icon->loadFile(filename))) {
		_gameRef->LOG(0, "AdResponse::setIcon failed for file '%s'", filename);
		delete _icon;
		_icon = nullptr;
		return STATUS_FAILED;
	}
	return STATUS_OK;
}

//////////////////////////////////////////////////////////////////////////
bool AdResponse::setFont(const char *filename) {
	if (_font) {
		_gameRef->_fontStorage->removeFont(_font);
	}
	_font = _gameRef->_fontStorage->addFont(filename);
	if (!_font) {
		_gameRef->LOG(0, "AdResponse::setFont failed for file '%s'", filename);
		return STATUS_FAILED;
	}
	return STATUS_OK;
}

//////////////////////////////////////////////////////////////////////////
bool AdResponse::setIconHover(const char *filename) {
	delete _iconHover;
	_iconHover = new BaseSprite(_gameRef);
	if (!_iconHover || DID_FAIL(_iconHover->loadFile(filename))) {
		_gameRef->LOG(0, "AdResponse::setIconHover failed for file '%s'", filename);
		delete _iconHover;
		_iconHover = nullptr;
		return STATUS_FAILED;
	}
	return STATUS_OK;
}


//////////////////////////////////////////////////////////////////////////
bool AdResponse::setIconPressed(const char *filename) {
	delete _iconPressed;
	_iconPressed = new BaseSprite(_gameRef);
	if (!_iconPressed || DID_FAIL(_iconPressed->loadFile(filename))) {
		_gameRef->LOG(0, "AdResponse::setIconPressed failed for file '%s'", filename);
		delete _iconPressed;
		_iconPressed = nullptr;
		return STATUS_FAILED;
	}
	return STATUS_OK;
}


//////////////////////////////////////////////////////////////////////////
bool AdResponse::persist(BasePersistenceManager *persistMgr) {

	BaseObject::persist(persistMgr);

	persistMgr->transferPtr(TMEMBER_PTR(_icon));
	persistMgr->transferPtr(TMEMBER_PTR(_iconHover));
	persistMgr->transferPtr(TMEMBER_PTR(_iconPressed));
	persistMgr->transferSint32(TMEMBER(_iD));
	persistMgr->transferCharPtr(TMEMBER(_text));
	persistMgr->transferCharPtr(TMEMBER(_textOrig));
	persistMgr->transferSint32(TMEMBER_INT(_responseType));
	persistMgr->transferPtr(TMEMBER_PTR(_font));

	return STATUS_OK;
}

} // End of namespace Wintermute
