/*
(c) 2018 tevador <tevador@gmail.com>

This file is part of RandomJS.

RandomJS is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RandomJS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RandomJS.  If not, see<http://www.gnu.org/licenses/>.
*/

#pragma once

#include "Enum.h"

struct LiteralType {
	static constexpr EnumType None = 0;

	static constexpr EnumType Numeric = 1 << 0;
	static constexpr EnumType Object = 1 << 1;
	static constexpr EnumType String = 1 << 2;

	static constexpr EnumType All = String | Numeric | Object;
};