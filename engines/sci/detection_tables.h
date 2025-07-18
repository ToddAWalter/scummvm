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

#include "common/translation.h"

namespace Sci {

#define GUIO_STD16 GUIO7(GUIO_NOSPEECH, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_HIRES GUIO8(GUIO_NOSPEECH, GUIO_NOASPECT, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_UNDITHER GUIO8(GUIO_NOSPEECH, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_PALETTEMODS GUIO9(GUIO_NOSPEECH, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_PALETTE_MODS, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_SPEECH GUIO5(GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_SPEECH_GM GUIO6(GUIO_MIDIGM, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_MAC GUIO6(GUIO_NOSPEECH, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_MAC_HIRESFONTS GUIO7(GUIO_NOSPEECH, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_MIDI_MODE, GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_MAC_UNDITHER GUIO7(GUIO_NOSPEECH, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_MAC_PALETTEMODS GUIO8(GUIO_NOSPEECH, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_PALETTE_MODS, GAMEOPTION_TTS, GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_STD16_MAC_SPEECH GUIO4(GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING, GAMEOPTION_ENABLE_GMM_SAVE)

#define FANMADE_L(name, resMapMd5, resMapSize, resMd5, resSize, resVol, lang) \
	{"sci-fanmade", name, { \
		{"resource.map", 0, resMapMd5, resMapSize}, \
		{resVol, 0, resMd5, resSize}, \
		AD_LISTEND}, lang, Common::kPlatformDOS, ADGF_USEEXTRAASTITLE | ADGF_AUTOGENTARGET, GUIO_STD16 \
	}

#define FANMADE(name, resMapMd5, resMapSize, resMd5, resSize) FANMADE_L(name, resMapMd5, resMapSize, resMd5, resSize, "resource.001", Common::EN_ANY)
#define FANMADE11(name, resMapMd5, resMapSize, resMd5, resSize) FANMADE_L(name, resMapMd5, resMapSize, resMd5, resSize, "resource.000", Common::EN_ANY)

// Game descriptions
static const struct ADGameDescription SciGameDescriptions[] = {
	// Astro Chicken - English DOS
	// SCI interpreter version 0.000.453
	{"astrochicken", "", {
		{"resource.map", 0, "f3d1be7752d30ba60614533d531e2e98", 474},
		{"resource.001", 0, "6fd05926c2199af0af6f72f90d0d7260", 126895},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Castle of Dr. Brain - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.005.000"
	// SCI interpreter version 1.000.510
	{"castlebrain", "", {
		{"resource.map", 0, "9f9fb826aa7e944b95eadbf568244a68", 2766},
		{"resource.000", 0, "0efa8409c43d42b32642f96652d3230d", 314773},
		{"resource.001", 0, "3fb02ce493f6eacdcc3713851024f80e", 559540},
		{"resource.002", 0, "d226d7d3b4f77c4a566913fc310487fc", 792380},
		{"resource.003", 0, "d226d7d3b4f77c4a566913fc310487fc", 464348},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - German Amiga (from www.back2roots.org, also includes English language)
	// Executable scanning reports "1.005.001"
	// SCI interpreter version 1.000.510
	{"castlebrain", "", {
		{"resource.map", 0, "8e60424682db52a982bcc3535a7e86f3", 2796},
		{"resource.000", 0, "0efa8409c43d42b32642f96652d3230d", 332468},
		{"resource.001", 0, "4e0836fadc324316c1a418125709ba45", 569057},
		{"resource.002", 0, "85e51acb5f9c539d66e3c8fe40e17da5", 826309},
		{"resource.003", 0, "85e51acb5f9c539d66e3c8fe40e17da5", 493638},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// Castle of Dr. Brain Macintosh (from omer_mor, bug report #5772)
	{"castlebrain", "", {
		{"resource.map", 0, "75cb06a94d2e0641295edd043f26f3a8", 2763},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 476566},
		{"resource.001", 0, "7f7da982f5cd868e1e608cd4f6515656", 400521},
		{"resource.002", 0, "e1a6b6f1060f60be9dcb6d28ad7a2a20", 1168310},
		{"resource.003", 0, "6c3d1bb26ad532c94046bc9ac49b5ff4", 891295},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_HIRESFONTS },

	// Castle of Dr. Brain - English DOS Non-Interactive Demo
	// SCI interpreter version 1.000.005
	{"castlebrain", "Demo", {
		{"resource.map", 0, "467bb5e3224bb54640c3280032aebff5", 633},
		{"resource.000", 0, "9780f040d58182994e22d2e34fab85b0", 67367},
		{"resource.001", 0, "2af49dbd8f2e1db4ab09f9310dc91259", 570553},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS 5.25" Floppy EGA (from omer_mor, bug report #4990)
	{"castlebrain", "EGA", {
		{"resource.map", 0, "88d106f945f7fd9d1aeda961cfec38a9", 2646},
		{"resource.000", 0, "6e125f4ce3f4f5c35f2617c7b66c6e21", 25325},
		{"resource.001", 0, "1d806162f6d3cfbe3c0135414efe6f88", 99931},
		{"resource.002", 0, "6a41a0eb5237778427dddf92ae07cf9b", 294772},
		{"resource.003", 0, "0c6ab4efb3be4d991ae9762e19f17c92", 306378},
		{"resource.004", 0, "5e7b90949422de005f80285979972e43", 292423},
		{"resource.005", 0, "8a5ed3ba96e2eaf18e36fedfaab89419", 297838},
		{"resource.006", 0, "dceed92e709cad1bd9582809a235b0a0", 266682},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS 3.5" Floppy EGA (from nozomi77, bug report #5841)
	{"castlebrain", "EGA", {
		{"resource.map", 0, "dfcf23e36cb81223bdf11166aaf90754", 2730},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 300857},
		{"resource.001", 0, "6e0020a9f9bef9a9d65943dc013f14b5", 222108},
		{"resource.002", 0, "de2f182529efaad2c4b510b452ab77ac", 633662},
		{"resource.003", 0, "38b4b37febc6b4f5061c461a283df148", 430388},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS Floppy (from jvprat)
	// Executable scanning reports "1.000.044", Floppy label reports "1.0, 10.30.91", VERSION file reports "1.000"
	// SCI interpreter version 1.000.510
	{"castlebrain", "", {
		{"resource.map", 0, "1302ceb141d44b05a42723791b2d84c6", 2739},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 346731},
		{"resource.001", 0, "d2f5a1be74ed963fa849a76892be5290", 794832},
		{"resource.002", 0, "c0c29c51af66d65cb53f49e785a2d978", 1280907},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS 5.25" Floppy VGA 1.1 (from rnjacobs, bug report #6162)
	{"castlebrain", "", {
		{"resource.map", 0, "a1deac2647ad09472c63656bfb950a4d", 2739},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 347071},
		{"resource.001", 0, "13e81e1839cd7b216d2bb5615c1ca160", 356812},
		{"resource.002", 0, "583d348c908f89f94f8551d7fe0a2eca", 991752},
		{"resource.003", 0, "6c3d1bb26ad532c94046bc9ac49b5ff4", 728315},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS Floppy 1.1
	{"castlebrain", "", {
		{"resource.map", 0, "f77728304c70017c54793eb6ca648174", 2745},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 347071},
		{"resource.001", 0, "13e81e1839cd7b216d2bb5615c1ca160", 796776},
		{"resource.002", 0, "930e416bec196b9703a331d81b3d66f2", 1283812},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - English DOS Floppy 1.000
	// Reported by graxer in bug report #5094
	{"castlebrain", "", {
		{"resource.map", 0, "453daa935535cef68d19704c2b1b78a2", 2649},
		{"resource.000", 0, "6e125f4ce3f4f5c35f2617c7b66c6e21", 25929},
		{"resource.001", 0, "4891faa2f6594c622e482f0ddce24fb4", 99404},
		{"resource.002", 0, "aebb56d5d005557ca0d122a03aa85386", 322459},
		{"resource.003", 0, "278ec1e6132c7be844d433dd23beb318", 335156},
		{"resource.004", 0, "fca1c3f2be660185206f004bda09f4fb", 333549},
		{"resource.005", 0, "9294e55da1e83708ad3104b2a3963e18", 327537},
		{"resource.006", 0, "1d778a0c65cac9ddbab65495e50a94ee", 335281},
		{"resource.007", 0, "063bb8ce4157c778cf30d1c912c006f1", 335631},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - German DOS Floppy 1.000 (also includes English language)
	// SCI interpreter version 1.000.068
	{"castlebrain", "", {
		{"resource.map", 0, "a69c03fa6845e7d859a9d5bff9090aad", 2679},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 368428},
		{"resource.001", 0, "6c3d1bb26ad532c94046bc9ac49b5ff4", 887474},
		{"resource.002", 0, "2a30815661f457dcb49b19f9cce96af0", 1250595},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Castle of Dr. Brain - Spanish DOS (also includes english language)
	// SCI interpreter version 1.000.510
	{"castlebrain", "", {
		{"resource.map", 0, "5738c163e014bbe046474de009020b82", 2727},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 1197694},
		{"resource.001", 0, "735be4e58957180cfc807d5e18fdffcd", 1433302},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Castle of Dr. Brain aka Dr. Brain Puzzle no Shiro - Japanese PC-98 Floppy (from m_kiewitz) (also includes English language)
	// Executable scanning reports "x.yyy.zzz", VERSION file reports "1.000"
	{"castlebrain", "", {
		{"resource.map", 0, "ff9674d5d0215a7ebae25ee38d5a72af", 2631},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 548272},
		{"resource.001", 0, "7c3e82c390e934de9b7afcab6de9cec4", 1117317},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO_STD16_HIRES	},

	// Castle of Dr. Brain - French fan translation, based on English DOS Floppy 1.000
	{"castlebrain", "", {
		{"resource.map", 0, "dd994a1e509542ca7060680371961d8f", 2665},
		{"resource.000", 0, "6e125f4ce3f4f5c35f2617c7b66c6e21", 58916},
		{"resource.001", 0, "4891faa2f6594c622e482f0ddce24fb4", 126120},
		{"resource.002", 0, "aebb56d5d005557ca0d122a03aa85386", 353483},
		{"resource.003", 0, "278ec1e6132c7be844d433dd23beb318", 335156},
		{"resource.004", 0, "fca1c3f2be660185206f004bda09f4fb", 333549},
		{"resource.005", 0, "9294e55da1e83708ad3104b2a3963e18", 327537},
		{"resource.006", 0, "1d778a0c65cac9ddbab65495e50a94ee", 416394},
		{"resource.007", 0, "063bb8ce4157c778cf30d1c912c006f1", 469925},
		{"resource.008", 0, "735be4e58957180cfc807d5e18fdffcd", 356863},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Castle of Dr. Brain - Korean fan translation, based on English DOS Floppy 1.1
	{"castlebrain", "", {
		{"resource.map", 0, "f77728304c70017c54793eb6ca648174", 2745},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 347071},
		{"resource.001", 0, "13e81e1839cd7b216d2bb5615c1ca160", 796776},
		{"resource.002", 0, "930e416bec196b9703a331d81b3d66f2", 1283812},
		{"resource.msg", 0, "71c6f480e742a0dd3700ec7825962921", 49538},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Inside the Chest / Behind the Developer's Shield
	// SCI interpreter version 2.000.000
	// This demo would display a different title and logo depending on which batch
	// file was run: CHEST.BAT or SHIELD.BAT. The second would use SHIELD.CFG
	// and include the SHIELD patch directory and change the title.
	{"chest", "", {
		{"resource.map", 0, "9dd015e79cac4f91e7de805448f39775", 1912},
		{"resource.000", 0, "e4efcd042f86679dd4e1834bb3a38edb", 3770943},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO7(GUIO_NOSUBTITLES, GUIO_NOMUSIC, GUIO_NOSPEECH, GUIO_NOSFX, GUIO_NOMIDI, GUIO_NOLAUNCHLOAD, GUIO_NOASPECT)	},

	// Christmas Card 1988 - English DOS
	// SCI interpreter version 0.000.294
	{"christmas1988", "", {
		{"resource.map", 0, "39485580d34a72997f3d5b3aba4d24f1", 426},
		{"resource.001", 0, "11391434f41c834090d7a1e9488ce936", 129739},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Christmas Card 1990: The Seasoned Professional - English DOS (16 Colors)
	// SCI interpreter version 1.000.172
	{"christmas1990", "16 Colors", {
		{"resource.map", 0, "8f656714a05b94423ac6eb10ee8797d0", 600},
		{"resource.001", 0, "acde93e58fca4f7a2a5a220558a94aa8", 272629},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Christmas Card 1990: The Seasoned Professional - English DOS (256 Colors)
	// SCI interpreter version 1.000.174
	{"christmas1990", "256 Colors", {
		{"resource.map", 0, "44b8f45b841b9b5e17e939a35e443988", 600},
		{"resource.001", 0, "acde93e58fca4f7a2a5a220558a94aa8", 335362},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Christmas Card 1992 - English DOS
	// Unknown SCI interpreter version, reported by oblivioncth
	{"christmas1992", "", {
		{"resource.map", 0, "25c8b7ee5f1e79ae04dcdb5a21681402", 308},
		{"resource.000", 0, "118f639435ebeee6e4d4c6d9cdbd70fc", 202728},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Christmas Card 1992 - English DOS
	// SCI interpreter version 1.001.055
	{"christmas1992", "", {
		{"resource.map", 0, "f1f8c8a8443f523422af70b4ec85b71c", 318},
		{"resource.000", 0, "62fb9256f8e7e6e65a6875efdb7939ac", 203396},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Codename: Iceman - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.002.031"
	// SCI interpreter version 0.000.685
	{"iceman", "", {
		{"resource.map", 0, "035829b391709a4e542d7c7b224625f6", 6000},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 73682},
		{"resource.001", 0, "ede5a0e1e2a80fb629dae72c72f33d37", 293145},
		{"resource.002", 0, "36670a917550757d57df84c96cf9e6d9", 469387},
		{"resource.003", 0, "d97a96f1ab91b41cf46a02cc89b0a04e", 619219},
		{"resource.004", 0, "8613c45fc771d658e5a505b9a4a54f31", 713382},
		{"resource.005", 0, "605b67a9ef199a9bb015745e7c004cf4", 478384},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English Atari ST
	// Game version 1.041
	// Executable reports "1.002.041"
	{ "iceman", "",{
		{ "resource.map", 0, "066e89b685ad788e06bae0b76d0d37d3", 5718 },
		{ "resource.000", 0, "053278385ce910a3f630f2e45e3c10be", 26987 },
		{ "resource.001", 0, "32b351072fccf76fc82234d73d28c08b", 438880 },
		{ "resource.002", 0, "36670a917550757d57df84c96cf9e6d9", 566667 },
		{ "resource.003", 0, "d97a96f1ab91b41cf46a02cc89b0a04e", 624304 },
		{ "resource.004", 0, "8613c45fc771d658e5a505b9a4a54f31", 670884 },
		AD_LISTEND },
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Codename: Iceman - English DOS Non-Interactive Demo
	// Executable scanning reports "0.000.685"
	{"iceman", "Demo", {
		{"resource.map", 0, "782974f29d8a824782d2d4aea39964e3", 1056},
		{"resource.001", 0, "d4b75e280d1c3a97cfef1b0bebff387c", 573647},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS (from jvprat)
	// Executable scanning reports "0.000.685", Floppy label reports "1.033, 6.8.90", VERSION file reports "1.033"
	// SCI interpreter version 0.000.685
	{"iceman", "", {
		{"resource.map", 0, "a18f3cef4481a81d3415fb87a754343e", 5700},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26989},
		{"resource.001", 0, "32b351072fccf76fc82234d73d28c08b", 438872},
		{"resource.002", 0, "36670a917550757d57df84c96cf9e6d9", 566549},
		{"resource.003", 0, "d97a96f1ab91b41cf46a02cc89b0a04e", 624303},
		{"resource.004", 0, "8613c45fc771d658e5a505b9a4a54f31", 670883},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS (360kb disks)
	// Executable scanning reports "0.000.685", Floppy label reports "1.033, 6.8.90", VERSION file reports "1.033"
	// SCI interpreter version 0.000.685
	{"iceman", "", {
		{"resource.map", 0, "d4f2ab06146656619836587059ac1fc2", 6282},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26989},
		{"resource.001", 0, "32b351072fccf76fc82234d73d28c08b", 126775},
		{"resource.002", 0, "36670a917550757d57df84c96cf9e6d9", 307014},
		{"resource.003", 0, "1ae7752a54802ab196115f8d8d34d9d5", 318066},
		{"resource.004", 0, "5fb36f15dd68a7c32e49fc57f9b1c9cf", 324243},
		{"resource.005", 0, "d97a96f1ab91b41cf46a02cc89b0a04e", 333091},
		{"resource.006", 0, "c0881236945b1f61d4e11b23014eee41", 232696},
		{"resource.007", 0, "8613c45fc771d658e5a505b9a4a54f31", 267741},
		{"resource.008", 0, "7c9218530415363a6b12ea6d777e8290", 327775},
		{"resource.009", 0, "46949391f9a5695d43757ccd02a98064", 323966},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS (from FRG)
	// SCI interpreter version 0.000.668
	{"iceman", "", {
		{"resource.map", 0, "554b44b79b0e9a7fc59f66dda0daac02", 5670},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26974},
		{"resource.001", 0, "005bd332d4b0f9d8e99d3b905223a332", 438501},
		{"resource.002", 0, "250b859381ebf2bf8922bd99683b0cc1", 566464},
		{"resource.003", 0, "dc7c5280e7acfaffe6ef2a6c963c5f94", 622118},
		{"resource.004", 0, "64f342463f6f35ba71b3509ef696ae3f", 669188},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS v1.022 (supplied by misterhands in bug report Trac #10678)
	// SCI interpreter version 0.000.668
	{"iceman", "", {
		{"resource.map", 0, "7cca4017825bc21186aed5542912fbcd", 5670},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26974},
		{"resource.001", 0, "005bd332d4b0f9d8e99d3b905223a332", 438601},
		{"resource.002", 0, "250b859381ebf2bf8922bd99683b0cc1", 566571},
		{"resource.003", 0, "1f2f79e399098859c73e49ac6a3545d8", 622122},
		{"resource.004", 0, "64f342463f6f35ba71b3509ef696ae3f", 669179},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS (supplied by ssburnout in bug report #5270)
	// 1.022 9x5.25" (label: Int#0.000.668)
	{"iceman", "", {
		{"resource.map", 0, "2948e06dab4930e4c8098c24ac874db8", 6252},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26974},
		{"resource.001", 0, "005bd332d4b0f9d8e99d3b905223a332", 126839},
		{"resource.002", 0, "250b859381ebf2bf8922bd99683b0cc1", 307001},
		{"resource.003", 0, "7d7a840701d2f6eff57679bf7dced747", 318060},
		{"resource.004", 0, "e0e72970bad9a956db13dcb63d898437", 322457},
		{"resource.005", 0, "1f2f79e399098859c73e49ac6a3545d8", 330657},
		{"resource.006", 0, "08050329aa113a9f14ed99cbfe3536ec", 232942},
		{"resource.007", 0, "64f342463f6f35ba71b3509ef696ae3f", 267811},
		{"resource.008", 0, "4e5c20d6942d97db9501a2110bb0d7db", 327461},
		{"resource.009", 0, "27f3027aa41bdb0deff031ad0cc56f21", 324093},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS 1.023 (from abevi, bug report #4176)
	{"iceman", "", {
		{"resource.map", 0, "da131654de1d6f640222c092313c6ca5", 6252},
		{"resource.000", 0, "b1bccd827453d4cb834bfd5b45bef63c", 26974},
		{"resource.001", 0, "005bd332d4b0f9d8e99d3b905223a332", 126833},
		{"resource.002", 0, "250b859381ebf2bf8922bd99683b0cc1", 306891},
		{"resource.003", 0, "7d7a840701d2f6eff57679bf7dced747", 317954},
		{"resource.004", 0, "e0e72970bad9a956db13dcb63d898437", 322483},
		{"resource.005", 0, "dc7c5280e7acfaffe6ef2a6c963c5f94", 330653},
		{"resource.006", 0, "08050329aa113a9f14ed99cbfe3536ec", 232942},
		{"resource.007", 0, "64f342463f6f35ba71b3509ef696ae3f", 267702},
		{"resource.008", 0, "4e5c20d6942d97db9501a2110bb0d7db", 327461},
		{"resource.009", 0, "27f3027aa41bdb0deff031ad0cc56f21", 324091},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Codename: Iceman - English DOS Debug build, Version 1.009
	// This is a special debug build Clint Basinger ("LGR") salvaged
	// from a IBM PCjr previously owned by Ken Williams himself.
	// It contains some additional shortcuts to help the original
	// developers debugging the game.
	// More information: https://www.youtube.com/watch?v=Z-VBITW94zI
	{"iceman", "Debug Build", {
		{"resource.map", 0, "fe502e0aa91cc9b1a6c00a4d1fc40da4", 6480},
		{"resource.000", 0, "6be3ab7d8caba5b1df9035bdfbe8cd71", 76934},
		{"resource.001", 0, "ede1d50e33d87c613c80269d01ddc78d", 82352},
		{"resource.002", 0, "40f3fa2071dbe2ade614ed5d973e2c10", 270289},
		{"resource.003", 0, "bd25e8e73c5cbc7d922a3c383a188efe", 270148},
		{"resource.004", 0, "cf4f3a19feaa4d453f11cdaf65db3275", 276896},
		{"resource.005", 0, "088c4ee2dcd4df1e60c629ee2fb96cad", 281861},
		{"resource.006", 0, "7a2eebdba905f24c2828f749a38060db", 276073},
		{"resource.007", 0, "00a71915aeacc15358fe12837c785e76", 281152},
		{"resource.008", 0, "8f713368811e9db1f28cb605457ec6b4", 283407},
		{"resource.009", 0, "ce96c10a6c9ebac2615792d167210e32", 284403},
		{"resource.010", 0, "2a92f04973ee46716c9281759547431f", 265475},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.002.030"
	// SCI interpreter version 0.000.685
	{"camelot", "", {
		{"resource.map", 0, "51aba42f8e63b219755d4372ea424509", 6654},
		{"resource.000", 0, "dfadf0b4c9fb44ce55570149856c302d", 128100},
		{"resource.001", 0, "67391de361b9347f123ac0899b4b91f7", 300376},
		{"resource.002", 0, "8c7f12b2c38d225d4c7121b30ea1b4d2", 605334},
		{"resource.003", 0, "82a73e7572e7ee627429bb5111ff82ca", 672392},
		{"resource.004", 0, "6821dc97cf643ba521a4e840dda3c58b", 647410},
		{"resource.005", 0, "c6e551bdc24f0acc193159038d4ca767", 605882},
		{"resource.006", 0, "8f880a536908ab496bbc552f7f5c3738", 585255},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - English DOS Non-Interactive Demo
	// SCI interpreter version 0.000.668
	{"camelot", "Demo", {
		{"resource.map", 0, "f4cd75c15be75e04cdca3acda2c0b0ea", 468},
		{"resource.001", 0, "4930708722f34bfbaa4945fb08f55f61", 232523},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - Russian fan translation by https://github.com/deadman2000/RuSCI
	// Executable scanning reports "0.000.685", Floppy label reports "1.001, 0.000.685", VERSION file reports "1.001.000"
	// SCI interpreter version 0.000.685
	{"camelot", "", {
		{"resource.map", 0, "95eca3991906dfd7ed26d193df07596f", 7278},
		{"resource.001", 0, "8e1a3a8c588007404b532b8dfacc1460", 596774},
		{"resource.002", 0, "8e1a3a8c588007404b532b8dfacc1460", 722250},
		{"resource.003", 0, "8e1a3a8c588007404b532b8dfacc1460", 723712},
		{"resource.004", 0, "8e1a3a8c588007404b532b8dfacc1460", 729143},
		{"Translate.RU", 0, "3f730611f55257821b964f96eafea0ba", 171}, // Text file for detecting translation
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - English DOS (from jvprat)
	// Executable scanning reports "0.000.685", Floppy label reports "1.001, 0.000.685", VERSION file reports "1.001.000"
	// SCI interpreter version 0.000.685
	{"camelot", "", {
		{"resource.map", 0, "95eca3991906dfd7ed26d193df07596f", 7278},
		{"resource.001", 0, "8e1a3a8c588007404b532b8dfacc1460", 596774},
		{"resource.002", 0, "8e1a3a8c588007404b532b8dfacc1460", 722250},
		{"resource.003", 0, "8e1a3a8c588007404b532b8dfacc1460", 723712},
		{"resource.004", 0, "8e1a3a8c588007404b532b8dfacc1460", 729143},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - English Atari ST
	// Game version 1.019.000
	// Floppy: INT#10.12.90
	// Executable reports "1.002.038"
	{"camelot", "", {
		{"resource.map", 0, "0f80a11867be91a158823887a49cf443", 7290},
		{"resource.001", 0, "162f66c42e4146ee63f78fba6f1a6757", 596773},
		{"resource.002", 0, "162f66c42e4146ee63f78fba6f1a6757", 724615},
		{"resource.003", 0, "162f66c42e4146ee63f78fba6f1a6757", 713351},
		{"resource.004", 0, "162f66c42e4146ee63f78fba6f1a6757", 718766},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of Camelot - English DOS
	// SCI interpreter version 0.000.685
	{"camelot", "", {
		{"resource.map", 0, "86bffb2a393b7a5d8de45e735091f037", 9504},
		{"resource.001", 0, "8e1a3a8c588007404b532b8dfacc1460", 212461},
		{"resource.002", 0, "8e1a3a8c588007404b532b8dfacc1460", 317865},
		{"resource.003", 0, "8e1a3a8c588007404b532b8dfacc1460", 359145},
		{"resource.004", 0, "8e1a3a8c588007404b532b8dfacc1460", 345180},
		{"resource.005", 0, "8e1a3a8c588007404b532b8dfacc1460", 345734},
		{"resource.006", 0, "8e1a3a8c588007404b532b8dfacc1460", 332446},
		{"resource.007", 0, "8e1a3a8c588007404b532b8dfacc1460", 358182},
		{"resource.008", 0, "8e1a3a8c588007404b532b8dfacc1460", 315865},
		{"resource.009", 0, "8e1a3a8c588007404b532b8dfacc1460", 322948},
		{"resource.010", 0, "8e1a3a8c588007404b532b8dfacc1460", 322781},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Conquests of the Longbow - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.005.001"
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "6204f3d00c0f6c0f5f95a29a4190f2f9", 6048},
		{"resource.000", 0, "8d11c744b4a51e7a8ceac687a46f08ca", 830333},
		{"resource.001", 0, "76caf8593e065a98c8ab4a6e2c7dbafc", 839008},
		{"resource.002", 0, "eb312373045906b54a3181bebaf6651a", 733145},
		{"resource.003", 0, "7fe3b3372d7fdda60045807e9c8e4867", 824554},
		{"resource.004", 0, "d1038c75d85a6650d48e07d174a6a913", 838175},
		{"resource.005", 0, "1c3804e56b114028c5873a35c2f06d13", 653002},
		{"resource.006", 0, "f9487732289a4f4966b4e34eea413325", 842817},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow - English DOS
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "36d3b81ff75b67dd4d27b7f5d3166503", 6261},
		{"resource.000", 0, "36e8fda5d0b8c49e587c8a9617959f72", 1096767},
		{"resource.001", 0, "d4c299213f8d799da1492680d12d0fb3", 1133226},
		{"resource.002", 0, "7f6ce331219d58d5087731e4475ab4f1", 1128555},
		{"resource.003", 0, "21ebe6b39b57a73fc449f67f013765aa", 972635},
		{"resource.004", 0, "9cfce07e204a329e94fda8b5657621da", 1064637},
		{"resource.005", 0, "d036df0872f2db19bca34601276be2d7", 1154950},
		{"resource.006", 0, "b367a6a59f29ee30dde1d88a5a41152d", 1042966},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow - English DOS Floppy (from jvprat)
	// Executable scanning reports "1.000.168", Floppy label reports "1.1, 1.13.92", VERSION file reports "1.1"
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "247f955865572569342751de47e861ab", 6027},
		{"resource.000", 0, "36e8fda5d0b8c49e587c8a9617959f72", 1297120},
		{"resource.001", 0, "1e6084a19f7a6c50af88d3a9b32c411e", 1366155},
		{"resource.002", 0, "7f6ce331219d58d5087731e4475ab4f1", 1234743},
		{"resource.003", 0, "1867136d01ece57b531032d466910522", 823686},
		{"resource.004", 0, "9cfce07e204a329e94fda8b5657621da", 1261462},
		{"resource.005", 0, "21ebe6b39b57a73fc449f67f013765aa", 1284720},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow - English DOS
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "737c6f83a1ee601727ff026898f19fa1", 6045},
		{"resource.000", 0, "36e8fda5d0b8c49e587c8a9617959f72", 1296607},
		{"resource.001", 0, "1e6084a19f7a6c50af88d3a9b32c411e", 1379267},
		{"resource.002", 0, "7f6ce331219d58d5087731e4475ab4f1", 1234140},
		{"resource.003", 0, "1867136d01ece57b531032d466910522", 823610},
		{"resource.004", 0, "9cfce07e204a329e94fda8b5657621da", 1260237},
		{"resource.005", 0, "21ebe6b39b57a73fc449f67f013765aa", 1284609},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow EGA - English DOS
	// SCI interpreter version 1.000.510
	{"longbow", "EGA", {
		{"resource.map", 0, "7676ec9f08967d7a9a7724f5170456e0", 6261},
		{"resource.000", 0, "36e8fda5d0b8c49e587c8a9617959f72", 718161},
		{"resource.001", 0, "3c3735caa34fa3f261a9552831bb43ed", 705680},
		{"resource.002", 0, "7025b87e735b1df3f0e9488a621f4333", 700633},
		{"resource.003", 0, "eaca7933e8e56bea22b42f7fd5d7a8a7", 686510},
		{"resource.004", 0, "b7bb35c027bb424ecefcd122768e5e60", 705631},
		{"resource.005", 0, "58942b1aa6d6ffeb66e9f8897fd4435f", 469243},
		{"resource.006", 0, "8c767b3939add63d11274065e46aad04", 713158},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow DOS 1.0 EGA (4 x 5.25" disks)
	// Provided by ssburnout in bug report #5257
	{"longbow", "EGA", {
		{"resource.map", 0, "0517ca368ec844df0cb21a05020fae01", 6021},
		{"resource.000", 0, "36e8fda5d0b8c49e587c8a9617959f72", 934643},
		{"resource.001", 0, "76c729e563809170e6cc8b2f3f6cf0a4", 1196133},
		{"resource.002", 0, "8c767b3939add63d11274065e46aad04", 1152478},
		{"resource.003", 0, "7025b87e735b1df3f0e9488a621f4333", 1171439},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Conquests of the Longbow - English DOS Non-Interactive Demo
	// SCI interpreter version 1.000.510
	{"longbow", "Demo", {
		{"resource.map", 0, "cbc5cb73341de1bff1b1e20a640af220", 588},
		{"resource.001", 0, "f05a20cc07eee85da8e999d0ac0f596b", 869916},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Conquests of the Longbow - German DOS (suplied by markcoolio in bug report #4294, also includes english language)
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "7376b7a07f8bd3a8ab8d67595d3f5b51", 6285},
		{"resource.000", 0, "ee39f92e006142424cf9209329e727c6", 977281},
		{"resource.001", 0, "d4c299213f8d799da1492680d12d0fb3", 1167657},
		{"resource.002", 0, "7f6ce331219d58d5087731e4475ab4f1", 1172521},
		{"resource.003", 0, "a204de2a083a7770ff455a838210a678", 1165249},
		{"resource.004", 0, "9cfce07e204a329e94fda8b5657621da", 1101869},
		{"resource.005", 0, "d036df0872f2db19bca34601276be2d7", 1176914},
		{"resource.006", 0, "b367a6a59f29ee30dde1d88a5a41152d", 1123585},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Conquests of the Longbow - Russian translation, based on English DOS version
	// SCI interpreter version 1.000.510
	{"longbow", "", {
		{"resource.map", 0, "78fb253c30797fac24bd52e9c9f43050", 6051},
		{"resource.000", 0, "65d37f5fa8fa4d34178c9f6707d4dac0", 1306162},
		{"resource.001", 0, "9ac939e628229d19ce04d9d42890f9bd", 1384306},
		{"resource.002", 0, "7f6ce331219d58d5087731e4475ab4f1", 1237962},
		{"resource.003", 0, "1867136d01ece57b531032d466910522", 828298},
		{"resource.004", 0, "9cfce07e204a329e94fda8b5657621da", 1262638},
		{"resource.005", 0, "21ebe6b39b57a73fc449f67f013765aa", 1287832},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest - English DOS Non-Interactive Demo (from FRG)
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 1.001.069 (just a guess)
	{"ecoquest", "Demo", {
		{"resource.map", 0, "c819e171359b7c95f4c13b846d5c034e", 873},
		{"resource.001", 0, "baf9393a9bfa73098adb501e5bc5487b", 657518},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Eco Quest - English DOS CD 1.1
	// SCI interpreter version 1.001.064
	{"ecoquest", "CD", {
		{"resource.map", 0, "a4b73d5d2b55bdb6e44345e99c8fbdd0", 4804},
		{"resource.000", 0, "d908dbef56816ac6c60dd145fdeafb2b", 3536046},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Eco Quest - English DOS CD 1.1
	// SCI interpreter version 1.001.064
	// Same entry as the DOS version above. This one is used for the alternate
	// General MIDI music tracks in the Windows version
	{"ecoquest", "CD", {
		{"resource.map", 0, "a4b73d5d2b55bdb6e44345e99c8fbdd0", 4804},
		{"resource.000", 0, "d908dbef56816ac6c60dd145fdeafb2b", 3536046},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_STD16_SPEECH_GM	},

	// Eco Quest 1 - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS CD 1.1
	{"ecoquest", "CD", {
		{"resource.map", 0, "a4b73d5d2b55bdb6e44345e99c8fbdd0", 4804},
		{"resource.000", 0, "d908dbef56816ac6c60dd145fdeafb2b", 3536046},
		{"PATCHES/0.fon", 0, "256b6dde95d3c2442b9c75765b3a5b76", 3410},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Eco Quest - Korean fan translation, based on English DOS CD 1.1
	// SCI interpreter version 1.001.064
	// The checksums for the audio file have been removed, to also allow
	// versions compressed with the compress_sci tool
	{"ecoquest", "CD", {
		{"resource.map", 0, "a4b73d5d2b55bdb6e44345e99c8fbdd0", 4804},
		{"resource.000", 0, "d908dbef56816ac6c60dd145fdeafb2b", 3536046},
		{"resource.msg", 0, "0c68a203302841adb9faa47ff61edd93", 561801},
		{"resource.aud", 0, NULL,                               AD_NO_SIZE},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Eco Quest - English DOS Floppy (reported by misterhands in bug #6599)
	// Game v1.10, interpreter 2.000.286, INT #6.12.92
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "acb10c12bf15ffa7d0fac36124b20c8e", 4890},
		{"resource.000", 0, "89cf7c8eed99afd0a9f4188170b81ebe", 3428654},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest - English DOS Floppy
	// SCI interpreter version 1.000.510
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "704367225929a88aad281ac72844ddac", 4053},
		{"resource.000", 0, "241b98d3903f6a5b872baa19b80aef3b", 1099239},
		{"resource.001", 0, "96d4435d24c01f1c1675e46457604c5f", 1413719},
		{"resource.002", 0, "28fe9b4f0567e71feb198bc9f3a2c605", 1241816},
		{"resource.003", 0, "f3146df0ad4297f5ce35aa8c4753bf6c", 586832},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest - English DOS Floppy
	// SCI interpreter version 1.000.510
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "f77baec05fae76707205f5be6534a7f3", 4059},
		{"resource.000", 0, "241b98d3903f6a5b872baa19b80aef3b", 858490},
		{"resource.001", 0, "2fed7451bca81b0c891eed1a956f2263", 1212161},
		{"resource.002", 0, "323b3b12f43d53f27d259beb225f0aa7", 1129316},
		{"resource.003", 0, "83ac03e4bddb2c1ac2d36d2a587d0536", 1145616},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest - German DOS Floppy (supplied by markcoolio in bug report #4263, also includes english language)
	// SCI interpreter version 1.000.510
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "7a9b43bf27dc000ac8559ecbe824b659", 4395},
		{"resource.000", 0, "99b73d40403a51c7e60d01df0d6cd34a", 998227},
		{"resource.001", 0, "2fed7451bca81b0c891eed1a956f2263", 1212060},
		{"resource.002", 0, "02d7d0411f7903aacb3bc8b0f8ca8a9a", 1202581},
		{"resource.003", 0, "84dd11b6825255671c703aee5ceff620", 1175835},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Eco Quest - Spanish DOS Floppy (from jvprat, also includes english language)
	// Executable scanning reports "1.ECO.013", VERSION file reports "1.000, 11.12.92"
	// SCI interpreter version 1.000.510
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "82e6b1e3bdb2f064b18380009df7b345", 4395},
		{"resource.000", 0, "0b12a91c935e385308af8d17811deded", 1004085},
		{"resource.001", 0, "2fed7451bca81b0c891eed1a956f2263", 1212060},
		{"resource.002", 0, "2d21a1d2dcbffa551552e3e0725d2284", 1186033},
		{"resource.003", 0, "84dd11b6825255671c703aee5ceff620", 1174993},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Eco Quest - French DOS Floppy (from Strangerke, also includes english language)
	// SCI interpreter version 1.ECO.013
	{"ecoquest", "Floppy", {
		{"resource.map", 0, "67742945cd59b896d9f22a549f605217", 4407},
		{"resource.000", 0, "0b12a91c935e385308af8d17811deded", 973723},
		{"resource.001", 0, "fc7fba54b6bb88fd7e9c229636599aa9", 1205841},
		{"resource.002", 0, "b836c6ee9de67d814ac5d1b05f5b9858", 1173872},
		{"resource.003", 0, "f8f767f9d6351432621c6e54c1b2ba8c", 1141520},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

#define GUIO_ECO2_WINDOWS GUIO8(GUIO_NOSPEECH,\
					GAMEOPTION_WINDOWS_CURSORS,\
					GAMEOPTION_PREFER_DIGITAL_SFX,\
					GAMEOPTION_ORIGINAL_SAVELOAD,\
					GAMEOPTION_MIDI_MODE,\
					GAMEOPTION_RGB_RENDERING,\
					GAMEOPTION_TTS,\
					GAMEOPTION_ENABLE_GMM_SAVE)

	// Eco Quest 2 - English DOS Non-Interactive Demo
	// SCI interpreter version 1.001.055
	{"ecoquest2", "Demo", {
		{"resource.map", 0, "607cfa0d8a03b7d348c06ee727e3d939", 1321},
		{"resource.000", 0, "dd6f614c43c029f063e93cd243af90a4", 525992},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Eco Quest 2 - English DOS Floppy (supplied by markcoolio in bug report #4264)
	// SCI interpreter version 1.001.065
	{"ecoquest2", "Floppy", {
		{"resource.map", 0, "28fb7b6abb9fc1cb8882d7c2e701b63f", 5658},
		{"resource.000", 0, "cc1d17e5637528dbe4a812699e1cbfc6", 4208192},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest 2 - Included as a bonus game in Sierra's School House.
	// Executable scanning reports "1.001.069", VERSION file reports "1.000.000"
	{"ecoquest2", "CD", {
		{"resource.map", 0, "28fb7b6abb9fc1cb8882d7c2e701b63f", 5658},
		{"resource.000", 0, "cc1d17e5637528dbe4a812699e1cbfc6", 4208192},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_ECO2_WINDOWS },

	// Eco Quest 2 - French DOS Floppy (from Strangerke)
	// SCI interpreter version 1.001.081
	{"ecoquest2", "Floppy", {
		{"resource.map", 0, "c22ab8b33c339c138b6b1697b77b9e79", 5588},
		{"resource.000", 0, "1c4093f7248240329121fdf8c0d59152", 4231946},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest 2 - Spanish DOS Floppy (supplied by umbrio in bug report #5750)
	{"ecoquest2", "Floppy", {
		{"resource.map", 0, "a6b271b934afa7e84d03816a4fefa67b", 5593},
		{"resource.000", 0, "1c4093f7248240329121fdf8c0d59152", 4209150},
		{"resource.msg", 0, "eff8be1925d42288de55e405983e9314", 117810},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest 2 - German DOS Floppy (supplied by frankenbuam in bug report #6416)
	{"ecoquest2", "Floppy", {
		{"resource.map", 0, "d8b20073e64f41f6437f73143a186753", 5643},
		{"resource.000", 0, "cc1d17e5637528dbe4a812699e1cbfc6", 4210876},
		{"resource.msg", 0, "2f231d31af172ea72ed533fd112f971b", 133458},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest 2 - PRCA/T&J Russian DOS Floppy
	{"ecoquest2", "Floppy", {
		{"resource.map", 0, "9e796f1918b981efd4a76774c1306850", 5658},
		{"resource.000", 0, "e6c5795620931dcbb4c73ab48e18b898", 4279514},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Eco Quest 2 - Korean DOS Floppy (from swkim01)
    // using swkim01's SCI Message Editor: http://github.com/swkim01/scime/
    {"ecoquest2", "Floppy", {
        {"resource.map", 0, "28fb7b6abb9fc1cb8882d7c2e701b63f", 5658},
        {"resource.000", 0, "cc1d17e5637528dbe4a812699e1cbfc6", 4208192},
        {"resource.msg", 0, "a0fbf7c183ea64f4bc224f71f2862aa0", 219798},
        AD_LISTEND},
        Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16 },

#undef GUIO_ECO2_WINDOWS

	// Freddy Pharkas - English DOS demo (from FRG)
	// SCI interpreter version 1.001.069
	{"freddypharkas", "Demo", {
		{"resource.map", 0, "97aa9fcfe84c9993a64debd28c32393a", 1909},
		{"resource.000", 0, "5ea8e7a3ea10cce6efd5c106dc62fd8c", 867724},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Freddy Pharkas - English CD DOS (from FRG)
	// SCI interpreter version 1.001.132
	{"freddypharkas", "CD", {
		{"resource.map", 0, "d46b282f228a67ba13bd4b4009e95f8f", 6058},
		{"resource.000", 0, "ee3c64ffff0ba9fb08bea2624631c598", 5490246},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Freddy Pharkas - English DOS Floppy (updated information from markcoolio in bug reports #4267 and #4286)
	// Executable scanning reports "1.cfs.081"
	// SCI interpreter version 1.001.132 (just a guess)
	{"freddypharkas", "Floppy", {
		{"resource.map", 0, "a32674e7fbf7b213b4a066c8037f16b6", 5816},
		{"resource.000", 0, "96b07e9b914dba1c8dc6c78a176326df", 5233230},
		{"resource.msg", 0, "554f65315d851184f6e38211489fdd8f", 331706},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Freddy Pharkas - French DOS Floppy
	// Executable scanning reports "1.cfs.081"
	{"freddypharkas", "Floppy", {
		{"resource.map", 0, "a32674e7fbf7b213b4a066c8037f16b6", 5816},
		{"resource.000", 0, "96b07e9b914dba1c8dc6c78a176326df", 5233230},
		{"resource.msg", 0, "4dc478f5c73b57e5d690bdfffdcf1c44", 816518},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Freddy Pharkas - German DOS Floppy (from Tobis87, updated information from markcoolio in bug reports #4266 and #4286)
	// Executable scanning reports "1.cfs.081"
	// SCI interpreter version 1.001.132 (just a guess)
	{"freddypharkas", "", {
		{"resource.map", 0, "a32674e7fbf7b213b4a066c8037f16b6", 5816},
		{"resource.000", 0, "96b07e9b914dba1c8dc6c78a176326df", 5233230},
		{"resource.msg", 0, "304b5a5781800affd2235152a5794fa8", 911164},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Freddy Pharkas - Spanish DOS (from jvprat)
	// Executable scanning reports "1.cfs.081", VERSION file reports "1.000, March 30, 1995"
	// SCI interpreter version 1.001.132 (just a guess)
	{"freddypharkas", "Floppy", {
		{"resource.map", 0, "a32674e7fbf7b213b4a066c8037f16b6", 5816},
		{"resource.000", 0, "96b07e9b914dba1c8dc6c78a176326df", 5233230},
		{"resource.msg", 0, "45b5bf74933ac3727e4cc844446dc052", 796156},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Freddy Pharkas - English DOS CD Demo
	// SCI interpreter version 1.001.095
	{"freddypharkas", "CD Demo", {
		{"resource.map", 0, "a62a7eae85dd1e6b07f39662b278437e", 1918},
		{"resource.000", 0, "4962a3c4dd44e36e78ea4a7a374c2220", 957382},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_SPEECH	},

	// Freddy Pharkas - English Macintosh
	{"freddypharkas", "", {
		{"Data1", 0, "ef7cbd62727989818f1cfae69c9fd61d", 3038236},
		{"Data2", 0, "2424b418f7d52c385cea4701f529c69a", 4721476},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO_STD16_MAC_HIRESFONTS },

	// Fun Seeker's Guide - English DOS
	// SCI interpreter version 0.000.506
	{"funseeker", "", {
		{"resource.map", 0, "7ee6859ef74314f6d91938c3595348a9", 282},
		{"resource.001", 0, "f1e680095424e31f7fae1255d36bacba", 40692},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Gabriel Knight - English DOS Demo
	// SCI interpreter version 1.001.092
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like gk1demo-demo
	{"gk1demo", "Demo", {
		{"resource.map", 0, "39645952ae0ed8072c7e838f31b75464", 2490},
		{"resource.000", 0, "eb3ed7477ca4110813fe1fcf35928561", 1718450},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Gabriel Knight - English DOS Demo (from DrMcCoy)
	// SCI interpreter version 1.001.092
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like gk1demo-demo
	{"gk1demo", "Demo", {
		{"resource.map", 0, "8cad2a256f41463030cbb7ea1bfb2857", 2490},
		{"resource.000", 0, "eb3ed7477ca4110813fe1fcf35928561", 1718450},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Gabriel Knight - English DOS Demo
	// SCI interpreter version 1.001.092
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like gk1demo-demo.
	// Same resource volume as previous entry, but resource.map has one different
	// byte within the junk padding between directory headers and directory entries.
	{"gk1demo", "Demo", {
		{"resource.map", 0, "1f6643045cab8546c9e6bddfbce4ea80", 2490},
		{"resource.000", 0, "eb3ed7477ca4110813fe1fcf35928561", 1718450},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

#define GUIO_GK1_FLOPPY GUIO4(GUIO_NOSPEECH, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_TTS, \
							  GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_GK1_CD_DOS GUIO6(GUIO_LINKSPEECHTOSFX, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, \
							  GAMEOPTION_HQ_VIDEO, \
							  GAMEOPTION_ENABLE_GMM_SAVE, \
							  GAMEOPTION_GK1_ENABLE_AUDIO_POPFIX)
#define GUIO_GK1_CD_WIN GUIO5(GUIO_LINKSPEECHTOSFX, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_HQ_VIDEO, \
							  GAMEOPTION_ENABLE_GMM_SAVE, \
							  GAMEOPTION_GK1_ENABLE_AUDIO_POPFIX)
#define GUIO_GK1_MAC    GUIO3(GUIO_NOSPEECH, \
							  GAMEOPTION_TTS, \
							  GAMEOPTION_ENABLE_GMM_SAVE)

	// Gabriel Knight - English DOS Floppy
	// SCI interpreter version 2.000.000
	{"gk1", "", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10783},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 13022630},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK1_FLOPPY },

	// Gabriel Knight - English DOS Floppy (supplied by markcoolio in bug report #4269)
	// SCI interpreter version 2.000.000
	{"gk1", "", {
		{"resource.map", 0, "65e8c14092e4c9b3b3538b7602c8c5ec", 10783},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 13022630},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK1_FLOPPY },

	// Gabriel Knight - English DOS Floppy
	// SCI interpreter version 2.000.000, VERSION file reports "1.0\nGabriel Knight\n11/22/10:33 pm\n\x1A"
	{"gk1", "", {
		{"resource.map", 0, "ef41df08cf2c1f680216cdbeed0f8311", 10783},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 13022630},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK1_FLOPPY },

	// Gabriel Knight - German DOS Floppy (supplied by markcoolio in bug report #4268)
	// SCI interpreter version 2.000.000
	{"gk1", "", {
		{"resource.map", 0, "ad6508b0296b25c07b1f58828dc33696", 10789},
		{"resource.000", 0, "091cf08910780feabc56f8551b09cb36", 13077029},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK1_FLOPPY },

	// Gabriel Knight - French DOS Floppy (supplied by kervala in bug report #6281)
	// SCI interpreter version 2.000.000
	{"gk1", "", {
		{"resource.map", 0, "236e36cc847cdeafdd5e5fa8cba916ed", 10801},
		{"resource.000", 0, "091cf08910780feabc56f8551b09cb36", 13033072},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK1_FLOPPY },

	// Gabriel Knight - English DOS CD (from jvprat)
	// Executable scanning reports "2.000.000", VERSION file reports "01.100.000"
	{"gk1", "CD", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10996},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 12581736},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_GK1_CD_DOS },

	// Gabriel Knight - English Windows CD (from jvprat)
	// Executable scanning reports "2.000.000", VERSION file reports "01.100.000"
	{"gk1", "CD", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10996},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 12581736},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_GK1_CD_WIN },

	// Gabriel Knight - Hebrew fan translation, based on English Dos CD
	// Executable scanning reports "2.000.000", VERSION file reports "01.100.000"
	{"gk1", "CD", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10996},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 12581736},
		{"PATCHES/0.fon", 0, "a2fc0fd2c4ddcf1f1dc5207126cd998b", 3419},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_CD, GUIO_GK1_CD_DOS },

	// Gabriel Knight - Korean fan translation, based on English Windows CD
	// Executable scanning reports "2.000.000", VERSION file reports "01.100.000"
	{"gk1", "CD", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10996},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 12581736},
		{"resource.msg", 0, "5a35e00e0b8d656ff423b76831a86ab8", 980765},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_CD, GUIO3(GUIO_LINKSPEECHTOSFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_HQ_VIDEO) },

	{"gk1", "CD", {
		{"resource.map", 0, "372d059f75856afa6d73dd84cbb8913d", 10996},
		{"resource.000", 0, "69b7516962510f780d38519cc15fcc7c", 12581736},
		{"resource.msg", 0, "5a35e00e0b8d656ff423b76831a86ab8", 980765},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformWindows, ADGF_CD, GUIO_GK1_CD_WIN },

	// Gabriel Knight - German DOS CD (from Tobis87)
	// SCI interpreter version 2.000.000, VERSION file reports "1.000.000, April 25, 1994"
	{"gk1", "CD", {
		{"resource.map", 0, "a7d3e55114c65647310373cb390815ba", 11392},
		{"resource.000", 0, "091cf08910780feabc56f8551b09cb36", 13400497},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_CD, GUIO_GK1_CD_DOS },

	// Gabriel Knight - Spanish DOS CD (from jvprat)
	// Executable scanning reports "2.000.000", VERSION file reports "1.000.000, April 13, 1995"
	{"gk1", "CD", {
		{"resource.map", 0, "7cb6e9bba15b544ec7a635c45bde9953", 11404},
		{"resource.000", 0, "091cf08910780feabc56f8551b09cb36", 13381599},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_CD, GUIO_GK1_CD_DOS },

	// Gabriel Knight - French DOS CD (from Hkz)
	// VERSION file reports "1.000.000, May 3, 1994"
	{"gk1", "CD", {
		{"resource.map", 0, "55f909ba93a2515042a08d8a2da8414e", 11392},
		{"resource.000", 0, "091cf08910780feabc56f8551b09cb36", 13325145},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_CD, GUIO_GK1_CD_DOS },

	// Gabriel Knight - English Macintosh (Floppy!)
	// This version is hi-res ONLY, so it should NOT get GAMEOPTION_HIGH_RESOLUTION_GRAPHICS
	// (which is meant for enforcing hi-res graphics), but instead hi-res mode should be enabled all the time.
	// Confirmed by [md5] and originally by clone2727.
	{"gk1", "", {
		{"Data1", 0, "044d3bcd7e5b5bb0393d954ade8053fe", 5814662},
		{"Data2", 0, "99a0c63febf9e44e12a00f99c00eae0f", 6685096},
		{"Data3", 0, "f25068b408b09275d8b698866462f578", 3677343},
		{"Data4", 0, "1cceebbe411b26c860a74f91c337fdf3", 3229830},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO_GK1_MAC },

#undef GUIO_GK1_FLOPPY
#undef GUIO_GK1_CD_DOS
#undef GUIO_GK1_CD_WIN
#undef GUIO_GK1_MAC

#define GUIO_GK2_DEMO GUIO9(GUIO_NOSUBTITLES, \
							GUIO_NOMUSIC, \
							GUIO_NOSFX, \
							GUIO_NOSPEECH, \
							GUIO_NOMIDI, \
							GUIO_NOLAUNCHLOAD, \
							GUIO_NOASPECT, \
							GAMEOPTION_HQ_VIDEO, \
							GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_GK2      GUIO7(GUIO_LINKSPEECHTOSFX, \
							GUIO_NOMIDI, \
							GUIO_NOASPECT, \
							GAMEOPTION_ORIGINAL_SAVELOAD, \
							GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							GAMEOPTION_HQ_VIDEO, \
							GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_GK2_MAC  GUIO_GK2

	// Gabriel Knight 2 - English Windows Non-Interactive Demo
	// Executable scanning reports "2.100.002"
	{"gk2", "Demo", {
		{"resource.map", 0, "e0effce11c4908f4b91838741716c83d", 1351},
		{"resource.000", 0, "d04cfc7f04b6f74d13025378be49ec2b", 4640330},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO, GUIO_GK2_DEMO },

	// Gabriel Knight 2 - English DOS (GOG version) - ressci.* merged in ressci.000
	// using Enrico Rolfi's HD/DVD installer: https://gkpatches.vogons.org/english.php
	{"gk2", "", {
		{"resmap.000", 0, "b996fa1e57389a1e179a00a0049de1f4", 8110},
		{"ressci.000", 0, "a19fc3604c6e5407abcf03d59ee87217", 168522221},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - Korean DOS (GOG version) (from swkim01)
	// using swkim01's SCI Message Editor: http://github.com/swkim01/scime/
	{"gk2", "", {
		{"resmap.000", 0, "b996fa1e57389a1e179a00a0049de1f4", 8110},
		{"ressci.000", 0, "a19fc3604c6e5407abcf03d59ee87217", 168522221},
		{"resource.msg", 0, "1c4439abcfda38be40090a37a91ad7d2", 331954},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - English DOS (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.1"
	{"gk2", "", {
		{"resmap.001", 0, "1b8bf6a23b37ed67358eb825fc687260", 2776},
		{"ressci.001", 0, "24463ae235b1afbbc4ff5e2ed1b8e3b2", 50496082},
		{"resmap.002", 0, "2028230674bb54cd24370e0745e7a9f4", 1975},
		{"ressci.002", 0, "f0edc1dcd704bd99e598c5a742dc7150", 42015676},
		{"resmap.003", 0, "51f3372a2133c406719dafad86369be3", 1687},
		{"ressci.003", 0, "86cb3f3d176994e7f8a9ad663a4b907e", 35313750},
		{"resmap.004", 0, "0f6e48f3e84e867f7d4a5215fcff8d5c", 2719},
		{"ressci.004", 0, "4f30aa6e6f895132402c8652f9e1d741", 58317316},
		{"resmap.005", 0, "2dac0e232262b4a51271fd28559b3e70", 2065},
		{"ressci.005", 0, "14b62d4a3bddee57a03cb1495a798a0f", 38075705},
		{"resmap.006", 0, "ce9359037277b7d7976da185c2fa0aad", 2977},
		{"ressci.006", 0, "8e44e03890205a7be12f45aaba9644b4", 60659424},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - French DOS (6-CDs Sierra Originals reedition)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"gk2", "", {
		{"resmap.001", 0, "5752eb78e0dffd6ad1d6ada75fe1222e", 2800},
		{"ressci.001", 0, "37d2df0e1ec0603b605d0c87f1c09ce5", 50810410},
		{"resmap.002", 0, "1ca433e4bc26383ff134a817386b723e", 1987},
		{"ressci.002", 0, "5d07e6b51afaa3a5850b17a3dbd800a0", 41367424},
		{"resmap.003", 0, "27b15dea1f9c73e1f5b57467c2d98b80", 1699},
		{"ressci.003", 0, "93c561e5d49a804deed4ea4c2eda7386", 35200452},
		{"resmap.004", 0, "9e5aaa053785d1ea61b1448df930db1a", 2743},
		{"ressci.004", 0, "5d07e6b51afaa3a5850b17a3dbd800a0", 58988750},
		{"resmap.005", 0, "6b1f4b59a7af58e1aff21259cc457851", 2077},
		{"ressci.005", 0, "1eb5a72744799f5a5518543f5b4c3c79", 37882126},
		{"resmap.006", 0, "11b2e722170b8c93fdaa5428e2c7676f", 3001},
		{"ressci.006", 0, "4037d941aec39d2e654e20960429aefc", 60568486},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - German DOS/Windows (6-CDs original release, provided by m_kiewitz)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"gk2", "", {
		{"ressci.001", 0, "5a4f25f3a08a45a9a1452b0922f1c716", 50942045},
		{"ressci.003", 0, "93c561e5d49a804deed4ea4c2eda7386", 35233438},
		{"ressci.002", 0, "04657f765ca35b7c620df9cfc2737228", 41718539},
		{"ressci.005", 0, "f7a9057385041bc99a282c4667ba5309", 37952633},
		{"ressci.004", 0, "3292b853404d613a8314dfc8dc8c07c0", 59450811},
		{"ressci.006", 0, "7a3aaeef377cf4b1b2e7914791d34fca", 60585298},
		{"resmap.001", 0, "ae48ed125f846ad5850ed8d768963947", 2806},
		{"resmap.002", 0, "8fb07268e064a9dec7776cb70cd45cee", 1981},
		{"resmap.003", 0, "d9c7eeb5337f01865ab46865e546a10d", 1699},
		{"resmap.004", 0, "ecbcf7f54dd1d2d29cb234e106558984", 2737},
		{"resmap.005", 0, "9fe7e86d66deabfeb10760990d2b1724", 2053},
		{"resmap.006", 0, "c5323f49b7ee6a2c08c4852290e351c0", 2995},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - Portuguese DOS/Windows (6-CDs original release)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"gk2", "", {
		{"resmap.001", 0, "dc313253adfe68584ad43993599dfb7e", 2806},
		{"ressci.001", 0, "37d2df0e1ec0603b605d0c87f1c09ce5", 50932558},
		{"resmap.002", 0, "3fd2283c7983d821b894593e97359913", 1999},
		{"ressci.002", 0, "5d07e6b51afaa3a5850b17a3dbd800a0", 42258859},
		{"resmap.003", 0, "c9980e5a16d7247f156b056a2e3adca7", 1711},
		{"ressci.003", 0, "59b597ed3550b5e175746e4f9bc8786d", 35477175},
		{"resmap.004", 0, "92e24eba78d7bed89954c472a5acc5f6", 2755},
		{"ressci.004", 0, "5d07e6b51afaa3a5850b17a3dbd800a0", 59781752},
		{"resmap.005", 0, "207f4f2ce425059bdd2f755a58c66309", 2101},
		{"ressci.005", 0, "1eb5a72744799f5a5518543f5b4c3c79", 38249037},
		{"resmap.006", 0, "c92f7b756964c8a57928a0b6558feaa5", 3007},
		{"ressci.006", 0, "4037d941aec39d2e654e20960429aefc", 60781720},
		AD_LISTEND},
		Common::PT_BRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - Italian DOS/Windows (6-CDs original release, provided in Trac #11013)
	// Executable scanning reports "2.100.002", VERSION file reports "Italian 1.0"
	{"gk2", "", {
		{"resmap.001", 0, "f0841f987ba7ba08adb9035f2231fa87", 2806},
		{"ressci.001", 0, "2bca1716ae0afa602d2cb8933ea8c244", 51083193},
		{"resmap.002", 0, "2c5362c8c6f4b913500a941a5db01d03", 1999},
		{"ressci.002", 0, "584c20593a4e8d3740d0b4a5ce4729a2", 41865579},
		{"resmap.003", 0, "2ee65a5560dc9fd290fd7c623ba8ac61", 1711},
		{"ressci.003", 0, "59b597ed3550b5e175746e4f9bc8786d", 35547945},
		{"resmap.004", 0, "9c7b26b547a8abc3b88302acbf0cec5e", 2755},
		{"ressci.004", 0, "851d879c5c27b014ebbd8c44df6865c5", 59304672},
		{"resmap.005", 0, "2b2da2a53b492cb944ee022658f9acc2", 2101},
		{"ressci.005", 0, "376341973f5bb64ccf09ccf1b3119de0", 38303329},
		{"resmap.006", 0, "fe0f9b565b2b4f69080bbcb06f658e3e", 3007},
		{"ressci.006", 0, "4037d941aec39d2e654e20960429aefc", 61231670},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_GK2 },

	// Gabriel Knight 2 - English Macintosh
	// NOTE: This only contains disc 1 files (as well as the persistent file:
	// Data1. Other discs have conflicting names :(
	{"gk2", "", {
		{"Data1", 0, "81cb3b4461af845efc59450a74b49fe6", 692785},
		{"Data2", 0, "69a05445a7c8c2da06d8f5a70200974d", 16774319},
		{"Data3", 0, "256309284f6447aaa5028103753e7e78", 15451574},
		{"Data4", 0, "8b843c62eb53136a855d6e0087e3cb0d", 5889297},
		{"Data5", 0, "f9fcf9ab2eb13b2125c33a1cda03a093", 14349728},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_GK2_MAC },

#undef GUIO_GK2_DEMO
#undef GUIO_GK2
#undef GUIO_GK2_MAC

	// Hoyle 1 - English DOS (supplied by ssburnout in bug report #5270)
	// 1.000.104 3x5.25" (label:INT.0.000.519)
	{"hoyle1", "", {
		{"resource.map", 0, "d6c37503a8f282636e1b08f7a6cf4afd", 7818},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 162805},
		{"resource.002", 0, "e0dd44069a62a463fd124974b915f10d", 342149},
		{"resource.003", 0, "e0dd44069a62a463fd124974b915f10d", 328925},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 1 - English DOS (supplied by wibble92 in bug report #4203)
	// SCI interpreter version 0.000.530
	{"hoyle1", "", {
		{"resource.map", 0, "9de9aa6d23569b3c8bf798503cf1216a", 7818},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 162783},
		{"resource.002", 0, "e0dd44069a62a463fd124974b915f10d", 342309},
		{"resource.003", 0, "e0dd44069a62a463fd124974b915f10d", 328912},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 1 - English DOS (supplied by merkur in bug report #4255)
	// SCI interpreter version 0.000.530
	{"hoyle1", "", {
		{"resource.map", 0, "1034a218943d12f1f36e753fa10c95b8", 4386},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 518308},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 1 3.5' - English DOS (supplied by eddydrama in bug report #5300 and dinnerx in bug report #5460)
	{"hoyle1", "", {
		{"resource.map", 0, "0af9a3dcd72a091960de070432e1f524", 4386},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 518127},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 1 - English DOS v1.000.115 (supplied by misterhands in bug report #6597)
	// Executable scanning reports "0.000.668"
	{"hoyle1", "", {
		{"resource.map", 0, "3ddf55fdbe14eb0e89a27a2cfc1338bd", 4386},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 519525},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 1 - English Amiga (from www.back2roots.org - verified by waltervn in bug report #6870)
	// Game version 1.000.139, SCI interpreter version x.yyy.zzz
	{"hoyle1", "", {
		{"resource.map", 0, "2a72b1aba65fa6e339370eb86d8601d1", 5166},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 218755},
		{"resource.002", 0, "e0dd44069a62a463fd124974b915f10d", 439502},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 1 - English Atari ST
	// Game version 1.000.104, SCI interpreter version 1.002.024
	{"hoyle1", "", {
		{"resource.map", 0, "0af9a3dcd72a091960de070432e1f524", 4386},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 518127},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 1 - English Atari ST
	// Game version 1.000.108, SCI interpreter version 1.002.026
	{"hoyle1", "", {
		{"resource.map", 0, "ed8355f84752e49ffa1f0cf9eca4b28e", 4140},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 517454},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 1 - English Macintosh (supplied by Omer Mor)
	// Executable scanning reports "x.yyy.zzz"
	// Resource fork reports "Sierra Interpreter 0.022"
	{"hoyle1", "", {
		{"resource.map", 0, "e96963c2e34b21e2680fdaafb5d00a40", 8706},
		{"resource.001", 0, "37b23afcf940ddbccfbe0b44080d9bc2", 611892},
		{"resource.002", 0, "37b23afcf940ddbccfbe0b44080d9bc2", 591233},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_UNDITHER },

	// Hoyle 1 - English DOS Non-Interactive Demo
	// Game version v1.000.114, SCI interpreter version 0.000.530
	{"hoyle1", "Demo", {
		{"resource.map", 0, "debe9c04c5bcf1d97274d4a7a3e1a9f9", 1008},
		{"resource.001", 0, "e0dd44069a62a463fd124974b915f10d", 243616},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER },

	// Hoyle 2 - English DOS
	// SCI interpreter version 0.000.572
	{"hoyle2", "", {
		{"resource.map", 0, "4f894d203f64aa23d9ff64d30ae36926", 2100},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 98138},
		{"resource.002", 0, "8f2dd70abe01112eca464cda818b5eb6", 196631},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English DOS (supplied by ssburnout in bug report #5270)
	// 1.000.011 1x3.5" (label:Int#6.21.90)
	{"hoyle2", "", {
		{"resource.map", 0, "db0ba08b953e9904a4960ad99cd29c20", 1356},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 216315},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English DOS (supplied by m_kiewitz)
	// SCI interpreter version 0.000.668, Ver 1.000.014, 2x5.25"
	{"hoyle2", "", {
		{"resource.map", 0, "8cef06c93d17d96f44aacd5902d84b30", 2100},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 98289},
		{"resource.002", 0, "8f2dd70abe01112eca464cda818b5eb6", 197326},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English DOS (supplied by misterhands in bug report #6598)
	// Game v1.000.016, interpreter 0.000.668, INT #12.5.90
	{"hoyle2", "", {
		{"resource.map", 0, "d8758a4eb6f34f6b3130bf25a496d123", 1356},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 217880},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.002.032"
	// SCI interpreter version 0.000.685
	{"hoyle2", "", {
		{"resource.map", 0, "62ed48d20c580e5a98f102f7cd93706a", 1356},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 222704},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English Atari ST
	// Game version 1.001.017
	// Executable scanning reports "1.002.034"
	{"hoyle2", "", {
		{"resource.map", 0, "13c8cc977598b6ad61d24c6296a090fd", 1356},
		{"resource.001", 0, "8f2dd70abe01112eca464cda818b5eb6", 216280},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 2 - English Macintosh
	// Executable scanning reports "x.yyy.zzz"
	{"hoyle2", "", {
		{"resource.map", 0, "1af1d3aa3cf564f93477c9f87e53f495", 1728},
		{"resource.001", 0, "b73b8131669d69d41a326415e4519138", 482882},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_UNDITHER },

	// Hoyle 3 - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.005.000"
	// SCI interpreter version 1.000.510
	{"hoyle3", "", {
		{"resource.map", 0, "f1f158e428398cb87fc41fb4aa8c2119", 2088},
		{"resource.000", 0, "595b6039ea1356e7f96a52c58eedcf22", 355791},
		{"resource.001", 0, "143df8aef214a2db34c2d48190742012", 632273},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 3 - English DOS Non-Interactive Demo
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 1.000.510 (just a guess)
	{"hoyle3", "Demo", {
		{"resource.map", 0, "0d06cacc87dc21a08cd017e73036f905", 735},
		{"resource.001", 0, "24db2bccda0a3c43ac4a7b5edb116c7e", 797678},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Hoyle 3 - English DOS Floppy (from jvprat)
	// Executable scanning reports "x.yyy.zzz", Floppy label reports "1.0, 11.2.91", VERSION file reports "1.000"
	// Also found on SierraOriginals CD as Hoyle Classic Board Games (1996)
	// SCI interpreter version 1.000.510 (just a guess)
	{"hoyle3", "", {
		{"resource.map", 0, "7216a2972f9c595c45ab314941628e43", 2247},
		{"resource.000", 0, "6ef28cac094dcd97fdb461662ead6f92", 541845},
		{"resource.001", 0, "0a98a268ee99b92c233a0d7187c1f0fa", 845795},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 3 - English DOS Floppy (supplied by eddydrama in bug report #5119)
	{"hoyle3", "", {
		{"resource.map", 0, "31c9fc0977ac6e5b566c37096803d0cb", 2469},
		{"resource.000", 0, "6ef28cac094dcd97fdb461662ead6f92", 12070},
		{"resource.001", 0, "ca6a9750a2c138d8bcbba369126040e9", 348646},
		{"resource.002", 0, "0a98a268ee99b92c233a0d7187c1f0fa", 345811},
		{"resource.003", 0, "97cfd72633f8f9b2a0b1d4116cf3ee81", 346116},
		{"resource.004", 0, "2884fb91b225fabd9ca87ea231293b48", 351218},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Hoyle 3 EGA - English DOS Floppy 1.0 (supplied by abevi in bug report #4176)
	{"hoyle3", "EGA", {
		{"resource.map", 0, "1728af1f6a85938c3522e64449e76ca1", 2205},
		{"resource.000", 0, "6ef28cac094dcd97fdb461662ead6f92", 319905},
		{"resource.001", 0, "0a98a268ee99b92c233a0d7187c1f0fa", 526438},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Hoyle 4 (Hoyle Classic Card Games) - English DOS Demo
	{"hoyle4", "Demo", {
		{"resource.map", 0, "60f764020a6b788bbbe415dbc2ccb9f3", 931},
		{"resource.000", 0, "5fe3670e3ddcd4f85c10013b5453141a", 615522},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Hoyle 4 (Hoyle Classic Card Games) - English DOS Demo
	// SCI interpreter version 1.001.200 (just a guess)
	// Does anyone have this version? -clone2727
	{"hoyle4", "Demo", {
		{"resource.map", 0, "662087cb383e52e3cc4ae7ecb10e20aa", 938},
		{"resource.000", 0, "24c10844792c54d476d272213cbac300", 675252},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Hoyle 4 (Hoyle Classic Card Games) - English DOS/Win
	// Supplied by abevi in bug report #5131
	// VERSION file reports "2.000"
	// Although this is a floppy game, it does have speech. (bug #13007)
	{"hoyle4", "", {
		{"resource.map", 0, "2b577c975cc8d8d43f61b6a756129fe3", 4352},
		{"resource.000", 0, "43e2c15ce436aab611a462ad0603e12d", 2000132},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Hoyle 4 (Hoyle Classic Card Games) - English Macintosh Floppy
	// VERSION file reports "2.0"
	// Although this is a floppy game, it does have speech. (bug #13007)
	{"hoyle4", "", {
		{"Data1", 0, "99575fae4579540a314bbedd72d51e8c", 7682631},
		{"Data2", 0, "7d4bf5bdf3c02edbf35cb8471c84ec13", 1538878},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO_STD16_MAC_SPEECH },

#define GUIO_HOYLE5 GUIO5(GUIO_NOMIDI, \
						  GUIO_NOLAUNCHLOAD, \
						  GUIO_LINKMUSICTOSFX, \
						  GUIO_LINKSPEECHTOSFX, \
						  GUIO_NOASPECT)

// versions with bridge or poker have save/load screens
#define GUIO_HOYLE5_SAVELOAD GUIO7(GUIO_NOMIDI, \
								   GUIO_NOLAUNCHLOAD, \
								   GUIO_LINKMUSICTOSFX, \
								   GUIO_LINKSPEECHTOSFX, \
								   GUIO_NOASPECT, \
								   GAMEOPTION_ORIGINAL_SAVELOAD, \
								   GAMEOPTION_ENABLE_GMM_SAVE)

	// Hoyle 5 (Hoyle Classic Games) - Windows demo
	// Executable scanning reports "2.100.002"
	{"hoyle5", "Demo", {
		{"ressci.000", 0, "98a39ae535dd01714ac313f8ba925045", 7260363},
		{"resmap.000", 0, "10267a1542a73d527e50f0340549088b", 4900},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_HOYLE5 },

	// Hoyle 5 (Hoyle Classic Games) - Windows
	{"hoyle5", "", {
		{"resource.aud", 0, "cc4a7e21dc864ae21cf823e893c279ad", 257483406},
		{"ressci.000", 0, "55ae04012a73abc15b93debf60a7df71", 16909704},
		{"resmap.000", 0, "daf64a91344a7934fe4374765267c2af", 5767},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5_SAVELOAD },

	// Hoyle 5 (Hoyle Classic Games for Laptops) - Windows
	// File date: 1995.11.04
	// This version is unsupported because it is missing the main menu resources and will crash.
	// Each card game was launched by a Windows shortcut that passed a config file to the interpreter
	// via the command line. Each config file provided a card game room and skipped the main menu.
	{"hoyle5", _s("Game does not contain menu resources"), {
		{"resmap.000", 0, "000fd106aa6c5eb1d15a76fd2416677a", 4213},
		{"ressci.000", 0, "ca50cf09f80a5f982a965afea852cc42", 3279020},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_UNSUPPORTED | ADGF_DROPPLATFORM, GUIO_HOYLE5_SAVELOAD },

	// Hoyle 5 (Hoyle Classic Games for Laptops) - Windows
	// File date: 1995.11.21
	// This versi on is unsupported because it is missing the main menu resources and will crash.
	// Each card game was launched by a Windows shortcut that passed a config file to the interpreter
	// via the command line. Each config file provided a card game room and skipped the main menu.
	{"hoyle5", _s("Game does not contain menu resources"), {
		{"resmap.000", 0, "d5eef6f2529313e950c4d78251a95b1e", 4213},
		{"ressci.000", 0, "ca50cf09f80a5f982a965afea852cc42", 3278849},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_UNSUPPORTED | ADGF_DROPPLATFORM, GUIO_HOYLE5_SAVELOAD },

	// Hoyle Bridge - Windows
	{"hoyle5bridge", "", {
		{"resource.aud", 0, "cc4a7e21dc864ae21cf823e893c279ad", 257585548},
		{"ressci.000", 0, "b83cba09229d3003df9e0c864843f962", 16842499},
		{"resmap.000", 0, "7b3e3030b0ad5f341053c18afce7d176", 5647},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5_SAVELOAD },

	// Hoyle Children's Collection - Windows
	{"hoyle5children", "", {
		{"resource.aud", 0, "cc4a7e21dc864ae21cf823e893c279ad", 257585548},
		{"ressci.000", 0, "fd1f7dbeebd4510cd37e171a72f2b6ad", 16824349},
		{"resmap.000", 0, "b0fe1bcc69596e10fe5caa11d0b55b23", 5671},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5 },

	// Hoyle School House Math - Windows
	// This appears on "Sierra's School House Math" CD
	{"hoyle5school", "", {
		{"resmap.000", 0, "ed75b87fd5b69097e3a09dd39de7e2fe", 3697},
		{"ressci.000", 0, "cbfe69aa4b9e23ddbf640301709a65eb", 2478642},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5 },

	// Hoyle Solitaire (CD version) - Windows
	// resource.aud is excluded because it is an empty file (zero bytes)
	{"hoyle5solitaire", "CD", {
		{"ressci.000", 0, "fa4eeb24b1fbf6f33739995360554485", 11628203},
		{"resmap.000", 0, "3f63df73a49800f080775d2a9ad0e949", 3079},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5 },

	// Hoyle Solitaire (Hard Drive version) - Windows
	// resource.aud is excluded because it is an empty file (zero bytes)
	{"hoyle5solitaire", "Hard Drive", {
		{"ressci.000", 0, "da180c67d54d4208c84a48fcd8709671", 8582335},
		{"resmap.000", 0, "e2feb47ab16f9e22a9b6a8580d1da3f0", 3055},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_HOYLE5 },

	// Hoyle 5 (Hoyle Classic Games) - Macintosh CD
	// VERSION file reports "1.000.000"
	{"hoyle5", "", {
		{"Data1", 0, "b280fbcdb1e0fa9d708e1f8d6050ef2d", 553116},
		{"Data2", 0, "a1b4d73bc7672e4db2665657911fc5f2", 14429426},
		{"Data3", 0, "65f9b79f2f8904a6277c8e6ee4fd7ac0", 75448},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_HOYLE5_SAVELOAD },

	// Hoyle Solitaire - Macintosh CD
	// VERSION file reports "1.000.000"
	{"hoyle5solitaire", "", {
		{"Data1", 0, "38283be5a7e21098cb34f6e6789b7180", 401393},
		{"Data2", 0, "f007f4a13260d2b26b85b5d8379ac8d1", 15066173},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_HOYLE5 },

#undef GUIO_HOYLE5
#undef GUIO_HOYLE5_SAVELOAD

	// ImagiNation Network (INN) Demo
	// SCI interpreter version 1.001.097
	{"inndemo", "", {
		{"resource.map", 0, "333daf27c3e8a6d274a3e0061ed7cd5c", 1545},
		{"resource.000", 0, "535b1b920441ec73f42eaa4ccfd47b89", 514578},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#define GUIO_JONES_FLOPPY GUIO5(GUIO_NOSPEECH,             \
							GAMEOPTION_PREFER_DIGITAL_SFX, \
		                    GAMEOPTION_MIDI_MODE,          \
	                        GAMEOPTION_RGB_RENDERING,      \
	                        GAMEOPTION_TTS)

#define GUIO_JONES_CD GUIO4(GAMEOPTION_JONES_CDAUDIO,      \
							GAMEOPTION_PREFER_DIGITAL_SFX, \
		                    GAMEOPTION_MIDI_MODE,          \
	                        GAMEOPTION_RGB_RENDERING)

#define GUIO_JONES_CD_WINDOWS GUIO5(GUIO_MIDIGM,                   \
									GAMEOPTION_JONES_CDAUDIO,      \
									GAMEOPTION_PREFER_DIGITAL_SFX, \
									GAMEOPTION_MIDI_MODE,          \
									GAMEOPTION_RGB_RENDERING)

	// Jones in the Fast Lane EGA - English DOS
	// SCI interpreter version 1.000.172 (not 100% sure FIXME)
	{"jones", "EGA", {
		{"resource.map", 0, "be4cf9e8c1e253623ef35ae3b8a1d998", 1800},
		{"resource.001", 0, "bac3ec6cb3e3920984ab0f32becf5163", 202105},
		{"resource.002", 0, "b86daa3ba2784d1502da881eedb80d9b", 341771},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_JONES_FLOPPY	},

	// Jones in the Fast Lane EGA - English DOS (supplied by EddyDrama in bug report #5117)
	{"jones", "EGA", {
		{"resource.map", 0, "8e92cf319180cc8b5b87b2ce93a4fe22", 1602},
		{"resource.001", 0, "bac3ec6cb3e3920984ab0f32becf5163", 511528},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_JONES_FLOPPY	},

	// Jones in the Fast Lane VGA - English DOS
	// SCI interpreter version 1.000.172
	{"jones", "", {
		{"resource.map", 0, "65cbe19b36fffc71c8e7b2686bd49ad7", 1800},
		{"resource.001", 0, "bac3ec6cb3e3920984ab0f32becf5163", 313476},
		{"resource.002", 0, "b86daa3ba2784d1502da881eedb80d9b", 719747},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_JONES_FLOPPY	},

	// Jones in the Fast Lane VGA - English DOS (supplied by omer_mor in bug report #5053)
	// VERSION file reports "1.000.060"
	{"jones", "", {
		{"resource.map", 0, "db175ab494ab0666f19ab8f2597a8e49", 1602},
		{"resource.001", 0, "bac3ec6cb3e3920984ab0f32becf5163", 994487},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_JONES_FLOPPY	},

	// Jones in the Fast Lane - English DOS CD
	{"jones", "CD", {
		{"resource.map", 0, "459f5b04467bc2107aec02f5c4b71b37", 4878},
		{"resource.001", 0, "3876da2ce16fb7dea2f5d943d946fa84", 1652150},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_JONES_CD	},

	// Jones in the Fast Lane - English DOS CD
	// Same entry as the DOS version above. This one is used for the alternate
	// General MIDI music tracks in the Windows version
	{"jones", "CD", {
		{"resource.map", 0, "459f5b04467bc2107aec02f5c4b71b37", 4878},
		{"resource.001", 0, "3876da2ce16fb7dea2f5d943d946fa84", 1652150},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_JONES_CD_WINDOWS	},

	// Jones in the Fast Lane - English DOS US CD (alternate version)
	// Supplied by collector9 in bug #6372
	{"jones", "CD", {
		{"resource.map", 0, "4344ff3f796707843b992adec2c87663", 4878},
		{"resource.001", 0, "3876da2ce16fb7dea2f5d943d946fa84", 1652062},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_JONES_CD	},

	// Jones in the Fast Lane - English DOS US CD (alternate version)
	// Same entry as the DOS version above. This one is used for the alternate
	// General MIDI music tracks in the Windows version
	{"jones", "CD", {
		{"resource.map", 0, "4344ff3f796707843b992adec2c87663", 4878},
		{"resource.001", 0, "3876da2ce16fb7dea2f5d943d946fa84", 1652062},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_JONES_CD_WINDOWS	},

#undef GUIO_JONES_FLOPPY
#undef GUIO_JONES_CD
#undef GUIO_JONES_CD_WINDOWS

	// King's Quest 1 SCI Remake - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.003.007"
	// SCI interpreter version 0.001.010
	{"kq1sci", "SCI", {
		{"resource.map", 0, "37ed1a05eb719629eba15059c2eb6cbe", 6798},
		{"resource.001", 0, "9ae2a13708d691cd42f9129173c4b39d", 266621},
		{"resource.002", 0, "9ae2a13708d691cd42f9129173c4b39d", 795123},
		{"resource.003", 0, "9ae2a13708d691cd42f9129173c4b39d", 763224},
		{"resource.004", 0, "9ae2a13708d691cd42f9129173c4b39d", 820443},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 1 SCI Remake - English DOS Non-Interactive Demo
	// Executable scanning reports "S.old.010"
	{"kq1sci", "SCI/Demo", {
		{"resource.map", 0, "59b13619078bd47011421468959ee5d4", 954},
		{"resource.001", 0, "4cfb9040db152868f7cb6a1e8151c910", 296555},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// King's Quest 1 SCI Remake - English DOS (from the King's Quest Collection)
	// Executable scanning reports "S.old.010", VERSION file reports "1.000.051"
	// SCI interpreter version 0.000.999
	{"kq1sci", "SCI", {
		{"resource.map", 0, "7fe9399a0bec84ca5727309778d27f07", 5790},
		{"resource.001", 0, "fed9e0072ffd511d248674e60dee2099", 555439},
		{"resource.002", 0, "fed9e0072ffd511d248674e60dee2099", 714062},
		{"resource.003", 0, "fed9e0072ffd511d248674e60dee2099", 717478},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 1 SCI Remake - English DOS (from the King's Quest Collection)
	// Executable scanning reports "S.old.010", VERSION file reports "1.000.051"
	// SCI interpreter version 0.000.999
	{"kq1sci", "SCI", {
		{"resource.map", 0, "7fe9399a0bec84ca5727309778d27f07", 5790},
		{"resource.001", 0, "fed9e0072ffd511d248674e60dee2099", 555439},
		{"resource.002", 0, "fed9e0072ffd511d248674e60dee2099", 714062},
		{"resource.003", 0, "fed9e0072ffd511d248674e60dee2099", 717478},
		{"resource.msg", 0, "6f44b0324c9a3d478510d982eb5084dd", 2948975},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 1 SCI Remake - English DOS (supplied by ssburnout in bug report #5270)
	// 1.000.051 9x5.25" (label: INT#9.19.90)
	{"kq1sci", "SCI", {
		{"resource.map", 0, "4dac689e98b2fa6806232fdd61e24712", 9936},
		{"resource.001", 0, "fed9e0072ffd511d248674e60dee2099", 196027},
		{"resource.002", 0, "fed9e0072ffd511d248674e60dee2099", 330278},
		{"resource.003", 0, "fed9e0072ffd511d248674e60dee2099", 355008},
		{"resource.004", 0, "fed9e0072ffd511d248674e60dee2099", 265478},
		{"resource.005", 0, "fed9e0072ffd511d248674e60dee2099", 316854},
		{"resource.006", 0, "fed9e0072ffd511d248674e60dee2099", 351062},
		{"resource.007", 0, "fed9e0072ffd511d248674e60dee2099", 330472},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 4 - English DOS Non-Interactive Demo
	// Executable scanning reports "0.000.494"
	{"kq4sci", "SCI/Demo", {
		{"resource.map", 0, "992ac7cc31d3717fe53818a9bb6d1dae", 594},
		{"resource.001", 0, "143e1c14f15ad0fbfc714f648a65f661", 205330},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (5 1/4" disks)
	// Game version 1.000.106
	// Executable scanning reports 0.000.253
	// K4091988.QA file reports "SCI Version 0.000.247 (2nd rev)"
	{"kq4sci", "SCI", {
		{"resource.map", 0, "381d9dcb69c626f0a60631dbfec1d13a", 9474},
		{"resource.001", 0, "0c8566848a76eea19a6d6220914030a7", 191559},
		{"resource.002", 0, "0c8566848a76eea19a6d6220914030a7", 333345},
		{"resource.003", 0, "0c8566848a76eea19a6d6220914030a7", 358513},
		{"resource.004", 0, "0c8566848a76eea19a6d6220914030a7", 326297},
		{"resource.005", 0, "0c8566848a76eea19a6d6220914030a7", 325102},
		{"resource.006", 0, "0c8566848a76eea19a6d6220914030a7", 337288},
		{"resource.007", 0, "0c8566848a76eea19a6d6220914030a7", 343882},
		{"resource.008", 0, "0c8566848a76eea19a6d6220914030a7", 305329},
		{"resource.009", 0, "0c8566848a76eea19a6d6220914030a7", 288132},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (3 1/2" disks)
	// Game version 1.000.106
	// Executable scanning reports 0.000.253
	// K4091988.QA file reports "SCI Version 0.000.247 (2nd rev)"
	{"kq4sci", "SCI", {
		{"resource.map", 0, "1f253c0d649fb1da1eb8784b2df34284", 7416},
		{"resource.001", 0, "0c8566848a76eea19a6d6220914030a7", 495006},
		{"resource.002", 0, "0c8566848a76eea19a6d6220914030a7", 681749},
		{"resource.003", 0, "0c8566848a76eea19a6d6220914030a7", 686821},
		{"resource.004", 0, "0c8566848a76eea19a6d6220914030a7", 652398},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (5 1/4" disks)
	// Game version 1.000.111
	// Executable scanning reports 0.000.274
	// Floppy disks are labeled 0.000.247 or 0.000.274. Both are real
	// interpreter version numbers so it's unclear if these are typos
	// or if there were versions of 1.000.111 that used 0.000.247.
	// Released: September 24th, 1988 (Information from K4092488.QA file)
	{"kq4sci", "SCI", {
		{"resource.map", 0, "adbe267662a5915d3c89c9075ec8cf3e", 9474},
		{"resource.001", 0, "851a62d00972dc4002f472cc0d84e71d", 188239},
		{"resource.002", 0, "851a62d00972dc4002f472cc0d84e71d", 329895},
		{"resource.003", 0, "851a62d00972dc4002f472cc0d84e71d", 355385},
		{"resource.004", 0, "851a62d00972dc4002f472cc0d84e71d", 322951},
		{"resource.005", 0, "851a62d00972dc4002f472cc0d84e71d", 321593},
		{"resource.006", 0, "851a62d00972dc4002f472cc0d84e71d", 333777},
		{"resource.007", 0, "851a62d00972dc4002f472cc0d84e71d", 341038},
		{"resource.008", 0, "851a62d00972dc4002f472cc0d84e71d", 301669},
		{"resource.009", 0, "851a62d00972dc4002f472cc0d84e71d", 284690},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (3 1/2" disks)
	// Game version 1.000.111
	// Executable scanning reports 0.000.274
	// Floppy disks are labeled 0.000.247 or 0.000.274. Both are real
	// interpreter version numbers so it's unclear if these are typos
	// or if there were versions of 1.000.111 that used 0.000.247.
	// Released: September 24th, 1988 (Information from K4092488.QA file)
	{"kq4sci", "SCI",{
		{"resource.map", 0, "042d54434174d8f9faf926ade2ffd805", 7416},
		{"resource.001", 0, "851a62d00972dc4002f472cc0d84e71d", 491919},
		{"resource.002", 0, "851a62d00972dc4002f472cc0d84e71d", 678804},
		{"resource.003", 0, "851a62d00972dc4002f472cc0d84e71d", 683145},
		{"resource.004", 0, "851a62d00972dc4002f472cc0d84e71d", 649441},
		AD_LISTEND },
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// King's Quest 4 - English DOS (5 1/4" disks)
	// Game version 1.003.006
	// SCI interpreter version 0.000.409
	// Released: January 24, 1989 (Information from QAFILE file)
	{"kq4sci", "SCI", {
		{"resource.map", 0, "5051546e5f87aa6103289c8001a94234", 9240},
		{"resource.001", 0, "91a2aebafb234c486744bd69b145ac43", 184255},
		{"resource.002", 0, "91a2aebafb234c486744bd69b145ac43", 338296},
		{"resource.003", 0, "91a2aebafb234c486744bd69b145ac43", 334522},
		{"resource.004", 0, "91a2aebafb234c486744bd69b145ac43", 310026},
		{"resource.005", 0, "91a2aebafb234c486744bd69b145ac43", 282391},
		{"resource.006", 0, "91a2aebafb234c486744bd69b145ac43", 323541},
		{"resource.007", 0, "91a2aebafb234c486744bd69b145ac43", 333089},
		{"resource.008", 0, "91a2aebafb234c486744bd69b145ac43", 272995},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (3 1/2" disks)
	// Game version 1.003.006
	// SCI interpreter version 0.000.409
	// Released: January 24, 1989 (Information from QAFILE file)
	// Resource files are identical to Atari ST 1.003.006
	{"kq4sci", "SCI", {
		{"resource.map", 0, "8800cd62b1eee93752099986dc704a16", 7416},
		{"resource.001", 0, "a3cdb4848fb859fdd302976fff56490f", 450790},
		{"resource.002", 0, "a3cdb4848fb859fdd302976fff56490f", 535276},
		{"resource.003", 0, "a3cdb4848fb859fdd302976fff56490f", 705074},
		{"resource.004", 0, "a3cdb4848fb859fdd302976fff56490f", 478366},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (5 1/4" disks)
	// Game version 1.006.003
	// SCI interpreter version 0.000.502
	// Released: June 12, 1989 (Information from About screen in scripts)
	// Identical resources to 1.006.004 except for disk sizes and About screen
	{"kq4sci", "SCI", {
		{"resource.map", 0, "a22b66e6fa0d82460b985e9f7e562950", 9384},
		{"resource.001", 0, "6db7de6f93c6ea62dca78abee677f8c0", 174852},
		{"resource.002", 0, "6db7de6f93c6ea62dca78abee677f8c0", 356024},
		{"resource.003", 0, "6db7de6f93c6ea62dca78abee677f8c0", 335716},
		{"resource.004", 0, "6db7de6f93c6ea62dca78abee677f8c0", 312231},
		{"resource.005", 0, "6db7de6f93c6ea62dca78abee677f8c0", 283466},
		{"resource.006", 0, "6db7de6f93c6ea62dca78abee677f8c0", 324789},
		{"resource.007", 0, "6db7de6f93c6ea62dca78abee677f8c0", 334441},
		{"resource.008", 0, "6db7de6f93c6ea62dca78abee677f8c0", 274448},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English DOS (3 1/2" disks)
	// Game version 1.006.004
	// SCI interpreter version 0.000.502
	// Released: August 7, 1989 (Information from About screen in scripts)
	// Identical resources to 1.006.003 except for disk sizes and About screen
	{"kq4sci", "SCI", {
		{"resource.map", 0, "3164a39790b599c954ecf716d0b32be8", 7476},
		{"resource.001", 0, "77615c595388acf3d1df8e107bfb6b52", 452523},
		{"resource.002", 0, "77615c595388acf3d1df8e107bfb6b52", 536573},
		{"resource.003", 0, "77615c595388acf3d1df8e107bfb6b52", 707591},
		{"resource.004", 0, "77615c595388acf3d1df8e107bfb6b52", 479562},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English Amiga (from www.back2roots.org)
	// Game version 1.023
	// Executable scanning reports 1.002.032
	// SCI interpreter version 0.000.685
	// Released: August 7, 1989 (Information from About screen in scripts)
	{"kq4sci", "SCI", {
		{"resource.map", 0, "f88dd267fb9504d40a04d599c048d42b", 6354},
		{"resource.000", 0, "77615c595388acf3d1df8e107bfb6b52", 138523},
		{"resource.001", 0, "52c2231765eced34faa7f7bcff69df83", 44751},
		{"resource.002", 0, "fb351106ec865fad9af5d78bd6b8e3cb", 663629},
		{"resource.003", 0, "fd16c9c223f7dc5b65f06447615224ff", 683016},
		{"resource.004", 0, "3fac034c7d130e055d05bc43a1f8d5f8", 549993},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - English Atari ST (double-sided diskettes)
	// Game version 1.003.006
	// SCI interpreter version 1.001.008
	// Provided by fischersfritz in bug report #5518
	// Released:  January 12, 1989 (Information from KQ4_ST.QA file)
	// Resource files are identical to DOS 1.003.006
	{"kq4sci", "SCI", {
		{"resource.map", 0, "8800cd62b1eee93752099986dc704a16", 7416},
		{"resource.001", 0, "a3cdb4848fb859fdd302976fff56490f", 450790},
		{"resource.002", 0, "a3cdb4848fb859fdd302976fff56490f", 535276},
		{"resource.003", 0, "a3cdb4848fb859fdd302976fff56490f", 705074},
		{"resource.004", 0, "a3cdb4848fb859fdd302976fff56490f", 478366},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - Italian fan translation
	// Game version 1.001.111 (Sep 23, 1988)
	// SCI interpreter version 0.000.274
	{"kq4sci", "SCI", {
		{"resource.map", 0, "548e64a8acb92023f7206094f03ba149", 5712},
		{"resource.001", 0, "e7ff10b619a45742876e24fe64149471", 2266925},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// King's Quest 4 - Russian
	// Game version 1.001.111 (Sep 23, 1988)
	// SCI interpreter version 0.000.274
	{"kq4sci", "SCI", {
		{"resource.map", 0, "f0833063ba4bd58072cf0e3402c8be69", 5712},
		{"resource.001", 0, "28bcd0c6363762fde0ef12c491fb706b", 2401589},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

#define GUIO_KQ5_CD_WINDOWS GUIO7(GUIO_MIDIGM,                         \
								  GAMEOPTION_PREFER_DIGITAL_SFX,       \
								  GAMEOPTION_ORIGINAL_SAVELOAD,        \
								  GAMEOPTION_MIDI_MODE,                \
								  GAMEOPTION_RGB_RENDERING,            \
								  GAMEOPTION_WINDOWS_CURSORS,          \
								  GAMEOPTION_ENABLE_GMM_SAVE)

	// King's Quest 5 - English Amiga (from www.back2roots.org)
	// Game version 1.000.000
	// Executable scanning reports "1.004.018"
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "fcbcca058e1157221ffc27251cd59bc3", 8040},
		{"resource.000", 0, "c595ca99e7fa9b2cabcf69cfab0caf67", 344909},
		{"resource.001", 0, "964a3be90d810a99baf72ea70c09f935", 836477},
		{"resource.002", 0, "d10f3e8ff2cd95a798b21cd08797b694", 814730},
		{"resource.003", 0, "f72fdd994d9ba03a8360d639f256344e", 804882},
		{"resource.004", 0, "a5b80f95c66b3a032348989408eec287", 747914},
		{"resource.005", 0, "31a5487f4d942e6354d5be49d59707c9", 834146},
		{"resource.006", 0, "26c0c25399b6715fec03fc3e12544fe3", 823048},
		{"resource.007", 0, "b914b5901e786327213e779725d30dd1", 778772},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - German Amiga (also includes english language)
	// Game version 1.000.009
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "bfbffd923cd64b24498e54f797aa6e41", 8250},
		{"resource.000", 0, "79479b5e4e5b0085d8eea1c7ff0f9f5a", 306893},
		{"resource.001", 0, "7840aadc82977c7b4f504a7e4a12829f", 720376},
		{"resource.002", 0, "d547167d4204170b44de8e1d63506215", 792586},
		{"resource.003", 0, "9cbb0712816097cbc9d0c1f987717c7f", 646446},
		{"resource.004", 0, "319712573661bd122390cdfbafb000fd", 831842},
		{"resource.005", 0, "5aa3d59968b569cd509dde00d4eb8751", 754201},
		{"resource.006", 0, "56546b20db11a4836f900efa6d3a3e74", 672099},
		{"resource.007", 0, "56546b20db11a4836f900efa6d3a3e74", 794194},
		{"resource.008", 0, "33243b85bf2be9e9a48cf1fd2c75eb07", 715664},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - Italian Amiga (also includes english language)
	// Game version 1.000.003
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "12e2f80c0269932411716dad06d2b229", 8250},
		{"resource.000", 0, "c598ff615a61bc0e418761283409f128", 305879},
		{"resource.001", 0, "17e63cfe78632fe07222e13a26dc0fb2", 720023},
		{"resource.002", 0, "abb340a53e4873a7c3bacfb16c0b779d", 792432},
		{"resource.003", 0, "aced8ce0be07eef77c0e7cff8cc4e476", 646088},
		{"resource.004", 0, "13fc1f1679f7f226ba52ffffe2e65f38", 831805},
		{"resource.005", 0, "de3c5c09e350fded36ca354998c2194d", 754784},
		{"resource.006", 0, "11cb750f5f816445ad0f4b9f50a4f59a", 672527},
		{"resource.007", 0, "11cb750f5f816445ad0f4b9f50a4f59a", 794259},
		{"resource.008", 0, "64a63bdbeb01139b524af8ae6abb6c4d", 715226},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - English DOS CD (from the King's Quest Collection)
	// Executable scanning reports "x.yyy.zzz", VERSION file reports "1.000.052"
	// SCI interpreter version 1.000.784
	{"kq5", "CD", {
		{"resource.map", 0, "f68ba690e5920725dcf9328001b90e33", 13122},
		{"resource.000", 0, "449471bfd77be52f18a3773c7f7d843d", 571368},
		{"resource.001", 0, "b45a581ff8751e052c7e364f58d3617f", 16800210},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// King's Quest 5 - English DOS CD (from the King's Quest Collection)
	// Executable scanning reports "x.yyy.zzz", VERSION file reports "1.000.052"
	// SCI interpreter version 1.000.784
	// Same entry as the DOS version above. This one is used for the alternate
	// MIDI music tracks in the Windows version
	{"kq5", "CD", {
		{"resource.map", 0, "f68ba690e5920725dcf9328001b90e33", 13122},
		{"resource.000", 0, "449471bfd77be52f18a3773c7f7d843d", 571368},
		{"resource.001", 0, "b45a581ff8751e052c7e364f58d3617f", 16800210},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_KQ5_CD_WINDOWS },

	// King's Quest 5 - English DOS Floppy
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "d6172c27b453350e158815fbae23f41e", 8004},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276351},
		{"resource.001", 0, "3f28c72dc7531aaccf8e972c7ee50d14", 1022087},
		{"resource.002", 0, "3e56ba5bf5e8637c619b57f6b6cacbb4", 1307211},
		{"resource.003", 0, "5d5d498f33ca7cde0d5b058630b36ad3", 1347875},
		{"resource.004", 0, "944a996f9cc90dabde9f51ed7dd52366", 1239689},
		{"resource.005", 0, "b6c43441cb78a9b484efc8e614aac092", 1287999},
		{"resource.006", 0, "672ede1136e9e401658538e51bd5dc22", 1172619},
		{"resource.007", 0, "2f48faf27666b58c276dda20f91f4a93", 1240456},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - Korean fan translation, based on English DOS Floppy
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "d6172c27b453350e158815fbae23f41e", 8004},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276351},
		{"resource.001", 0, "3f28c72dc7531aaccf8e972c7ee50d14", 1022087},
		{"resource.002", 0, "3e56ba5bf5e8637c619b57f6b6cacbb4", 1307211},
		{"resource.003", 0, "5d5d498f33ca7cde0d5b058630b36ad3", 1347875},
		{"resource.004", 0, "944a996f9cc90dabde9f51ed7dd52366", 1239689},
		{"resource.005", 0, "b6c43441cb78a9b484efc8e614aac092", 1287999},
		{"resource.006", 0, "672ede1136e9e401658538e51bd5dc22", 1172619},
		{"resource.007", 0, "2f48faf27666b58c276dda20f91f4a93", 1240456},
		{"resource.msg", 0, "8d94253e33b268c310126562a72de6f5", 93930},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - English DOS Floppy
	// VERSION file reports "0.000.051"
	// Supplied by misterhands in bug report #6056.
	// This is the original English version, which has been externally patched to
	// Polish in the Polish release below.
	{"kq5", "", {
		{"resource.map", 0, "70010c20138541f89013bb5e1b30f16a", 7998},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276398},
		{"resource.001", 0, "c0f48d4a7ebeaa6aa074fc98d77423e9", 1018560},
		{"resource.002", 0, "7f188a95acdb60bbe32a8379ba299393", 1307048},
		{"resource.003", 0, "0860785af59518b94d54718dddcd6907", 1348500},
		{"resource.004", 0, "c4745dd1e261c22daa6477961d08bf6c", 1239887},
		{"resource.005", 0, "6556ff8e7c4d1acf6a78aea154daa76c", 1287869},
		{"resource.006", 0, "da82e4beb744731d0a151f1d4922fafa", 1170456},
		{"resource.007", 0, "431def14ca29cdb5e6a5e84d3f38f679", 1240176},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - English DOS Floppy (supplied by omer_mor in bug report #5048)
	// VERSION file reports "0.000.051"
	{"kq5", "", {
		{"resource.map", 0, "8b2158083302568b73b16fa3655360fe", 8184},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276398},
		{"resource.001", 0, "c0f48d4a7ebeaa6aa074fc98d77423e9", 1099506},
		{"resource.002", 0, "e0c40d0e85340357d2404f9b5ae1921c", 1061243},
		{"resource.003", 0, "89c00d788d022c13a9b250fa96290ab0", 1110169},
		{"resource.004", 0, "d68f0d8a52ac990aa5641b7087476253", 1153751},
		{"resource.005", 0, "ef4f1166bc37b6cfab70234ea60ddc3d", 1032675},
		{"resource.006", 0, "06cb3f689836086ebe08b1efc0126592", 921113},
		{"resource.007", 0, "252249753c6e850eacceb8af634986d3", 1133608},
		{"resource.008", 0, "aac7c26382088b1359ce88915187349c", 1128507},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 EGA (supplied by markcoolio in bug report #4496)
	// SCI interpreter version 1.000.060
	// VERSION file reports "0.000.055"
	{"kq5", "EGA", {
		{"resource.map", 0, "baf888a4e4797ce0de0b19d4e183583c", 7662},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 394242},
		{"resource.001", 0, "c1eef048fa9fe76298c2d4705ef9549f", 558362},
		{"resource.002", 0, "076aa0bf1d8d2c147d64aeffbe2928e5", 597593},
		{"resource.003", 0, "ecb47cd04d06b2ab2f9f883667db6e81", 487608},
		{"resource.004", 0, "4d74e8094ff57cea6ee92faf63dbd0af", 621513},
		{"resource.005", 0, "3cca5b2dae8afe94532edfdc98d7edbe", 669919},
		{"resource.006", 0, "698c698570cde9015e4d51eb8d2e9db1", 666527},
		{"resource.007", 0, "703d8df30e89541af337d7706540d5c4", 541743},
		{"resource.008", 0, "6c6207420381574b874f45100362f8b4", 598932},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 EGA 1.2M disk version (from LordHoto)
	// VERSION file reports "0.000.055"
	{"kq5", "EGA", {
		{"resource.map", 0, "53206afb4fd73871a484e83acab80f31", 7608},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 413818},
		{"resource.001", 0, "c1eef048fa9fe76298c2d4705ef9549f", 1162752},
		{"resource.002", 0, "4d74e8094ff57cea6ee92faf63dbd0af", 1195538},
		{"resource.003", 0, "3cca5b2dae8afe94532edfdc98d7edbe", 1092132},
		{"resource.004", 0, "83568edf7fde18b3eed988bc5d22ceb1", 1188053},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 EGA (supplied by omer_mor in bug report #4997)
	// VERSION file reports "0.000.062"
	{"kq5", "EGA", {
		{"resource.map", 0, "e17cfb38175382b9188da75c53bbab64", 7656},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 394072},
		{"resource.001", 0, "c1eef048fa9fe76298c2d4705ef9549f", 561444},
		{"resource.002", 0, "076aa0bf1d8d2c147d64aeffbe2928e5", 597580},
		{"resource.003", 0, "ecb47cd04d06b2ab2f9f883667db6e81", 487633},
		{"resource.004", 0, "4d74e8094ff57cea6ee92faf63dbd0af", 620749},
		{"resource.005", 0, "3cca5b2dae8afe94532edfdc98d7edbe", 669961},
		{"resource.006", 0, "698c698570cde9015e4d51eb8d2e9db1", 666541},
		{"resource.007", 0, "703d8df30e89541af337d7706540d5c4", 541762},
		{"resource.008", 0, "d110b81016430eb12fe2e803e97e994a", 598814},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - English DOS Floppy (from telanus, bug report Trac#9624)
	// Game version 0.000.062
	{"kq5", "", {
		{"resource.map", 0, "86a4ae3fafb1bbcc81b78cf427e45ba0", 8184},
		{"resource.001", 0, "51797b784eccab97d1d4b1f8dc3ef671", 1099768},
		{"resource.002", 0, "93c6f0fc7682fda52a632f34bcc1c975", 1060941},
		{"resource.003", 0, "44388574401a25938f660dca90bdd040", 1109594},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276351},
		{"resource.007", 0, "a4cb2eba783a7b05f5b005d47bd94936", 1133814},
		{"resource.004", 0, "464109fa0fd76f722fff73fd26e98271", 1153791},
		{"resource.005", 0, "3c292d392c3cc3b532e9063d0d1fb7aa", 1032802},
		{"resource.006", 0, "0380ee8181b39a8d7b66daf61a5b7d51", 921308},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 DOS 0.000.062 EGA (5 x 5.25" disks)
	// Supplied by ssburnout in bug report #5254
	{"kq5", "EGA", {
		{"resource.map", 0, "ef4fdc72ca7aef62054e8b075d7960d8", 7596},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 413648},
		{"resource.001", 0, "c1eef048fa9fe76298c2d4705ef9549f", 1162806},
		{"resource.002", 0, "4d74e8094ff57cea6ee92faf63dbd0af", 1194799},
		{"resource.003", 0, "3cca5b2dae8afe94532edfdc98d7edbe", 1092325},
		{"resource.004", 0, "8e5c1bc4d738cf7316ff506f59d265e2", 1187803},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 DOS 0.000.062 EGA (15 x 5.25" 360k disks)
	// Supplied by ns394 in bug report #15571
	{"kq5", "EGA", {
		{"resource.map", 0, "c6c167ee097517f10eb5825678a4d9e0", 6876},
		{"resource.000", 0, "281c51f7ebbaf9d6507ef3442165069e", 180936},
		{"resource.001", 0, "0087ecc427b29c9d6e97215a1c401403", 351165},
		{"resource.002", 0, "446a416628584d0e0ecb5fd999fec26b", 355432},
		{"resource.003", 0, "b8caa1a0ebd9533a7bdef8b1777acd48", 355008},
		{"resource.004", 0, "121e271ef5e9a453a14f084171e2829c", 355459},
		{"resource.005", 0, "ea0a562146887a98be994a2ed6199e90", 308649},
		{"resource.006", 0, "9f17cf9064908491e611befae4334460", 352973},
		{"resource.007", 0, "877143d23a5e01bb68942deabed99a2b", 308216},
		{"resource.008", 0, "5f7c8b08393546048305f3eccf09e971", 272561},
		{"resource.009", 0, "a0aad5edec946254bb33ed18ea84886c", 286519},
		{"resource.010", 0, "caa65f21e62c82d994a617e1e1058f9a", 302497},
		{"resource.011", 0, "c21a052c1a64c3e470705ac9a7f490d6", 329490},
		//{"resource.012", 0, "1d3b7540f8b93b6e6b70c69c539202ba", 324620},
		//{"resource.013", 0, "178fa65916d63415e46e610f86b0ba8b", 350464},
		//{"resource.014", 0, "36a031cadaa9e2ad110157c8b6de9f4d", 319184},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 DOS Spanish Floppy EGA
	// Game version 0.000.133 from about box, 1.000 from VERSION file
	// SCI interpreter version 1.000.575
	{"kq5", "EGA", {
		{"resource.map", 0, "0dedf9d810ef864cbcc2370edaf19448", 8040},
		{"resource.000", 0, "9091979bbdbe9e40b4ff952677bf4d4b", 451270},
		{"resource.001", 0, "dd692513f878279fbf07d715dd6ddad6", 571171},
		{"resource.002", 0, "79347fba1de905023dc1549e9676e53b", 618015},
		{"resource.003", 0, "027f96c38d52276906e67304d9aaf92e", 495375},
		{"resource.004", 0, "23af8904376aa72ec45b9936be2d8280", 632343},
		{"resource.005", 0, "4a713d8aa31b74529515ea1edd3466ad", 679888},
		{"resource.006", 0, "2b54e0487820b79fcc62b72756344555", 677261},
		{"resource.007", 0, "3cedf14dff9514409508f394ddbc35e8", 552191},
		{"resource.008", 0, "bae4e3022fd09c5cd751e0945f083983", 609429},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 DOS Spanish Floppy VGA (3.5" disks)
	// Game version 0.000.162 from about box, 1.000 from VERSION file
	// SCI interpreter version 1.000.784
	// Supplied by dianiu in bug report #6121
	{"kq5", "", {
		{"resource.map", 0, "c09896a2a30c9b002c5cbbc62f5a5c3a", 8169},
		{"resource.000", 0, "1f1d03aead44da46362ff40c0074a3ec", 335871},
		{"resource.001", 0, "d1803ad904127ae091edb274ee8c047f", 1180637},
		{"resource.002", 0, "d9cd5972016f650cc31fb7c2a2b0953a", 1102207},
		{"resource.003", 0, "829c8caeff793f3cfcea2cb01aaa4150", 965586},
		{"resource.004", 0, "0bd9e570ee04b025e43d3075998fae5b", 1117965},
		{"resource.005", 0, "4aaa2e9a69089b9afbaaccbbf2c4e647", 1202936},
		{"resource.006", 0, "65b520e60c4217e6a6572d9edf77193b", 1141985},
		{"resource.007", 0, "f42b0100f0a1c30806814f8648b6bc28", 1145583},
		// MISSING: resource.008 wasn't included in the generated entries
		// but was included in a directory listing
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 DOS Spanish Floppy VGA (3.5" disks)
	// Game version 0.000.162 from about box, 1.000 from VERSION file
	// SCI interpreter version 1.000.784
	{"kq5", "", {
		{"resource.map", 0, "3e196254d84b228e735a605ca2fc3fc0", 8283},
		{"resource.000", 0, "1f1d03aead44da46362ff40c0074a3ec", 335871},
		{"resource.001", 0, "37770b6ed38fa45286388988752d2881", 1136316},
		{"resource.002", 0, "66d46bdd8f017ff11db855e796c89921", 1339480},
		{"resource.003", 0, "e5c88ef1d6cb02005a1676e1020e0786", 1323620},
		{"resource.004", 0, "829c8caeff793f3cfcea2cb01aaa4150", 1331675},
		{"resource.005", 0, "7c8476ebf77fd7fc9090ae01f4010095", 1266871},
		{"resource.006", 0, "65b520e60c4217e6a6572d9edf77193b", 1208819},
		{"resource.007", 0, "f719a33d9b3d2ee6d5fae4d182119af4", 1337045},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - German DOS Floppy EGA (5.25" 640k disks)
	// Game version 0.000.121 from about box, 1.000 from VERSION file
	// SCI interpreter version 1.000.575
	{"kq5", "EGA", {
		{"resource.map", 0, "4ca7ba8ec59f6190a841e1d4efa46ad5", 8040},
		{"resource.000", 0, "1a82e9253c727fef5c8ed655d1a42486", 451799},
		{"resource.001", 0, "326c1b81779fddd84a990e74f8fb4e27", 571810},
		{"resource.002", 0, "98961f673ef9476c6e4166aa9319b2c7", 619028},
		{"resource.003", 0, "564a92dbe7cb76ee9861e763136ae16f", 495857},
		{"resource.004", 0, "c734b48f9cf3d18370cf09778904ed10", 632541},
		{"resource.005", 0, "646f6f84c0ed677e0c77fd145f04ce3e", 679955},
		{"resource.006", 0, "16974fb4b68f8f2bf1dba483e7611590", 677478},
		{"resource.007", 0, "7cc8e8d946833f57428928fbc6c57dd6", 552483},
		{"resource.008", 0, "c9fd8d08ecc9d1e94d792416d48e71ac", 609913},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - German DOS EGA (5.25" 1.2M disks)
	// Supplied by ns394 in bug report #15636
	{"kq5", "EGA", {
		{"resource.map", 0, "b7f88d338f165437709b5f9878fe27b3", 7998},
		{"resource.000", 0, "1a82e9253c727fef5c8ed655d1a42486", 471539},
		{"resource.001", 0, "326c1b81779fddd84a990e74f8fb4e27", 1193566},
		{"resource.002", 0, "c734b48f9cf3d18370cf09778904ed10", 317970},
		{"resource.003", 0, "646f6f84c0ed677e0c77fd145f04ce3e", 1110748},
		{"resource.004", 0, "b08822ecdbf6d926dc24291614134f97", 1209355},
		{"resource.005", 0, "28b41e5ffd872ceec011a832c89aff23", 912051},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16 },

	// King's Quest 5 - German DOS Floppy VGA (supplied by markcoolio in bug report #4290, also includes english language)
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "bff44f0c326a71b1757c793a02b502d6", 8283},
		{"resource.000", 0, "d7ed18ec4a5de02a9a57830aa65a600d", 336826},
		{"resource.001", 0, "b1e5ec6a17be7e75ddb955f6f73191e4", 1136919},
		{"resource.002", 0, "04a88122db44610a4af019a579ec5ff6", 1340813},
		{"resource.003", 0, "215bb35acefae75fc80757c717166d7e", 1323916},
		{"resource.004", 0, "fecdec847e3bd8e3b0f9827900aa95fd", 1331811},
		{"resource.005", 0, "9c429782d102739f6bbb81e8b953b0cb", 1267525},
		{"resource.006", 0, "d1a75fdc01840664d00366cff6919366", 1208972},
		{"resource.007", 0, "c07494f0cce7c05210893938786a955b", 1337361},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - German DOS Floppy VGA, 9 x 5.25" disks, v0.000.149
	// VERSION file reports "1.000", SCI interpreter version 1.000.784
	{"kq5", "", {
		{"resource.map", 0, "dacbaf066987387b4ec2e8985dad70d5", 8169},
		{"resource.000", 0, "d7ed18ec4a5de02a9a57830aa65a600d", 336826},
		{"resource.001", 0, "edfd1c9f57fcdc8a7b364661016dd2ef", 1181515},
		{"resource.002", 0, "38da6dd12d0b4174a4750718b5a1af46", 1103150},
		{"resource.003", 0, "fecdec847e3bd8e3b0f9827900aa95fd", 966071},
		{"resource.004", 0, "aa30443410b2e69a74a37c92b0876bb0", 1118012},
		{"resource.005", 0, "0bc161f1d592ea5f3b3a485e1c0916a3", 1203072},
		{"resource.006", 0, "d1a75fdc01840664d00366cff6919366", 1142213},
		{"resource.007", 0, "afe76a71a45bb0678a705bd12568649f", 1145863},
		{"resource.008", 0, "119bd916bd00fc5b4a0bc424af39b98f", 1026205},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - French DOS Floppy (from the King's Quest Collector's Edition 1994, also includes english language)
	// Supplied by aroenai in bug report #4378
	// VERSION file reports "1.000", SCI interpreter version 1.000.784
	{"kq5", "", {
		{"resource.map", 0, "eb7853832f3bb10900b13b421a0bbe7f", 8283},
		{"resource.000", 0, "f063775b279208c14a83eda47073be90", 332806},
		{"resource.001", 0, "3e6add38564250fd1a5bb10593007530", 1136827},
		{"resource.002", 0, "d9a97a9cf6c79bbe8f19378f6dea45d5", 1343738},
		{"resource.003", 0, "bef90d755076c110e67ee3e635503f82", 1324811},
		{"resource.004", 0, "c14dbafcfbe00855ac6b2f2701058047", 1332216},
		{"resource.005", 0, "f4b31cafc5defac75125c5f7b7f9a31a", 1268334},
		{"resource.006", 0, "f7dc85307632ef657ceb1651204f6f51", 1210081},
		{"resource.007", 0, "7db4d0a1d8d547c0019cb7d2a6acbdd4", 1338473},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - Italian DOS Floppy (from glorifindel, includes english language)
	// SCI interpreter version 1.000.060
	{"kq5", "", {
		{"resource.map", 0, "d55c9e83894a0885e37cd79bacf86384", 8283},
		{"resource.000", 0, "c99bbb11ace4aaacdc98b588a2ecea06", 332246},
		{"resource.001", 0, "42b98457b1a7282daa27afd89eef53f4", 1136389},
		{"resource.002", 0, "8cdc160f9dfc84aed7caa6c66fa31000", 1340730},
		{"resource.003", 0, "d0cb52dc41488c018359aa79a6527f51", 1323676},
		{"resource.004", 0, "e5c57060adf2b5c6fc24142acba023da", 1331097},
		{"resource.005", 0, "f4e441f284560eaa8022102315656a7d", 1267757},
		{"resource.006", 0, "8eeabd92af71e766e323db2100879102", 1209325},
		{"resource.007", 0, "dc10c107e0923b902326a040b9c166b9", 1337859},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// King's Quest 5 - Polish DOS Floppy (supplied by jacek909 in bug report #4288)
	// SCI interpreter version 1.000.060
	// VERSION file reports "0.000.051".
	// This is actually an English version with external text resource patches (bug #6056).
	{"kq5", "", {
		{"resource.map", 0, "70010c20138541f89013bb5e1b30f16a", 7998},
		{"resource.000", 0, "a591bd4b879fc832b8095c0b3befe9e2", 276398},
		{"resource.001", 0, "c0f48d4a7ebeaa6aa074fc98d77423e9", 1018560},
		{"resource.002", 0, "7f188a95acdb60bbe32a8379ba299393", 1307048},
		{"resource.003", 0, "0860785af59518b94d54718dddcd6907", 1348500},
		{"resource.004", 0, "c4745dd1e261c22daa6477961d08bf6c", 1239887},
		{"resource.005", 0, "6556ff8e7c4d1acf6a78aea154daa76c", 1287869},
		{"resource.006", 0, "da82e4beb744731d0a151f1d4922fafa", 1170456},
		{"resource.007", 0, "431def14ca29cdb5e6a5e84d3f38f679", 1240176},
		{"text.000",     0, "601aa35a3ddeb558e1280e0963e955a2", 1517},
		AD_LISTEND},
		Common::PL_POL, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - Russian translation, based on English DOS version (bug report #11361)
	// SCI interpreter version 1.000.060
	// VERSION file reports "0.000.062"
	{"kq5", "", {
		{"resource.map", 0, "536d0eb80bc6f031cdf46bd789c0fd02", 6882},
		{"resource.000", 0, "2e06c7c14d302778ab0cd4ebd6b7c92f", 12926878},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 5 - English Macintosh
	// VERSION file reports "1.000.055"
	{"kq5", "", {
		{"resource.map", 0, "4d4bd26ac9f3014f5dae6b21cdcde747", 8598},
		{"resource.000", 0, "e8965601526ce840887b8af3a8593156", 328291},
		{"resource.001", 0, "aa2fae60f67edf2aacd43b92b59c2b3d", 1071492},
		{"resource.002", 0, "14311ed6d0f4ae0af7561470953cc466", 1373044},
		{"resource.003", 0, "aa606e541901b1dd150b49014ace6d11", 1401126},
		{"resource.004", 0, "bb81f49927cdb0ac4d902e64f2bc40ec", 1377139},
		{"resource.005", 0, "432e2a58e4d496d730697db072437337", 1366732},
		{"resource.006", 0, "3d22904a374c192f51e5665b74364133", 1264079},
		{"resource.007", 0, "ffe17e23d5833a79f3695addfc149a56", 1361965},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC },

	// King's Quest 5 - FM-Towns (supplied by abevi in bug report #5114)
	// Executable scanning reports "x.yyy.zzz", VERSION file reports "1.000.000"
	{"kq5", "", {
		{"resource.map", 0, "20c7cd248ff1a349ed354568eebd972b", 12733},
		{"resource.000", 0, "71afd220d46bde1109c58e6acc0f3a01", 469094},
		{"resource.001", 0, "72a569f46f1abf2d9d2b1526ad3799c3", 12808839},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformFMTowns, ADGF_ADDENGLISH, GUIO_STD16_HIRES },

	// King's Quest 5 - Japanese PC-98 Floppy 0.000.015 (supplied by omer_mor in bug report #5384)
	// Executable scanning reports "1.000.1025", VERSION file reports "0.000.015"
	// 4x5.25" (label: INT#10.7.91)
	{"kq5", "", {
		{"resource.map", 0, "3bca188108ec5b6ad91612483a6cbc27", 7875},
		{"resource.000", 0, "70d6a2ec17fd49a63217992fc4347cd9", 493681},
		{"resource.001", 0, "a504e91327a4d51ee4818eb72026dbe9", 950364},
		{"resource.002", 0, "0750a84ece1d89d3a952e2a2b90b525c", 911833},
		{"resource.003", 0, "6f8d552b60ec82a165619a99e19c509d", 1078032},
		{"resource.004", 0, "e114ce8f884601c43308fb5cbbea4874", 1174129},
		{"resource.005", 0, "349ad9438172265d00680075c5a988d0", 1019669},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO_STD16_HIRES	},

	// King's Quest 6 - English DOS Non-Interactive Demo
	// Executable scanning reports "1.001.055", VERSION file reports "1.000.000"
	// SCI interpreter version 1.001.055
	{"kq6", "Demo", {
		{"resource.map", 0, "f75727c00a6d884234fa2a43c951943a", 706},
		{"resource.000", 0, "535b1b920441ec73f42eaa4ccfd47b89", 264116},
		{"resource.msg", 0, "54d1fdc936f98c81f9e4c19e04fb1510", 8260},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

#undef GUIO_KQ5_CD_WINDOWS

#define GUIO_KQ6_DEMO GUIO7(GUIO_NOSPEECH,                     \
						  GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, \
	                      GAMEOPTION_PREFER_DIGITAL_SFX,       \
	                      GAMEOPTION_ORIGINAL_SAVELOAD,        \
	                      GAMEOPTION_MIDI_MODE,                \
	                      GAMEOPTION_RGB_RENDERING,            \
	                      GAMEOPTION_ENABLE_GMM_SAVE)

#define GUIO_KQ6_CD GUIO6(GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, \
						  GAMEOPTION_PREFER_DIGITAL_SFX,       \
						  GAMEOPTION_ORIGINAL_SAVELOAD,        \
						  GAMEOPTION_MIDI_MODE,                \
						  GAMEOPTION_RGB_RENDERING,            \
						  GAMEOPTION_ENABLE_GMM_SAVE)

#define GUIO_KQ6_CD_WINDOWS GUIO8(GUIO_NOASPECT,                       \
								  GAMEOPTION_WINDOWS_CURSORS,          \
								  GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, \
								  GAMEOPTION_PREFER_DIGITAL_SFX,       \
								  GAMEOPTION_ORIGINAL_SAVELOAD,        \
								  GAMEOPTION_MIDI_MODE,                \
								  GAMEOPTION_RGB_RENDERING,            \
								  GAMEOPTION_ENABLE_GMM_SAVE)

	// King's Quest 6 - English DOS Playable CD "Sneak Peaks" Demo (first island fully playable)
	//  (supplied by KQ5 G5 in bug report #6824)
	// Executable scanning reports "1.cfs.158 Not a release version", VERSION file reports "1.000.000"
	// SCI interpreter version ???
	{"kq6", "Demo/CD", {
		{"resource.map", 0, "eb9e177281b7cde188dc0d83194cd365", 8960},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8345598},
		{"resource.msg", 0, "3cf5de44de36191f109d425b8450efc8", 259510},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD | ADGF_DEMO, GUIO_KQ6_DEMO	},

	// King's Quest 6 - English DOS Floppy
	// SCI interpreter version 1.001.054
	{"kq6", "", {
		{"resource.map", 0, "a362063318eebe7d6423b1d9dc6213e1", 8703},
		{"resource.000", 0, "f2b7f753992c56a0c7a08d6a5077c895", 7863324},
		{"resource.msg", 0, "3cf5de44de36191f109d425b8450efc8", 258590},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - French DOS Floppy (supplied by misterhands in bug #6005)
	// SCI interpreter version ???
	{"kq6", "", {
		{"resource.map", 0, "a362063318eebe7d6423b1d9dc6213e1", 8703},
		{"resource.000", 0, "f2b7f753992c56a0c7a08d6a5077c895", 7863324},
		{"resource.msg", 0, "adc2aa8adbdcc97507d44a6f492fbd77", 265194},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - German DOS Floppy (supplied by markcoolio in bug report #4291)
	// SCI interpreter version 1.001.054
	{"kq6", "", {
		{"resource.map", 0, "a362063318eebe7d6423b1d9dc6213e1", 8703},
		{"resource.000", 0, "f2b7f753992c56a0c7a08d6a5077c895", 7863324},
		{"resource.msg", 0, "756297b2155db9e43f621c6f6fb763c3", 282822},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - Spanish DOS Floppy (from jvprat)
	// Executable scanning reports "1.cfs.158", VERSION file reports "1.000.000, July 5, 1994"
	// SCI interpreter version 1.001.055
	{"kq6", "", {
		{"resource.map", 0, "a73a5ab04b8f60c4b75b946a4dccea5a", 8953},
		{"resource.000", 0, "4da3ad5868a775549a7cc4f72770a58e", 8537260},
		{"resource.msg", 0, "41eed2d3893e1ca6c3695deba4e9d2e8", 267102},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - Italian DOS Floppy (supplied by guybrush79 in bug report #6258)
	{"kq6", "", {
		{"resource.map", 0, "48c9fc8e96cbdac078ca7d3df274e29a", 8942},
		{"resource.000", 0, "d3358ba7306378aed83d02b5c3f11311", 8531908},
		{"resource.msg", 0, "b7e8220be596fd6a9287eae5a8fd354a", 279886},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - English DOS CD (supplied by trembyle)
	// Executable scanning reports "1.cfs.158", VERSION file reports "1.000.000"
	// SCI interpreter version 1.001.054
	{"kq6", "CD", {
		{"resource.map", 0, "db35b0094083f81bfb0239a7a5410313", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376008},
		{"resource.msg", 0, "3cf5de44de36191f109d425b8450efc8", 259510},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_KQ6_CD	},

	// King's Quest 6 - English Windows CD (supplied by trembyle)
	// Executable scanning reports "1.001.069", VERSION file reports "1.000.000"
	{"kq6", "CD", {
		{"resource.map", 0, "db35b0094083f81bfb0239a7a5410313", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376008},
		{"resource.msg", 0, "3cf5de44de36191f109d425b8450efc8", 259510},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_KQ6_CD_WINDOWS	},

	// King's Quest 6 - English DOS CD (same version included in King's Quest Collection)
	// Executable scanning reports "1.cfs.158", VERSION file reports "1.000.00G"
	// SCI interpreter version 1.001.054
	{"kq6", "CD", {
		{"resource.map", 0, "7a550ebfeae2575ca00d47703a6a774c", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376352},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_KQ6_CD	},

	// King's Quest 6 - English Windows CD (same version included in King's Quest Collection)
	// Executable scanning reports "1.001.069", VERSION file reports "1.000.00G"
	{"kq6", "CD", {
		{"resource.map", 0, "7a550ebfeae2575ca00d47703a6a774c", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376352},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_KQ6_CD_WINDOWS	},

	// King's Quest 6 - Korean fan translation, based on English DOS Floppy
	{"kq6", "", {
		{"resource.map", 0, "a362063318eebe7d6423b1d9dc6213e1", 8703},
		{"resource.000", 0, "f2b7f753992c56a0c7a08d6a5077c895", 7863324},
		{"resource.msg", 0, "51ca9f8afc42ef442f6545b3c82a9165", 596121},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// King's Quest 6 - Korean fan translation, based on English DOS CD (from the King's Quest Collection)
	// Executable scanning reports "1.cfs.158", VERSION file reports "1.034 9/11/94 - KQ6 version 1.000.00G"
	// SCI interpreter version 1.001.054
	{"kq6", "CD", {
		{"resource.map", 0, "7a550ebfeae2575ca00d47703a6a774c", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376352},
		{"resource.msg", 0, "51ca9f8afc42ef442f6545b3c82a9165", 596121},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_CD, GUIO4(GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING)	},

	// King's Quest 6 - Korean fan translation, based on English Windows CD (from the King's Quest Collection)
	// Executable scanning reports "1.cfs.158", VERSION file reports "1.034 9/11/94 - KQ6 version 1.000.00G"
	// SCI interpreter version 1.001.054
	{"kq6", "CD", {
		{"resource.map", 0, "7a550ebfeae2575ca00d47703a6a774c", 9215},
		{"resource.000", 0, "233394a5f33b475ae5975e7e9a420865", 8376352},
		{"resource.msg", 0, "51ca9f8afc42ef442f6545b3c82a9165", 596121},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformWindows, ADGF_CD, GUIO5(GUIO_NOASPECT, GAMEOPTION_WINDOWS_CURSORS, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE)	},

	// King's Quest 6 - English Macintosh Floppy
	// VERSION file reports "1.0"
	{"kq6", "", {
		{"Data1", 0, "a183fc0c22fcbd9be4c8800d974b5599", 3891868},
		{"Data2", 0, "b3722460dfd3097a1fbaf99a21ad8ea5", 15031016},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO_STD16_MAC_HIRESFONTS },

#undef GUIO_KQ6_DEMO
#undef GUIO_KQ6_CD
#undef GUIO_KQ6_CD_WINDOWS

#define GUIO_KQ7_DEMO GUIO6(GUIO_NOSUBTITLES, \
							GUIO_NOLAUNCHLOAD, \
							GUIO_LINKMUSICTOSFX, \
							GUIO_LINKSPEECHTOSFX, \
							GUIO_NOASPECT, \
							GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_KQ7      GUIO6(GUIO_NOASPECT, \
							GUIO_LINKMUSICTOSFX, \
							GUIO_LINKSPEECHTOSFX, \
							GAMEOPTION_HQ_VIDEO, \
							GAMEOPTION_UPSCALE_VIDEOS, \
							GAMEOPTION_ENABLE_GMM_SAVE)

	// King's Quest 7 - English Windows (from the King's Quest Collection)
	// Executable scanning reports "2.100.002", VERSION file reports "1.4"
	{"kq7", "", {
		{"resource.map", 0, "2be9ab94429c721af8e05c507e048a15", 18697},
		{"resource.000", 0, "eb63ea3a2c2469dc2d777d351c626404", 203882535},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - English Windows-interpreter-only (supplied by m_kiewitz)
	// SCI interpreter version 2.100.002, VERSION file reports "1.51"
	{"kq7", "", {
		{"resource.map", 0, "838b9ff132bd6962026fee832e8a7ddb", 18697},
		{"resource.000", 0, "eb63ea3a2c2469dc2d777d351c626404", 206626576},
		{"resource.aud", 0, "c2a988a16053eb98c7b73a75139902a0", 217716879},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - German Windows-interpreter-only (supplied by markcoolio in bug report #4292)
	// SCI interpreter version 2.100.002, VERSION file reports "1.51"
	// same as English 1.51, only resource.aud/resource.sfx are different
	{"kq7", "", {
		{"resource.map", 0, "838b9ff132bd6962026fee832e8a7ddb", 18697},
		{"resource.000", 0, "eb63ea3a2c2469dc2d777d351c626404", 206626576},
		{"resource.aud", 0, "3f17bcaf8a9ff6a6c2d4de1a2078fdcc", 258119621},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - English Windows (from abevi)
	// VERSION 1.65c
	{"kq7", "", {
		{"resource.map", 0, "40ccafb2195301504eba2e4f4f2c7f3d", 18925},
		{"resource.000", 0, "4948e4e1506f1e1c4e1d47abfa06b7f8", 204385195},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - German Windows (from blumentopferde in bug report Trac#9738)
	// VERSION 1.65c
	{"kq7", "", {
		{"resource.map", 0, "59d234e4fd61c1377f659c8479a513fb", 18925},
		{"resource.000", 0, "4948e4e1506f1e1c4e1d47abfa06b7f8", 204385195},
		{"resource.aud", 0, "3d0ee18dab2d1ad1f171d1bbc0f8d080", 242391379},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - French Windows (from gatesbillou)
	// VERSION 1.51
	{"kq7", "", {
		{"resource.map", 0, "838b9ff132bd6962026fee832e8a7ddb", 18697},
		{"resource.000", 0, "eb63ea3a2c2469dc2d777d351c626404", 206626576},
		{"resource.aud", 0, "d8b89ef2f7248c63d5810f2e49fb7255", 205546166},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - French Windows (from bgK)
	// VERSION 1.65c
	{"kq7", "", {
		{"resource.map", 0, "a134fc9138b0830d8197877c52ed7aaa", 18925},
		{"resource.000", 0, "4948e4e1506f1e1c4e1d47abfa06b7f8", 204385195},
		{"resource.aud", 0, "d8b89ef2f7248c63d5810f2e49fb7255", 205546166},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - English DOS (from FRG)
	// SCI interpreter version 2.100.002, VERSION file reports "2.00b"
	{"kq7", "", {
		{"resource.map", 0, "8676b0fbbd7362989a029fe72fea14c6", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		// Having the same number of files in the detection entries is needed
		// for the DOS version to have equal priority to the Windows version
		// that is detected with additional files, and we might as well check
		// for the DOS-specific files here too since there are at least some
		// Windows-only releases of this game too
		{"avi/91.rbt",   0, NULL,                               AD_NO_SIZE},
		{"avi/911.rbt",  0, NULL,                               AD_NO_SIZE},
		{"avi/912.rbt",  0, NULL,                               AD_NO_SIZE},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - English Windows (from FRG)
	// SCI interpreter version 2.100.002, VERSION file reports "2.00b"
	{"kq7", "", {
		{"resource.map", 0, "8676b0fbbd7362989a029fe72fea14c6", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		// We need to look for these AVIs before enabling the Windows version
		// because GOG.com releases are missing them. Their contents do not
		// matter (some users replace them with higher quality versions created
		// from the rare 1.65c release, which should not cause a detection
		// failure)
		{"avi/e108x11.avi",  0, NULL,                           AD_NO_SIZE},
		{"avi/e208x11.avi",  0, NULL,                           AD_NO_SIZE},
		{"avi/int08x11.avi", 0, NULL,                           AD_NO_SIZE},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Italian DOS (from dego93 on bug report Trac#9739)
	// VERSION file reports "2.00"
	{"kq7", "", {
		{"resource.map", 0, "c174fb32f045112e210373a31681d97f", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		{"resource.aud", 0, "649ce88c0786c0ed4b637728d20ddc9b", 202663332},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Italian Windows (from dego93 on bug report Trac#9739)
	// VERSION file reports "2.00"
	{"kq7", "", {
		{"resource.map", 0, "c174fb32f045112e210373a31681d97f", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		{"resource.aud", 0, "649ce88c0786c0ed4b637728d20ddc9b", 202663332},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Spanish DOS (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "2.00"
	{"kq7", "", {
		{"resource.map", 0, "0b62693cbe87e3aaca3e8655a437f27f", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Spanish Windows (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "2.00"
	{"kq7", "", {
		{"resource.map", 0, "0b62693cbe87e3aaca3e8655a437f27f", 18709},
		{"resource.000", 0, "51c1ead1163e19a2de8f121c39df7a76", 200764100},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Japanese DOS (from m-kiewitz) - bug #15497
	// VERSION file reports "2.00"
	// This version features only Japanese. There is no option to change the language.
	// Chapter intro titles are still in English.
	{"kq7", "", {
		{"resource.000", 0, "5e2f38ebf13188d5724e02254bfe0e4d", 90064291},
		{"resource.map", 0, "ba6a4523df6f5bd321bcfb8ae55a66c1", 19177},
		{"resource.aud", 0, "78ba3c42efc9451baa5af1da8e289d4f", 220633894},
		{"avi/91.rbt", 0, "cc68d78315156f2d6a71b2b00eca90ea", 24701699},
		{"avi/911.rbt", 0, "10250547c9f0767df37f726f335c1415", 8781594},
		{"avi/912.rbt", 0, "c4cbebcaa58f6ab364a40896502271e8", 1373456},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Japanese Windows (from m-kiewitz) - bug #15497
	// VERSION file reports "2.00"
	// This version features only Japanese. There is no option to change the language.
	// Chapter intro titles are still in English.
	{"kq7", "", {
		{"resource.000", 0, "5e2f38ebf13188d5724e02254bfe0e4d", 90064291},
		{"resource.map", 0, "ba6a4523df6f5bd321bcfb8ae55a66c1", 19177},
		{"resource.aud", 0, "78ba3c42efc9451baa5af1da8e289d4f", 220633894},
		{"avi/e208x11.avi", 0, "11b0f6994a6cea61ce4efe047c84553d", 2014412},
		{"avi/int08x11.avi", 0, "1e3e1448901ebbaa88071740f1a1e31e", 22547356},
		{"avi/e108x11.avi", 0, "8daba53eeb77756c434bf52237e39b3b", 9991834},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - Russian Windows (SoftClub official translation)
	// VERSION file reports "2.1b", provided by trcpman in Trac #11302.
	// This version is Windows-only. It does not include a DOS interpreter and
	// only the Windows AVI files were translated. The DOS RBT files weren't.
	{"kq7", "", {
		{"resource.map", 0, "dd1504ee0274e4e3b8447b25137136df", 18709},
		{"resource.000", 0, "e6cee6c1ddb1e73e8c25d8f2a9f508ff", 200873632},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_KQ7 },

	// King's Quest 7 - English DOS/Win Non-Interactive Demo
	// Demo from original PQ4CD release has only the Windows interpreter
	// SCI interpreter version 2.100.002
	{"kq7", "Demo", {
		{"resource.map", 0, "b44f774108d63faa1d021101221c5a54", 1690},
		{"resource.000", 0, "d9659d2cf0c269c6a9dc776707f5bea0", 2433827},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_KQ7_DEMO },

	// King's Quest 7 - English Windows Demo (from DrMcCoy)
	// SCI interpreter version 2.100.002
	{"kq7", "Demo", {
		{"resource.map", 0, "38e627a37a975aea40cc72b0518b0709", 18412},
		{"resource.000", 0, "bad61d50aaa64298fa57a7c6ccd3bccf", 84020382},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO, GUIO_KQ7_DEMO },

	// King's Quest 7 - English Macintosh
	{"kq7", "", {
		{"Data1", 0, "e0d120473fee7a548b1418b18bffbd7d", 4964390},
		{"Data2", 0, "a260b97fb2396a9cd6ac3df6a56a2499", 14645526},
		{"Data3", 0, "a5a660a469c9ba7b179ba9757181d2af", 6664132},
		{"Data4", 0, "556721a5e3f158c0a7a39e428402dd1f", 6438695},
		{"Data5", 0, "c38c2f51c9c2bafd5fefdffca83bd372", 6661270},
		{"Data6", 0, "2054e1ec891cad31b5c647b57eccff9c", 4489456},
		{"Data7", 0, "c6e634ea56f6f82954baeab9c468c47b", 7552281},
		{"Data8", 0, "5b4d7cc7b1b7fdd262c1f65bb9c8af5f", 7478101},
		{"Data9", 0, "7aba74ca9a52fba1199ab06f602bd268", 7304378},
		{"Data10", 0, "2ee17c2a1037067ecc218a7b65582062", 7066690},
		{"Data11", 0, "5df02ec2b6289bd84cd97a9bc677773e", 7555697},
		{"Data12", 0, "4a8cebdff7f8d431dbcd36d39c5af29e", 6925678},
		{"Data13", 0, "3dd2903e170518011d3bc0eadada399a", 7071130},
		//{"Data14", 0, "60d8435ae44c7e0e1d553269bf8a58e0", 7871952},
		//{"Data15", 0, "4c4c33e93a2352473c1adf9e3981e6ca", 6924022},
		//{"Data16", 0, "753d9bddf035bbb5391119e8dc0f464a", 3970827},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_KQ7 },

#undef GUIO_KQ7_DEMO
#undef GUIO_KQ7

	// King's Questions mini-game from the King's Quest Collection
	// SCI interpreter version 2.000.000
	{"kquestions", "", {
		{"resource.map", 0, "93a2251fa64e729d7a7d2fe56b217c8e", 502},
		{"resource.000", 0, "9b1cddecd4f0720d83661ba7aed28891", 162697},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO7(GUIO_NOSUBTITLES, GUIO_NOMUSIC, GUIO_NOSPEECH, GUIO_NOSFX, GUIO_NOMIDI, GUIO_NOLAUNCHLOAD, GAMEOPTION_RGB_RENDERING)	},

	// Laura Bow - English Amiga
	// Executable scanning reports "1.002.030"
	// SCI interpreter version 0.000.685
	{"laurabow", "", {
		{"resource.map", 0, "731ab85e138f8cef1a7f4d1f36dfd375", 7422},
		{"resource.000", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 126317},
		{"resource.001", 0, "42fe895e9eb60e103025fd9ca737a849", 264763},
		{"resource.002", 0, "6f1ebd3692ce76644e0e06a38b7b56b5", 677436},
		{"resource.003", 0, "2ab23f64306b18c28302c8ec2964c5d6", 605134},
		{"resource.004", 0, "aa553977f7e5804081de293800d3bcce", 695067},
		{"resource.005", 0, "bfd870d51dc97729f0914095f58e6957", 676881},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Laura Bow - English Atari ST (from jvprat)
	// Executable scanning reports "1.002.030", Floppy label reports "1.000.062, 9.23.90"
	// SCI interpreter version 0.000.685
	{"laurabow", "", {
		{"resource.map", 0, "9f90878e6e1b8c96e692203f068ce2b1", 8478},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 515964},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 721149},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 667365},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 683737},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Laura Bow - English DOS Non-Interactive Demo
	// Executable scanning reports "x.yyy.zzz"
	{"laurabow", "Demo", {
		{"resource.map", 0, "e625726268ff4e123ada11f31f0249f3", 768},
		{"resource.001", 0, "0c8912290af0890f8d95faeb4ddb2d68", 333031},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Laura Bow - English DOS 3.5" Floppy (from "The Roberta Williams Anthology"/1996)
	// SCI interpreter version 0.000.631
	{"laurabow", "", {
		{"resource.map", 0, "4e511f47d9893fa529d6621a93fa0030", 8478},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 515788},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 721381},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 667468},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 683807},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Laura Bow - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS 3.5" Floppy (from "The Roberta Williams Anthology"/1996)
	// SCI interpreter version 0.000.631
	{ "laurabow", "", {
		{"resource.map", 0, "4e511f47d9893fa529d6621a93fa0030", 8478},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 515788},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 721381},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 667468},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 683807},
		{"PATCHES/font.000", 0, "5053e202adbd7a4fdebb30b2ea76ce27", 2835},
		{"PATCHES/font.001", 0, "f65565f3375ac9972c96fd81c3eb491e", 2709},
		{"PATCHES/font.004", 0, "4dfbf96cba4c181e9d52eb9e49570b1d", 2256},
		{"PATCHES/font.008", 0, "8abefd3b44827ff26e2ad298f9e76a2b", 3029},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Laura Bow - Russian fan translation by https://github.com/deadman2000/RuSCI
	// SCI interpreter version 0.000.631
	{"laurabow", "", {
		{"resource.map", 0, "b1905f6aa68ff65a057b080b1eae954c", 12030},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 108032},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 354680},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 361815},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 339714},
		{"resource.005", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 327465},
		{"resource.006", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 328390},
		{"resource.007", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 317687},
		{"resource.008", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 352345},
		{"resource.009", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 257355},
		{"resource.010", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 356093},
		{"Translate.RU", 0, "3f730611f55257821b964f96eafea0ba", 171}, // Text file for detecting translation
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Laura Bow - English DOS (from FRG)
	// SCI interpreter version 0.000.631
	{"laurabow", "", {
		{"resource.map", 0, "b1905f6aa68ff65a057b080b1eae954c", 12030},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 108032},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 354680},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 361815},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 339714},
		{"resource.005", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 327465},
		{"resource.006", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 328390},
		{"resource.007", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 317687},
		{"resource.008", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 352345},
		{"resource.009", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 257355},
		{"resource.010", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 356093},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Laura Bow - Hebrew DOS (from FRG)
	// SCI interpreter version 0.000.631
	{"laurabow", "", {
		{"resource.map", 0, "b1905f6aa68ff65a057b080b1eae954c", 12030},
		{"resource.001", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 108032},
		{"resource.002", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 354680},
		{"resource.003", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 361815},
		{"resource.004", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 339714},
		{"resource.005", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 327465},
		{"resource.006", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 328390},
		{"resource.007", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 317687},
		{"resource.008", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 352345},
		{"resource.009", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 257355},
		{"resource.010", 0, "e45c888d9c7c04aec0a20e9f820b79ff", 356093},
		{"PATCHES/font.000", 0, "5053e202adbd7a4fdebb30b2ea76ce27", 2835},
		{"PATCHES/font.001", 0, "f65565f3375ac9972c96fd81c3eb491e", 2709},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

#define GUIO_LB2_CD_WINDOWS GUIO6(GAMEOPTION_PREFER_DIGITAL_SFX,	\
							GAMEOPTION_WINDOWS_CURSORS,				\
							GAMEOPTION_ORIGINAL_SAVELOAD,			\
							GAMEOPTION_MIDI_MODE,					\
							GAMEOPTION_RGB_RENDERING,				\
							GAMEOPTION_ENABLE_GMM_SAVE)

	// Laura Bow 2 - English DOS Non-Interactive Demo (from FRG)
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 1.001.069 (just a guess)
	{"laurabow2", "Demo", {
		{"resource.map", 0, "24dffc5db1d88c7999f13e8767ed7346", 855},
		{"resource.000", 0, "2b2b1b4f7584f9b38fd13f6ab95634d1", 781912},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Laura Bow 2 - English DOS Floppy v1.0
	// Executable scanning reports "2.000.274"
	// SCI interpreter version 1.001.069 (just a guess)
	{"laurabow2", "", {
		{"resource.map", 0, "610bfd9a852004222f0faaf5fc9e630a", 6489},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5035964},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Laura Bow 2 v1.1 - English DOS Floppy (supplied by misterhands in bug report #6543)
	// Executable scanning reports "2.000.274"
	{"laurabow2", "", {
		{"resource.map", 0, "3b6dfbcda210bbc3f23fd1927113bf98", 6483},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5028766},
		{"resource.msg", 0, "d1755fc4f41b5210febc9410503c6a29", 278354},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Laura Bow 2 - English DOS CD
	// Executable scanning reports "1.001.072", VERSION file reports "1.1" (from jvprat)
	{"laurabow2", "CD", {
		{"resource.map", 0, "a70945e61ba7ac7bfea6b7bd72c6aec5", 7274},
		{"resource.000", 0, "82578b8d5a7e09c4c58891ca49fae35b", 5598672},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Laura Bow 2 - English Windows CD
	// Executable scanning reports "1.001.072", VERSION file reports "1.1" (from jvprat)
	{"laurabow2", "CD", {
		{"resource.map", 0, "a70945e61ba7ac7bfea6b7bd72c6aec5", 7274},
		{"resource.000", 0, "82578b8d5a7e09c4c58891ca49fae35b", 5598672},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_LB2_CD_WINDOWS	},

	// Laura Bow 2 - Korean fan translation, based on English DOS CD
	// Executable scanning reports "1.001.072", VERSION file reports "1.1"
	{"laurabow2", "CD", {
		{"resource.map", 0, "a70945e61ba7ac7bfea6b7bd72c6aec5", 7274},
		{"resource.000", 0, "82578b8d5a7e09c4c58891ca49fae35b", 5598672},
		{"resource.msg", 0, "bdc2167ebe55612b8ff17347f70e2b83", 561801},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Laura Bow 2 - French fan translation, based on English DOS CD
	// Executable scanning reports "1.001.072", VERSION file reports "1.1"
	{"laurabow2", "CD", {
		{"resource.map", 0, "a70945e61ba7ac7bfea6b7bd72c6aec5", 7274},
		{"resource.000", 0, "82578b8d5a7e09c4c58891ca49fae35b", 5598672},
		{"patch/0.fon",  0, "539b7c355c8b7915de2c0396790c46aa", 2767},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Laura Bow 2 v1.1 - French DOS Floppy (from Hkz)
	{"laurabow2", "", {
		{"resource.map", 0, "3b6dfbcda210bbc3f23fd1927113bf98", 6483},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5028766},
		{"resource.msg", 0, "0fceedfbdd85a4bc7851fdd9dd2d2f19", 278253},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Laura Bow 2 v1.1 - German DOS Floppy (from Tobis87, updated info from  markcoolio in bug report #4270, updated info from #4355))
	// Executable scanning reports "2.000.274"
	{"laurabow2", "", {
		{"resource.map", 0, "3b6dfbcda210bbc3f23fd1927113bf98", 6483},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5028766},
		{"resource.msg", 0, "795c928cd00dfec9fbc62ebcd12e1f65", 303185},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Laura Bow 2 - Spanish DOS floppy (from sluicebox)
	// Executable scanning reports "2.000.274", VERSION file reports "1.1"
	{"laurabow2", "", {
		{"resource.map", 0, "3b6dfbcda210bbc3f23fd1927113bf98", 6483},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5028766},
		{"resource.msg", 0, "c28ba1d0326d06eab69f94d9a70f5389", 285797},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Laura Bow 2 - Spanish DOS CD (from jvprat)
	// This is the floppy version (text-only) distributed on a CD.
	// Executable scanning reports "2.000.274", VERSION file reports "1.000.000, May 10, 1994"
	{"laurabow2", "", {
		{"resource.map", 0, "3b6dfbcda210bbc3f23fd1927113bf98", 6483},
		{"resource.000", 0, "57084910bc923bff5d6d9bc1b56e9604", 5028766},
		{"resource.msg", 0, "71f1f0cd9f082da2e750c793a8ed9d84", 286141},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

#undef GUIO_LB2_CD_WINDOWS

#define GUIO_LIGHTHOUSE_DEMO GUIO6(GUIO_NOSPEECH, \
								   GUIO_NOMUSIC, \
								   GUIO_NOASPECT, \
								   GUIO_NOMIDI, \
								   GUIO_NOLAUNCHLOAD, \
								   GAMEOPTION_HQ_VIDEO)
#define GUIO_LIGHTHOUSE      GUIO9(GUIO_NOASPECT, \
								   GUIO_NOMIDI, \
								   GUIO_NOSUBTITLES, \
								   GUIO_LINKMUSICTOSFX, \
								   GUIO_LINKSPEECHTOSFX, \
								   GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
								   GAMEOPTION_ORIGINAL_SAVELOAD, \
								   GAMEOPTION_HQ_VIDEO, \
								   GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_LIGHTHOUSE_MAC  GUIO8(GUIO_NOASPECT, \
								   GUIO_NOMIDI, \
								   GUIO_NOSUBTITLES, \
								   GUIO_LINKMUSICTOSFX, \
								   GUIO_LINKSPEECHTOSFX, \
								   GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
								   GAMEOPTION_HQ_VIDEO, \
								   GAMEOPTION_ENABLE_GMM_SAVE)

	// Lighthouse - English Windows Demo (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.00", plays 2.VMD
	{"lighthouse", "Non-interactive Demo", {
		{"resource.map", 0, "543124606352bfa5e07696ddf2a669be", 64},
		{"resource.000", 0, "5d7714416b612463d750fb9c5690c859", 28952},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_LIGHTHOUSE_DEMO },

	// Lighthouse - English Windows Demo (from trembyle)
	// Found on CD-Action (Poland) #8a - Jan 1997
	// Executable scanning reports "2.100.002", VERSION file reports "1.00", plays 3.VMD
	{"lighthouse", "Non-interactive Demo", {
		{"resource.map", 0, "999c2db3ca39c83c18ba6f16095b4c64", 64},
		{"resource.000", 0, "bed2bafe872ffa1e7bfe6d706fac1c81", 28951},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_LIGHTHOUSE_DEMO },

	// Lighthouse - English Windows Demo
	// Executable scanning reports "3.000.000", VERSION file reports "1.00"
	{"lighthouse", "Demo", {
		{"resmap.000", 0, "3bdee7a16926975a4729f75cf6b80a92", 1525},
		{"ressci.000", 0, "3c585827fa4a82f4c04a56a0bc52ccee", 11494351},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_LIGHTHOUSE_DEMO },

	// Lighthouse - English Windows Glider Demo
	// Executable scanning reports "3.000.000"
	{"lighthouse", "Glider Demo", {
		{"resmap.000", 0, "fca5bec5f778fc3f86d3176dc4ae6e54", 346},
		{"ressci.000", 0, "896e81b6d70940c3b0696ef51cee51bc", 3300500},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_LIGHTHOUSE_DEMO },

	// Lighthouse - English DOS (from jvprat)
	// Executable scanning reports "3.000.000", VERSION file reports "1.1"
	{"lighthouse", "", {
		{"resmap.001", 0, "47abc502c0b541b582db28f38dbc6a56", 7801},
		{"ressci.001", 0, "14e922c47b92156377cb49e241691792", 99591924},
		{"resmap.002", 0, "c68db5333f152fea6ca2dfc75cad8b34", 7573},
		{"ressci.002", 0, "175468431a979b9f317c294ce3bc1430", 94628315},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - Japanese DOS (from m_kiewitz)
	// Executable scanning reports "3.000.000", VERSION file reports "1.0C"
	{"lighthouse", "", {
		{"resmap.001", 0, "18e0ac1597fe1cf6dc663118fe983e3b", 7885},
		{"ressci.001", 0, "14e922c47b92156377cb49e241691792", 99573473},
		{"resmap.002", 0, "723fc742c623d8933e5753a264324cb0", 7657},
		{"ressci.002", 0, "175468431a979b9f317c294ce3bc1430", 94627469},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - Spanish DOS (from jvprat)
	// Executable scanning reports "3.000.000", VERSION file reports "1.1"
	{"lighthouse", "", {
		{"resmap.001", 0, "c5d49b2a8a4eafc92fd041a3a0f2da68", 7846},
		{"ressci.001", 0, "18553177dbf83fb2cb6c8edcbb174183", 99543093},
		{"resmap.002", 0, "e7dc85884a2417e2eff9de0c63dd65fa", 7630},
		{"ressci.002", 0, "3c8d627c555b0e3e4f1d9955bc0f0df4", 94631127},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - French DOS (from bgK)
	// Executable scanning reports "3.000.000", VERSION file reports "1.1"
	{"lighthouse", "", {
		{"resmap.001", 0, "911c9cc5f49d4a96ff836154d3a86a8f", 7876},
		{"ressci.001", 0, "dbb615146ec943e4ff7764a485c90511", 122516760},
		{"resmap.002", 0, "703e7ab04bd358e76bc098995d71f36a", 7642},
		{"ressci.002", 0, "6635764dc258b2041ca9a387e5aaab25", 115212682},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - German DOS (from bug #10359)
	{"lighthouse", "", {
		{"resmap.001", 0, "d2dc13bb936d6528a19feac92fc7df1c", 7852},
		{"ressci.001", 0, "dbb615146ec943e4ff7764a485c90511", 122330257},
		{"resmap.002", 0, "8fdb8544d801057d3123539d8e6d039a", 7618},
		{"ressci.002", 0, "6635764dc258b2041ca9a387e5aaab25", 115026179},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - French DOS
	// VERSION file reports "1.0c"
	{"lighthouse", "", {
		{"resmap.001", 0, "7f768cb4ee53026ea8fc662e44e7c0de", 7870},
		{"ressci.001", 0, "dbb615146ec943e4ff7764a485c90511", 122184234},
		{"resmap.002", 0, "3fa427abab4c1d7bbea3033c064fc182", 7636},
		{"ressci.002", 0, "6635764dc258b2041ca9a387e5aaab25", 114880156},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - Italian DOS
	// VERSION file reports "1.0"
	{"lighthouse", "", {
		{"resmap.001", 0, "4e07734dcfdb593f755a05dc43ca4532", 7846},
		{"ressci.001", 0, "dbb615146ec943e4ff7764a485c90511", 121894854},
		{"resmap.002", 0, "012a93dc0612f62142afabb673b157aa", 7612},
		{"ressci.002", 0, "6635764dc258b2041ca9a387e5aaab25", 114590776},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LIGHTHOUSE },

	// Lighthouse - English Macintosh CD
	// NOTE: This only contains disc 1 files
	{ "lighthouse", "", {
		{"Data1", 0, "9fd95df4288bcc5f07b114bbeabaa89a", 7498699},
		{"Data2", 0, "97a5c80a12eee099349748a72b9f561a", 11278743},
		{"Data3", 0, "51085a80ec0f448938d279dc3464e1b1", 8295543},
		{"Data4", 0, "8c01d5243c62868207c144125de46c5a", 9132372},
		{"Data5", 0, "6830ea75c4459533ba6c11a09a886a8a", 9096411},
		{"Data6", 0, "b7b207a5d9faa1192aa566d484ffdde6", 9294332},
		{"Data7", 0, "87156321c318e6b61c84d7600f5cd28a", 1689949},
		{"Data8", 0, "c486982e4169eb42096029ee1635b2ae", 7514992},
		{"Data9", 0, "e5f5ad0cab47eb4b2240e3843ed5fe3c", 9833704},
		{"Data10", 0, "9fd95df4288bcc5f07b114bbeabaa89a", 5298282},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_LIGHTHOUSE_MAC },

#undef GUIO_LIGHTHOUSE_DEMO
#undef GUIO_LIGHTHOUSE
#undef GUIO_LIGHTHOUSE_MAC

	// Larry 1 EGA Remake - English DOS (from spookypeanut)
	// SCI interpreter version 0.000.510 (or 0.000.577?)
	{"lsl1sci", "SCI/EGA", {
		{"resource.map", 0, "abc0dc50c55de5b9723bb6de193f8756", 3282},
		{"resource.000", 0, "d3bceaebef3f7be941c2038b3565161e", 451366},
		{"resource.001", 0, "38936d3c68b6f79d3ffb13955713fed7", 591352},
		{"resource.002", 0, "24c958bc922b07f91e25e8c93aa01fcf", 491230},
		{"resource.003", 0, "685cd6c1e05a695ab1e0db826337ee2a", 553279},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 1 Remake - English Amiga
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.784
	// NOTE: The resource.002 file, contained in disk 3, is broken in the
	// www.back2roots.org version (it contains a large chunk of zeroes and
	// several broken resources, e.g. pic 250 and views 250 and 251).
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "7d115a9e27dc8ac71e8d5ef33d589bd5", 3366},
		{"resource.000", 0, "e67fd129d5810fc7ad8ea509d891cc00", 363073},
		{"resource.001", 0, "24ed6dc01b1e7fbc66c3d63a5994549a", 750465},
		{"resource.002", 0, "5790ac0505f7ca98d4567132b875eb1e", 681041},
		{"resource.003", 0, "4a34c3367c2fe7eb380d741374da1989", 572251},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 1 VGA Remake - English DOS (from spookypeanut)
	// Executable scanning reports "1.000.577", VERSION file reports "2.1"
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "6d04d26466337a1a64b8c6c0eb65c9a9", 3222},
		{"resource.000", 0, "d3bceaebef3f7be941c2038b3565161e", 922406},
		{"resource.001", 0, "ec20246209d7b19f38989261e5c8f5b8", 1111226},
		{"resource.002", 0, "85d6935ef77e6b0e16bc307640a0d913", 1088312},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 1 VGA Remake - English DOS (from FRG)
	// SCI interpreter version 1.000.510
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "8606b083b011a0cc4a1fbfc2198a0a77", 3198},
		{"resource.000", 0, "d3bceaebef3f7be941c2038b3565161e", 918242},
		{"resource.001", 0, "d34cadb11e1aefbb497cf91bc1d3baa7", 1114688},
		{"resource.002", 0, "85b030bb66d5342b0a068f1208c431a8", 1078443},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 1 VGA Remake - English Macintosh (from omer_mor, bug report #5774)
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "6395e7f7881e37e39d81ff5175a35f6f", 3237},
		{"resource.000", 0, "5933df4ea688584d6f59fdea5a9404f8", 989066},
		{"resource.001", 0, "aa6f153f70f1e32d1bde465fff08eecf", 1137418},
		{"resource.002", 0, "b22c616aa789ebef990290c7ffd86548", 1097477},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_HIRESFONTS },

	// Larry 1 VGA Remake - English DOS Non-Interactive Demo
	// SCI interpreter version 1.000.084
	{"lsl1sci", "SCI/Demo", {
		{"resource.map", 0, "434e1f6c39d71647b34f0ee57b2bbd68", 444},
		{"resource.001", 0, "0c0768215c562d9dace4a5ca53696cf3", 359913},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Larry 1 VGA Remake - Spanish DOS (from the Leisure Suit Larry Collection, also includes english language)
	// Executable scanning reports "1.SQ4.057", VERSION file reports "1.000"
	// This version is known to be corrupted
	// SCI interpreter version 1.000.510
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "4fbe5c25878d51d7b2a68b710de4491b", 3327},
		{"resource.000", 0, "5e501a9bf8c753bf4c96158042422f00", 839172},
		{"resource.001", 0, "112648995dbc194037f1e4ed2e195910", 1063341},
		{"resource.002", 0, "3fe2a3aec0ed53c7d6db1845a67e3aa2", 1095908},
		{"resource.003", 0, "ac175df0ea9a2cba57f0248651856d27", 376556},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 1 EGA Remake - Spanish DOS
	// Executable scanning reports "1.SQ4.056", VERSION file reports "1.000"
	{"lsl1sci", "SCI/EGA", {
		{"resource.map", 0, "c07cf88e6c69a432f1d11f660faa996a", 3333},
		{"resource.000", 0, "5e501a9bf8c753bf4c96158042422f00", 502971},
		{"resource.001", 0, "112648995dbc194037f1e4ed2e195910", 610960},
		{"resource.002", 0, "3fe2a3aec0ed53c7d6db1845a67e3aa2", 518218},
		{"resource.003", 0, "2b21fab32a5f49ff871b3ff696d51214", 578780},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 1 VGA Remake - Russian DOS (also includes english language?!)
	// Executable scanning reports "1.000.510", VERSION file reports "2.0"
	// SCI interpreter version 1.000.510
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "b54413d35e206d21ae2b2bdb092bd13a", 3198},
		{"resource.000", 0, "0d7b2afa666bd36d9535a15d3a837a66", 928566},
		{"resource.001", 0, "bc8ca10c807515d959cbd91f9ba47735", 1123759},
		{"resource.002", 0, "b7409ab32bc3bee2d6cce887cd33f2b6", 1092160},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 1 VGA Remake - Polish DOS (from Polish Leisure Suit Larry Collection, official release)
	// SCI interpreter version 1.000.577, VERSION file reports "2.1" (this release does NOT include english text)
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "58330a85767e42a2487129913283ab5b", 3228},
		{"resource.000", 0, "b6097ff35cdc8469f02150fe2f824198", 4781210},
		AD_LISTEND},
		Common::PL_POL, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 1 VGA Remake - French fan patch, includes English language
	// This is the "2.1" patch applied to English version 2.1. bug report #12034
	{"lsl1sci", "SCI", {
		{"resource.map", 0, "bbf22cacfcf6ef7e7578045fafad805d", 3337},
		{"resource.000", 0, "5e501a9bf8c753bf4c96158042422f00", 1938733},
		{"resource.001", 0, "112648995dbc194037f1e4ed2e195910", 1063341},
		{"resource.002", 0, "3fe2a3aec0ed53c7d6db1845a67e3aa2", 1095908},
		{"resource.003", 0, "ac175df0ea9a2cba57f0248651856d27", 376556},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16},

	// Larry 2 - English Amiga (from www.back2roots.org)
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 0.000.572
	{"lsl2", "", {
		{"resource.map", 0, "e36ce0fc94d1678d15acbf12d84ec47d", 6612},
		{"resource.001", 0, "a0d4a625311d307257da7fc43d00459d", 409124},
		{"resource.002", 0, "a0d4a625311d307257da7fc43d00459d", 630106},
		{"resource.003", 0, "a0d4a625311d307257da7fc43d00459d", 570356},
		{"resource.004", 0, "a0d4a625311d307257da7fc43d00459d", 717844},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English Atari ST
	// Game version 1.001.006
	// Executable reports "1.000.159" 1988-12-02 12:22 p.m.
	{"lsl2", "", {
		{"resource.map", 0, "2fc3ce7da1346e4dadfee18606d814fc", 4758},
		{"resource.001", 0, "4a24443a25e2b1492462a52809605dc2", 477342},
		{"resource.002", 0, "4a24443a25e2b1492462a52809605dc2", 406698},
		{"resource.003", 0, "4a24443a25e2b1492462a52809605dc2", 592433},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English DOS Non-Interactive Demo
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 0.000.409
	{"lsl2", "Demo", {
		{"resource.map", 0, "03dba704bb77da55a91ad27b5a3cac09", 528},
		{"resource.001", 0, "9f5520f0297206928df0b0b36493cd33", 127532},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English DOS
	// Game version 1.002.000
	// SCI interpreter version 0.000.409
	{"lsl2", "", {
		{"resource.map", 0, "42258cf767a8ebaa9e66b6151a80e601", 5628},
		{"resource.001", 0, "4a24443a25e2b1492462a52809605dc2", 143847},
		{"resource.002", 0, "4a24443a25e2b1492462a52809605dc2", 348331},
		{"resource.003", 0, "4a24443a25e2b1492462a52809605dc2", 236550},
		{"resource.004", 0, "4a24443a25e2b1492462a52809605dc2", 204861},
		{"resource.005", 0, "4a24443a25e2b1492462a52809605dc2", 277732},
		{"resource.006", 0, "4a24443a25e2b1492462a52809605dc2", 345683},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English DOS
	// Game version 1.000.011
	// SCI interpreter version 0.000.343
	{"lsl2", "", {
		{"resource.map", 0, "6bd43c92eaf561f64818116eed683fcf", 5598},
		{"resource.001", 0, "96033f57accfca903750413fd09193c8", 140526},
		{"resource.002", 0, "96033f57accfca903750413fd09193c8", 348672},
		{"resource.003", 0, "96033f57accfca903750413fd09193c8", 236676},
		{"resource.004", 0, "96033f57accfca903750413fd09193c8", 204867},
		{"resource.005", 0, "96033f57accfca903750413fd09193c8", 274953},
		{"resource.006", 0, "96033f57accfca903750413fd09193c8", 345818},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English DOS (supplied by ssburnout in bug report #5270)
	// 1.000.011 3x3.5" (label: Int. #0.000.343)
	{"lsl2", "", {
		{"resource.map", 0, "e5caa855a5be78c53a6a92157d0b9f5c", 4740},
		{"resource.001", 0, "96033f57accfca903750413fd09193c8", 474642},
		{"resource.002", 0, "96033f57accfca903750413fd09193c8", 407014},
		{"resource.003", 0, "96033f57accfca903750413fd09193c8", 592834},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English DOS (supplied by ssburnout in bug report #5270)
	// 1.002.000 3x3.5" (label: INT#0.000.409)
	{"lsl2", "", {
		{"resource.map", 0, "2c9c3b0923e3764f5ab999bcb71c2d47", 4758},
		{"resource.001", 0, "4a24443a25e2b1492462a52809605dc2", 477625},
		{"resource.002", 0, "4a24443a25e2b1492462a52809605dc2", 406935},
		{"resource.003", 0, "4a24443a25e2b1492462a52809605dc2", 592533},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - English Atari ST (Kixx)
	// Game version 1.002.000
	// Executable reports "1.001.008" 1989-01-12 16:30
	{"lsl2", "", {
		{"resource.map", 0, "2c9c3b0923e3764f5ab999bcb71c2d47", 4758},
		{"resource.001", 0, "4a24443a25e2b1492462a52809605dc2", 477625},
		{"resource.002", 0, "4a24443a25e2b1492462a52809605dc2", 406935},
		{"resource.003", 0, "4a24443a25e2b1492462a52809605dc2", 592533},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 2 - Polish DOS (from Polish Leisure Suit Larry Collection, official release)
	// Game version 1.002.000
	// SCI interpreter version 0.000.409, localized resources are all patch files.
	// resource_patcher.cpp depends on this entry to fix corrupt Polish fonts.
	{"lsl2", "", {
		{"resource.map", 0, "42258cf767a8ebaa9e66b6151a80e601", 5628},
		{"resource.001", 0, "4a24443a25e2b1492462a52809605dc2", 143847},
		{"resource.002", 0, "4a24443a25e2b1492462a52809605dc2", 348331},
		{"resource.003", 0, "4a24443a25e2b1492462a52809605dc2", 236550},
		{"resource.004", 0, "4a24443a25e2b1492462a52809605dc2", 204861},
		{"resource.005", 0, "4a24443a25e2b1492462a52809605dc2", 277732},
		{"resource.006", 0, "4a24443a25e2b1492462a52809605dc2", 345683},
		// Polish fonts
		{"font.000",     0, "8b65d8ee6d6041f3ac387d32c759165f", 1919},
		{"font.001",     0, "48356355a52bb14df7bdaa253d20b26a", 1705},
		{"font.004",     0, "3ce72dd3e8396f7d0fb81a37f4966a8a", 1458},
		{"font.007",     0, "29afa8f8d5a211b15885b8f4d90cc2ee", 4029},
		{"font.999",     0, "54801847b35893632a131171b9cebc15", 1368},
		AD_LISTEND},
		Common::PL_POL, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Larry 3 - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.002.032"
	// SCI interpreter version 0.000.685
	{"lsl3", "", {
		{"resource.map", 0, "4a6da6322ce189431b5ffbac992bad3a", 5328},
		{"resource.000", 0, "cdc2e21e297b10fe8fed6377af8c5698", 66523},
		{"resource.001", 0, "6abbaf8c7e3b36dd868868ed187e8995", 71761},
		{"resource.002", 0, "a883424fe6d594fec0cd5a79e7ad54c8", 476490},
		{"resource.003", 0, "5c10e462c8cf589610773e4fe8bfd996", 527238},
		{"resource.004", 0, "f408e59cbee1457f042e5773b8c53951", 651634},
		{"resource.005", 0, "433911eb764089d493aed1f958a5615a", 524259},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 3 - English Amiga
	// Executable scanning reports "1.002.006"
	// Game version 1.027
	{"lsl3", "", {
		{"resource.map", 0, "4c39724c91f53afe08a1350172a2b67a", 5328},
		{"resource.000", 0, "cdc2e21e297b10fe8fed6377af8c5698", 66472},
		{"resource.001", 0, "6abbaf8c7e3b36dd868868ed187e8995", 71761},
		{"resource.002", 0, "a883424fe6d594fec0cd5a79e7ad54c8", 477285},
		{"resource.003", 0, "5c10e462c8cf589610773e4fe8bfd996", 526871},
		{"resource.004", 0, "f408e59cbee1457f042e5773b8c53951", 651637},
		{"resource.005", 0, "433911eb764089d493aed1f958a5615a", 523993},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 3 - German Amiga (from sluicebox, also includes English language)
	// Game version 1.000, 1991-01-07
	// Executable scanning reports "1.004.010"
	{ "lsl3", "",{
		{ "resource.map", 0, "9d9abcdf2acd1dba9dba6ba6c24835f0", 6984 },
		{ "resource.001", 0, "17bfd686d59accc3fb3f079ad9278e66", 206673 },
		{ "resource.002", 0, "17bfd686d59accc3fb3f079ad9278e66", 375899 },
		{ "resource.003", 0, "17bfd686d59accc3fb3f079ad9278e66", 734462 },
		{ "resource.004", 0, "17bfd686d59accc3fb3f079ad9278e66", 658874 },
		{ "resource.005", 0, "17bfd686d59accc3fb3f079ad9278e66", 794252 },
		AD_LISTEND },
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16 },

	// Larry 3 - English Atari ST
	// Game version 1.021, 1990-01-27
	// Int#6.26.90
	// Executable scanning reports "1.002.026"
	{"lsl3", "", {
		{"resource.map", 0, "0b6bd3e039682830a51c5755c06591db", 5916},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 456722},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 578024},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 506807},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 513651},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 3 - English DOS (supplied by ssburnout in bug report #5270)
	// 1.021 8x5.25" (label: Int#5.15.90)
	{"lsl3", "", {
		{"resource.map", 0, "a39a20580362af3437352dbc717734f8", 7452},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 141515},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 345494},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 329220},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 290303},
		{"resource.005", 0, "f18441027154292836b973c655fa3175", 303905},
		{"resource.006", 0, "f18441027154292836b973c655fa3175", 282649},
		{"resource.007", 0, "f18441027154292836b973c655fa3175", 257178},
		{"resource.008", 0, "f18441027154292836b973c655fa3175", 285874},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Larry 3 - English DOS
	// Game version 1.003, 1989-10-27
	// SCI interpreter version 0.000.572
	{"lsl3", "", {
		{"resource.map", 0, "0f429f5186f96d6c501838a1cb44bd43", 7452},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 141381},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 345171},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 329214},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 290173},
		{"resource.005", 0, "f18441027154292836b973c655fa3175", 302946},
		{"resource.006", 0, "f18441027154292836b973c655fa3175", 282465},
		{"resource.007", 0, "f18441027154292836b973c655fa3175", 257174},
		{"resource.008", 0, "f18441027154292836b973c655fa3175", 285888},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Larry 3 - English DOS
	// SCI interpreter version 0.000.572
	{"lsl3", "", {
		{"resource.map", 0, "0b6bd3e039682830a51c5755c06591db", 5916},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 456722},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 578024},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 506807},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 513651},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Larry 3 - English DOS (supplied by kervala in bug report #6282)
	{"lsl3", "", {
		{"resource.map", 0, "534d8946f10bc71a71b5bf89a84c31be", 5916},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 456265},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 577059},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 506817},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 513337},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Larry 3 - English DOS Non-Interactive Demo
	// SCI interpreter version 0.000.530
	{"lsl3", "Demo", {
		{"resource.map", 0, "33a2384f395470af3d2180e37ad0322a", 1140},
		{"resource.001", 0, "f773d79b93dfd4052ec8c1cc64c1e6ab", 76525},
		{"resource.002", 0, "f773d79b93dfd4052ec8c1cc64c1e6ab", 268299},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Larry 3 - German DOS (from Tobis87, updated info from markcoolio in bug report #4274, also includes english language)
	// Executable scanning reports "S.old.123"
	// SCI interpreter version 0.000.572 (just a guess)
	{"lsl3", "", {
		{"resource.map", 0, "4a77c8382e48a90c4168d3c144fc1b8f", 6480},
		{"resource.001", 0, "3827a9b17b926e12dcc336860f50612a", 460488},
		{"resource.002", 0, "3827a9b17b926e12dcc336860f50612a", 672403},
		{"resource.003", 0, "3827a9b17b926e12dcc336860f50612a", 587036},
		{"resource.004", 0, "3827a9b17b926e12dcc336860f50612a", 691932},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16_UNDITHER	},

	// Larry 3 - German DOS (German+English, 5 1/4" floppies)
	// SCI interpreter version S.old.114 (executable), VERSION is "1.056"
	{"lsl3", "", {
		{"resource.map", 0, "2468da5d664bb6ca3df866074a05e43c", 8910},
		{"resource.001", 0, "3827a9b17b926e12dcc336860f50612a", 163326},
		{"resource.002", 0, "3827a9b17b926e12dcc336860f50612a", 312436},
		{"resource.003", 0, "3827a9b17b926e12dcc336860f50612a", 347307},
		{"resource.004", 0, "3827a9b17b926e12dcc336860f50612a", 332369},
		{"resource.005", 0, "3827a9b17b926e12dcc336860f50612a", 347654},
		{"resource.006", 0, "3827a9b17b926e12dcc336860f50612a", 326011},
		{"resource.007", 0, "3827a9b17b926e12dcc336860f50612a", 309553},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16_UNDITHER	},

	// Larry 3 - French DOS (provided by richiefs in bug report #4214, also includes english language)
	// Executable scanning reports "S.old.123"
	// SCI interpreter version 0.000.572 (just a guess)
	{"lsl3", "", {
		{"resource.map", 0, "13541234d440c7988a13582468b0e4be", 6480},
		{"resource.001", 0, "65f1bdaa20f6d0470e9d969f22473873", 457402},
		{"resource.002", 0, "65f1bdaa20f6d0470e9d969f22473873", 671614},
		{"resource.003", 0, "65f1bdaa20f6d0470e9d969f22473873", 586921},
		{"resource.004", 0, "65f1bdaa20f6d0470e9d969f22473873", 690826},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16_UNDITHER	},

	// Larry 3 1.050 Fr/En (9 x 5.25" disks)
	// Provided by ssburnout in bug report #5253
	{"lsl3", "", {
		{"resource.map", 0, "527277cee7b31dd603229443b48e70c4", 8910},
		{"resource.001", 0, "65f1bdaa20f6d0470e9d969f22473873", 162132},
		{"resource.002", 0, "65f1bdaa20f6d0470e9d969f22473873", 309705},
		{"resource.003", 0, "65f1bdaa20f6d0470e9d969f22473873", 346507},
		{"resource.004", 0, "65f1bdaa20f6d0470e9d969f22473873", 331947},
		{"resource.005", 0, "65f1bdaa20f6d0470e9d969f22473873", 347136},
		{"resource.006", 0, "65f1bdaa20f6d0470e9d969f22473873", 325292},
		{"resource.007", 0, "65f1bdaa20f6d0470e9d969f22473873", 308982},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 3 - Polish DOS (from Polish Leisure Suit Larry Collection, official release)
	// Game version 1.021
	// SCI interpreter version 0.000.572, localized resources are all patch files.
	// resource_patcher.cpp depends on this entry to fix corrupt Polish fonts.
	{"lsl3", "", {
		{"resource.map", 0, "0b6bd3e039682830a51c5755c06591db", 5916},
		{"resource.001", 0, "f18441027154292836b973c655fa3175", 456722},
		{"resource.002", 0, "f18441027154292836b973c655fa3175", 578024},
		{"resource.003", 0, "f18441027154292836b973c655fa3175", 506807},
		{"resource.004", 0, "f18441027154292836b973c655fa3175", 513651},
		// Polish fonts
		{"font.000",     0, "8b65d8ee6d6041f3ac387d32c759165f", 1919},
		{"font.001",     0, "48356355a52bb14df7bdaa253d20b26a", 1705},
		{"font.004",     0, "3ce72dd3e8396f7d0fb81a37f4966a8a", 1458},
		{"font.007",     0, "4341dc13d2be54bf80bb1cbd59aede4c", 4757},
		{"font.009",     0, "aec40fb5c623ba23bd12123edcf84d7f", 3683},
		{"font.999",     0, "54801847b35893632a131171b9cebc15", 1368},
		AD_LISTEND},
		Common::PL_POL, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Larry 5 - English Amiga
	// Executable scanning reports "1.004.023"
	// SCI interpreter version 1.000.784
	{"lsl5", "", {
		{"resource.map", 0, "e36052ae0c8b14d6f074bcb0aee50a38", 6096},
		{"resource.000", 0, "d8b58ce10de52aa16f8b2006838c4fcc", 310510},
		{"resource.001", 0, "8caa8fbb50ea43f3efdfb66f1e68998b", 800646},
		{"resource.002", 0, "abdaa299e00c908052d33cd82eb60e9b", 784576},
		{"resource.003", 0, "810ad1d61638c27a780576cb09f18ed7", 805941},
		{"resource.004", 0, "3ce5901f1bc171ac0274d99a4eeb9e57", 623022},
		{"resource.005", 0, "f8b2d1137bb767e5d232056b99dd69eb", 623621},
		{"resource.006", 0, "bafc64e3144f115dc58c6aee02de98fb", 715598},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 5 - German Amiga (also includes english language)
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.784
	{"lsl5", "", {
		{"resource.map", 0, "863326c2eb5160f0b0960e159e8bf954", 6372},
		{"resource.000", 0, "5113d03db08e3da77a5b61294001331b", 357525},
		{"resource.001", 0, "59eba83ad465b08d763b44f86afa86f6", 837566},
		{"resource.002", 0, "59eba83ad465b08d763b44f86afa86f6", 622229},
		{"resource.003", 0, "59eba83ad465b08d763b44f86afa86f6", 383690},
		{"resource.004", 0, "59eba83ad465b08d763b44f86afa86f6", 654296},
		{"resource.005", 0, "59eba83ad465b08d763b44f86afa86f6", 664717},
		{"resource.006", 0, "bafc64e3144f115dc58c6aee02de98fb", 754966},
		{"resource.007", 0, "59eba83ad465b08d763b44f86afa86f6", 683135},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 5 - English DOS Non-Interactive Demo (from FRG)
	// SCI interpreter version 1.000.181
	{"lsl5", "Demo", {
		{"resource.map", 0, "efe8d3f45ce4f6bd9a6643e0ac8d2a97", 504},
		{"resource.001", 0, "8bd8d9c0b5f455ee1269d63ce86c50dd", 531380},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Larry 5 - English DOS (from spookypeanut)
	// Game version 1.000, 1991-09-11
	// Executable scanning reports "T.A00.169"
	// SCI interpreter version 1.000.510
	{"lsl5", "", {
		{"resource.map", 0, "be00ef895197754ae4eab021ca44cbcd", 6417},
		{"resource.000", 0, "f671ab479df0c661b19cd16237692846", 726823},
		{"resource.001", 0, "db4a1381d88028876a99303bfaaba893", 751296},
		{"resource.002", 0, "d39d8db1a1e7806e7ccbfea3ef22df44", 1137646},
		{"resource.003", 0, "13fd4942bb818f9acd2970d66fca6509", 768599},
		{"resource.004", 0, "999f407c9f38f937d4b8c4230ff5bb38", 1024516},
		{"resource.005", 0, "0cc8d35a744031c772ca7cd21ae95273", 1011944},
		{"resource.006", 0, "dda27ce00682aa76198dac124bbbe334", 1024810},
		{"resource.007", 0, "ac443fae1285fb359bf2b2bc6a7301ae", 1030656},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 5 - English Macintosh (from omer_mor, bug report #5773)
	{"lsl5", "", {
		{"resource.map", 0, "f12439da78b9878e16436661deb83f84", 6525},
		{"resource.000", 0, "f2537473213d70e7f4fc82e988ab90ca", 702403},
		{"resource.001", 0, "db4a1381d88028876a99303bfaaba893", 704679},
		{"resource.002", 0, "e86aeb27711f4a673e06ec32cfc84125", 1125854},
		{"resource.003", 0, "13fd4942bb818f9acd2970d66fca6509", 854733},
		{"resource.004", 0, "999f407c9f38f937d4b8c4230ff5bb38", 1046644},
		{"resource.005", 0, "0cc8d35a744031c772ca7cd21ae95273", 1008293},
		{"resource.006", 0, "dda27ce00682aa76198dac124bbbe334", 1110043},
		{"resource.007", 0, "ac443fae1285fb359bf2b2bc6a7301ae", 989801},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_HIRESFONTS },

	// Larry 5 - German DOS (from Tobis87)
	// SCI interpreter version T.A00.196
	{"lsl5", "", {
		{"resource.map", 0, "c97297aa76d4dd2ed144c7b7769e2caf", 6867},
		{"resource.000", 0, "4c00c14b8181ad47076a51d86097d97e", 759095},
		{"resource.001", 0, "245c44f8ccd796732e61857e67b30079", 918742},
		{"resource.002", 0, "e86aeb27711f4a673e06ec32cfc84125", 947382},
		{"resource.003", 0, "74edc89d8c1cb346ca346081b927e4c6", 1006884},
		{"resource.004", 0, "999f407c9f38f937d4b8c4230ff5bb38", 1023776},
		{"resource.005", 0, "0cc8d35a744031c772ca7cd21ae95273", 959342},
		{"resource.006", 0, "dda27ce00682aa76198dac124bbbe334", 1021774},
		{"resource.007", 0, "ac443fae1285fb359bf2b2bc6a7301ae", 993408},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 5 - German DOS EGA (3.5" 720k disks)
	// Supplied by ns394 in bug report #15634
	{"lsl5", "EGA", {
		{"resource.map", 0, "d0dbfd29402def6adce3052433979275", 6603},
		{"resource.000", 0, "4c00c14b8181ad47076a51d86097d97e", 313454},
		{"resource.001", 0, "1d631b16ffba2484fcb41af8f0016010", 445473},
		{"resource.002", 0, "c2cb2dec12e26f6243bc1b78e4e84940", 636986},
		{"resource.003", 0, "f8e876302a3aba5bcaab5c51db6b6532", 723502},
		{"resource.004", 0, "16f4d8fb1b526125edaca4fc6cbb7530", 548747},
		{"resource.005", 0, "6043b2cc23d663e6a01b25bd0e4de55e", 581585},
		{"resource.006", 0, "f6046a8445422f17d40b1b10ab21ebf3", 593549},
		{"resource.007", 0, "640ee65595d40372ef95462f2c1ae28a", 619199},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16 },

	// Larry 5 - French DOS (provided by richiefs in bug report #4214)
	// Executable scanning reports "1.lsl5.019"
	// SCI interpreter version 1.000.510 (just a guess)
	{"lsl5", "", {
		{"resource.map", 0, "499898e652dc41b51e368ae41acce41f", 7023},
		{"resource.000", 0, "4c00c14b8181ad47076a51d86097d97e", 958096},
		{"resource.001", 0, "245c44f8ccd796732e61857e67b30079", 1196765},
		{"resource.002", 0, "e86aeb27711f4a673e06ec32cfc84125", 948898},
		{"resource.003", 0, "74edc89d8c1cb346ca346081b927e4c6", 1006608},
		{"resource.004", 0, "999f407c9f38f937d4b8c4230ff5bb38", 971293},
		{"resource.005", 0, "0cc8d35a744031c772ca7cd21ae95273", 920524},
		{"resource.006", 0, "dda27ce00682aa76198dac124bbbe334", 946540},
		{"resource.007", 0, "ac443fae1285fb359bf2b2bc6a7301ae", 958842},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 5 - Spanish DOS (from the Leisure Suit Larry Collection)
	// Executable scanning reports "1.ls5.006", VERSION file reports "1.000, 4/21/92"
	// SCI interpreter version 1.000.510 (just a guess)
	{"lsl5", "", {
		{"resource.map", 0, "b6f7da7bf24e5a6b2946032cec3ea59c", 6861},
		{"resource.000", 0, "4c00c14b8181ad47076a51d86097d97e", 765418},
		{"resource.001", 0, "245c44f8ccd796732e61857e67b30079", 916028},
		{"resource.002", 0, "e86aeb27711f4a673e06ec32cfc84125", 929645},
		{"resource.003", 0, "74edc89d8c1cb346ca346081b927e4c6", 1005496},
		{"resource.004", 0, "999f407c9f38f937d4b8c4230ff5bb38", 1021996},
		{"resource.005", 0, "0cc8d35a744031c772ca7cd21ae95273", 958079},
		{"resource.006", 0, "dda27ce00682aa76198dac124bbbe334", 1015136},
		{"resource.007", 0, "ac443fae1285fb359bf2b2bc6a7301ae", 987222},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Larry 5 - Italian DOS Floppy (from glorifindel)
	// SCI interpreter version 1.000.510 (just a guess)
	{"lsl5", "", {
		{"resource.map", 0, "a99776df795127f387cb35dae872d4e4", 5919},
		{"resource.000", 0, "a8989a5a89e7d4f702b26b378c7a357a", 7001981},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 5 1.0 EGA DOS (8 x 3.5" disks)
	// Provided by ssburnout in bug report #5259
	{"lsl5", "EGA", {
		{"resource.map", 0, "1370ae356fdda2e7f9ea56dda3ff9a57", 6597},
		{"resource.000", 0, "f2537473213d70e7f4fc82e988ab90ca", 248416},
		{"resource.001", 0, "bb642b0b0f879aca98addd62d901387e", 445841},
		{"resource.002", 0, "c2cb2dec12e26f6243bc1b78e4e84940", 617030},
		{"resource.003", 0, "f8e876302a3aba5bcaab5c51db6b6532", 682911},
		{"resource.004", 0, "16f4d8fb1b526125edaca4fc6cbb7530", 530230},
		{"resource.005", 0, "6043b2cc23d663e6a01b25bd0e4de55e", 576442},
		{"resource.006", 0, "f6046a8445422f17d40b1b10ab21ebf3", 568551},
		{"resource.007", 0, "640ee65595d40372ef95462f2c1ae28a", 593429},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 5 EGA
	// Supplied by omer_mor in bug report #5281
	{"lsl5", "EGA", {
		{"resource.map", 0, "89dbf8006985ec0c547ffe125c25ebf9", 6255},
		{"resource.000", 0, "f2537473213d70e7f4fc82e988ab90ca", 765747},
		{"resource.001", 0, "bb642b0b0f879aca98addd62d901387e", 1196260},
		{"resource.002", 0, "5a55af4e40728b1a8103dc47ad2afa8d", 1100539},
		{"resource.003", 0, "16f4d8fb1b526125edaca4fc6cbb7530", 1064563},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 6 - English DOS (from spookypeanut)
	// SCI interpreter version 1.001.113
	{"lsl6", "", {
		{"resource.map", 0, "bb8a39d9e2a77ba449a1e591109ad9a8", 6973},
		{"resource.000", 0, "4462fe48c7452d98fddcec327a3e738d", 5789138},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 6 - German DOS Floppy - LOWRES (provided by stefan80 in bug report #11475)
	// SCI interpreter version 1.001.113
	{"lsl6", "", {
		{"resource.map", 0, "fa225986ebf26056d469ee1277839ebe", 6943},
		{"resource.000", 0, "7884a8db9253e29e6b37a2651fd90ba3", 5748608},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16 },

	// Larry 6 - French DOS Floppy - LOWRES (provided by theco33)
	// SCI interpreter version 1.001.113
	{"lsl6", "", {
		{"resource.map", 0, "1e07144d3b06a3269236880170978acb", 6943},
		{"resource.000", 0, "7884a8db9253e29e6b37a2651fd90ba3", 5749882},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 6 - English/German/French DOS CD - LOWRES
	// SCI interpreter version 1.001.115
	{"lsl6", "CD", {
		{"resource.map", 0, "0b91234b7112782962cb480b7791b6e2", 7263},
		{"resource.000", 0, "57d5fe8bb9e044158514476ea7678eb0", 5754790},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Larry 6 - German DOS CD - LOWRES (provided by richiefs in bug report #4214)
	// SCI interpreter version 1.001.115
	{"lsl6", "CD", {
		{"resource.map", 0, "bafe85f32738854135991d4324ad147e", 7268},
		{"resource.000", 0, "f6cbc6da7b90ea135883e0759848ca2c", 5773160},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Larry 6 - French DOS CD - LOWRES (provided by richiefs in bug report #4214)
	// SCI interpreter version 1.001.115
	{"lsl6", "CD", {
		{"resource.map", 0, "97797ea775baaf18a1907d357d3c0ea6", 7268},
		{"resource.000", 0, "f6cbc6da7b90ea135883e0759848ca2c", 5776092},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Larry 6 - Spanish DOS - LOWRES (from the Leisure Suit Larry Collection)
	// Executable scanning reports "1.001.113", VERSION file reports "1.000, 11.06.93, FIVE PATCHES ADDED TO DISK 6 ON 11-18-93"
	{"lsl6", "", {
		{"resource.map", 0, "633bf8f42170b6271019917c8009989b", 6943},
		{"resource.000", 0, "7884a8db9253e29e6b37a2651fd90ba3", 5733116},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Larry 6 - English Macintosh Floppy (provided by sluicebox)
	// VERSION file reports "1.0"
	{"lsl6", "", {
		{"Data1", 0, "482e6bcdda3a89390d5c4bcbfb5896b4", 2754651},
		{"Data2", 0, "ba0799a45076780dfbceb8fce4c549c9", 5846089},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_STD16_MAC_HIRESFONTS },

	// Crazy Nick's Software Picks: Leisure Suit Larry's Casino - English DOS (from the Leisure Suit Larry Collection)
	// Executable scanning reports "1.001.029", VERSION file reports "1.000"
	{"cnick-lsl", "", {
		{"resource.map", 0, "194f1578f2624db813c9072359ad1639", 783},
		{"resource.001", 0, "3733433b517ec3d14a3331d9ab3842ae", 344830},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Crazy Nick's Software Picks: King Graham's Board Game Challenge
	{"cnick-kq", "", {
		{"resource.map", 0, "44bc538a5cd24b39ffccc967c0ebf84d", 1137},
		{"resource.001", 0, "470e7a4a3504635e70b623c44461e1ac", 451272},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Crazy Nick's Software Picks: Parlor Games with Laura Bow
	{"cnick-laurabow", "", {
		{"resource.map", 0, "3b826bfe64f8ff1ccf30eef93cd2f727", 999},
		{"resource.001", 0, "985ac8db6f636f2b4334c04b0fbb44fb", 336698},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Crazy Nick's Software Picks: Robin Hood's Game of Skill and Chance
	{"cnick-longbow", "", {
		{"resource.map", 0, "4a5c81f485a2416bde12978506f2fb5f", 897},
		{"resource.001", 0, "ef16dc9e867eb8eeb5b13e110b90bd4b", 571466},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Crazy Nick's Software Picks: Roger Wilco's Spaced Out Game Pack
	{"cnick-sq", "", {
		{"resource.map", 0, "b4d95b02d84e297441bd999d34eaa6b1", 879},
		{"resource.001", 0, "82ff2b64a60117886fbcd6a3a8c977c6", 364921},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#define GUIO_LSL6HIRES GUIO4(GUIO_NOASPECT, \
							 GUIO_LINKSPEECHTOSFX, \
							 GAMEOPTION_ORIGINAL_SAVELOAD, \
							 GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_LSL6HIRES_MAC GUIO3(GUIO_NOASPECT, \
								 GUIO_LINKSPEECHTOSFX, \
								 GAMEOPTION_ENABLE_GMM_SAVE)

	// Larry 6 - English/German DOS CD - HIRES
	// SCI interpreter version 2.100.002
	{"lsl6hires", "Hi-res", {
		{"resource.map", 0, "0c0804434ea62278dd15032b1947426c", 8872},
		{"resource.000", 0, "9a9f4870504444cda863dd14d077a680", 18520872},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL6HIRES },

	// Larry 6 - German DOS CD - HIRES (provided by richiefs in bug report #4214)
	// SCI interpreter version 2.100.002
	{"lsl6hires", "Hi-res", {
		{"resource.map", 0, "badfdf446ffed569a310d2c63a249421", 8896},
		{"resource.000", 0, "bd944d2b06614a5b39f1586906f0ee88", 18534274},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL6HIRES },

	// Larry 6 - French DOS CD - HIRES (provided by richiefs in bug report #4214)
	// SCI interpreter version 2.100.002
	{"lsl6hires", "Hi-res", {
		{"resource.map", 0, "d184e9aa4f2d4b5670ddb3669db82cda", 8896},
		{"resource.000", 0, "bd944d2b06614a5b39f1586906f0ee88", 18538987},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL6HIRES },

	// Larry 6 - Russian DOS CD - HIRES (by CDS, Ltd)
	// SCI interpreter version 2.100.002
	{"lsl6hires", "Hi-res", {
		{"resource.map", 0, "343089c5fc86d156b15087dccf30712c", 8872},
		{"resource.000", 0, "9a9f4870504444cda863dd14d077a680", 18508781},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL6HIRES },

	// Larry 6 - English Macintosh CD - HIRES (provided by michaelklaube in bug report #11218)
	{"lsl6hires", "Hi-res", {
		{"Data1", 0, "2c4e00a6910490831d4d84e9e6a49ec4", 3456238},
		{"Data2", 0, "a7522b925dd5422c2db2b0a2337c76c3", 5856422},
		{"Data3", 0, "9ebb490ec63721e5261111b918b5520e", 5577742},
		{"Data4", 0, "d70687689ff3cf19a5e3c79dfced1c94", 3472064},
		{"Data5", 0, "e91c3b681095a263fcb2f2c8d8fc74b6", 3273843},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_LSL6HIRES_MAC },

	// Larry 6 - English Macintosh CD - HIRES (provided by eriktorbjorn)
	// This version has the same game resources as the previous entry.
	// Data1 contains an additional six byte resource named DESCRIPT.ION
	{"lsl6hires", "Hi-res", {
		{"Data1", 0, "2c4e00a6910490831d4d84e9e6a49ec4", 3456235},
		{"Data2", 0, "a7522b925dd5422c2db2b0a2337c76c3", 5856422},
		{"Data3", 0, "9ebb490ec63721e5261111b918b5520e", 5577742},
		{"Data4", 0, "d70687689ff3cf19a5e3c79dfced1c94", 3472064},
		{"Data5", 0, "e91c3b681095a263fcb2f2c8d8fc74b6", 3273843},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_LSL6HIRES_MAC },

#undef GUIO_LSL6HIRES
#undef GUIO_LSL6HIRES_MAC

#define GUIO_LSL7_DEMO GUIO4(GUIO_NOASPECT, \
							 GUIO_NOMIDI, \
							 GUIO_NOLAUNCHLOAD, \
							 GAMEOPTION_LARRYSCALE)
#define GUIO_LSL7      GUIO7(GUIO_NOASPECT, \
							 GUIO_NOMIDI, \
							 GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							 GAMEOPTION_ORIGINAL_SAVELOAD, \
							 GAMEOPTION_HQ_VIDEO, \
							 GAMEOPTION_LARRYSCALE, \
							 GAMEOPTION_ENABLE_GMM_SAVE)

	// Larry 7 - English DOS Demo (provided by richiefs in bug report #4214)
	// SCI interpreter version 2.100.002
	{"lsl7", "Demo", {
		{"ressci.000", 0, "5cc6159688b2dc03790a67c90ccc67f9", 10195878},
		{"resmap.000", 0, "6a2b2811eef82e87cde91cf1de845af8", 2695},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_LSL7_DEMO },

	// Larry 7 - English DOS CD (from spookypeanut)
	// SCI interpreter version 3.000.000
	{"lsl7", "", {
		{"resmap.000", 0, "eae93e1b1d1ccc58b4691c371281c95d", 8188},
		{"ressci.000", 0, "89353723488219e25589165d73ed663e", 66965678},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - German DOS (from Tobis87)
	// SCI interpreter version 3.000.000
	{"lsl7", "", {
		{"resmap.000", 0, "c11e6bfcfc2f2d05da47e5a7df3e9b1a", 8188},
		{"ressci.000", 0, "a8c6817bb94f332ff498a71c8b47f893", 66971724},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - French DOS (provided by richiefs in bug report #4214)
	// SCI interpreter version 3.000.000
	{"lsl7", "", {
		{"resmap.000", 0, "4407849fd52fe3efb0c30fba60cd5cd4", 8206},
		{"ressci.000", 0, "dc37c3055fffbefb494ff22b145d377b", 66964472},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - Italian DOS CD (from glorifindel)
	// SCI interpreter version 3.000.000
	{"lsl7", "", {
		{"resmap.000", 0, "9852a97141f789413f29bf956052acdb", 8212},
		{"ressci.000", 0, "440b9fed89590abb4e4386ed6f948ee2", 67140181},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - Spanish DOS (from the Leisure Suit Larry Collection)
	// Executable scanning reports "3.000.000", VERSION file reports "1.0s"
	{"lsl7", "", {
		{"resmap.000", 0, "8f3d603e1acc834a5d598b30cdfc93f3", 8188},
		{"ressci.000", 0, "32792f9bc1bf3633a88b382bb3f6e40d", 67071418},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - Russian DOS CD (from StalinEXE bug report #10638), Softclub
	{"lsl7", "Softclub", {
		{"resmap.000", 0, "39cc96426409572e825a5d9a4e9507b9", 8188},
		{"ressci.000", 0, "07002ad7b1cff28c6701eea201dcf6c8", 145215917},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - Russian DOS CD (Fargus)
	// SCI interpreter version 3.000.000
	{"lsl7", "Fargus", {
		{"resmap.000", 0, "6c2f829436c18f0304b5a189295aeea6", 8188},
		{"ressci.000", 0, "f7ed06aa59c74d55027d481405b22c2f", 67069114},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - Polish DOS (GOG.com release 1.01v2)
	// Executable scanning reports "3.000.000", VERSION file reports "1.01"
	{"lsl7", "", {
		{"resmap.000", 0, "eae93e1b1d1ccc58b4691c371281c95d", 8188},
		{"ressci.000", 0, "89353723488219e25589165d73ed663e", 66965678},
		{"resource.aud", 0, "d7b26b5df5ee6766b2dbd45b427b0074", 417594676},
		AD_LISTEND},
		Common::PL_POL, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_LSL7 },

	// Larry 7 - English Macintosh CD
	{"lsl7", "", {
		{"Data1", 0, "824a48b794c334b4bcf37e80fcc5f82e", 913030},
		{"Data2", 0, "be36c59a3a694e14ed6d86e6ccc180a4", 7549687},
		{"Data3", 0, "8325c7d702ffa8dd2854135e0f42b0d0", 6815441},
		{"Data4", 0, "4584f786e0b5a502938d3cd90e6fab56", 8168939},
		{"Data5", 0, "94bd026d27ba526d1f8d86d8e783acdd", 7452223},
		{"Data6", 0, "c6a60210244a8591ecf10a50975ab9db", 8119104},
		{"Data7", 0, "0d52c9764e047169f3d50f76d0cb5ae5", 8164529},
		{"Data8", 0, "6f4838585ceb8a9ac277d13291c81235", 7754627},
		{"Data9", 0, "68c0b7bd4aebf57e215f0517247a11d1", 8078955},
		{"Data10", 0, "3dbacbcf4bd6d1b25aa8baeb3e2c4dab", 6446692},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_LSL7 },

#undef GUIO_LSL7_DEMO
#undef GUIO_LSL7

	// Mixed-Up Fairy Tales v1.000 - English DOS Non-Interactive Demo
	{"fairytales", "Demo", {
		{"resource.map", 0, "c2cf672c3f4251e7472d4542af3bf764", 933},
		{"resource.000", 0, "8be56a3a88c065ee00c02c0e29199f3a", 14643},
		{"resource.001", 0, "9e33566515b18bee7915db448063bba2", 871853},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Mixed-Up Fairy Tales - English DOS Floppy EGA (from omer_mor, bug report #4991)
	{"fairytales", "EGA", {
		{"resource.map", 0, "daa94e9f327be6657eb97a51b490dbb1", 3219},
		{"resource.000", 0, "6dc287611e510793b72e73110bbdd45d", 17819},
		{"resource.001", 0, "5ad26e7af4d4c3a3185c66a44abd5220", 478401},
		{"resource.002", 0, "4db83250f821607b634c99d663cae74a", 663713},
		{"resource.003", 0, "509b2467ba779100d5933ed51a9ae32f", 560255},
		{"resource.004", 0, "93afc85d5ffa60ea555d6cc336d22c03", 651109},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Mixed-Up Fairy Tales - English DOS Floppy EGA (from misterhands, bug report #6596)
	// Version 1.0, interpreter 1.000.158, INT# 11.23.91
	{"fairytales", "EGA", {
		{"resource.map", 0, "de9e151517013af15e0baf7bd8cbfe0b", 3243},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 840595},
		{"resource.001", 0, "6ef4acdab49bdcaccf649640ddb12e9a", 115071},
		{"resource.002", 0, "020d8c9da753a30899dd10c4463682db", 762020},
		{"resource.003", 0, "9e0dea6b2bfd6cf0007cceb866bcbfb3", 670688},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Mixed-Up Fairy Tales v1.000 - English DOS (supplied by markcoolio in bug report #4271)
	// Executable scanning reports "1.000.145"
	{"fairytales", "", {
		{"resource.map", 0, "9ae5aecc1cb797b11ea5cf0caeea272c", 3261},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 923685},
		{"resource.001", 0, "49c8f7dcd9989e4491a93554bec325b0", 52324},
		{"resource.002", 0, "6767f8c8585f617aaa91d442f41ae714", 1032989},
		{"resource.003", 0, "b1288e0821ee358d1ffe877e5900c8ec", 1047565},
		{"resource.004", 0, "f79daa70390d73746742ffcfc3dc4471", 937580},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Mixed-Up Fairy Tales - English DOS Floppy (from jvprat)
	// Executable scanning reports "1.000.145", Floppy label reports "1.0, 11.13.91", VERSION file reports "1.000"
	{"fairytales", "", {
		{"resource.map", 0, "66105c02fa8f1785a3fd28957e41cb48", 3249},
		{"resource.000", 0, "27ec5fa09cd12a7fd16e86d96a2ed245", 984439},
		{"resource.001", 0, "49c8f7dcd9989e4491a93554bec325b0", 238019},
		{"resource.002", 0, "564f516d991032e781492592a4eaa275", 1414142},
		{"resource.003", 0, "dd6cef0c592eadb7e6be9a25307c57a2", 1344719},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Mixed-Up Mother Goose - English Amiga (from www.back2roots.org)
	// Executable scanning reports "1.003.009"
	// SCI interpreter version 0.001.010
	{"mothergoose", "", {
		{"resource.map", 0, "4aa28ac93fae03cf854594da13d9229c", 2700},
		{"resource.001", 0, "fb552ae550ca1dac19ed8f6a3767612d", 262885},
		{"resource.002", 0, "fb552ae550ca1dac19ed8f6a3767612d", 817191},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Mixed-Up Mother Goose - English DOS Floppy EGA (from omer_mor, bug report #4992)
	{"mothergoose", "EGA", {
		{"resource.map", 0, "3490f85dab47e504c41b7eb3312e285e", 2598},
		{"resource.001", 0, "d893892d62b3f061357291d66775e360", 239906},
		{"resource.002", 0, "d893892d62b3f061357291d66775e360", 719398},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Mixed-Up Mother Goose - English DOS Floppy EGA (supplied by ssburnout in bug report #5270)
	// 1.011 5x5.25" (label: Int#8.2.90)
	{"mothergoose", "EGA", {
		{"resource.map", 0, "7d308bfc6006d0e20985a7295c238efc", 2010},
		{"resource.000", 0, "bb662eebeb5ffea2d705064801f6f70f", 140375},
		{"resource.001", 0, "13ddcdf971339150c2963548c9761b31", 52648},
		{"resource.002", 0, "13ddcdf971339150c2963548c9761b31", 204401},
		{"resource.003", 0, "e2c858b89e89bffe37b33e01d2827930", 166990},
		{"resource.004", 0, "dbbc22f124533ce308bc386b08956326", 146251},
		{"resource.005", 0, "2ba5348e7fad641b9c4c7ff7c7cf4e68", 110979},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Mixed-Up Mother Goose v2.000 - English DOS Floppy (supplied by markcoolio in bug report #4272)
	// Executable scanning reports "1.001.031"
	{"mothergoose256", "", {
		{"resource.map", 0, "52aae15e493cafd1da7e1c9b657a5bb9", 7026},
		{"resource.000", 0, "b7ecd8ae9e254e80310b5a668b276e6e", 2948975},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Mixed-Up Mother Goose - English DOS CD (from jvprat)
	// Executable scanning reports "x.yyy.zzz"
	// SCI interpreter version 0.000.999 (just a guess)
	{"mothergoose256", "CD", {
		{"resource.map", 0, "1c7f311b0a2c927b2fbe81ae341fb2f6", 5790},
		{"resource.001", 0, "5a0ed1d745855148364de1b3be099bac", 4369438},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_STD16_SPEECH	},

	// Mixed-Up Mother Goose - English Windows Interactive Demo
	// Executable scanning reports "x.yyy.zzz"
	{"mothergoose256", "Demo", {
		{"resource.map", 0, "87f9dc1cafc4d4fa835fb2f00cf3a6ef", 4560},
		{"resource.001", 0, "5a0ed1d745855148364de1b3be099bac", 2070072},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO, GUIO_STD16	},

	// Mixed-Up Mother Goose - FM-Towns (supplied by abevi in bug report #5114)
	// Executable scanning reports "x.yyy.zzz", no VERSION file
	{"mothergoose256", "", {
		{"resource.map", 0, "b11e971ccd2040bebba59dfb409a08ef", 5772},
		{"resource.001", 0, "d49625d9b8005ec01c852f8322a82867", 4330713},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformFMTowns, ADGF_ADDENGLISH, GUIO5(GUIO_NOASPECT, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING)	},

#define GUIO_MOTHERGOOSEHIRES GUIO4(GUIO_NOSUBTITLES, \
									GUIO_NOASPECT, \
									GUIO_LINKSPEECHTOSFX, \
									GUIO_NOLAUNCHLOAD)

	// Mixed-Up Mother Goose Deluxe - EN/ES Windows CD (supplied by markcoolio in bug report #4273)
	// Executable scanning reports "2.100.002"
	{"mothergoosehires", "", {
		{"resource.map", 0, "5159a1578c4306bfe070a3e4d8c2e1d3", 4741},
		{"resource.000", 0, "1926925c95d82f0999590e93b02887c5", 15150768},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_MOTHERGOOSEHIRES },

	// Mixed-Up Mother Goose Deluxe - Multilingual Windows CD (EN/FR/DE/ES)
	// Executable scanning reports "2.100.002"
	{"mothergoosehires", "", {
		{"resmap.000", 0, "ef611af561898dcfea87846919ebf3eb", 4969},
		{"ressci.000", 0, "227685bc59d90821978d330713e44a7a", 17205800},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_MOTHERGOOSEHIRES },

	// Mixed-Up Mother Goose Deluxe - English Macintosh CD
	{ "mothergoosehires", "",{
		{"Data1", 0, "8a7ef3307d80adcd393c012f78a4e1d7", 609133},
		{"Data2", 0, "94e72a735be859cac3cdf084497a03c7", 5550487},
		{"Data3", 0, "4819cca5624615fcdd8838605661cd77", 5362429},
		{"Data4", 0, "ea260cdb42405649136b08bdac45c708", 6368165},
		{"Data5", 0, "eb5d6c76c69acafbbafa9e75b65f1da8", 3522128},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_MOTHERGOOSEHIRES },

#undef GUIO_MOTHERGOOSEHIRES

	// Ms. Astro Chicken - English DOS
	// SCI interpreter version 1.000.679
	{"msastrochicken", "", {
		{"resource.map", 0, "5b457cbe5042f557e5b610148171f6c0", 1158},
		{"resource.001", 0, "453ea81ef66a50cbe33ce06302afe47f", 229737},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#define GUIO_PHANTASMAGORIA_DEMO GUIO6(GUIO_NOSUBTITLES, \
									   GUIO_NOASPECT, \
									   GUIO_NOLAUNCHLOAD, \
									   GUIO_LINKSPEECHTOSFX, \
									   GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
									   GAMEOPTION_HQ_VIDEO)
#define GUIO_PHANTASMAGORIA      GUIO_PHANTASMAGORIA_DEMO
#define GUIO_PHANTASMAGORIA_MAC  GUIO_PHANTASMAGORIA_DEMO

	// Phantasmagoria - English DOS/Windows (from csnover)
	// Windows executable scanning reports "2.100.002" - "Aug 06 1995"
	// DOS executable scanning reports "2.100.002" - "May 24 1995"
	// VERSION file reports "1.000.000"
	{"phantasmagoria", "", {
		{"resmap.001", 0, "43c395f312a190e67b90b2c1e93a79e2", 11518},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 65844612},
		{"resmap.002", 0, "94f142cfe8ec4107b6a42876cb603ed0", 12058},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 71588691},
		{"resmap.003", 0, "39e9abd4501b5b6168dd07379c0be753", 12334},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 73651084},
		{"resmap.004", 0, "434f9704658229fef322c863d2422a9a", 12556},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 75811935},
		{"resmap.005", 0, "3ff9b4f7301800825c0ed008e091205e", 12604},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 78814934},
		{"resmap.006", 0, "27ad413313e2a3ec3c53250e7ff5b2d1", 12532},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 77901360},
		{"resmap.007", 0, "aa8175cfc93242af6f5e65bdceaafc0d", 7972},
		//{"ressci.007", 0, "3aae6559aa1df273bc542d5ac6330d75", 25859038},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - English DOS (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.000.001UK"
	{"phantasmagoria", "", {
		{"resmap.001", 0, "416138651ea828219ca454cae18341a3", 11518},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 65844612},
		{"resmap.002", 0, "de521d0c7ab32897e7fe58e421c816b7", 12058},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 71588691},
		{"resmap.003", 0, "25df95bd7da3686f71a0af8784a2b8ca", 12334},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 73651084},
		{"resmap.004", 0, "e108a3d35794f1721aeea3e62a3f8b3b", 12556},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 75811935},
		{"resmap.005", 0, "390d81f9e14a3f3ee2ea477135f0288e", 12604},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 78814934},
		{"resmap.006", 0, "8ea3c954606e80604680f9fe707f15d8", 12532},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 77901360},
		{"resmap.007", 0, "afbd16ea77869a720afa1c5371de107d", 7972},
		//{"ressci.007", 0, "3aae6559aa1df273bc542d5ac6330d75", 25859038},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - German DOS/Windows
	// Windows executable scanning reports "unknown" - "Sep 19 1995 09:39:48"
	// DOS executable scanning reports "unknown" - "Sep 19 1995 16:18:34"
	// VERSION file reports "1.100.000"
	// Supplied by AReim1982
	{"phantasmagoria", "", {
		{"resmap.001", 0, "d5048f972d2e1abd5f6b6a3ea8a466b0", 11524},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 71063082},
		{"resmap.002", 0, "ae0105261e04826324daf7dd2d534465", 12064},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 80283368},
		{"resmap.003", 0, "50786a4f54c6432ec31b52be90b3a8ba", 12340},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 82360370},
		{"resmap.004", 0, "4cd3bbff8b81bad85db52c0c8407bd81", 12562},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 84453560},
		{"resmap.005", 0, "779bd12802da6cfe54ce482140824a46", 12616},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 85113663},
		{"resmap.006", 0, "2299f97876493cc29b6a48e1cfe9619d", 12538},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 87602346},
		{"resmap.007", 0, "06309b8043aecb85bd507b15d16cb544", 7984},
		//{"ressci.007", 0, "3aae6559aa1df273bc542d5ac6330d75", 26898681},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - French DOS
	// Supplied by Kervala in bug #6574
	{"phantasmagoria", "", {
		{"resmap.001", 0, "4da82dd336d4b9cd8c16f3cc11f0c615", 11524},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 69963685},
		{"resmap.002", 0, "4f40f43f2b60bf765864433069752bb9", 12064},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 78362841},
		{"resmap.003", 0, "6a392a86f14b6ddb4422978ee71e54ac", 12340},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 80431189},
		{"resmap.004", 0, "df2e9462c41202de5f3843908c95a715", 12562},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 82542844},
		{"resmap.005", 0, "43efd3fe834286c70a2c8b4cd747c1e2", 12616},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 83790486},
		{"resmap.006", 0, "b3065e54a00190752a06dacd201b5058", 12538},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 85415107},
		{"resmap.007", 0, "5633960bc106c39ca91d2d8fce18fd2d", 7984},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - French DOS (supplied by enclume in bug report Trac#9910)
	// VERSION file reports "1.100.000"
	{"phantasmagoria", "", {
		{"resmap.001", 0, "4da82dd336d4b9cd8c16f3cc11f0c615", 11524},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 69963685},
		{"resmap.002", 0, "331d9cb4c2705da675d243fba22b7643", 12064},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 74556497},
		{"resmap.003", 0, "48dcc70e117bfde15e004cc1b9533e5b", 12340},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 76612091},
		{"resmap.004", 0, "fc117370efafd53a4c07aca99b2893c3", 12562},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 78757484},
		{"resmap.005", 0, "d19ad6a7885273ffd1b920eced6e6871", 12616},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 81160893},
		{"resmap.006", 0, "6db1956354e271681d41b489939686fb", 12538},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 81076474},
		{"resmap.007", 0, "3d15c24fe60e8f7171480bfaa2d566bc", 7984},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - Italian DOS (from AlessioR)
	// VERSION file reports "1.100.000"
	{"phantasmagoria", "", {
		{"resmap.001", 0, "fba09c05c18e526fa35b30c33c12b150", 11524},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 65804446},
		{"resmap.002", 0, "1cf3e74510804f1c87f83e25b61042cb", 12064},
		{"ressci.002", 0, "3aae6559aa1df273bc542d5ac6330d75", 71473087},
		{"resmap.003", 0, "6c22d9ff6a9d3803d4d7435b8bf6b2f7", 12340},
		{"ressci.003", 0, "3aae6559aa1df273bc542d5ac6330d75", 73552108},
		{"resmap.004", 0, "73e22dc5e0f5134a7e70ebe6d52735b9", 12562},
		{"ressci.004", 0, "3aae6559aa1df273bc542d5ac6330d75", 75712511},
		{"resmap.005", 0, "197bc2be5412bea7b8aaf9a65a2da92f", 12616},
		{"ressci.005", 0, "3aae6559aa1df273bc542d5ac6330d75", 78868623},
		{"resmap.006", 0, "673ca2dda6f9337459de768f52f63c7e", 12538},
		{"ressci.006", 0, "3aae6559aa1df273bc542d5ac6330d75", 77794567},
		{"resmap.007", 0, "7d6abc183155daf93e0452a58ddf16dc", 7984},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - English DOS Demo (from trembyle)
	// Executable scanning reports "2.100.002", VERSION file reports "1.000.000"
	{"phantasmagoria", "Demo", {
		{"resmap.001", 0, "43c395f312a190e67b90b2c1e93a79e2", 11518},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 65844612},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_PHANTASMAGORIA_DEMO },

	// Phantasmagoria - English DOS Demo
	// Executable scanning reports "2.100.002", VERSION file reports "1.100.000"
	{"phantasmagoria", "Demo", {
		{"resmap.001", 0, "416138651ea828219ca454cae18341a3", 11518},
		{"ressci.001", 0, "3aae6559aa1df273bc542d5ac6330d75", 65844612},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_PHANTASMAGORIA_DEMO },

	// Phantasmagoria - English DOS/Windows (GOG version) - ressci.* merged in ressci.000
	// Windows executable scanning reports "2.100.002" - "Sep 19 1995 15:09:43"
	// DOS executable scanning reports "2.100.002" - "Sep 19 1995 09:15:40"
	// VERSION file reports "1.000.001UK"
	// Supplied by littleboy in trac #9255
	{"phantasmagoria", "", {
		{"ressci.000", 0, "cd5967f9b9586e3380645961c0765be3", 116822037},
		{"resmap.000", 0, "3cafc1c6a53945c1f3babbfd6380c64c", 16468},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	{"phantasmagoria", "", {
		{"ressci.000", 0, "cd5967f9b9586e3380645961c0765be3", 116822037},
		{"resmap.000", 0, "3cafc1c6a53945c1f3babbfd6380c64c", 16468},
		{"PATCHES/0.fon", 0, "968b7450e2994ff48b276fdf8fbd68fe", 3828},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - German Patch V3 externally applied to GOG English DOS/Windows version
	{"phantasmagoria", "", {
		{"ressci.000", 0, "cd5967f9b9586e3380645961c0765be3", 116817874},
		{"resmap.000", 0, "59a0362e4133d4d82d546d75333813ae", 16486},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PHANTASMAGORIA },

	// Phantasmagoria - English Macintosh
	// NOTE: This only contains disc 1 files (as well as the two persistent files:
	// Data1 and Data13. Other discs have conflicting names :(
	// Game script sets version to "1.000.000"
	{"phantasmagoria", "", {
		{"Data1", 0, "0fcb42802f49edb5af60532bd7b60c4f", 14705413},
		{"Data2", 0, "d52f612058ec78e300385df3336a4ba2", 14516456},
		{"Data3", 0, "d6880c00d2c700c213ab76a3c39e60fc", 15612354},
		{"Data4", 0, "9037f5d3a37d0ee23146d9830726b058", 9794449},
		{"Data5", 0, "4b944fc79d180966c1088f7ecf7ae4d1", 13638556},
		{"Data6", 0, "647b1a826dbbb64884e0ae1bc59c8abb", 13845906},
		{"Data7", 0, "932a3aaf1eb650735a9e3a290ce249fb", 3626204},
		// Data8-12 are empty
		{"Data13", 0, "6d2c450fca19a69b5af74ed5b03c0a17", 14923072},
		AD_LISTEND},
	 Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_PHANTASMAGORIA_MAC },

#undef GUIO_PHANTASMAGORIA_DEMO
#undef GUIO_PHANTASMAGORIA
#undef GUIO_PHANTASMAGORIA_MAC

#define GUIO_PHANTASMAGORIA2 GUIO10(GUIO_NOSUBTITLES, \
								   GUIO_LINKMUSICTOSFX, \
								   GUIO_LINKSPEECHTOSFX, \
								   GUIO_NOMIDI, \
								   GUIO_NOASPECT, \
								   GAMEOPTION_ORIGINAL_SAVELOAD, \
								   GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
								   GAMEOPTION_HQ_VIDEO, \
								   GAMEOPTION_ENABLE_CENSORING, \
								   GAMEOPTION_ENABLE_GMM_SAVE)
// TODO: Learn which are the censored game editions and give them this GUIO
// instead
#define GUIO_PHANTASMAGORIA2_CENSORED GUIO9(GUIO_NOSUBTITLES, \
											GUIO_LINKMUSICTOSFX, \
											GUIO_LINKSPEECHTOSFX, \
											GUIO_NOMIDI, \
											GUIO_NOASPECT, \
											GAMEOPTION_ORIGINAL_SAVELOAD, \
											GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
											GAMEOPTION_HQ_VIDEO, \
											GAMEOPTION_ENABLE_GMM_SAVE)

	// Some versions of Phantasmagoria 2 were heavily censored.
	// Censored versions (data files are currently unknown to us): UK, Australia, first English release in Germany

	// for more information on this matter, see:
	// https://wiki.scummvm.org/index.php/SCI/Phantasmagoria_2_Censorship

	// Phantasmagoria 2 - English Windows (from jvprat) - US release
	// Note: Fully uncensored
	//
	// Executable scanning reports "3.000.000", VERSION file reports "001.0.06"
	{"phantasmagoria2", "", {
		{"resmap.001", 0, "0a961e135f4f7effb195158325856633", 1108},
		{"ressci.001", 0, "53f457cddb0dffc056593905c4cbb989", 24379964},
		{"resmap.002", 0, "5d3189fe3d4f286f83c5c8031fa3e9f7", 1126},
		{"ressci.002", 0, "53f457cddb0dffc056593905c4cbb989", 34465805},
		{"resmap.003", 0, "c92e3c840b827c236ab6671c03760c56", 1162},
		{"ressci.003", 0, "53f457cddb0dffc056593905c4cbb989", 38606375},
		{"resmap.004", 0, "8d5cfe19365f71370b87063686f39171", 1288},
		{"ressci.004", 0, "53f457cddb0dffc056593905c4cbb989", 42447131},
		{"resmap.005", 0, "8bd5ceeedcbe16dfe55d1b90dcd4be84", 1942},
		{"ressci.005", 0, "05f9fe2bee749659acb3cd2c90252fc5", 67905112},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

	// Phantasmagoria 2 - English DOS (GOG version) (supplied by littleboy in patch #1360)
	// Note: Fully uncensored, basically the US release, but ressci.* merged into ressci.000
	//
	// Executable scanning reports "3.000.000" - "Dec 07 1996 09:29:03"
	// VERSION file reports "001.0.06"
	{"phantasmagoria2", "", {
		{"ressci.000", 0, "c54f26d9f43f908151263254b6d97053", 108134481},
		{"resmap.000", 0, "de154a223a9ef4ea7358b76adc38ef5b", 2956},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

	// Phantasmagoria 2 - German DOS/Windows (supplied by AReim1982)
	// Note: Fully uncensored, but one scene is missing probably because of a mastering error (Curtis + Therese meeting near water cooler)
	//       Another scene was cut differently (Therese attacks Curtis), reasons unknown. Violence and/or blood were not changed.
	//       The German/French one is way shorter, less suspenseful and without any dialog.
	//
	// Windows executable scanning reports "unknown" - "Dec 07 1996 15:42:02"
	// DOS executable scanning reports "unknown" - "Dec 07 1996 08:35:12"
	// VERSION file reports "000.1.0vu" (HEX: 30 30 30 2E 31 00 2E 30 76 FA 0D 0A)
	{"phantasmagoria2", "", {
		{"resmap.001", 0, "d62f48ff8bddb39503b97e33439482c9", 1114},
		{"ressci.001", 0, "4ebc2b8455c74ad205ae592eec27313a", 24590716},
		{"resmap.002", 0, "642a1f85ad8a4ce1d3850b10ad082200", 1138},
		{"ressci.002", 0, "4ebc2b8455c74ad205ae592eec27313a", 34681672},
		{"resmap.003", 0, "e08316864ef77735bb7f8f208110c43b", 1174},
		{"ressci.003", 0, "4ebc2b8455c74ad205ae592eec27313a", 38930933},
		{"resmap.004", 0, "875cf07df77fbaa1518a06ffed616c5f", 1300},
		{"ressci.004", 0, "4ebc2b8455c74ad205ae592eec27313a", 42750325},
		{"resmap.005", 0, "2fc48a4a5a73b726994f189da51a8b2a", 1954},
		{"ressci.005", 0, "e94005890d22dd3b7f605a2a7c025803", 68232146},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

	// Phantasmagoria 2 - French DOS/Windows (supplied by bgK)
	// Windows executable scanning reports "3.000.000" - "Nov 09 1996 16:03:00"
	// DOS executable scanning reports "3.000.000" - "Dec 07 1996 09:29:03"
	// VERSION file reports "000.1.0t" (HEX: 30 30 30 2e 31 3c 2e 30 74 03 0d 0a)
	{"phantasmagoria2", "", {
		{"resmap.001", 0, "a4b2d9d19b007115f1bdf5d1033c3a59", 1114},
		{"ressci.001", 0, "733700c435304a4e862e9687891d7771", 24597800},
		{"resmap.002", 0, "dcc1b312f40c29dd678f9e92e8d14227", 1138},
		{"ressci.002", 0, "733700c435304a4e862e9687891d7771", 34675235},
		{"resmap.003", 0, "8d5556599f41f7afdcfb7bdbac28ba22", 1174},
		{"ressci.003", 0, "733700c435304a4e862e9687891d7771", 38924549},
		{"resmap.004", 0, "b585a3abb32a29149a20bd2150dbff59", 1300},
		{"ressci.004", 0, "733700c435304a4e862e9687891d7771", 42748514},
		{"resmap.005", 0, "7811a1801660090725ceef799b62fc72", 1954},
		{"ressci.005", 0, "b6f090a2c8fc955d17b8a47085b2f890", 68231525},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

	// Phantasmagoria 2 - Japanese Windows (supplied by m_kiewitz)
	// Features English voices w/ Japanese subtitles. Background images were also localized to Japanese.
	// DUK-videos also have subtitles.
	// Windows executable scanning reports "3.000.000" - "Apr 22 1997 17:09:05"
	// VERSION file reports "001.0.000"
	{"phantasmagoria2", "", {
		{"resmap.001", 0, "36f634180bf509e07f48ca70e8ab43dd", 1114},
		{"ressci.001", 0, "b8aa3ea7e47425f89fcf9cf025c96760", 24492681},
		{"resmap.002", 0, "5c391e1c94fd441a9dd4a4bfcf74af7f", 1126},
		{"ressci.002", 0, "eaaac2587030149e2b92419ce6512772", 34464287},
		{"resmap.003", 0, "31cc508a52c521573536fcbe793d3c33", 1168},
		{"ressci.003", 0, "eaaac2587030149e2b92419ce6512772", 38714934},
		{"resmap.004", 0, "5349a40c053fc0a18eada8d92954aa4c", 1303},
		{"ressci.004", 0, "7b7bf3337ebaa2124f557ee3c522f406", 44560744},
		{"resmap.005", 0, "86cb97f0b5a138b842035d15d222d8c8", 1963},
		{"ressci.005", 0, "e22a46a3dd54971471b29454ff0352c7", 70558313},
		//{"resaud.001", 0, "3b4c5f92e5143fd3539b227e48ac2929", 8414502},
		//{"resaud.002", 0, "3b4c5f92e5143fd3539b227e48ac2929", 8414502},
		//{"ressfx.001", 0, "343a6ca9ddd614541b11b155de6368ac", 90268706},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

	// Phantasmagoria 2 - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS (GOG version)
	{"phantasmagoria2", "", {
		{"ressci.000", 0, "c54f26d9f43f908151263254b6d97053", 108134481},
		{"resmap.000", 0, "de154a223a9ef4ea7358b76adc38ef5b", 2956},
		{"PATCHES/0.fon", 0, "a2fc0fd2c4ddcf1f1dc5207126cd998b", 3419},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_PHANTASMAGORIA2 },

#undef GUIO_PHANTASMAGORIA2
#undef GUIO_PHANTASMAGORIA2_CENSORED

#define GUIO_PEPPER_WINDOWS GUIO8(GUIO_NOSPEECH,			\
							GAMEOPTION_WINDOWS_CURSORS,		\
							GAMEOPTION_PREFER_DIGITAL_SFX,	\
							GAMEOPTION_ORIGINAL_SAVELOAD,	\
							GAMEOPTION_MIDI_MODE,			\
							GAMEOPTION_RGB_RENDERING,		\
							GAMEOPTION_TTS,					\
							GAMEOPTION_ENABLE_GMM_SAVE)

	// Pepper's Adventure In Time 1.000 English
	// Executable scanning reports "1.001.072", VERSION file reports "1.000"
	{"pepper", "", {
		{"resource.map", 0, "72726dc81c1b4c1110c486be77369bc8", 5179},
		{"resource.000", 0, "670d0c53622429f4b11275caf7f8d292", 5459574},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	{"pepper", "", {
		{"resource.map", 0, "72726dc81c1b4c1110c486be77369bc8", 5179},
		{"resource.000", 0, "670d0c53622429f4b11275caf7f8d292", 5459574},
		AD_LISTEND}, Common::EN_ANY, Common::kPlatformWindows, ADGF_NO_FLAGS, GUIO_PEPPER_WINDOWS },

	// Pepper - English DOS Non-Interactive Demo
	// Executable scanning reports "1.001.060", VERSION file reports "1.000"
	{"pepper", "Demo", {
		{"resource.map", 0, "379bb4fb896630b14f2d91ed21e36ba1", 984},
		{"resource.000", 0, "118f6c31a93ec7fd9a231c61125229e3", 645494},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Pepper - English DOS/Windows Interactive Demo
	// Executable scanning reports "1.001.069", VERSION file reports ".001"
	{"pepper", "Demo", {
		{"resource.map", 0, "975e8df76106a5c13d12ab674f906a02", 2514},
		{"resource.000", 0, "e6a918a2dd7a4bcecd8fb389f43287c2", 1698164},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Pepper - English DOS Interactive Demo
	// Executable scanning reports "1.001.072", VERSION file reports "1.000"
	{"pepper", "Demo", {
		{"resource.map", 0, "9c9b7b900651a370dd3fb38d478b1798", 2524},
		{"resource.000", 0, "e6a918a2dd7a4bcecd8fb389f43287c2", 1713544},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

#undef GUIO_PEPPER_WINDOWS

	// Police Quest 1 VGA Remake - English DOS (from the Police Quest Collection)
	// Executable scanning reports "1.001.029", VERSION file reports "2.000"
	{"pq1sci", "SCI", {
		{"resource.map", 0, "35efa814fb994b1cbdac9611e401da67", 5013},
		{"resource.000", 0, "e0d5ddf34eda903a38f0837e2aa7145b", 6401433},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Police Quest 2 - English Amiga (from www.back2roots.org)
	// SCI interpreter version 0.000.685 (just a guess)
	{"pq2", "", {
		{"resource.map", 0, "499de78ae72b7ce219f944c5e7ef0c5b", 3426},
		{"resource.000", 0, "77f02def3094af804fd2371db25b7100", 250232},
		{"resource.001", 0, "523db0c07f1da2a822c2c39ee0482544", 179334},
		{"resource.002", 0, "499737c21a28ac026e11ab817100d610", 511099},
		{"resource.003", 0, "e008f5d6e2a7c4d4a0da0173e4fa8f8b", 553970},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English DOS Non-Interactive Demo
	// Executable scanning reports "0.000.413"
	{"pq2", "Demo", {
		{"resource.map", 0, "8b77d0d4650c2052b356cece28294b58", 576},
		{"resource.001", 0, "376ef6d6eaaeed66e1424bd219c4b9ab", 215398},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English DOS 1.001.000 (5.25") (provided by richiefs in bug report #4214)
	// SCI interpreter version 0.000.395
	{"pq2", "", {
		{"resource.map", 0, "9cff78c4be9e6a4848b6e9377569e3d9", 5700},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 163291},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 329367},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 305819},
		{"resource.004", 0, "77f02def3094af804fd2371db25b7100", 342149},
		{"resource.005", 0, "77f02def3094af804fd2371db25b7100", 349899},
		{"resource.006", 0, "77f02def3094af804fd2371db25b7100", 354991},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - fan translate by https://github.com/deadman2000/RuSCI
	// Executable scanning reports "0.000.490"
	{"pq2", "", {
		{"resource.map", 0, "28a6f471c7900c2c92da40eecb615d9d", 4584},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 509525},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 546000},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 591851},
		{"Translate.RU", 0, "3f730611f55257821b964f96eafea0ba", 171}, // Text file for detecting translation
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English DOS (from the Police Quest Collection)
	// Executable scanning reports "0.000.490"
	{"pq2", "", {
		{"resource.map", 0, "28a6f471c7900c2c92da40eecb615d9d", 4584},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 509525},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 546000},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 591851},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English Atari ST
	// Game version 1.002.011 DS 1989-07-21
	// Executable reports "1.002.003"
	{"pq2", "", {
		{"resource.map", 0, "28a6f471c7900c2c92da40eecb615d9d", 4584},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 509525},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 546000},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 591851},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English DOS (from FRG)
	// SCI interpreter version 0.000.395
	{"pq2", "", {
		{"resource.map", 0, "fe019e9773623fcb7da810db9e64c8a9", 4548},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 509760},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 542897},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 586857},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 English DOS 1.001.006 (supplied by merkur-kun in bug report #4922)
	{"pq2", "", {
		{"resource.map", 0, "8e1161c684b342742d30f938a4839a4b", 4518},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 506563},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 541261},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 587511},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 English DOS 1.001.006 (5.25")
	// SCI interpreter version 0.000.409
	{"pq2", "", {
		{"resource.map", 0, "dad222469004108d2a38b8288078eaac", 5670},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 159511},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 330094},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 303955},
		{"resource.004", 0, "77f02def3094af804fd2371db25b7100", 342639},
		{"resource.005", 0, "77f02def3094af804fd2371db25b7100", 350673},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 English DOS 1.002.011 (5.25") (supplied by misterhands in bug report #9716)
	{"pq2", "", {
		{"resource.map", 0, "f42a265e26168d0463d12e0913e8dd1c", 5808},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 161673},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 334283},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 308044},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - English Atari ST
	// Game version 1.001.006 1989-01-16 13:30
	// Executable reports "1.001.009"
	{"pq2", "", {
		{"resource.map", 0, "8e1161c684b342742d30f938a4839a4b", 4518},
		{"resource.001", 0, "77f02def3094af804fd2371db25b7100", 506563},
		{"resource.002", 0, "77f02def3094af804fd2371db25b7100", 541261},
		{"resource.003", 0, "77f02def3094af804fd2371db25b7100", 587511},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Police Quest 2 - Japanese PC-98 (also includes english language)
	// Executable scanning reports "x.yyy.zzz", game version "1.000.052"
	{"pq2", "", {
		{"resource.map", 0, "883804c616dca1d82373bf9fda3a71d2", 4656},
		{"resource.001", 0, "05fdee43a228dd6ea4d1a92ccae3f788", 669319},
		{"resource.002", 0, "05fdee43a228dd6ea4d1a92ccae3f788", 637662},
		{"resource.003", 0, "05fdee43a228dd6ea4d1a92ccae3f788", 684395},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO7(GUIO_NOSPEECH, GUIO_NOASPECT, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING)	},

	// Police Quest 3 - English Amiga
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.784
	{"pq3", "", {
		{"resource.map", 0, "29923fe1ef1f0909b57255d61c558e68", 5742},
		{"resource.000", 0, "4908e4f4977e8e19c90c29b36a741ffe", 298541},
		{"resource.001", 0, "0eb943ca807e2f69578821d490770d2c", 836567},
		{"resource.002", 0, "f7044bb08a1fcbe5077791ed8d4996f0", 691207},
		{"resource.003", 0, "630bfa65beb05f743552704ac2899dae", 759891},
		{"resource.004", 0, "7b229fbdf30d670d0728cede3e984a7e", 838663},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Police Quest 3 - German Amiga (also includes english language)
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.784
	{"pq3", "", {
		{"resource.map", 0, "357304811fc2bbaa3443fc62d677fe06", 6282},
		{"resource.000", 0, "49879e6ce7c19151ffa6af1a09763dc7", 324273},
		{"resource.001", 0, "015e6119badb391ab5f4b36abedb5d4a", 718814},
		{"resource.002", 0, "1ee419ba252fbed47fbce8399f56f8ad", 674823},
		{"resource.003", 0, "87361c17fd863b58f98828de68770279", 682288},
		{"resource.004", 0, "6258d5dd85898d8e218eb8113ebc9059", 722738},
		{"resource.005", 0, "6258d5dd85898d8e218eb8113ebc9059", 704485},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// Police Quest 3 - English DOS (from the Police Quest Collection)
	// Executable scanning reports "T.A00.178", VERSION file reports "1.00"
	// SCI interpreter version 1.000.510
	{"pq3", "", {
		{"resource.map", 0, "6457bf0c8ca865a42d9ff5827ab49b89", 5559},
		{"resource.000", 0, "7659713720d61d9465a59091b7ee63ea", 737253},
		{"resource.001", 0, "61c7c187d25a8346be0a092d5f037278", 1196787},
		{"resource.002", 0, "c18e0d408e4f4f40365d42aa15931f67", 1153561},
		{"resource.003", 0, "8791b9eef53edf77c2dac950142221d3", 1159791},
		{"resource.004", 0, "1b91e891a3c60a941dac0eecdf83375b", 1143606},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Police Quest 3 - English DOS Non-Interactive Demo
	// Executable scanning reports "T.A00.052"
	// SCI interpreter version 1.000.510
	{"pq3", "Demo", {
		{"resource.map", 0, "ec8e58e7663ae5173853abf6c76b52bb", 867},
		{"resource.000", 0, "277f97771f7a6d89677141f02da313d6", 65150},
		{"resource.001", 0, "5c5a551b6c86cce2ee75becb90e0b586", 624411},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Police Quest 3 - German DOS (supplied by markcoolio in bug report #4275, also includes english language)
	// Executable scanning reports "T.A00.178"
	// SCI interpreter version 1.000.510
	{"pq3", "", {
		{"resource.map", 0, "8a970edf98eba4c11bb1827aab1694d1", 5625},
		{"resource.000", 0, "5ee460af3d70c06a745cc482b6c783ba", 865204},
		{"resource.001", 0, "ff6182bf96c8f8af5bd8c11769c9cbf2", 1183456},
		{"resource.002", 0, "cce99b96a578b62ff6cebdae8d122feb", 1179358},
		{"resource.003", 0, "4836f460f4cfc8de61e2df4c45775504", 1180956},
		{"resource.004", 0, "0c3eb84b9755852d9e795e0d5c9373c7", 1171760},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Police Quest 3 - Spanish DOS v1.000 - Supplied by dianiu in bug report #6122
	{"pq3", "", {
		{"resource.map", 0, "ffa0b4631c4e36d69631256d19ba29e7", 5421},
		{"resource.000", 0, "5ee460af3d70c06a745cc482b6c783ba", 5410263},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Police Quest 3 EGA
	// Reported by musiclyinspired in bug report #5251
	{"pq3", "EGA", {
		{"resource.map", 0, "1341f7c9643947414a8e238b88f68d82", 5901},
		{"resource.000", 0, "7659713720d61d9465a59091b7ee63ea", 402208},
		{"resource.001", 0, "0284ca44341fbc3cb7a047e49d230234", 703373},
		{"resource.002", 0, "fc9452f962bd7a9bbf6e78e9e52a8e18", 692676},
		{"resource.003", 0, "31c226bf01b69c8182b8ca0e8760b0a7", 527848},
		{"resource.004", 0, "b96a86ab681769e4cbb439670d967ca6", 449682},
		{"resource.005", 0, "9e6c53a0e7eef53694d260fade8b1fc7", 724000},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Police Quest 4 - English DOS Non-Interactive Demo (from FRG)
	// SCI interpreter version 1.001.096
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like pq4demo-demo
	{"pq4demo", "Demo", {
		{"resource.map", 0, "be56f87a1c4a13062a30a362df860c2f", 1472},
		{"resource.000", 0, "527d5684016e6816157cd15d9071b11b", 1121310},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#define GUIO_PQ4_FLOPPY GUIO4(GUIO_NOSPEECH, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_TTS, \
							  GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_PQ4_CD     GUIO4(GUIO_LINKSPEECHTOSFX, \
							  GAMEOPTION_HIGH_RESOLUTION_GRAPHICS, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_PQ4_MAC    GUIO2(GUIO_LINKSPEECHTOSFX, \
							  GAMEOPTION_ENABLE_GMM_SAVE)

	// Police Quest 4 - English DOS CD
	// Executable scanning reports "2.100.002", VERSION file reports "1.100.000"
	{"pq4", "CD", {
		{"resource.map", 0, "379dfe80ed6bd16c47e4b950c4722eac", 11374},
		{"resource.000", 0, "fd316a09b628b7032248139003369022", 18841068},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_PQ4_CD },

	// Police Quest 4 - French DOS CD (French text, English speech) (From bgK)
	// Executable scanning reports "2.100.002", VERSION file reports "1.000.000"
	{"pq4", "CD", {
		{"resource.map", 0, "c378f024f27332deccb1bae3b78e693c", 11386},
		{"resource.000", 0, "3dd3ff150b78899500d4e1bea9b733c6", 18866242},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_CD, GUIO_PQ4_CD },

	// Police Quest 4 - German DOS CD (German text, English speech)
	// Supplied by markcoolio in bug report #5830
	{"pq4", "CD", {
		{"resource.map", 0, "a398076371ed0e1e706c8f9fb9fc7ac5", 11386},
		{"resource.000", 0, "6ff21954e0a2c5992279e7eb787c8d56", 18918747},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_CD, GUIO_PQ4_CD },

	// Police Quest 4 - English DOS
	// SCI interpreter version 2.000.000 (a guess?)
	{"pq4", "", {
		{"resource.map", 0, "aed9643158ccf01b71f359db33137f82", 9895},
		{"resource.000", 0, "da383857b3be1e4514daeba2524359e0", 15141432},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQ4_FLOPPY },

	// Police Quest 4 - French DOS (supplied by abevi in bug report #4176)
	// SCI interpreter version 2.000.000
	{"pq4", "", {
		{"resource.map", 0, "008030846edcc7c5c7a812c7f4ae4ceb", 9256},
		{"resource.000", 0, "6ba98bd2e436739d87ecd2a9b99cabb4", 14730153},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQ4_FLOPPY },

	// Police Quest 4 - German DOS (supplied by markcoolio in bug report #4276)
	// SCI interpreter version 2.000.000 (a guess?)
	{"pq4", "", {
		{"resource.map", 0, "2393ee728ab930b2762cb5889f9b5aff", 9256},
		{"resource.000", 0, "6ba98bd2e436739d87ecd2a9b99cabb4", 14730155},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQ4_FLOPPY },

	// Police Quest 4 - English Macintosh CD
	{"pq4", "", {
		{"Data1", 0, "9f0a775c66481cef43b0743275a745b7", 4945908},
		{"Data2", 0, "e64840cdc341ac567579aae1526e6d92", 5572099},
		{"Data3", 0, "abdd183f3d6a0c326c949ba9dda32579", 5691423},
		{"Data4", 0, "f1d80305b254f40ecff4a0f56b1d21a7", 5431522},
		{"Data5", 0, "e766923060f7b85f1cd8909240412796", 5194430},
		{"Data6", 0, "ca95355f5f89dcf45e78c073ef83471b", 6599009},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_PQ4_MAC },

#undef GUIO_PQ4_FLOPPY
#undef GUIO_PQ4_CD
#undef GUIO_PQ4_MAC

#define GUIO_PQSWAT_DEMO GUIO7(GUIO_NOSUBTITLES, \
							   GUIO_NOMIDI, \
							   GUIO_LINKMUSICTOSFX, \
							   GUIO_LINKSPEECHTOSFX, \
							   GUIO_NOASPECT, \
							   GUIO_NOLAUNCHLOAD, \
							   GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_PQSWAT      GUIO9(GUIO_NOSUBTITLES, \
							   GUIO_NOMIDI, \
							   GUIO_LINKMUSICTOSFX, \
							   GUIO_LINKSPEECHTOSFX, \
							   GUIO_NOASPECT, \
							   GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							   GAMEOPTION_HQ_VIDEO, \
							   GAMEOPTION_UPSCALE_VIDEOS, \
							   GAMEOPTION_ENABLE_GMM_SAVE)

	// Police Quest: SWAT - English DOS/Windows Demo (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "0.001.200"
	// Currently unsupported, since this demo uses Version 4 of Robot videos,
	// which we haven't implemented yet in RobotDecoder (bug #14388)
	// I18N: 'Robot' is a video format name (as in 'MP4 video')
	{"pqswat", _s("This demo uses an unimplemented version of Robot videos"), {
		{"resource.map", 0, "8c96733ef94c21526792f7ca4e3f2120", 1648},
		{"resource.000", 0, "d8892f1b8c56c8f7704325460f49b300", 3676175},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO | ADGF_UNSUPPORTED, GUIO_PQSWAT_DEMO },

	// Police Quest: SWAT - English DOS (from GOG.com)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0c"
	{"pqswat", "", {
		{"resmap.000", 0, "1c2563fee189885e29d9348f37306d94", 12175},
		{"ressci.000", 0, "b2e1826ca81ce2e7e764587f5a14eee9", 127149181},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQSWAT },

	// Police Quest: SWAT - English DOS/Windows
	// Executable scanning reports "2.100.002", VERSION.TXT file reports "1.100"
	{"pqswat", "", {
		{"resmap.001", 0, "c2571ca6fc43f9a0b2d44c14aa2a39a3", 6955},
		{"ressci.001", 0, "4550b56b6ea65c10c507b571abb43b97", 29312320},
		{"resmap.002", 0, "808de8c5357f519ace8836a5e52d9e44", 6439},
		{"ressci.002", 0, "672665bbe12be2aee44722495daca84e", 31599543},
		{"resmap.003", 0, "3a8e446d7355789cdf0fe2cdf5e478db", 6841},
		{"ressci.003", 0, "621621778cf754986e7f9f3f245b898b", 46510796},
		{"resmap.004", 0, "98cd83681994e922a2f65031cf13fd49", 7069},
		{"ressci.004", 0, "d28ad458276f42748f47ac27d0a0cc76", 50759885},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQSWAT },

	// Police Quest: SWAT - English DOS
	// Reported by canuckflicks in bug #12264
	{"pqswat", "", {
		{"resmap.000", 0, "9eec3ad5ccf1f649b9aa859c88b44c46", 12217},
		{"ressci.000", 0, "b2e1826ca81ce2e7e764587f5a14eee9", 121085460},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQSWAT },

	// Police Quest: SWAT - English Windows (from the Police Quest Collection)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0c"
	// Original DOS/Windows release VERSION file reports "1.000" is the same
	{"pqswat", "", {
		{"resmap.001", 0, "de5ea1beb3d9490737aa5fd398fe9765", 6937},
		{"ressci.001", 0, "7cd5414f54748f90904a46123a52472f", 29467363},
		{"resmap.002", 0, "ff7a7e0f3dea2c73182b7ea84e3431cc", 6211},
		{"ressci.002", 0, "e613357f3349c4bfa5a7b7b312be7f97", 25987989},
		{"resmap.003", 0, "84303aa019fa75a0eb20ba502bc4ccae", 6601},
		{"ressci.003", 0, "00a755e917c442ca8cf1a1bea689e6fb", 45073980},
		{"resmap.004", 0, "4228038906f041623e65789500b22285", 6835},
		{"ressci.004", 0, "b7e619e6ecf62fe65d5116a3a422e5f0", 46223872},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQSWAT },

	// Police Quest: SWAT - English Windows (from the Police Quest Collection)
	// With only first CD copied
	// Executable scanning reports "2.100.002", VERSION file reports "1.0c"
	// Original DOS/Windows release VERSION file reports "1.000" is the same
	{"pqswat", _s("Incomplete game detected. You have to copy data from all the CDs."), {
		{"resmap.001", 0, "de5ea1beb3d9490737aa5fd398fe9765", 6937},
		{"ressci.001", 0, "7cd5414f54748f90904a46123a52472f", 29467363},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_WARNING, GUIO_PQSWAT },

	// Police Quest: SWAT - French 1.100 DOS/Windows
	// Reported by e-Scarlatti in bug #11100
	{"pqswat", "", {
		{"resmap.001", 0, "10abf5d5571f23685604e6d833250ddf", 10066},
		{"ressci.001", 0, "b2bd962abeb3c1239773fdf7a530231c", 29529649},
		{"resmap.002", 0, "89c20793199107e78354c6ce7a284b07", 9490},
		{"ressci.002", 0, "b2bd962abeb3c1239773fdf7a530231c", 31853152},
		{"resmap.003", 0, "4f4ba573934b1d27d3e4f31116d1d6d9", 9880},
		{"ressci.003", 0, "b2bd962abeb3c1239773fdf7a530231c", 46769998},
		{"resmap.004", 0, "93c7638e131b28a251985c5114b14838", 10162},
		{"ressci.004", 0, "b2bd962abeb3c1239773fdf7a530231c", 50998883},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_PQSWAT },

	// Police Quest: SWAT - English Macintosh CD
	// NOTE: This only contains disc 1 files
	{"pqswat", "", {
		{"Data1", 0, "03f10959f32a894a65385dfee19022fa", 842106},
		{"Data2", 0, "9f6975e06881ccf594d1d2011c8fac69", 8572077},
		{"Data3", 0, "80ac4ba29e1c6a6abeef06566c389028", 9785229},
		{"Data4", 0, "450e87b388e3b759b68c6ceb6bb4ca89", 10271083},
		{"Data5", 0, "223eed8e3a64e2fb76f25bd49afbbb79", 1712932},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_PQSWAT },

#undef GUIO_PQSWAT_DEMO
#undef GUIO_PQSWAT

	// Quest for Glory 1 / Hero's Quest - English DOS 3.5" Floppy (supplied by merkur in bug report #4253)
	// Executable scanning reports "0.000.566"
	{"qfg1", "", {
		{"resource.map", 0, "c1dc4470fb947c067567252f62d6c1b6", 6474},
		{"resource.000", 0, "481b034132106390cb5160fe61dd5f58", 80334},
		{"resource.001", 0, "4d67acf52833ff45c7f753d6663532e8", 462727},
		{"resource.002", 0, "439ba9b6dde216e6eb97ef3a9830fbe4", 646869},
		{"resource.003", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 642203},
		{"resource.004", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 641688},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Quest for Glory 1 / Hero's Quest - English DOS 3.5" Floppy v1.001 Int#0.000.566 (supplied by alonzotg in bug report #5606)
	{"qfg1", "", {
		{"resource.map", 0, "85512508ed4e4ef1e3b309adabceeda9", 6486},
		{"resource.000", 0, "481b034132106390cb5160fe61dd5f58", 80334},
		{"resource.001", 0, "4d67acf52833ff45c7f753d6663532e8", 462729},
		{"resource.002", 0, "439ba9b6dde216e6eb97ef3a9830fbe4", 647244},
		{"resource.003", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 642203},
		{"resource.004", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 641688},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Quest for Glory 1 / Hero's Quest - English DOS 3.5" Floppy v1.102 Int#0.000.629 (suppled by digitoxin1 in bug report #6115)
	{"qfg1", "", {
		{"resource.map", 0, "b162dbd4632250d4d83bed46d0783c10", 6396},
		{"resource.000", 0, "40332d3ebfc70a4b6a6a0443c2763287", 78800},
		{"resource.001", 0, "a270012fa74445d74c044d1b65a9ff8c", 459835},
		{"resource.002", 0, "e64004e020fdf1813be52b639b08be89", 635561},
		{"resource.003", 0, "f0af87c60ec869946da442833aa5afa8", 640502},
		{"resource.004", 0, "f0af87c60ec869946da442833aa5afa8", 644575},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 / Hero's Quest - English DOS 5.25" Floppy v1.102 Int#0.000.629 (suppled by digitoxin1 in bug report #6115)
	{"qfg1", "", {
		{"resource.map", 0, "5772a2c1bfae46f26582582c9901121e", 6858},
		{"resource.000", 0, "40332d3ebfc70a4b6a6a0443c2763287", 78800},
		{"resource.001", 0, "a270012fa74445d74c044d1b65a9ff8c", 75090},
		{"resource.002", 0, "d22695c53835dfdece056d86f26c251e", 271354},
		{"resource.003", 0, "3cd085e27078f269b3ece5838812ff41", 258084},
		{"resource.004", 0, "8927c7a04a78f1e76f342db3ccc9d879", 267835},
		{"resource.005", 0, "13d16cc9b90b51e2c8643cdf52a62957", 268807},
		{"resource.006", 0, "48b2b3c964dcbeccb68e984e6d4e97db", 278473},
		{"resource.007", 0, "f0af87c60ec869946da442833aa5afa8", 269237},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Quest for Glory 1 / Hero's Quest - English DOS 5.25" Floppy (supplied by markcoolio in bug report #4277)
	// Executable scanning reports "0.000.566"
	{"qfg1", "", {
		{"resource.map", 0, "94bc3f2ae2dad12f1303606740d087ff", 6936},
		{"resource.000", 0, "481b034132106390cb5160fe61dd5f58", 80334},
		{"resource.001", 0, "4d67acf52833ff45c7f753d6663532e8", 95498},
		{"resource.002", 0, "3e2a89d60d385caca5b3394049da4bc4", 271587},
		{"resource.003", 0, "e56e9fd2f7d2c98774699f7a5087e524", 255998},
		{"resource.004", 0, "d74cd4290bf60e1409117202e4ce8592", 266415},
		{"resource.005", 0, "7288ed6d5da89b7a80b4af3897a7963a", 271185},
		{"resource.006", 0, "69366c2a2f99917199fe1b60a4fee19d", 267852},
		{"resource.007", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 272747},
		{"resource.008", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 263728},
		{"resource.009", 0, "5e35f434cf102c323a1adf999682e712", 273698},
		{"resource.010", 0, "84602c36ecd9fb33d887e095f9300d82", 267913},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER },

	// Quest for Glory 1 / Hero's Quest - English DOS 5.25" Floppy (supplied by ssburnout in bug report #5270)
	// 1.001 10x5.25" (label: INT.#0.000.566)
	{"qfg1", "", {
		{"resource.map", 0, "c5a0346ff16c43b1eea9583d15e7743c", 6948},
		{"resource.000", 0, "481b034132106390cb5160fe61dd5f58", 80334},
		{"resource.001", 0, "4d67acf52833ff45c7f753d6663532e8", 95500},
		{"resource.002", 0, "3e2a89d60d385caca5b3394049da4bc4", 271587},
		{"resource.003", 0, "e56e9fd2f7d2c98774699f7a5087e524", 256373},
		{"resource.004", 0, "d74cd4290bf60e1409117202e4ce8592", 266415},
		{"resource.005", 0, "7288ed6d5da89b7a80b4af3897a7963a", 271185},
		{"resource.006", 0, "69366c2a2f99917199fe1b60a4fee19d", 267852},
		{"resource.007", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 272747},
		{"resource.008", 0, "7ab2bf8e224b57f75e0cd6e4ba790761", 263728},
		{"resource.009", 0, "5e35f434cf102c323a1adf999682e712", 273698},
		{"resource.010", 0, "84602c36ecd9fb33d887e095f9300d82", 267913},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 / Hero's Quest - English DOS 5.25" Floppy (supplied by ssburnout in bug report #5270)
	// 1.200 10x5.25" (label: INT#9.10.90)
	{"qfg1", "", {
		{"resource.map", 0, "96939838dd9aa17b110c25256f04dd0b", 6906},
		{"resource.000", 0, "40332d3ebfc70a4b6a6a0443c2763287", 79181},
		{"resource.001", 0, "917fcef303e9489597154727baaa9e07", 74752},
		{"resource.002", 0, "c000304092dc439d5103563853b4fc6d", 273186},
		{"resource.003", 0, "1903eb08c02e2218b4a38ab9d5553e01", 258115},
		{"resource.004", 0, "4b8e46d72ce887d13c552be56db3b3c8", 267882},
		{"resource.005", 0, "f40198349d542e105d040743435e0cd6", 268907},
		{"resource.006", 0, "f46690dca714abc8c89357d30e363dd3", 278387},
		{"resource.007", 0, "951299a82a8134ed12c5c18118d45c2f", 269173},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 / Hero's Quest - English Atari ST
	// Game version 1.137
	// Executable reports "1.002.028"
	{"qfg1", "", {
		{"resource.map", 0, "2a794066ad161acbedac8fa14e46905d", 6438},
		{"resource.000", 0, "40332d3ebfc70a4b6a6a0443c2763287", 79204},
		{"resource.001", 0, "f7fc269d3db146830d6427d3e02d4187", 473547},
		{"resource.002", 0, "e64004e020fdf1813be52b639b08be89", 635687},
		{"resource.003", 0, "f0af87c60ec869946da442833aa5afa8", 640438},
		{"resource.004", 0, "f0af87c60ec869946da442833aa5afa8", 644452},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 / Hero's Quest - English DOS Demo
	// Executable scanning reports "0.000.685"
	{"qfg1", "Demo", {
		{"resource.map", 0, "df34c758cbb9026da175793ff686b0e6", 882},
		{"resource.001", 0, "73fbaafdd313b39aeedb80fbf85ecef1", 389884},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 - Japanese PC-98 5.25" Floppy (also includes English language)
	// Executable scanning reports "S.old.201", VERSION file reports "1.000.006"
	// READ.ME file says version "1.100"
	{"qfg1", "8 Colors", {
		{"resource.map", 0, "5cbeb95dd2a4b7cb242b415cc6ec1c47", 6444},
		{"resource.001", 0, "a21451ef6fa8179bd4b22c4950004c44", 859959},
		{"resource.002", 0, "a21451ef6fa8179bd4b22c4950004c44", 1136968},
		{"resource.003", 0, "a21451ef6fa8179bd4b22c4950004c44", 769897},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO7(GUIO_NOSPEECH, GUIO_NOASPECT, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING) },

	// Quest for Glory 1 - Japanese PC-98 5.25" Floppy (also includes English language)
	// Executable scanning reports "S.old.201", VERSION file reports "1.000.006"
	// READ.ME file says version "1.100"
	{"qfg1", "16 Colors", {
		{"resource.map", 0, "3ecaba33bf77cb434067a0b8aee15097", 6444},
		{"resource.001", 0, "a21451ef6fa8179bd4b22c4950004c44", 864754},
		{"resource.002", 0, "a21451ef6fa8179bd4b22c4950004c44", 1147121},
		{"resource.003", 0, "a21451ef6fa8179bd4b22c4950004c44", 777575},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO7(GUIO_NOSPEECH, GUIO_NOASPECT, GAMEOPTION_EGA_UNDITHER, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING) },

	// Quest for Glory 1 - English Amiga
	// Executable scanning reports "1.002.020"
	// SCI interpreter version 0.000.685
	{"qfg1", "", {
		{"resource.map", 0, "e65034832f0c9df1dc22128227b782d0", 6066},
		{"resource.000", 0, "1c0255dea2d3cd71eee9f2db201eee3f", 111987},
		{"resource.001", 0, "a270012fa74445d74c044d1b65a9ff8c", 143570},
		{"resource.002", 0, "e64004e020fdf1813be52b639b08be89", 553201},
		{"resource.003", 0, "16cd4414c37ae3bb6d6da33dce8e25e8", 654096},
		{"resource.004", 0, "16cd4414c37ae3bb6d6da33dce8e25e8", 689124},
		{"resource.005", 0, "5f3386ef2f2b1254e4a066f5d9027324", 609529},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 - English DOS
	// SCI interpreter version 0.000.629
	{"qfg1", "", {
		{"resource.map", 0, "74a108a7fb345bfc84f4113b6e5241bb", 6432},
		{"resource.000", 0, "40332d3ebfc70a4b6a6a0443c2763287", 79181},
		{"resource.001", 0, "917fcef303e9489597154727baaa9e07", 461422},
		{"resource.002", 0, "05ddce5f437a516b89ede2438fac09d8", 635734},
		{"resource.003", 0, "951299a82a8134ed12c5c18118d45c2f", 640483},
		{"resource.004", 0, "951299a82a8134ed12c5c18118d45c2f", 644443},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 1 VGA Remake - English DOS
	// VERSION file reports "2.000"
	// Executable scanning reports "2.000.411"
	{"qfg1vga", "VGA", {
		{"resource.map", 0, "a731fb6c9c0b282443f7027bc8694d4c", 8469},
		{"resource.000", 0, "ecace1a2771846b1a8aa1afdd44111a0", 6570147},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Russian translation, based on English DOS version
	// Version 1.01
	{"qfg1vga", "VGA", {
		{"resource.map", 0, "a731fb6c9c0b282443f7027bc8694d4c", 8469},
		{"resource.000", 0, "ecace1a2771846b1a8aa1afdd44111a0", 6570147},
		{"556.msg",      0, "859bdc832fc9e080aadacdbc00a5979c", 2621},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 1 VGA Remake - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// Executable scanning reports "2.000.411"
	{ "qfg1vga", "VGA", {
		{"resource.map", 0, "a731fb6c9c0b282443f7027bc8694d4c", 8469},
		{"resource.000", 0, "ecace1a2771846b1a8aa1afdd44111a0", 6570147},
		{"PATCHES/300.fon", 0, "3cc38f11c31709a6c860f8d3be4c8bbe", 2964},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16 },

	// Quest for Glory 1 VGA Remake - English DOS Non-Interactive Demo (from FRG)
	// SCI interpreter version 1.001.029
	{"qfg1vga", "VGA/Demo", {
		{"resource.map", 0, "ac0257051c95a59c0cdc0be24d9b11fa", 729},
		{"resource.000", 0, "ec6f5cf369054dd3e5392995e9975b9e", 768218},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Quest for Glory 1 VGA Remake - English Macintosh Floppy
	// VERSION file reports "2.0"
	{"qfg1vga", "VGA", {
		{"Data1", 0, "106527ff8756e4e1a795d63d23e8b833", 1752102},
		{"Data2", 0, "5cdd92033231159c6e9c71d43e9f194d", 6574490},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO_STD16_MAC_HIRESFONTS },

	// Quest for Glory 2 - English Amiga
	// Game version 1.109
	// Executable scanning reports "1.003.004"
	// SCI interpreter version 0.001.010
	{"qfg2", "", {
		{"resource.map", 0, "365ea1033ba26d227ec4007be88c59cc", 7596},
		{"resource.000", 0, "810245be50fde5a67e3ea95e876e3e64", 233341},
		{"resource.001", 0, "7a5fde9875211ed67a896fc0d91940c8", 127294},
		{"resource.002", 0, "dcf6bc2c18660d7ad532fb61861eb721", 543644},
		{"resource.003", 0, "dcf6bc2c18660d7ad532fb61861eb721", 565044},
		{"resource.004", 0, "dcf6bc2c18660d7ad532fb61861eb721", 466630},
		{"resource.005", 0, "a77d2576c842b2b06da57d4ac8fc51c0", 579975},
		{"resource.006", 0, "ccf5dba33e5cab6d5872838c0f8db44c", 500039},
		{"resource.007", 0, "4c9fc1587545879295cb9627f56a2cb8", 575056},
		{"resource.008", 0, "3979394c0210ff404c6c59849dd8d865", 598338},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English (supplied by ssburnout in bug report #5270)
	// 1.000 5x5.25" (label: INT#10.31.90)
	{"qfg2", "", {
		{"resource.map", 0, "5b07fa7ea23afb7dd6804e64e7f7470f", 6906},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212151},
		{"resource.001", 0, "e4cc56e7a471325bc8ba1dc78334f52f", 866944},
		{"resource.002", 0, "5f08242f962293be8fb852f183342350", 790850},
		{"resource.003", 0, "0790f67d87642132be515cab05026baa", 972144},
		{"resource.004", 0, "2ac1e6fea9aa1f5b91a06693a67b9766", 982830},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English (supplied by ssburnout in bug report #5270)
	// 1.000 9x3.5" (label: INT#10.31.90)
	{"qfg2", "", {
		{"resource.map", 0, "1e30119a632a53eb8343fff7c9989025", 8148},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212151},
		{"resource.001", 0, "e4cc56e7a471325bc8ba1dc78334f52f", 331803},
		{"resource.002", 0, "5f08242f962293be8fb852f183342350", 468129},
		{"resource.003", 0, "5f08242f962293be8fb852f183342350", 501963},
		{"resource.004", 0, "5f08242f962293be8fb852f183342350", 482486},
		{"resource.005", 0, "5f08242f962293be8fb852f183342350", 478071},
		{"resource.006", 0, "5e9deacbdb17198ad844988e04833520", 498593},
		{"resource.007", 0, "2ac1e6fea9aa1f5b91a06693a67b9766", 490151},
		{"resource.008", 0, "5e85f6cf401eaad1bbd5dd978da81f47", 482914},
		{"resource.009", 0, "9fa9a4326a5026e13a3afdbabc1e2abd", 480904},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English (from FRG)
	// 1.102 5x5.25" (label: INT#11.20.90)
	// Executable scanning reports "1.000.072"
	{"qfg2", "", {
		{"resource.map", 0, "bc79c5685c00edab3ad6df18691703bc", 6906},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212119},
		{"resource.001", 0, "e08d7887e30b12008c40f9570447711a", 867866},
		{"resource.002", 0, "df137dc7869cab07e1149ba2333c815c", 790750},
		{"resource.003", 0, "b192607c42f6960ecdf2ad2e4f90e9bc", 972804},
		{"resource.004", 0, "cd2de58e27665d5853530de93fae7cd6", 983617},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English DOS (supplied by digitoxin1 in bug report #6116)
	// v1.102 9x3.5" (label: Int#11.20.90)
	{"qfg2", "", {
		{"resource.map", 0, "367023314ea33e3156297402f6c1da49", 8166},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212119},
		{"resource.001", 0, "e08d7887e30b12008c40f9570447711a", 331995},
		{"resource.002", 0, "df137dc7869cab07e1149ba2333c815c", 467461},
		{"resource.003", 0, "df137dc7869cab07e1149ba2333c815c", 502560},
		{"resource.004", 0, "df137dc7869cab07e1149ba2333c815c", 488532},
		{"resource.005", 0, "df137dc7869cab07e1149ba2333c815c", 478574},
		{"resource.006", 0, "b1944bd664ddbd2859cdaa0c4a0d6281", 507489},
		{"resource.007", 0, "cd2de58e27665d5853530de93fae7cd6", 490794},
		{"resource.008", 0, "977a3706f90dd1b4770b6628a4af4530", 483289},
		{"resource.009", 0, "9fa9a4326a5026e13a3afdbabc1e2abd", 485301},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English DOS
	// v1.105, 5x5.25"
	// Executable scanning reports "1.000.087"
	{"qfg2", "", {
		{"resource.map", 0, "275abaeab8bcc20776c43e543c405832", 6906},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212120},
		{"resource.001", 0, "e08d7887e30b12008c40f9570447711a", 867967},
		{"resource.002", 0, "df137dc7869cab07e1149ba2333c815c", 790794},
		{"resource.003", 0, "b192607c42f6960ecdf2ad2e4f90e9bc", 972806},
		{"resource.004", 0, "cd2de58e27665d5853530de93fae7cd6", 983617},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English DOS
	// v1.105, 9x3.5" (label: INT#12.7.90)
	// Executable scanning reports "1.000.087"
	{"qfg2", "", {
		{"resource.map", 0, "be23af27e9557bf232efe213ac7f277c", 8166},
		{"resource.000", 0, "a17e374c4d33b81208c862bc0ffc1a38", 212120},
		{"resource.001", 0, "e08d7887e30b12008c40f9570447711a", 331973},
		{"resource.002", 0, "df137dc7869cab07e1149ba2333c815c", 467505},
		{"resource.003", 0, "df137dc7869cab07e1149ba2333c815c", 502560},
		{"resource.004", 0, "df137dc7869cab07e1149ba2333c815c", 488541},
		{"resource.005", 0, "df137dc7869cab07e1149ba2333c815c", 478688},
		{"resource.006", 0, "b1944bd664ddbd2859cdaa0c4a0d6281", 507489},
		{"resource.007", 0, "cd2de58e27665d5853530de93fae7cd6", 490794},
		{"resource.008", 0, "977a3706f90dd1b4770b6628a4af4530", 483289},
		{"resource.009", 0, "9fa9a4326a5026e13a3afdbabc1e2abd", 485303},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_UNDITHER	},

	// Quest for Glory 2 - English DOS Non-Interactive Demo
	// Executable scanning reports "1.000.046"
	{"qfg2", "Demo", {
		{"resource.map", 0, "e75eb86bdd517b3ef709058249986a87", 906},
		{"resource.001", 0, "9b098f9e1008abe30e56c93b896494e6", 362123},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_UNDITHER	},

	// Quest for Glory 3 - English DOS Non-Interactive Demo (from FRG)
	// Executable scanning reports "1.001.021", VERSION file reports "1.000, 0.001.059, 6.12.92"
	{"qfg3", "Demo", {
		{"resource.map", 0, "fd71de9b588a45f085317caacf050e91", 687},
		{"resource.000", 0, "b6c69bf6c18bf177492249fe81fc6a6d", 648702},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Quest for Glory 3 - English DOS
	// SCI interpreter version 1.001.050
	{"qfg3", "", {
		{"resource.map", 0, "19e2bf9b693932b5e2bb59b9f9ab86c9", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5868000},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 3 - English DOS (supplied by abevi in bug report #4176)
	// SCI interpreter version 1.001.050
	{"qfg3", "", {
		{"resource.map", 0, "62c185d190363d7df06330fa0cc45b36", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5867442},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 3 - English DOS (supplied by dknute in bug report #5542)
	{"qfg3", "", {
		{"resource.map", 0, "19e2bf9b693932b5e2bb59b9f9ab86c9", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5868042},
		{"resource.msg", 0, "27e5419c98ce444253f88c95dced14a9", 246888},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 3 - German DOS (supplied by markcoolio in bug report #4278)
	// Executable scanning reports "L.rry.083"
	{"qfg3", "", {
		{"resource.map", 0, "19e2bf9b693932b5e2bb59b9f9ab86c9", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5868042},
		{"resource.msg", 0, "b15bc88d223082ee676551569512e937", 279694},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 3 - French DOS v1.1 (supplied by misterhands in bug report #6182)
	// Executable scanning reports "L.rry.083"
	{"qfg3", "", {
		{"resource.map", 0, "19e2bf9b693932b5e2bb59b9f9ab86c9", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5868000},
		{"resource.msg", 0, "0fa1047002df904b8d1807bb7bab4fab", 267210},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Quest for Glory 3 - Spanish DOS CD (from jvprat)
	// Executable scanning reports "L.rry.083", VERSION file reports "1.000.000, June 30, 1994"
	{"qfg3", "", {
		{"resource.map", 0, "10809197c33a5e62819311d8a2f73f85", 5978},
		{"resource.000", 0, "ba7ac86155e4c531e46cd73c86daa80a", 5884098},
		{"resource.msg", 0, "a63974730d294dec0bea10057c36e506", 256014},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Quest for Glory 3 - Italian DOS
	// Supplied by ghoost in bug report #5310
	{"qfg3", "", {
		{"resource.map", 0, "19e2bf9b693932b5e2bb59b9f9ab86c9", 5958},
		{"resource.000", 0, "6178ad2e83e58e4671ca03315f7a6498", 5868000},
		{"resource.msg", 0, "5a0a896ff3e4a628db38a75eb6c84114", 259018},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Quest for Glory 3 - Russian DOS fan-tanslation by old-games.ru
	{"qfg3", "", {
		{"resource.map", 0, "bee7ca7b4c3455452f5eb17ce5da6231", 5962},
		{"resource.000", 0, "5186e4ac205132b06d9aaec8dff9d77e", 5990202},
		{"resource.msg", 0, "f89eb3bc2b0e192e8708c1053e39b5df", 243214},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Quest for Glory 4 - English DOS Non-Interactive Demo (from FRG)
	// SCI interpreter version 1.001.069 (just a guess)
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like qfg4demo-demo
	{"qfg4demo", "Demo", {
		{"resource.map", 0, "1ba7c7ae1efb315326d45cb931569b1b", 922},
		{"resource.000", 0, "41ba03f0b188b029132daa3ece0d3e14", 623154},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Quest for Glory 4 - English DOS Non-Interactive Demo (from KQ6 CD-ROM)
	// No interpreter version number, doesn't include FLYTHRU.SEQ intro
	// Note: we are not using ADGF_DEMO here, to avoid a game ID like qfg4demo-demo
	{"qfg4demo", "Demo", {
		{ "resource.map", 0, "0d71869e3fa1d6a23c2a76ad845f693f", 922 },
		{ "resource.000", 0, "41ba03f0b188b029132daa3ece0d3e14", 623154 },
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16 },

#define GUIO_QFG4_FLOPPY GUIO4(GUIO_NOSPEECH, \
							   GAMEOPTION_ORIGINAL_SAVELOAD, \
							   GAMEOPTION_TTS, \
							   GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_QFG4_CD     GUIO4(GUIO_LINKSPEECHTOSFX, \
							   GAMEOPTION_ORIGINAL_SAVELOAD, \
							   GAMEOPTION_HQ_VIDEO, \
							   GAMEOPTION_ENABLE_GMM_SAVE)

	// Quest for Glory 4 1.0 Floppy - English DOS
	// SCI interpreter version 2.000.000
	{"qfg4", "", {
		{"resource.map", 0, "d10a4cc177d2091d744e2ad8c049b0ae", 9295},
		{"resource.000", 0, "f64fd6aa3977939a86ff30783dd677e1", 11003589},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_QFG4_FLOPPY },			   

	// Quest for Glory 4 1.1 Floppy - English DOS (supplied by markcool in bug report #4280)
	// SCI interpreter version 2.000.000
	{"qfg4", "", {
		{"resource.map", 0, "685bdb1ed47bbbb0e5e25db392da83ce", 9301},
		{"resource.000", 0, "f64fd6aa3977939a86ff30783dd677e1", 11004993},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_QFG4_FLOPPY },

	// Quest for Glory 4 1.1 Floppy - German DOS (supplied by markcool in bug report #4279)
	// Executable scanning reports "2.000.000", VERSION file reports "1.1"
	{"qfg4", "", {
		{"resource.map", 0, "9e0abba8746f40565bc7eb5720522ecd", 9301},
		{"resource.000", 0, "57f22cdc54eeb35fce1f26b31b5c3ee1", 11076197},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_QFG4_FLOPPY },

	// Quest for Glory 4 CD - English DOS/Windows (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"qfg4", "CD", {
		{"resource.map", 0, "aba367f2102e81782d961b14fbe3d630", 10246},
		{"resource.000", 0, "263dce4aa34c49d3ad29bec889007b1c", 11571394},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_QFG4_CD	},

	// Quest for Glory 4 CD - English DOS/Windows (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"qfg4", "CD", {
		{"resource.map", 0, "aba367f2102e81782d961b14fbe3d630", 10246},
		{"resource.000", 0, "263dce4aa34c49d3ad29bec889007b1c", 11571394},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_QFG4_CD	},

#undef GUIO_QFG4_FLOPPY
#undef GUIO_QFG4_CD

#define GUIO_RAMA_DEMO GUIO8(GUIO_NOSUBTITLES, \
							 GUIO_NOMIDI, \
							 GUIO_NOLAUNCHLOAD, \
							 GUIO_NOASPECT, \
							 GUIO_LINKSPEECHTOSFX, \
							 GUIO_LINKMUSICTOSFX, \
							 GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							 GAMEOPTION_HQ_VIDEO)
#define GUIO_RAMA      GUIO7(GUIO_NOSUBTITLES, \
							 GUIO_NOMIDI, \
							 GUIO_NOASPECT, \
							 GUIO_LINKSPEECHTOSFX, \
							 GAMEOPTION_ORIGINAL_SAVELOAD, \
							 GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							 GAMEOPTION_HQ_VIDEO)

	// RAMA - English DOS/Windows Demo
	// Executable scanning reports "2.100.002", VERSION file reports "000.000.008"
	{"rama", "Demo", {
		{"resmap.001", 0, "775304e9b2a545156be4d94209550094", 1393},
		{"ressci.001", 0, "259437fd75fdf51e8207fda8c01fa4fd", 2334384},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_RAMA_DEMO },

	// RAMA - English DOS/Windows Demo
	// Executable scanning reports "2.100.002", VERSION file reports "00.001.000"
	{"rama", "Demo", {
		{"resmap.001", 0, "13f48e8f8a8860f832589b4657107011", 1459},
		{"ressci.001", 0, "2a45964695196795837b434588003a40", 2318114},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_RAMA_DEMO },

	// RAMA - English DOS/Windows (from jvprat)
	// Executable scanning reports "3.000.000", VERSION file reports "1.100.000"
	{"rama", "", {
		{"resmap.001", 0, "3bac72a1910a563f8f92cf5b77c8b7f2", 8338},
		{"ressci.001", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70588050},
		{"resmap.002", 0, "83c2aa4653a985ab4b49ff60532ed08f", 12082},
		{"ressci.002", 0, "2a68edd064e5e4937b5e9c74b38f2082", 128562138},
		{"resmap.003", 0, "31ef4c0621711585d031f0ae81707251", 1636},
		{"ressci.003", 0, "2a68edd064e5e4937b5e9c74b38f2082", 6860492},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_RAMA },

	// RAMA - English DOS/Windows (from Quietust, in bug report #4583)
	{"rama", "", {
		{"resmap.001", 0, "4a2f3dd87f8033dc0deac43e820cc1ca", 8338},
		{"ressci.001", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70599164},
		{"resmap.002", 0, "039d7a2191e3ab3d3ae9c12f208aab0e", 12082},
		{"ressci.002", 0, "2a68edd064e5e4937b5e9c74b38f2082", 128572432},
		{"resmap.003", 0, "48841e4b84ef1b98b48d43566fda9e13", 1636},
		{"ressci.003", 0, "2a68edd064e5e4937b5e9c74b38f2082", 6870356},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_RAMA },

	// RAMA - German DOS/Windows CD (from farmboy0, in gh-397)
	{"rama", "", {
		{"resmap.001", 0, "f68cd73308c46977a9632dfc618e1e38", 8338},
		{"ressci.001", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70595521},
		{"resmap.002", 0, "891fc2f5d9e23e7d9a9454acc7aaae52", 12082},
		{"ressci.002", 0, "2a68edd064e5e4937b5e9c74b38f2082", 128508558},
		{"resmap.003", 0, "222096000bd83a1d56577114a452cccf", 1636},
		{"ressci.003", 0, "2a68edd064e5e4937b5e9c74b38f2082", 6954219},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_RAMA },

	// RAMA - French DOS/Windows CD (from bgK)
	// Executable scanning reports "3.000.000", VERSION file reports "1.000.000"
	{"rama", "", {
		{"resmap.001", 0, "c931947115a69bb4c1760cef04e4018f", 8338},
		{"ressci.001", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70783560},
		{"resmap.002", 0, "2f70519e32dd4d56d0009d127797a444", 12082},
		{"ressci.002", 0, "2a68edd064e5e4937b5e9c74b38f2082", 128724165},
		{"resmap.003", 0, "fd2ce2312084e60b2cc5194a799873d0", 1636},
		{"ressci.003", 0, "2a68edd064e5e4937b5e9c74b38f2082", 6379952},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_RAMA },

	// RAMA - Italian DOS/Windows CD (from glorifindel)
	{"rama", "", {
		{"ressci.001", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70611091},
		{"resmap.001", 0, "70ba2ff04a2b7fb2c52420ba7fbd47c2", 8338},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_RAMA },

	// RAMA - English Macintosh CD
	// NOTE: This only contains disc 1 files
	{"rama", "", {
		{"Data1", 0, "6013a1ea890f831c3ff05cdda4b4bcc0", 805609},
		{"Data2", 0, "242362ae1ecfbda37b31a952b25303e9", 8570570},
		{"Data3", 0, "1ee46ff2d7f02bf46ec0c4aa8f84cbb4", 10692088},
		{"Data4", 0, "15519ad5d8d7f12db08e1a91a762c237", 6779994},
		{"Data5", 0, "ac555290c183ba784bb9af07d6cfcd91", 6904779},
		{"Data6", 0, "e98507e9d1b77dff1f5d3c0733cf246d", 7760820},
		{"Data7", 0, "f43cd59c73db073d0fe4caf41d1575bb", 9178826},
		{"Data8", 0, "0a8ab5005aa762dd8b0291fce6e7e838", 6928720},
		{"Data9", 0, "a96190a98be651813128170e17e75c57", 6204832},
		{"Data10", 0, "085542cc4ced8dda9eca454b1334dfa4", 5577878},
		{"Data11", 0, "a812ef1adfccdd571797250abf6b9db2", 4948629},
		{"Data12", 0, "17e2254bdfb100d1981524f93b6ed06a", 1440211},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_RAMA },

#undef GUIO_RAMA_DEMO
#undef GUIO_RAMA

	// The Realm - English Windows demo from the Space Quest Collection
	// Executable scanning reports "2.100.002", VERSION file reports "2.184"
	{"realm", "Demo", {
		{"resmap.000", 0, "70ba2ff04a2b7fb2c52420ba7fbd47c2", 8338},
		{"ressci.000", 0, "2a68edd064e5e4937b5e9c74b38f2082", 70611091},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_UNSTABLE, GUIO1(GUIO_NONE) },

	// The Realm - English Windows demo from SWAT 2 CD
	// Executable scanning reports "2.100.002", version file reports "3.38"
	{"realm", "Demo", {
		{"resmap.000", 0, "cff25ac9b1a24b38b964c67d5c5dbcac", 2344},
		{"ressci.000", 0, "93f0c4caa2461f383a656c6e81656efc", 431707},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_UNSTABLE, GUIO1(GUIO_NONE) },

#define GUIO_SHIVERS_DEMO GUIO7(GUIO_NOSUBTITLES, \
								GUIO_NOMIDI, \
								GUIO_NOLAUNCHLOAD, \
								GUIO_LINKSPEECHTOSFX, \
								GUIO_LINKMUSICTOSFX, \
								GUIO_NOASPECT, \
								GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_SHIVERS      GUIO7(GUIO_NOMIDI, \
								GUIO_LINKSPEECHTOSFX, \
								GUIO_LINKMUSICTOSFX, \
								GUIO_NOASPECT, \
								GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
								GAMEOPTION_HQ_VIDEO, \
								GAMEOPTION_ENABLE_GMM_SAVE)

	// Shivers - English Windows (from jvprat)
	// Executable scanning reports "2.100.002", VERSION file reports "1.02"
	{"shivers", "", {
		{"resmap.000", 0, "f2ead37749ed8f6535a2445a7d05a0cc", 46525},
		{"ressci.000", 0, "4294c6d7510935f2e0a52e302073c951", 262654836},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - German Windows (from Tobis87)
	{"shivers", "", {
		{"resmap.000", 0, "f483d0a1f78334c18052e92785c3086e", 46537},
		{"ressci.000", 0, "6751b144671e2deed919eb9d284b07eb", 262390692},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - French Windows (from legluondunet in bug report Trac#9742)
	{"shivers", "", {
		{"resmap.000", 0, "73bee036dc8ece0d03f637eb340ea428", 46543},
		{"ressci.000", 0, "8d45ebb1e5a13468d10e676b8dbce682", 262161072},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - English Windows Non-interactive Demo
	// Executable scanning reports "2.100.002"
	{"shivers", "Non-interactive Demo", {
		{"resmap.000", 0, "d9e0bc5eddefcbe47f528760085d8927", 1186},
		{"ressci.000", 0, "3a93c6340b54e07e65d0e5583354d186", 10505469},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - English Windows Interactive Demo (from bgK in bug report Trac#9745)
	{"shivers", "Demo", {
		{"resmap.000", 0, "58a20b0c839d31d56802ead6c8f953c4", 7069},
		{"ressci.000", 0, "f9eb6338f658945feadd4d27e58bdb93", 37404155},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - English Windows CD Demo (from Metro Games Sierra CD Sampler)
	// Executable scanning reports "2.100.002"
	{"shivers", "CD Demo", {
		{"resmap.000", 0, "0b0e89db3ca62e537922d2f38cce78c7", 30907},
		{"ressci.000", 0, "4606f32e83c301a4e90ca5e5d2d85a70", 78611217},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_SHIVERS },

	// Shivers - English Macintosh CD
	{"shivers", "", {
		{"Data1", 0, "7154f2fc5466f0cd6923deb1a6f6729a", 4635227},
		{"Data2", 0, "499e46f2b9d1c1485eca53cb90d60a18", 518319},
		{"Data3", 0, "8f874e8207f3bf0f1d089fb3af01c1ad", 10159477},
		{"Data4", 0, "af5e6582a7157eb2a8784fa7098cf1b1", 15478818},
		{"Data5", 0, "1db5025dce818f35bab9acd6e67b5e31", 15634772},
		{"Data6", 0, "d64c3acef05ffe1ae09173fdc7fad1fa", 15536612},
		{"Data7", 0, "e0ff5994850499fe80024af11291e9db", 14592595},
		{"Data8", 0, "2add76cb84e374c1cd56469b9fc85f3d", 15776746},
		{"Data9", 0, "5415a1b9634fcdd8ce5ce736ee97ff92", 14644112},
		{"Data10", 0, "4f2c24bcc71a35654b39ad8faa537f96", 16371123},
		{"Data11", 0, "821e464fd28e5a2e9ca084cde9daeac6", 15269753},
		{"Data12", 0, "85e6c8edf7899fc52864b83ede54a38a", 14969853},
		{"Data13", 0, "cfb0bbb2bedb00be4849e3796abad3f8", 15182722},
		// goes up to Data20
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_SHIVERS },

#undef GUIO_SHIVERS_DEMO
#undef GUIO_SHIVERS

	// Shivers 2 doesn't contain SCI scripts. The whole game logic has
	// been reimplemented from SCI in native code placed in DLL files.
	// Each room has its own DLL file, and some SCI functions have been
	// reimplemented/rewritten for this purpose in native code. The
	// game and demo have all the resources of a SCI game, apart from
	// the SCI scripts themselves. Thus, they cannot be directly
	// supported, unless their whole room logic is rewritten from
	// scratch, which classifies Shivers 2 as "not SCI"
	// Shivers2 - English Windows Demo
	// Executable scanning reports "3.000.000"
	{"shivers2", MetaEngineDetection::GAME_NOT_IMPLEMENTED, {
		{"resmap.000", 0, "d8659188b84beaef076bd869837cd530", 634},
		{"ressci.000", 0, "7fbac0807a044c9543e8ac376d200e59", 4925003},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_UNSUPPORTED, GUIO5(GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, GUIO_NOASPECT, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE)	},

	// Shivers 2 - English Windows (from abevi)
	// VERSION.TXT Version 1.0 (3/25/97)
	{"shivers2", MetaEngineDetection::GAME_NOT_IMPLEMENTED, {
		{"ressci.001", 0, "a79d03d6eb75be0a79324f14e3d2ace4", 95346793},
		{"resmap.001", 0, "a4804d436d90c4ec2e46b537f5e954db", 6268},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_UNSUPPORTED, GUIO6(GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, GUIO_NOSPEECH, GUIO_NOASPECT, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE)	},

	// Slater & Charlie Go Camping - English DOS Demo
	// Executable scanning reports "1.cfs.081", VERSION file reports "1.000"
	{"slater", "Demo", {
		{"resource.map", 0, "61b4f74039399e5aa1e737b16d0fc023", 1409},
		{"resource.msg", 0, "1aeafe2b495de288d002109650b66614", 1364},
		{"resource.000", 0, "8e10d4f05c1fd9f883384fa38a898489", 377394},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_SPEECH	},

	// Slater & Charlie Go Camping - English DOS/Windows
	{"slater", "", {
		{"resource.map", 0, "21f85414124dc23e54544a5536dc35cd", 4044},
		{"resource.000", 0, "1846b57fe84774be72f7c50ab3c90df0", 2256126},
		{"resource.msg", 0, "c44f51fb955eae266fecf360ebcd5ad2", 1132},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},


	// Slater & Charlie Go Camping - English DOS/Windows (Sierra Originals)
	{"slater", "", {
		{"resource.map", 0, "21f85414124dc23e54544a5536dc35cd", 4044},
		{"resource.000", 0, "d7b4cc8e2c0b3a4768f8dfb5de27f206", 2256126},
		{"resource.msg", 0, "c44f51fb955eae266fecf360ebcd5ad2", 1132},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// Slater & Charlie Go Camping - English Macintosh
	{"slater", "", {
		{"Data1", 0, "7243b4390e5f0182d8133fbcae4b50c5", 2298597},
		{"Data2", 0, "6b6f18f9b502dc0923eeae0ef47f02d5", 2276700},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK, GUIO1(GUIO_NONE)	},

#define GUIO_SQ1_ENGLISH_PC GUIO8(GUIO_NOSPEECH,                 \
                                  GAMEOPTION_PREFER_DIGITAL_SFX, \
                                  GAMEOPTION_ORIGINAL_SAVELOAD,  \
                                  GAMEOPTION_MIDI_MODE,          \
                                  GAMEOPTION_RGB_RENDERING,      \
                                  GAMEOPTION_SQ1_BEARDED_MUSICIANS, \
                                  GAMEOPTION_TTS, \
                                  GAMEOPTION_ENABLE_GMM_SAVE)

	// Space Quest 1 VGA Remake - English Amiga (from www.back2roots.org)
	// SCI interpreter version 1.000.510 (just a guess)
	{"sq1sci", "SCI", {
		{"resource.map", 0, "106484b372af1d4cbf866472cc2813dc", 6396},
		{"resource.000", 0, "cc9d6ace343661ae51ec8bd6e6b00a8c", 340944},
		{"resource.001", 0, "59efcfa2268d2f8608f544e2674d8151", 761721},
		{"resource.002", 0, "f00ef883128bf5fc2fbb888cdd7adf25", 814461},
		{"resource.003", 0, "2588c1c2ca8b9bed0e3411948c0856a9", 839302},
		{"resource.004", 0, "b25a1539c71701f7715f738c5037e9a6", 775515},
		{"resource.005", 0, "640ffe1a9acde392cc33cc1b1a528328", 806324},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 1 VGA Remake - English DOS (from the Space Quest Collection)
	// Executable scanning reports "T.A00.081", VERSION file reports "2.000"
	// SCI interpreter version 1.000.510 (just a guess)
	{"sq1sci", "SCI", {
		{"resource.map", 0, "38a74d8f555a2da9ca4f21d14e3c1d33", 5913},
		{"resource.000", 0, "e9d866534f8c84de82e25f2631ff258c", 1016436},
		{"resource.001", 0, "a89b7b52064c75b1985b289edc2f5c69", 1038757},
		{"resource.002", 0, "a9e847c687529481f3a22b9bf01f45f7", 1169831},
		{"resource.003", 0, "c47600e50c6fc591957ae0c5020ee7b8", 1213262},
		{"resource.004", 0, "e19ea4ad131472f9238590f2e1d40289", 1203051},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ1_ENGLISH_PC },

	// Space Quest 1 VGA Remake - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS (from the Space Quest Collection)
	// Executable scanning reports "T.A00.081", VERSION file reports "2.000"
	// SCI interpreter version 1.000.510 (just a guess)
	{ "sq1sci", "SCI", {
		{"resource.map", 0, "38a74d8f555a2da9ca4f21d14e3c1d33", 5913},
		{"resource.000", 0, "e9d866534f8c84de82e25f2631ff258c", 1016436},
		{"resource.001", 0, "a89b7b52064c75b1985b289edc2f5c69", 1038757},
		{"resource.002", 0, "a9e847c687529481f3a22b9bf01f45f7", 1169831},
		{"resource.003", 0, "c47600e50c6fc591957ae0c5020ee7b8", 1213262},
		{"resource.004", 0, "e19ea4ad131472f9238590f2e1d40289", 1203051},
		{"PATCHES/4.fon", 0, "b1b10d8efabfab6e8f74132f3a10e3c0", 2140},
		{"PATCHES/60.fon", 0, "22a2ae157d0bc52351c9a0ecf024b041", 2947},
		{"PATCHES/61.fon", 0, "685dffc61480d7c73d0fb2ff77b11e57", 2949},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ1_ENGLISH_PC },

	// Space Quest 1 VGA Remake - Russian DOS (from ncuxonaT in bug report #10156)
	// VERSION file reports "2.000"
	// SCI interpreter version 1.000.510 (just a guess)
	{"sq1sci", "SCI", {
		{"resource.map", 0, "764bcf12ef3d19c2edb12fef95311b18", 5913},
		{"resource.000", 0, "8796727a998f62f5126a88342a6b919c", 1027050},
		{"resource.001", 0, "03b15058b01dfad36a78eeb3237a468a", 1042620},
		{"resource.002", 0, "c10edb6ee3c57da2af7f7f3b92e2d173", 1173464},
		{"resource.003", 0, "da52b87ce225d12a3aa35e6b157e785c", 1214406},
		{"resource.004", 0, "424f08b7593e54aa0ae22478b73e628a", 1208608},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 1 VGA Remake - "Version 2.1" fan patch
	// VERSION file reports "2.1"
	{"sq1sci", "SCI", {
		{"resource.map", 0, "67a6792a8384fca77150e3b6c42a6f1e", 5991},
		{"resource.000", 0, "a5eaa1c8cb48dced9bee23dfafaae19e", 1059308},
		{"resource.001", 0, "15798bab768651db66819779af4185f0", 1039102},
		{"resource.002", 0, "6827e20dc7a4a98c3c0f0e0be5f78cfe", 1169366},
		{"resource.003", 0, "eae18632e2b70bbb688d679fb3022052", 1215951},
		{"resource.004", 0, "252b9bda620fb47ef65b6e2cca3e73be", 1206005},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ1_ENGLISH_PC },

	// Space Quest 1 VGA Remake - English Mac (from Fingolfin)
	{"sq1sci", "SCI", {
		{"resource.map", 0, "5c6ad20407261b544238e8dce87afead", 5895},
		{"resource.000", 0, "2c414644b23839069c8d1a93b721df16", 1017033},
		{"resource.001", 0, "8744ae2ea6b316e91e2a35ab1aa301d2", 1024622},
		{"resource.002", 0, "96860704f7a07ecc10bef223b4b2f153", 1273992},
		{"resource.003", 0, "ae46e195e66df5a131917f0aa80b5669", 1242794},
		{"resource.004", 0, "91d58a9eb2187c38424990afe4c12bc6", 1250949},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC_HIRESFONTS },

	// Space Quest 1 VGA Remake - English Non-Interactive Demo
	// Earlier version of demo, doesn't include view patch files for musicians
	// SCI interpreter version 1.000.181
	{"sq1sci", "SCI/Demo", {
		{"resource.map", 0, "3ff264347ca7b3335144bddc1f3a76ac", 642},
		{"resource.001", 0, "fd99ea43f57576ded7c86036996346cf", 549177},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Space Quest 1 VGA Remake - English Non-Interactive Demo (from FRG)
	// SCI interpreter version 1.000.181
	{"sq1sci", "SCI/Demo", {
		{"resource.map", 0, "5af709ac5e0e923e0b8174f49978c30e", 636},
		{"resource.001", 0, "fd99ea43f57576ded7c86036996346cf", 507642},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

	// Space Quest 1 VGA Remake - Spanish DOS Floppy (from jvprat)
	// Executable scanning reports "T.A00.081", VERSION file reports "2.000"
	// SCI interpreter version 1.000.510 (just a guess)
	{"sq1sci", "SCI", {
		{"resource.map", 0, "cee2a67fa7f8f1f520f398110ca1c37e", 6111},
		{"resource.000", 0, "945081a73211e0c40e62f709edcd8d1d", 970657},
		{"resource.001", 0, "94692dc84c85c93bb8850f58aebf3cfc", 1085687},
		{"resource.002", 0, "fc9ad3357e4cedec1611ad2b67b193a9", 1175465},
		{"resource.003", 0, "8c22700a02991b763f512f837636b3ca", 1211307},
		{"resource.004", 0, "9b78228ad4f9f335fedf74f1812dcfca", 513325},
		{"resource.005", 0, "7d4ebcb745c0bf8fc42e4013f52ecd49", 1101812},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest I 2.0 EGA DOS (6 x 3.5" disks)
	// Provided by ssburnout in bug report #5258
	{"sq1sci", "SCI/EGA", {
		{"resource.map", 0, "dc1bb935bf32da652b2e687617f50cd4", 6003},
		{"resource.000", 0, "e9d866534f8c84de82e25f2631ff258c", 409145},
		{"resource.001", 0, "a89b7b52064c75b1985b289edc2f5c69", 647747},
		{"resource.002", 0, "f43d4f08547336c9fd28c23a7da79c41", 697438},
		{"resource.003", 0, "4164edf21495b9114f9a514e401b4d95", 669070},
		{"resource.004", 0, "975c6e81194ae6b65e960a248129ecaa", 684119},
		{"resource.005", 0, "13d96f7905637552c0647175ff816145", 695589},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ1_ENGLISH_PC },

#undef GUIO_SQ1_ENGLISH_PC

	// Space Quest 3 - English Amiga (from www.back2roots.org)
	// SCI interpreter version 0.000.453 (just a guess)
	{"sq3", "", {
		{"resource.map", 0, "bad41385acde6d677a8d55a7b20437e3", 5868},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 171636},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 754432},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 746496},
		{"resource.004", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 761984},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS },

	// Space Quest 3 - English Atari ST
	// Game version 1.0Q 1989-27-03 17:00
	// Int#1.002.002
	// Executable reports "1.002.001"
	{"sq3", "", {
		{"resource.map", 0, "c36e322805949affd882a75803a6a54e", 5484},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 485146},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 720227},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 688524},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAtariST, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS },

	// Space Quest 3 - German Amiga (also includes english language)
	// Executable scanning reports "1.004.006"
	// SCI interpreter version 0.000.453 (just a guess)
	{"sq3", "", {
		{"resource.map", 0, "44f53185fdf3f44f946e9cac3ca6588b", 6348},
		{"resource.001", 0, "6d8f34090503ce937e7dbef6cb6cdb6a", 238664},
		{"resource.002", 0, "6d8f34090503ce937e7dbef6cb6cdb6a", 642014},
		{"resource.003", 0, "6d8f34090503ce937e7dbef6cb6cdb6a", 712374},
		{"resource.004", 0, "6d8f34090503ce937e7dbef6cb6cdb6a", 545053},
		{"resource.005", 0, "6d8f34090503ce937e7dbef6cb6cdb6a", 687507},
		AD_LISTEND},
	 Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16_PALETTEMODS },

	// Space Quest 3 - English DOS Non-Interactive Demo
	// SCI interpreter version 0.000.453
	{"sq3", "Demo", {
		{"resource.map", 0, "ec66ac2b1ce58b2575ba00b65058de1a", 612},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 180245},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English DOS (provided by richiefs in bug report #4214)
	// SCI interpreter version 0.000.453
	{"sq3", "", {
		{"resource.map", 0, "fee82d211c3918a90ce3b476d3dbb245", 5484},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 485158},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 720244},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 688367},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS },

	// Space Quest 3 - English DOS (from the Space Quest Collection)
	// Executable scanning reports "0.000.685", VERSION file reports "1.018"
	{"sq3", "", {
		{"resource.map", 0, "55e91aeef1705bce2a9b79172682f36d", 5730},
		{"resource.001", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 490247},
		{"resource.002", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 715777},
		{"resource.003", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 703370},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English DOS 6 x 360k Floppy (from misterhands, bug report Trac #10677 and goodoldgeorge, bug report Trac #10636)
	// Executable scanning reports "0.000.685", VERSION file reports "1.018"
	{"sq3", "", {
		{"resource.map", 0, "590ed699f9a4789e9357c1e55ba4b1eb", 6078},
		{"resource.001", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 175038},
		{"resource.002", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 316877},
		{"resource.003", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 330305},
		{"resource.004", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 325779},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English DOS (from telanus, bug report Trac#9626)
	// Game version 1.0P 1989-03-22
	// SCI interpreter version 0.000.453
	{"sq3", "", {
		{"resource.map", 0, "6dd8f59dd8a0c8131f34b159044e645e", 5598},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 170496},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 312537},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 325576},
		{"resource.004", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 321377},
		{"resource.005", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 328162},
		{"resource.006", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 356560},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English DOS (from darksoul42, bug report Trac#10245)
	// Game version 1.0P 1989-03-22
	// SCI interpreter version 0.000.453
	{"sq3", "", {
		{"resource.map", 0, "876445bb0085a62d5966f4153e2ddf52", 5484},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 485059},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 720133},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 688294},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English DOS (from abevi, bug report #4176)
	{"sq3", "", {
		{"resource.map", 0, "eca165515c6b62b05fa86b7d8f727660", 5598},
		{"resource.001", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 170494},
		{"resource.002", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 312557},
		{"resource.003", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 325581},
		{"resource.004", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 321222},
		{"resource.005", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 328278},
		{"resource.006", 0, "ceeda7202b96e5c85ecaa88a40a540fc", 356702},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - German DOS (from Tobis87, also includes english language)
	// SCI interpreter version 0.000.453 (?)
	{"sq3", "", {
		{"resource.map", 0, "4965c78b5eff50d5e4148ce114594ba8", 7584},
		{"resource.001", 0, "9107c2aa5398e28b5c5406df13491f85", 117869},
		{"resource.002", 0, "9107c2aa5398e28b5c5406df13491f85", 336101},
		{"resource.003", 0, "9107c2aa5398e28b5c5406df13491f85", 350391},
		{"resource.004", 0, "9107c2aa5398e28b5c5406df13491f85", 349750},
		{"resource.005", 0, "9107c2aa5398e28b5c5406df13491f85", 322107},
		{"resource.006", 0, "9107c2aa5398e28b5c5406df13491f85", 320643},
		{"resource.007", 0, "9107c2aa5398e28b5c5406df13491f85", 344287},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16_PALETTEMODS },

	// Space Quest 3 v1.052 - German DOS (supplied by markcoolio in bug report #4281, also includes english language)
	// Executable scanning reports "S.old.114"
	{"sq3", "", {
		{"resource.map", 0, "f0dd735098c254f584878649c6f08dbc", 5154},
		{"resource.001", 0, "9107c2aa5398e28b5c5406df13491f85", 567245},
		{"resource.002", 0, "9107c2aa5398e28b5c5406df13491f85", 596768},
		{"resource.003", 0, "9107c2aa5398e28b5c5406df13491f85", 693573},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16_PALETTEMODS	},

	// Space Quest 3 - English Mac (from Fingolfin)
	{"sq3", "", {
		{"resource.map", 0, "5c931675c6e01c4b418faca85d76c92c", 5844},
		{"resource.001", 0, "0d8dfe42683b46f3131823233a91ce6a", 771917},
		{"resource.002", 0, "0d8dfe42683b46f3131823233a91ce6a", 794072},
		{"resource.003", 0, "0d8dfe42683b46f3131823233a91ce6a", 776536},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_UNSTABLE, GUIO_STD16_MAC_PALETTEMODS },

	// Space Quest 3 v1.1 (game says 0.016) - English Mac (supplied by misterhands in bug report #6484)
	// Executable scanning reports "0.024"
	{"sq3", "", {
		{"resource.map", 0, "d1574928fc6187f5958d431ac9d8022e", 5844},
		{"resource.001", 0, "0d8dfe42683b46f3131823233a91ce6a", 771942},
		{"resource.002", 0, "0d8dfe42683b46f3131823233a91ce6a", 794127},
		{"resource.003", 0, "0d8dfe42683b46f3131823233a91ce6a", 776554},
		{"resource.004", 0, "0d8dfe42683b46f3131823233a91ce6a", 787066},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_UNSTABLE, GUIO_STD16_MAC_PALETTEMODS	},
		
	// Space Quest 3 - Hebrew DOS (from the Space Quest Collection)
	// Executable scanning reports "0.000.685", VERSION file reports "1.018"
	// This translation is still a work in progress
	{ "sq3", "", {
		{"resource.map", 0, "55e91aeef1705bce2a9b79172682f36d", 5730},
		{"resource.001", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 490247},
		{"resource.002", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 715777},
		{"resource.003", 0, "8b55c4875298f45ea5696a5ee8f6a7fe", 703370},
		{"PATCHES/font.000", 0, "6fab182f1c071d1ed47be27776964baf", 3334},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS },
		
	// Space Quest 3 - Spanish fan translation. VERSION file reports "06/03/2002"
	{ "sq3", "", {
		{"resource.map", 0, "9ba042c797b62dd46d8979caeed61116", 3726},
		{"resource.001", 0, "c47b9817cf13f16b803fcbce647e63f3", 1514692},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_PALETTEMODS },

#define GUIO_SQ4_CD GUIO6(GAMEOPTION_SQ4_SILVER_CURSORS,	\
						  GAMEOPTION_PREFER_DIGITAL_SFX,	\
						  GAMEOPTION_ORIGINAL_SAVELOAD,		\
						  GAMEOPTION_MIDI_MODE,				\
						  GAMEOPTION_RGB_RENDERING,         \
						  GAMEOPTION_ENABLE_GMM_SAVE)

#define GUIO_SQ4_CD_WINDOWS GUIO8(GUIO_MIDIGM,				\
						  GAMEOPTION_WINDOWS_CURSORS,		\
						  GAMEOPTION_SQ4_SILVER_CURSORS,	\
	                      GAMEOPTION_PREFER_DIGITAL_SFX,	\
	                      GAMEOPTION_ORIGINAL_SAVELOAD,		\
	                      GAMEOPTION_MIDI_MODE,				\
	                      GAMEOPTION_RGB_RENDERING,         \
	                      GAMEOPTION_ENABLE_GMM_SAVE)

	// Space Quest 4 - English Amiga
	// Executable scanning reports "1.004.024"
	// SCI interpreter version 1.000.200
	{"sq4", "", {
		{"resource.map", 0, "d87ae90031e7fd04f32a27db054f5c9c", 6174},
		{"resource.000", 0, "19671ac620a0a4720a1937c20c2e24a1", 323309},
		{"resource.001", 0, "abca51a4c896df550f095a2db71dce46", 805915},
		{"resource.002", 0, "5667852471ba5b7f5b9a770eabd07df2", 796615},
		{"resource.003", 0, "6ec43464f6a17e612636e2928fd9471c", 803868},
		{"resource.004", 0, "1887ed88bb34ae7238650e8f77f26315", 798226},
		{"resource.005", 0, "3540d1cc84d674cf4b2c898b88a3b563", 790296},
		{"resource.006", 0, "ade814bc4d56244c156d9e9bcfebbc11", 664085},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformAmiga, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 - German Amiga (from www.back2roots.org, also includes english language)
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "79641c0d43408e33c251a1d494d2575e", 6252},
		{"resource.000", 0, "feff51c52146b3a31d4793c718279e13", 345170},
		{"resource.001", 0, "ab33060bfebe32450c0b8d9a3a066efc", 822470},
		{"resource.002", 0, "f79fd6a62da082addb205ed6cef99629", 810458},
		{"resource.003", 0, "f4c21da916f450d4b893b4cba6120866", 815854},
		{"resource.004", 0, "99c6a017da5e769a3b427ca52c8a564f", 824601},
		{"resource.005", 0, "10ee1709e6559c724676d058199b75b5", 818745},
		{"resource.006", 0, "67fb188b191d88efe8414af6ea297b93", 672675},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformAmiga, ADGF_ADDENGLISH, GUIO_STD16	},

	// Space Quest 4 - English DOS - THIS VERSION IS PIRATED/CRACKED AND REPACKAGED =DO NOT RE-ADD=
	// Executable scanning reports "1.000.753"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "a18088c8aceb06025dbc945f29e02935", 5124},
		{"resource.000", 0, "e1f46832cd2458796028e054a0466031", 5502009},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_PIRATED, GUIO_STD16	},

	// Space Quest 4 - English DOS
	// Executable scanning reports "1.000.753"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "71ccf4f82ac4efb588731acfb7bf2603", 5646},
		{"resource.000", 0, "e1f46832cd2458796028e054a0466031", 933928},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 1.052 - English DOS Floppy (supplied by markcoolio in bug report #4283)
	// Also matches floppies labeled "VER#1.1 INT#4.29.91" (tsoliman)
	// Executable scanning reports "1.000.753"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "98852d6379622001efd0b50ae93c9a30", 5928},
		{"resource.000", 0, "e1f46832cd2458796028e054a0466031", 173330},
		{"resource.001", 0, "cc2f89e6057e05b040566b3699df7288", 1247215},
		{"resource.002", 0, "9c342cd76b421369406d6fafd7b1a285", 1218373},
		{"resource.003", 0, "96fa33d89d838bc3f671c5b953e7a896", 1240130},
		{"resource.004", 0, "ff9c87da3bc53473fdee8b9d3edbc93c", 1200631},
		{"resource.005", 0, "e33019ac19f755ae33fbf49b4fc9066c", 1053294},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 1.000 - French DOS Floppy (supplied by misterhands in bug report #6019)
	{"sq4", "", {

		{"resource.map", 0, "1fd6f356f6a59ad2057686ce6573caeb", 6159},
		{"resource.000", 0, "8000a55aebc50a68b7cce07a8c33758c", 205287},
		{"resource.001", 0, "99a6df6d366b3f061271ff3450ac0d32", 1269850},
		{"resource.002", 0, "a6a8d7a24dbb7a266a26b084e7275e89", 1242668},
		{"resource.003", 0, "482a99c8103b4bcb5706e5969d1c1193", 1323083},
		{"resource.004", 0, "b2cca3afcf2e013b8ce86b64155af766", 1254353},
		{"resource.005", 0, "9e520577e035547c4b5149a6d12ef85b", 1098814},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 1.000 - English DOS Floppy (from abevi, bug report #4176)
	{"sq4", "", {
		{"resource.map", 0, "8f08b97ca093f370c56d99715b015554", 6153},
		{"resource.000", 0, "5f6a1fff40584ee807efd547899b1ba5", 206032},
		{"resource.001", 0, "99a6df6d366b3f061271ff3450ac0d32", 1270577},
		{"resource.002", 0, "a6a8d7a24dbb7a266a26b084e7275e89", 1242817},
		{"resource.003", 0, "47ee647b5b12232d27e63cc627c25899", 1321146},
		{"resource.004", 0, "c06350184a490c10eb4585fff0aa3192", 1254368},
		{"resource.005", 0, "b8d6efbd3235329bfe844c794097b2c9", 1098717},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 DOS 1.060 EGA (6 x 3.5" disks)
	// Supplied by ssburnout in bug report #5255
	{"sq4", "EGA", {
		{"resource.map", 0, "4f59814d23a3721f251140fdcfebe35d", 5556},
		{"resource.000", 0, "e1f46832cd2458796028e054a0466031", 385479},
		{"resource.001", 0, "590b996f85333dba50cfdd1489de2be2", 617504},
		{"resource.002", 0, "ea8c49b84c6e641e7600cbca90a81741", 632814},
		{"resource.003", 0, "33c396eb78bafaec38480bcdd9024843", 627369},
		{"resource.004", 0, "9a673e33c3f6dd560b993ffed77eeb49", 534994},
		{"resource.005", 0, "3c4841d0a3ebba4404af588c93620c22", 595465},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 DOS 1.065 EGA (10 x 5.25" 360k disks)
	// Supplied by ns394 in bug report #15572
	{"sq4", "EGA", {
		{"resource.map", 0, "b0d425ab4fce54ec238b64c19ba3851e", 5148},
		{"resource.000", 0, "419bdd9ad892755a9e684fd763529d78", 197195},
		{"resource.001", 0, "30501118992807731d0076c1f8e0d994", 357345},
		{"resource.002", 0, "258dff2f8aaf54017e99f06b63cc5c66", 354516},
		{"resource.003", 0, "bcc897eb283728974a3227c390d2f1e8", 357792},
		{"resource.004", 0, "b2dcebcb1cf15dfa93a98a1642761e65", 358648},
		{"resource.005", 0, "d24bcd1250f5eff93e9cf525f53b9ec2", 355496},
		{"resource.006", 0, "b9a9ed4d1efd2efd8e7c4653d85da472", 354625},
		{"resource.007", 0, "4eb28ffa51bfde6eac6324771831ac9d", 360330},
		{"resource.008", 0, "f238547863b3a69fcfc37571c5af432c", 356975},
		{"resource.009", 0, "c47651a70c7209e5bac8ea726a47f6fc", 88103},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 4 - German DOS (from Tobis87, also includes english language)
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "71715e775e3791178d606cfe6c7e1fb9", 6339},
		{"resource.000", 0, "5f6a1fff40584ee807efd547899b1ba5", 206032},
		{"resource.001", 0, "e924cf86a72ada7736043f045cce345f", 1065442},
		{"resource.002", 0, "e18d731c3fba51333a7f402e454714a5", 858402},
		{"resource.003", 0, "7c2e7508af1a6af877d921e476f70b5e", 1172738},
		{"resource.004", 0, "b8d6efbd3235329bfe844c794097b2c9", 1064761},
		{"resource.005", 0, "47ee647b5b12232d27e63cc627c25899", 1156765},
		{"resource.006", 0, "dfb023e4e2a1e7a00fa18f9ede72a91b", 924059},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Space Quest 4 - German DOS EGA (5.25" 1.2M disks)
	// Supplied by ns394 in bug report #15635
	{"sq4", "EGA", {
		{"resource.map", 0, "8fa159f2c25e7bafbbefc9d998b6e90f", 5571},
		{"resource.000", 0, "5f6a1fff40584ee807efd547899b1ba5", 249229},
		{"resource.001", 0, "a836bd3bc9574f2371f8b6f74a082313", 995949},
		{"resource.002", 0, "bba9d6e685809fb7e482c9b33c1cac3f", 1140960},
		{"resource.003", 0, "5b541ef2feb38b999cc331b5e4b6df8a", 1092315},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16 },

	// Space Quest 4 - Italian DOS Floppy (from glorifindel, also includes english language)
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "e753dfa96d68dd95f84f6cd80479a35e", 6135},
		{"resource.000", 0, "2ac39ff61e369b79f3d7a4ad514f8e29", 203170},
		{"resource.001", 0, "99a6df6d366b3f061271ff3450ac0d32", 1286269},
		{"resource.002", 0, "a6a8d7a24dbb7a266a26b084e7275e89", 1241124},
		{"resource.003", 0, "5289000399d503b59da9e23129256f1a", 1325546},
		{"resource.004", 0, "4277c61bed40a50dadc4b5a344520af2", 1251000},
		{"resource.005", 0, "5f885abd335978e2fd4e5f886d7676c8", 1102880},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Space Quest 4 - Japanese PC-98 5.25" Floppy (also includes english language)
	// SCI interpreter version "1.000.1068", VERSION file reports "1.000"
	// 3x5.25" (label: INT#12.16.91)
	{"sq4", "", {
		{"resource.map", 0, "ca7bba01019222b6f3e54e9051067a99", 5283},
		{"resource.000", 0, "161d719f38ed98d33f058a8cf3dc09c3", 952909},
		{"resource.001", 0, "454684e3a7a68cbca073945e50778447", 1187088},
		{"resource.002", 0, "6dc668326cc22cb9e8bd8ca9e68d2a66", 1181249},
		AD_LISTEND},
		Common::JA_JPN, Common::kPlatformPC98, ADGF_ADDENGLISH, GUIO_STD16_HIRES	},

	// Space Quest 4 - English DOS CD (from the Space Quest Collection)
	// Executable scanning reports "1.001.064", VERSION file reports "1.0"
	{"sq4", "CD", {
		{"resource.map", 0, "ed90a8e3ccc53af6633ff6ab58392bae", 7054},
		{"resource.000", 0, "63247e3901ab8963d4eece73747832e0", 5157378},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_SQ4_CD	},

	// Space Quest 4 - English Windows CD (from the Space Quest Collection)
	// Executable scanning reports "1.001.064", VERSION file reports "1.0"
	// Same entry as the DOS version above. This one is used for the alternate
	// General MIDI music tracks in the Windows version
	{"sq4", "CD", {
		{"resource.map", 0, "ed90a8e3ccc53af6633ff6ab58392bae", 7054},
		{"resource.000", 0, "63247e3901ab8963d4eece73747832e0", 5157378},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_CD, GUIO_SQ4_CD_WINDOWS	},

	// Space Quest 4 - Korean fan translation, based on English DOS CD (from the Space Quest Collection)
	// Executable scanning reports "1.001.064", VERSION file reports "1.0"
	{"sq4", "", {
		{"resource.map", 0, "ed90a8e3ccc53af6633ff6ab58392bae", 7054},
		{"resource.000", 0, "63247e3901ab8963d4eece73747832e0", 5157378},
		{"resource.msg", 0, "6ca82305ba1f8ac1cebdd20427168106", 561801},
		AD_LISTEND},
		Common::KO_KOR, Common::kPlatformDOS, ADGF_CD, GUIO5(GAMEOPTION_SQ4_SILVER_CURSORS, GAMEOPTION_PREFER_DIGITAL_SFX, GAMEOPTION_ORIGINAL_SAVELOAD, GAMEOPTION_MIDI_MODE, GAMEOPTION_RGB_RENDERING)	},

	// Space Quest 4 - English DOS CD "NRS SQ4 Update 1.2" (unofficial patch)
	// This patch set was distributed as a mixture the CD and floppy versions (the whole game)
	// without the speech files, at least initially, and so it is not allowed.
	// Version 1.3 is instead distributed as a set of patches and diffs which require the user
	// to provide the full CD and floppy versions, and so it is happily supported.
	{"sq4", "CD", {
		{"resource.map", 0, "38287a646458a1dabded55d094407793", 7139},
		{"resource.000", 0, "231fd8421e1f211e1bcf9d7b8b6408e7", 9525849},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_PIRATED, GUIO_SQ4_CD	},

	// Space Quest 4 - English DOS CD "NRS SQ4 Update 1.3" (unofficial patch)
	// This comprehensive patch set combines CD and floppy versions and then applies its own changes.
	// Version 1.3 is distributed as a set of patches and diffs which require the user
	// to provide the full CD and floppy versions.
	{"sq4", "CD", {
		{"resource.map", 0, "8ae50cc723a6faab733fdc265afb1d0c", 7144},
		{"resource.000", 0, "231fd8421e1f211e1bcf9d7b8b6408e7", 9526423},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_CD, GUIO_SQ4_CD	},

	// Space Quest 4 - French DOS CD (fan translation and patch-set)
	{"sq4", "CD", {
		{"resource.map", 0, "ed90a8e3ccc53af6633ff6ab58392bae", 7054},
		{"resource.000", 0, "63247e3901ab8963d4eece73747832e0", 5157378},
		{"0.fon",        0, "ff0d61807398a6928222ebbfc233adde", 2431},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_CD, GUIO_SQ4_CD	},

	// Space Quest 4 - Spanish DOS Floppy version distributed on a CD (from jvprat, also includes english language)
	// Executable scanning reports "1.SQ4.057", VERSION file reports "1.000"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "51bcb305568ec19713f8b79727f10071", 6159},
		{"resource.000", 0, "8000a55aebc50a68b7cce07a8c33758c", 204315},
		{"resource.001", 0, "99a6df6d366b3f061271ff3450ac0d32", 1269094},
		{"resource.002", 0, "a6a8d7a24dbb7a266a26b084e7275e89", 1240998},
		{"resource.003", 0, "42a307941edeb1a3be31daeb2e4be90b", 1319306},
		{"resource.004", 0, "776fba81c110d1908776232cbe190e20", 1253752},
		{"resource.005", 0, "55fae26c2a92f16ef72c1e216e827c0f", 1098328},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16 },

	// Space Quest 4 - Spanish DOS 5.25" Floppy (from mgtroyas, #12524)
	{"sq4", "", {
		{"resource.map", 0, "a634cf7bdae116e1e8f1d98ddf8a9621", 6345},
		{"resource.000", 0, "8000a55aebc50a68b7cce07a8c33758c", 204315},
		{"resource.001", 0, "e924cf86a72ada7736043f045cce345f", 1064718},
		{"resource.002", 0, "c11e157a742c84a56f0a080cf5fee215", 857007},
		{"resource.003", 0, "619c0dd6b07cf032dabe80f5f69b2fc6", 1170919},
		{"resource.004", 0, "55fae26c2a92f16ef72c1e216e827c0f", 1064458},
		{"resource.005", 0, "42a307941edeb1a3be31daeb2e4be90b", 1154954},
		{"resource.006", 0, "11a6f691c54f458494d06afa9961c9cb", 923517},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16 },

	// Space Quest 4 - Spanish DOS Floppy (from jvprat, also includes english language)
	// Executable scanning reports "1.SQ4.056", VERSION file reports "1.000"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "41543ae71036046fef69df29a838ee05", 5589},
		{"resource.000", 0, "2ac39ff61e369b79f3d7a4ad514f8e29", 242470},
		{"resource.001", 0, "567608beb69d9dffdb42a8f39cb11a5e", 994323},
		{"resource.002", 0, "74c62fa2146ff3b3b2ea2b3fb95b9af9", 1140801},
		{"resource.003", 0, "42a307941edeb1a3be31daeb2e4be90b", 1088408},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Space Quest 4 1.000 - German DOS Floppy (supplied by markcoolio in bug report #4282, also includes english language)
	// Executable scanning reports "1.SQ4.030"
	// SCI interpreter version 1.000.200 (just a guess)
	{"sq4", "", {
		{"resource.map", 0, "8f08b97ca093f370c56d99715b015554", 6153},
		{"resource.000", 0, "5f6a1fff40584ee807efd547899b1ba5", 206032},
		{"resource.001", 0, "99a6df6d366b3f061271ff3450ac0d32", 1270577},
		{"resource.002", 0, "a6a8d7a24dbb7a266a26b084e7275e89", 1242817},
		{"resource.003", 0, "47ee647b5b12232d27e63cc627c25899", 1321146},
		{"resource.004", 0, "c06350184a490c10eb4585fff0aa3192", 1254368},
		{"resource.005", 0, "b8d6efbd3235329bfe844c794097b2c9", 1098717},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_ADDENGLISH, GUIO_STD16	},

	// Space Quest 4 - English Macintosh
	// Executable scanning reports "x.yyy.zzz"
	// VERSION file reports "1.148"
	{"sq4", "", {
		{"resource.map", 0, "6ffc6f76c4127d140759a512ab9a07be", 6042},
		{"resource.000", 0, "6a538b389705232cf9b2d7de2cf9c0a7", 224833},
		{"resource.001", 0, "77dc3fb6f93d3fee4e87b9ab96c89a95", 1410083},
		{"resource.002", 0, "fb8d07afb33d1cfd2a358cd69d8cf608", 1335960},
		{"resource.003", 0, "6873f6e117b4dc5dd398dbd2e19035f1", 1349062},
		{"resource.004", 0, "20fc54556ebfc737506288a1a32f7705", 364217},
		{"resource.005", 0, "869d16cab6641c80b06f4dcee18f86bc", 1426228},
		{"resource.006", 0, "91d23407bc0447a3722fbeb952d7edee", 1402451},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_NO_FLAGS, GUIO_STD16_MAC },

	// Space Quest 4 - Russian DOS
	// Executable scanning reports "1.000.753", VERSION file reports "1.994"
	{"sq4", "", {
		{"resource.map", 0, "e4f77dd99012d51e16903da07769a7bf", 5928},
		{"resource.000", 0, "e1f46832cd2458796028e054a0466031", 186750},
		{"resource.001", 0, "1110371c3bafbbf8968a324097c83fdb", 1283759},
		{"resource.002", 0, "9c342cd76b421369406d6fafd7b1a285", 1234726},
		{"resource.003", 0, "e617f09840d9f86181f7602c8bf2e8ad", 1266491},
		{"resource.004", 0, "2763fe4f0cb74df716ec8b0c464b0988", 1217428},
		{"resource.005", 0, "d608713197c5ba1cd8c6ed46299c3069", 1057924},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#undef GUIO_SQ4_CD
#undef GUIO_SQ4_CD_WINDOWS

	// Space Quest 5 - English DOS (from the Space Quest Collection)
	// Executable scanning reports "1.001.068", VERSION file reports "1.04"
	{"sq5", "", {
		{"resource.map", 0, "66317c12ac6e818d1f7c17e83c1d9819", 6143},
		{"resource.000", 0, "4147edc5045e6d62998018b5614c58ec", 5496486},
		{"resource.msg", 0, "bb8ad78793c26bdb3f77498b1d6515a9", 125988},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - English DOS - THIS IS THE UNOFFICIAL BETA VERSION, WHICH IS OBVIOUSLY PIRATED AND CONTAINS MANY BUGS
	//  refer to http://www.akril15.com/sr/sq5alt/sq5alt.html =DO NOT RE-ADD=
	// SCI interpreter version 1.001.067
	{"sq5", "", {
		{"resource.map", 0, "8bde0a9adb9a3e9aaa861826874c9834", 6473},
		{"resource.000", 0, "f4a48705764544d7cc64a7bb22a610df", 6025184},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_PIRATED, GUIO_STD16	},

	// Space Quest 5 v1.04 - German DOS (from Tobis87, updated information by markcool from bug reports #4285 and #4287)
	// SCI interpreter version 1.001.068
	{"sq5", "", {
		{"resource.map", 0, "66317c12ac6e818d1f7c17e83c1d9819", 6143},
		{"resource.000", 0, "4147edc5045e6d62998018b5614c58ec", 5496486},
		{"resource.msg", 0, "7c71cfc36153cfe07b450423a51f7e68", 146282},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 v1.04 - French DOS (from Hkz, Included in Space Quest Collector's Edition, with chapters I-V)
	{"sq5", "", {
		{"resource.map", 0, "66317c12ac6e818d1f7c17e83c1d9819", 6143},
		{"resource.000", 0, "4147edc5045e6d62998018b5614c58ec", 5496486},
		{"resource.msg", 0, "877c42380320eb1db7dad83ccd261214", 140374},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - Italian DOS Floppy (from glorifindel)
	// SCI interpreter version 1.001.068 (just a guess)
	{"sq5", "", {
		{"resource.map", 0, "5b09168baa2f6e2e22787429b2d72f54", 6492},
		{"resource.000", 0, "5040026519f37199f3616fb1d4704dff", 6047170},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - Spanish DOS Floppy (from mirir, bug report #5459)
	{"sq5", "", {
		{"resource.map", 0, "5714a899033bdebf2d61ad333c8c6637", 6492},
		{"resource.000", 0, "73748852548faa42927f7537b165582d", 6049994},
		{"resource.msg", 0, "46deca7ef9cf057f7d442df98c1a2ae2", 134612},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - Russian DOS
	// Executable scanning reports "1.001.068", VERSION file reports "1.994"
	{"sq5", "", {
		{"resource.map", 0, "82e6e9b4270a4007578a119b6a51860c", 6493},
		{"resource.000", 0, "6f9ed21e1001526b4137f6703ed476af", 6103778},
		{"resource.msg", 0, "0a8931990cd2eac1691602391c68ab85", 147580},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - Russian DOS
	// VERSION file reports "1.04"
	{"sq5", "", {
		{"resource.map", 0, "31ce07f482d5af535fb0a2d365b2be76", 6676},
		{"resource.000", 0, "654a7d7647d09e13502f0ec69e3ab05c", 5644028},
		AD_LISTEND},
		Common::RU_RUS, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// Space Quest 5 - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS
	{"sq5", "", {
		{"resource.map", 0, "66317c12ac6e818d1f7c17e83c1d9819", 6143},
		{"resource.000", 0, "4147edc5045e6d62998018b5614c58ec", 5496486},
		{"resource.msg", 0, "bb8ad78793c26bdb3f77498b1d6515a9", 125988},
		{"PATCHES/0.fon", 0, "a2fc0fd2c4ddcf1f1dc5207126cd998b", 3419},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

#define GUIO_SQ6_DEMO GUIO4(GUIO_NOLAUNCHLOAD, \
							GUIO_LINKSPEECHTOSFX, \
							GUIO_NOASPECT, \
							GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_SQ6      GUIO6(GUIO_LINKSPEECHTOSFX, \
							GUIO_NOASPECT, \
							GAMEOPTION_ORIGINAL_SAVELOAD, \
							GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							GAMEOPTION_HQ_VIDEO, \
							GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_SQ6_MAC  GUIO5(GUIO_LINKSPEECHTOSFX, \
							GUIO_NOASPECT, \
							GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							GAMEOPTION_HQ_VIDEO, \
							GAMEOPTION_ENABLE_GMM_SAVE)

	// Space Quest 6 - English DOS/Win3.11 CD (from the Space Quest Collection)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	// This is a different interpreter than in version 1.11, though both say "May 24 1995"
	{"sq6", "", {
		{"resource.map", 0, "6dddfa3a8f3a3a513ec9dfdfae955005", 10528},
		{"resource.000", 0, "c4259ab7355aead07773397b1052827d", 41150806},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ6 },

	// Space Quest 6 - English DOS/Win3.11 CD ver 1.11 (from FRG)
	// Executable scanning reports "2.100.002", VERSION file reports "1.11"
	// This is a different interpreter than in version 1.0, though both say "May 24 1995"
	{"sq6", "", {
		{"resource.map", 0, "e0615d6e4e10e37ae42e6a2a95aaf145", 10528},
		{"resource.000", 0, "c4259ab7355aead07773397b1052827d", 41150806},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ6 },

	// Space Quest 6 - French DOS/Win3.11 CD (from French magazine Joystick - September 1997)
	// Executable scanning reports "2.100.002", VERSION file reports "1.0"
	{"sq6", "", {
		{"resource.map", 0, "3c831625931d5079b73ae8c275f52c95", 10534},
		{"resource.000", 0, "4195ca940f759424f62b90e262cc1737", 40932397},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ6 },

	// Space Quest 6 - German DOS (from Tobis87, updated info from markcoolio in bug report #4284)
	// SCI interpreter version 2.100.002 (just a guess)
	{"sq6", "", {
		{"resource.map", 0, "664d797415484f85c90b1b45aedc7686", 10534},
		{"resource.000", 0, "ba87ba91e5bdabb4169dd0df75777722", 40933685},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ6 },

	// Space Quest 6 - English Win3.11 Interactive Demo (from Sneak Peeks 2)
	// This demo has no speech, unlike the later DOS/Win version.
	// Executable scanning reports "2.100.002", VERSION file reports "1.000.000"
	{"sq6", "Demo", {
		{"resource.map", 0, "5cf3f0db76080a4ac327190bd027e355", 2164},
		{"resource.000", 0, "ab12724e078dea34b624e0d2a38dcd7c", 2159708},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO, GUIO3(GUIO_NOSPEECH, GUIO_NOLAUNCHLOAD, GUIO_NOASPECT) },

	// Space Quest 6 - English Win3.11 Non-Interactive Demo (from trembyle)
	// Found on Interactive Entertainment Episode 10 - Feb 1995
	// Executable scanning reports "2.100.002"
	{"sq6", "Demo", {
		{"resource.map", 0, "fe5759d4d87785210806431338815f76", 1852},
		{"resource.000", 0, "a199ee68c0a1d1ea878137084e76301d", 8200543},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO, GUIO_SQ6_DEMO },

	// Space Quest 6 - English DOS/Win3.11 Interactive Demo (from FRG, from Phantasmagoria US)
	// SCI interpreter version 2.100.002
	{"sq6", "Demo", {
		{"resource.map", 0, "368f07b07433db3f819fa3fa0e5efee5", 2572},
		{"resource.000", 0, "ab12724e078dea34b624e0d2a38dcd7c", 2272050},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_SQ6_DEMO },

	// Space Quest 6 - English Macintosh CD
	// VERSION file reports "1.000"
	{"sq6", "", {
		{"Data1", 0, "37d452ef82e3c054a2531d3028acbd9a", 11488332},
		{"Data2", 0, "c4d2da963e1ae9f52bac4bece8ecef19", 6912263},
		{"Data3", 0, "d1ee854dc7ac5e439aaaed683404dd53", 5527296},
		{"Data4", 0, "4126aa73958a00203e97f843e888d82b", 5872552},
		{"Data5", 0, "9b3558495d861ebb97ceaaec6f1686c1", 5916394},
		{"Data6", 0, "7ce6c5172ee8cd23476d5c9fcf41a545", 5339991},
		{"Data7", 0, "7103d65a3b94ca0cdb88d83e0faa6589", 6017594},
		{"Data8", 0, "0f30545c9789f4b31613a671d47b5b67", 2266093},
		{"Data9", 0, "d667feaefef37089577b3fb925c676ed", 2941050},
		{"Data10", 0, "92d878ff44fc4ef6b0d9e8cda2f11d2c", 4037421},
		{"Data11", 0, "08ca4f202e115df26cf80aa2a722a959", 925632},
		{"Data12", 0, "5c715987024fbc666c1c3fea2bcdce42", 1868927},
	AD_LISTEND },
	Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_SQ6_MAC },

	// Space Quest 6 - Hebrew fan translation - by https://github.com/adventurebrew/HebrewAdventure
	// based on English DOS/Win3.11 CD
	{"sq6", "", {
		{"resource.map", 0, "6dddfa3a8f3a3a513ec9dfdfae955005", 10528},
		{"resource.000", 0, "c4259ab7355aead07773397b1052827d", 41150806},
		{"PATCHES/0.fon", 0, "a2fc0fd2c4ddcf1f1dc5207126cd998b", 3419},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_SQ6 },

#undef GUIO_SQ6_DEMO
#undef GUIO_SQ6
#undef GUIO_SQ6_MAC

	// The Island of Dr. Brain - English DOS CD (from jvprat)
	// Executable scanning reports "1.001.053", VERSION file reports "1.0 10.27.92"
	{"islandbrain", "", {
		{"resource.map", 0, "2388efef8430b041b0f3b00b9050e4a2", 3281},
		{"resource.000", 0, "b3acd9b9dd7fe53c4ee133ac9a1acfab", 2103560},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16_SPEECH	},

	// The Island of Dr. Brain - English DOS (from Quietust)
	// Executable scanning reports "1.001.053", VERSION file reports "1.1 2.3.93"
	{"islandbrain", "", {
		{"resource.map", 0, "3c07da06bdd1689f9d07af78fb94d0ec", 3101},
		{"resource.000", 0, "ecc686e0034fb4d41de077ac7167b3cf", 1947866},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_NO_FLAGS, GUIO_STD16	},

	// The Island of Dr. Brain - English DOS Non-Interactive Demo
	// SCI interpreter version 1.001.053 (just a guess)
	{"islandbrain", "Demo", {
		{"resource.map", 0, "a8e5ca8ed1996974afa59f4c45e06195", 986},
		{"resource.000", 0, "b3acd9b9dd7fe53c4ee133ac9a1acfab", 586560},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformDOS, ADGF_DEMO, GUIO_STD16	},

#define GUIO_TORIN_DEMO GUIO4(GUIO_NOMIDI, \
							  GUIO_NOLAUNCHLOAD, \
							  GUIO_NOASPECT, \
							  GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_TORIN      GUIO6(GUIO_NOMIDI, \
							  GUIO_NOASPECT, \
							  GAMEOPTION_ORIGINAL_SAVELOAD, \
							  GAMEOPTION_ENABLE_BLACK_LINED_VIDEO, \
							  GAMEOPTION_HQ_VIDEO, \
							  GAMEOPTION_ENABLE_GMM_SAVE)
#define GUIO_TORIN_MAC  GUIO_TORIN

	// Torin's Passage - English DOS/Windows Early Demo
	// SCI interpreter version 2.100.002
	{"torin", "Demo", {
		{"resmap.000", 0, "2f466e0dca27d2e6a85e422492a92915", 3403},
		{"ressci.000", 0, "db3e290481c35c3224e9602e71e4a1f1", 5004165},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_TORIN_DEMO },

	// Torin's Passage - English DOS/Windows Interactive Demo
	// SCI interpreter version 2.100.002
	{"torin", "Demo", {
		{"resmap.000", 0, "9a3e172cde9963d0a969f26469318cec", 3403},
		{"ressci.000", 0, "db3e290481c35c3224e9602e71e4a1f1", 5073868},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DEMO | ADGF_DROPPLATFORM, GUIO_TORIN_DEMO },

	// Torin's Passage - Multilingual EN/FR/DE w/ English audio Windows CD
	// Also matches GOG.com English-only release
	// Also matches Spanish and Italian CD releases
	// SCI interpreter version 2.100.002
	{"torin", "", {
		// Duplicate resmap is intentional; it gives the English version equal
		// priority to localized versions that are detected with an additional
		// file
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"french/msg/0.msg", 0, "cbf314308636380a96f20a76f2a26ce5", 5857},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"german/msg/0.msg", 0, "374ce3a7e540e1f4917d132f74f356b8", 5993},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// from jvprat and m_kiewitz
	{"torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"spanish/msg/0.msg", 0, "3c468ee0a8595d64d93df68054b116d7", 5681},
		AD_LISTEND},
		Common::ES_ESP, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// from glorifindel
	{"torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"patches/0.msg", 0, "ef23a06ff97415e58fbbe25624738789", 6025},
		AD_LISTEND},
		Common::IT_ITA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"patches/0.msg", 0, "44f57dd333e77484002a90733005c2ae", 5690},
		AD_LISTEND},
		Common::PT_BRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// fan made Hebrew translation, by "Hebrew Adventure" https://www.facebook.com/groups/200491360554968/
	// distributed as zip package to be extracted over GOG.com version
	// from ZvikaZ
	{ "torin", "", {
		{"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
		{"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 55973887},
		{"PATCHES/61101.p56", 0, "c179fa0c1f842c3076393939e1f29e48", 200121},
		AD_LISTEND},
		Common::HE_ISR, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },


	// ---

	// Torin's Passage - Multilingual EN/FR/DE w/ German audio Windows CD (from m_kiewitz)
	// SCI interpreter version 2.100.002
	// VERSION file "1.0"
	{"torin", "", {
		{"resmap.000", 0, "e55c3097329b3c53752301e01c6af2fb", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56127540},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "e55c3097329b3c53752301e01c6af2fb", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56127540},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "e55c3097329b3c53752301e01c6af2fb", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56127540},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// ---

	// Torin's Passage - Multilingual EN/FR/DE w/ French audio Windows CD (from LePhilousophe)
	// SCI interpreter version 2.100.002
	// NOTE: This version of Torin has an ITALIAN directory, but it contains
	// English language data, not Italian
	{"torin", "", {
		{"resmap.000", 0, "66ed46e3e56f487e688d52f05b33d0ba", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56126981},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "66ed46e3e56f487e688d52f05b33d0ba", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56126981},
		AD_LISTEND},
		Common::FR_FRA, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	{"torin", "", {
		{"resmap.000", 0, "66ed46e3e56f487e688d52f05b33d0ba", 9787},
		{"ressci.000", 0, "118f9bec04bfe17c4f87bbb5ddb43c18", 56126981},
		AD_LISTEND},
		Common::DE_DEU, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// ---

	// Torin's Passage - Russian Windows CD (SoftClub official translate)
	// SCI interpreter version 2.100.002
	// VERSION file "1.0"
	{ "torin", "",{
		{ "resource.aud", 0, "f66df699be5ed011b16b3f816cee8a04", 210583510 },
		{ "ressci.000", 0, "e672da099fb1663b87c78abc6c8ba2a4", 130622695 },
		{ "resmap.000", 0, "643859f8f2be8e7701611e29b3b65208", 9799 },
	AD_LISTEND },
	Common::RU_RUS, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// Torin's Passage - Russian Windows CD (Dyadushka Research + City)
	// VERSION file "1.0"
	{ "torin", "",{
		  {"resource.aud", 0, "142a523ee8b79cbe5ef8be7e557ddd55", 181100846},
		  {"ressci.000", 0, "693a259d346c9360f4a0c11fdaae430a", 56974537},
		  {"resmap.000", 0, "bb3b0b22ff08df54fbe2d06263409be6", 9799},
	AD_LISTEND },
	Common::RU_RUS, Common::kPlatformWindows, ADGF_DROPPLATFORM, GUIO_TORIN },

	// Torin's Passage - English Macintosh
	{"torin", "", {
		{"Data1", 0, "63887e33cc282c92dc1f916f54aea8eb", 700530},
		{"Data2", 0, "da2f13be2819a7333fee372d38b8d1a2", 122229},
		{"Data3", 0, "e9fda4f1714ddb443545ba8a2d58ef18", 7298870},
		{"Data4", 0, "59b432ec35b24a216432a556e25087ef", 7209053},
		{"Data5", 0, "189e809f24aee83c707dea03a543c7c4", 6615307},
		{"Data6", 0, "b639487c83d1dae0e001e700f3631566", 7594625},
		{"Data7", 0, "2afd9b5434102b89610916b904c3f73a", 7627118},
		{"Data8", 0, "4601cf0a4a5de40132cab2121bbc0962", 6731266},
		{"Data9", 0, "c7dcd55bc538d6a6808f7e899b164fe3", 7760723},
		{"Data10", 0, "b2d73cf4bbe6003c012a121405f8b4de", 6857922},
		AD_LISTEND},
		Common::EN_ANY, Common::kPlatformMacintosh, ADGF_MACRESFORK | ADGF_UNSTABLE, GUIO_TORIN_MAC },

#undef GUIO_TORIN_DEMO
#undef GUIO_TORIN
#undef GUIO_TORIN_MAC

	// SCI Fanmade Games
	FANMADE("120 Degrees Below Zero", "57f6135bd073802215c9b97f32d6aea3", 504, "03adf530a34557dfc20f848c9572f4d0", 320749),
	FANMADE("Al Pond: Island Quest 2", "4cba6a5a4c8f66f21935ed78b0511a92", 870, "876587dc9a5ec569287a3dc4b29139d8", 613769),
	FANMADE("Al Pond 2: Island Quest", "9625372e710d1a95d2027b48f9e325af", 1506, "a0f9aa65b9bf3d8703adff5a621f243c", 889843),
	FANMADE("Al Pond 2: Island Quest (Updated)", "64be277cdcc6aafce7d9f26e88ad31a8", 1500, "571547228a212d63315f0c114cf48d54", 885241),
	FANMADE("Another DG Game: I Want My C64 Back", "4a8ca7ca2abd18899ef856f47665e2e9", 588, "12ff558d20c72e42cc6adb408f34d6d8", 150513),
	FANMADE_L("Another DG Game: I Want My C64 Back", "13dc1d9ebc57daf8895412eee5e39fea", 576, "e2ad60b3a280171429db5c85f158f84a", 141697, "resource.001", Common::FR_FRA),
	FANMADE("Aquarius: An Aquatic Experience", "2e23bc3b82f22a454be202ea593fb478", 480, "01555c8de683d25405bda270aa1ff014", 272372),
	FANMADE("Betrayed Alliance 1.0", "b1f43f496a83cb8503f290a838b26242", 4062, "e637255aae6191ee92b9e843ad276288", 2367197),
	FANMADE("Betrayed Alliance 1.1", "bb776e42e93f8b98006d6481fb73a588", 4080, "ad7bcfa11f914f23ddbe32723700391e", 2391020),
	FANMADE("Betrayed Alliance 1.2", "ade9f8124dae2e6aced8b5bfc0f54411", 4200, "4599d184348e8dfa99a1804f41966177", 2498493), // original version
	FANMADE("Betrayed Alliance 1.2", "30431334d821d23e584d6f4c0a3d5b61", 4206, "42e3a857f589eef8a8567b86b71f7fb9", 2503541), // "stealth updated" version
	FANMADE("Betrayed Alliance 1.3.1", "c6e60d28086cfa5655af3701c8e2d181", 4878, "c9329736f06cc9ab17f370c93d1fd2fd", 3326253),
	FANMADE("Betrayed Alliance 1.3.2", "6f5d48443ad7f8f67190cc59a6c27af4", 4896, "e160dce04115c5f6bfd68870b8adbf8f", 3355630),
	FANMADE("Betrayed Alliance 1.3.3.1", "8c015831d9bc45c07c783eaf25465d48", 4890, "af3dc3f4fc627c2c8b2a435d86c7d38d", 3364437),
	FANMADE("Betrayed Alliance Book 2 Demo 1.0", "b5b21ca4d1ad3c576e9776bf96845656", 4524, "57150380af9bf05b07851177e01c5066", 3309884),
	FANMADE("Bluntman and Chronic (Politically Correct Version)", "c3ef9fa6c7c5fb840078bf28d87c7f8b", 1362, "441636a9f6f86710844868fded868ee7", 596688),
	FANMADE("Cascade Quest", "c94efc10d18c040b6e22a1dc6d3adfe1", 3468, "8ada33dfa945f81531e5508240b573de", 1432195),
	FANMADE("Circus Quest", "35871f6b4e1df56af4113c0203a0b223", 630, "7d6f97d7935d8733f488d4cb74315e5b", 279627),
	FANMADE("Curt's Quest 1.0", "b0e555370380d218968a40a68eaaaffc", 1146, "c851182cdf6fc6a81b840f4d4875f1a0", 307165),
	FANMADE("Curt's Quest 1.1", "54084c29346683296e45ef32d7ae74f3", 1128, "c851182cdf6fc6a81b840f4d4875f1a0", 302000),
	FANMADE("Demo Quest", "c89a0c9e0a4e4af0ecedb300a3b31dbf", 384, "a32f3495ba24764cba091119cc3f1e13", 160098),
	FANMADE("Dr. Jummybummy's Space Adventure 2", "6ae6cb7de423f51736d9487b4ca0c6da", 810, "26e5b563f578e104d79689f36568b7cf", 394670),
	FANMADE("Dr. Jummybummy's Space Adventure 2 v1.0", "d689721ebf598b5ed84993057c7bd8d9", 4782, "9f748aac2f78a70a89d417f31989daea", 2247273),
	FANMADE("Edy Oliver into the Cave of Whistling Skulls Demo", "eba0a0e86768ee3f14e78fecbc5af011", 2388, "4f6eab79a0f7980960eed101ab8122ad", 2601551),
	FANMADE("Footsteps Sound Demo", "d9dabee6e1550b1fdb793f442f227738", 372, "06561df40dea49c6e84184e0ba6f19cb", 114212),
	FANMADE_L("Grostesteing: Plus Mechant que Jamais", "ec9a97ccb134f69249f6ea8b16c13d8e", 1500, "b869f5f11bfe2ab5f67f4f0c618f2ce1", 464657, "resource.001", Common::FR_FRA), // FIXME: Accent
	FANMADE("Humanoid Demo", "97d8331293a6d57e8bad58c1efc89a63", 624, "fb354b9abe64011b12159e45d724633f", 452320),
	FANMADE("Island of Secrets Demo 0.3", "61279176c3e4530fec9b578877aecda7", 504, "7f4ed7a81b86bea22c62bc98e6d9ec39", 197790),
	FANMADE("Island of Secrets Demo 0.4", "a8ec7759c8014cf1383a3fe0f0897d0e", 786, "89c61a9d00c63fd94621879a927aad17", 303359),
	FANMADE("Jim's Quest 1: The Phantom Thesis", "0af50be1d3f0cb77a09137709a76ef4f", 960, "9c042c136548b20d9183495668e03526", 496446),
	FANMADE("King's Quest II SCI Pre-Alpha Version", "cdea1c081022e7697a1afffb1d2f9f6a", 2646, "fb2ce39002c3e05f3d83533638dea105", 2310356),
	FANMADE("Knight's Quest Demo 1.0", "5e816edf993956752ed06fccfeeae6d9", 1260, "959321f88a22905fa1f8c6d897874744", 703836),
	FANMADE("LockerGnome Quest", "3eeff9130206cad0c4e1551e2b9dd2c5", 420, "ae05ca90806fd90cc43f147c82d3547c", 158906),
	FANMADE("LockerGnome Quest Redux", "55b0081dbdd77a07807c76cec3606970", 492, "75c9c5e8a475a7b5f1a6cb18edad67f2", 168069),
	FANMADE("LockerGnome Quest Redux", "6299578d8ab709cc181baea6b984a0a7", 492, "c0ff4bfcc62fb111337343967e4001fd", 167383),
	FANMADE("Manic Mansion", "f2882af62d22d4bee991ee96ab3d9bd2", 912, "49e58214bfb738081d813912f2ba89b1", 648976),
	FANMADE("New Year's Mystery", "e4dcab1b1d3cb4a2c070a07a9c9589e0", 708, "e00ca5e44fd4e98d8174b467b31b0f21", 295425),
	FANMADE("New Year's Mystery (Updated)", "efd1beb5120293725065c95959144f81", 714, "b3bd3c2372ed6efa28adb12403c4c31a", 305027),
	FANMADE("Ocean Battle", "c2304a0568e0eb84f8e9a0915f01170a", 408, "46c520c1ac9b63528854d0f58c7e1b74", 142234),
	FANMADE("Osama Been Skatin'", "db8f1710453cfbecf4214b2946970043", 390, "7afd75d4620dedf97a84ae8f0a7523cf", 123827),
	FANMADE("Quest for the Cheat", "a359d4cf27f98264b42b55c017671214", 882, "8a943029f73c4bc85d454b7f473455ba", 455209),
	FANMADE("Robust Parse Demo 1.2", "c956d40b6eb42292ec328c510acb11d8", 540, "26f092bab5ec4490737d8463fd3ebbd5", 229044),
	FANMADE("SCI Capture the Flag", "4cd679a51d93b8b27c6b38d81be24b8b", 432, "98ae1f6ed7b4c21f88addbf643dd1d2f", 147878),
	FANMADE("SCI Companion Template", "ad54d4f504086cd597aa2348d0aa3b09", 354, "6798b7b601ce8154c1d1bc0f0edcdd18", 113061),
	FANMADE("SCI Logging Demo", "615c30c1445ea9349847e8868312a674", 558, "2df6858526177612ef9473e7af5b31c6", 171012),
#if 0
	// Disabled as this requires network access to the Google Translate API, which is not available as OSystem has no network API.
	FANMADE("SCI Narration Demo", "731f4f2b726a13c153380af08da16591", 360, "38c80558fb942e8568f011d4a1a4af59", 109789),
#endif
	FANMADE("SCI Programming April 2010 Competition Template", "36e5c4011dd7c92e1ae4c6fede7d698d", 456, "20c87fbb7f73e2a3eb2c5dfab4d76b5a", 142221),
	FANMADE("SCI Studio Template 3.0", "ca0dc8d586e0a8670b7621cde090b532", 354, "58a48ee692a86c0575e6bd0b00a92b9a", 113097),
	FANMADE("SCI Quest", "9067e1f1e54436d2dbfce855524bc84a", 552, "ffa7d355cd9223f245289108a696bcd2", 149634),
	FANMADE("SCI Tetris 1.0", "a268f84a293e6f8bbb55f6a41541c6cb", 384, "4da38a05d9752e787770e560a8f54fe6", 138974),
	FANMADE("SCI Tetris 1.1", "d1bd53d329541e4b26ec2f0b1eb68eb8", 318, "b219747b7e8b0537f783d621c6191b37", 102714),
	FANMADE11("SCI VGA Demo Update-Remake", "8913c0855eac223de6a86b3fc1af67c1", 439, "31d4283d8a9d52833df0d1e91dd702ec", 299311),
	FANMADE("SCI-Man", "3ab85bd39a86c11f85781764f9db09bb", 468, "bb8f9992f504a242bf0860e3588e150b", 131810),
	FANMADE("Scene Builder", "981de9fc7ecfc26631a5aec5c4e09bfe", 1842, "8faf71a4f7d89618d1346c1d60cd3074", 820847),
	FANMADE("Soulshade Asylum", "965a07e7fb6fd9563b94c969b72cfe2a", 546, "57401d18559985e569085a69edda691e", 244786),
	FANMADE("Text Views Demo", "ad0485a96470566517f184ff5dd049f8", 372, "727b946b37588ed334737732c55007c4", 115788),
	FANMADE("The Black Cauldron Demo", "5e1ff2833c7f33ebcfa456ba836e2067", 2592, "2f8e6264d2db91bb54982ab8aa18b3b4", 1881839),
	FANMADE("The Black Cauldron Final", "cbb4705f0cd73760996e5b27aae54f6a", 2484, "fc3bcaa7783b91bb78faefa345c6b3d9", 1677293),
	// Kafuka release, catdate-onedaydemo-2015.zip: old branding, old title, old music, zipper, hand.
	FANMADE11("The Dating Pool Demo (2015)", "6f788e0ec2b4a6110e9bbb639ca7ee74", 1378, "af28393cf5ae59e98203067f5eb87e2b", 1038935),
	// Kafuka release, catdate-onedaydemo-2016.zip: new branding, old title, zipper, hand.
	FANMADE11("The Dating Pool Demo (2016)", "9f44b144d8986a3676fb5114b819ec02", 1303, "4d6f521253ec67d0f1bd38c29c91c806", 915197),
	// Release status unknown: new title, cocktail, paw, remapped shadow.
	FANMADE11("The Dating Pool Demo (Unknown)", "80ae0fc1bc60b815c65eda86a23157bc", 1318, "755e12d325420acc7a06474d75002ba8", 1153508),
	// Itch.IO release: bug fixes
	FANMADE11("The Dating Pool Demo (Itch.IO)", "1442c3599b5f41755e4318db8d68da51", 1318, "755e12d325420acc7a06474d75002ba8", 1044647),
	// Itch.IO 2018 release: bug fixes, polish, new content at end
	FANMADE11("The Dating Pool Demo (Itch.IO 2018)", "750e0f01ca54ac0ea49cff2753e1ae65", 1263, "094b9d3c841fe60076f06cdef3fb1383", 1467849),
	// Itch.IO 2019 release: more bug fixes and polish
	FANMADE11("The Dating Pool Demo (Itch.IO 2019)", "1f7b68ed422eadbf373cc8611bc56f94", 1393, "094b9d3c841fe60076f06cdef3fb1383", 1555073),
	// Reported in #11071
	FANMADE11("The Dating Pool Demo (2016 One Day)", "736656f6debeaf8c8f53ef4f4825511a", 1303, "4d6f521253ec67d0f1bd38c29c91c806", 915171),
	FANMADE("The Farm Nightmare", "fb6cbfddaa7c055e2c3d8cf4c683a7db", 906, "50655e8b8925f717e698e08f006f40be", 338303),
	FANMADE("The Gem Scenario", "ef5f61f4d2c6d31122d3e2baf89ad976", 642, "2f16be390dd90c3d7ca1c8a594ac0bfa", 244794),
	FANMADE("The Legend of the Lost Jewel", "ba1bca315e3818c5626eda51bcfbcccf", 636, "9b0736d69924af0cff32a0f78db96855", 300398),
	FANMADE("The Sect of Achturan", "130ee6a9137005cdd4a26c38fa21576a", 1626, "1faf42afbfdb782f61ceaa1ee6243b76", 961705),
	FANMADE("Winter Wonderland", "c1ffaf8327462effd4ad21eeed9eea59", 504, "5d48666dc62f90d852a1d0de6e69195f", 305076),
#if 0
	// Disabled, this crashes into: ERROR: Uninitialized read for temp 2 from method ::export 1 (room 516, script 505, localCall ffffffff)!
	FANMADE("Zork Demo", "1e449214ed0738cb868e09249a24dbb6", 3480, "0f24d70ab8a51155a3a62f4495847afd", 335957),
#endif
	FANMADE11("Zork: The Great Underground Empire", "65f0731485faca4ee568b74e2f59d850", 3518, "e5d4790b6e8fa1b9a9691b22d541012b", 2460903),

	// FIXME: The vga demo does not have a resource.000/001 file.
	//FANMADE_V("SCI VGA Demo", "00b1abd87bad356b90fcdfcb6132c26f", 8, "", 0, 0),

	AD_TABLE_END_MARKER
};

} // End of namespace Sci
