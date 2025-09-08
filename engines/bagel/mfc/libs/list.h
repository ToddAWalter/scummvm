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

#ifndef BAGEL_MFC_LIBS_LIST_H
#define BAGEL_MFC_LIBS_LIST_H

#include "common/list.h"

namespace Bagel {
namespace MFC {
namespace Libs {

template<class T>
class List : public Common::List<T> {
public:
	bool contains(const T &tmp) const {
		for (auto it = this->begin(); it != this->end(); ++it) {
			if (*it == tmp)
				return true;
		}
		return false;
	}
};

} // namespace Libs
} // namespace MFC
} // namespace Bagel

#endif
