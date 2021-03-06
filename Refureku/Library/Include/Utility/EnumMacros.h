/**
*	Copyright (c) 2020 Julien SOYSOUVANH - All Rights Reserved
*
*	This file is part of the Refureku library project which is released under the MIT License.
*	See the README.md file for full license details.
*/

#pragma once

#define GENERATE_ENUM_OPERATORS(EnumName)																		\
inline EnumName operator|(EnumName flags1, EnumName flags2)														\
{																												\
	using UnderlyingType = std::underlying_type_t<EnumName>;													\
																												\
	return static_cast<EnumName>(static_cast<UnderlyingType>(flags1) | static_cast<UnderlyingType>(flags2));	\
}																												\
																												\
inline EnumName operator&(EnumName flags1, EnumName flags2)														\
{																												\
	using UnderlyingType = std::underlying_type_t<EnumName>;													\
																												\
	return static_cast<EnumName>(static_cast<UnderlyingType>(flags1) & static_cast<UnderlyingType>(flags2));	\
}

