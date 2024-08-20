﻿// Author: Deci | Project: DEAO2 | Name: id.h
// Date: 2024/08/19 @ 22:08:33

// ReSharper disable CppInconsistentNaming
#pragma once
#include <cstdint>

#include "Memory.h"

namespace id
{
const inline std::string DE_EXE_NAME = "DOOMEternalx64vk.exe";
inline HMODULE           DE_EXE_MODULE;

inline void init()
{
	DE_EXE_MODULE = GetModuleHandleA(DE_EXE_NAME.c_str());
}

enum keyNum_t : int
{
	K_NONE                          = 0,
	K_ESCAPE                        = 1,
	K_1                             = 2,
	K_2                             = 3,
	K_3                             = 4,
	K_4                             = 5,
	K_5                             = 6,
	K_6                             = 7,
	K_7                             = 8,
	K_8                             = 9,
	K_9                             = 10,
	K_0                             = 11,
	K_MINUS                         = 12,
	K_EQUALS                        = 13,
	K_BACKSPACE                     = 14,
	K_TAB                           = 15,
	K_Q                             = 16,
	K_W                             = 17,
	K_E                             = 18,
	K_R                             = 19,
	K_T                             = 20,
	K_Y                             = 21,
	K_U                             = 22,
	K_I                             = 23,
	K_O                             = 24,
	K_P                             = 25,
	K_LBRACKET                      = 26,
	K_RBRACKET                      = 27,
	K_ENTER                         = 28,
	K_LCTRL                         = 29,
	K_A                             = 30,
	K_S                             = 31,
	K_D                             = 32,
	K_F                             = 33,
	K_G                             = 34,
	K_H                             = 35,
	K_J                             = 36,
	K_K                             = 37,
	K_L                             = 38,
	K_SEMICOLON                     = 39,
	K_APOSTROPHE                    = 40,
	K_GRAVE                         = 41,
	K_LSHIFT                        = 42,
	K_BACKSLASH                     = 43,
	K_Z                             = 44,
	K_X                             = 45,
	K_C                             = 46,
	K_V                             = 47,
	K_B                             = 48,
	K_N                             = 49,
	K_M                             = 50,
	K_COMMA                         = 51,
	K_PERIOD                        = 52,
	K_SLASH                         = 53,
	K_RSHIFT                        = 54,
	K_KP_STAR                       = 55,
	K_LALT                          = 56,
	K_SPACE                         = 57,
	K_CAPSLOCK                      = 58,
	K_F1                            = 59,
	K_F2                            = 60,
	K_F3                            = 61,
	K_F4                            = 62,
	K_F5                            = 63,
	K_F6                            = 64,
	K_F7                            = 65,
	K_F8                            = 66,
	K_F9                            = 67,
	K_F10                           = 68,
	K_PAUSE                         = 69,
	K_SCROLL                        = 70,
	K_KP_7                          = 71,
	K_KP_8                          = 72,
	K_KP_9                          = 73,
	K_KP_MINUS                      = 74,
	K_KP_4                          = 75,
	K_KP_5                          = 76,
	K_KP_6                          = 77,
	K_KP_PLUS                       = 78,
	K_KP_1                          = 79,
	K_KP_2                          = 80,
	K_KP_3                          = 81,
	K_KP_0                          = 82,
	K_KP_DOT                        = 83,
	K_F11                           = 87,
	K_F12                           = 88,
	K_F13                           = 100,
	K_F14                           = 101,
	K_F15                           = 102,
	K_KANA                          = 112,
	K_BACKSLASH2                    = 115,
	K_CONVERT                       = 121,
	K_NOCONVERT                     = 123,
	K_YEN                           = 125,
	K_KP_EQUALS                     = 141,
	K_CIRCUMFLEX                    = 144,
	K_AT                            = 145,
	K_COLON                         = 146,
	K_UNDERLINE                     = 147,
	K_KANJI                         = 148,
	K_STOP                          = 149,
	K_AX                            = 150,
	K_UNLABELED                     = 151,
	K_KP_ENTER                      = 156,
	K_RCTRL                         = 157,
	K_KP_COMMA                      = 179,
	K_KP_SLASH                      = 181,
	K_PRINTSCREEN                   = 183,
	K_RALT                          = 184,
	K_NUMLOCK                       = 197,
	K_HOME                          = 199,
	K_UPARROW                       = 200,
	K_PGUP                          = 201,
	K_LEFTARROW                     = 203,
	K_RIGHTARROW                    = 205,
	K_END                           = 207,
	K_DOWNARROW                     = 208,
	K_PGDN                          = 209,
	K_INS                           = 210,
	K_DEL                           = 211,
	K_LWIN                          = 219,
	K_RWIN                          = 220,
	K_APPS                          = 221,
	K_POWER                         = 222,
	K_SLEEP                         = 223,
	K_JOY1                          = 256,
	K_JOY_A                         = 256,
	K_JOY2                          = 257,
	K_JOY_B                         = 257,
	K_JOY3                          = 258,
	K_JOY_X                         = 258,
	K_JOY4                          = 259,
	K_JOY_Y                         = 259,
	K_JOY5                          = 260,
	K_JOY_LB                        = 260,
	K_JOY6                          = 261,
	K_JOY_RB                        = 261,
	K_JOY7                          = 262,
	K_JOY_LS                        = 262,
	K_JOY8                          = 263,
	K_JOY_RS                        = 263,
	K_JOY9                          = 264,
	K_JOY_START                     = 264,
	K_JOY10                         = 265,
	K_JOY_BACK                      = 265,
	K_JOY11                         = 266,
	K_JOY12                         = 267,
	K_JOY13                         = 268,
	K_JOY14                         = 269,
	K_JOY15                         = 270,
	K_JOY16                         = 271,
	K_JOY_STICK1_UP                 = 272,
	K_JOY_STICK1_DOWN               = 273,
	K_JOY_STICK1_LEFT               = 274,
	K_JOY_STICK1_RIGHT              = 275,
	K_JOY_STICK2_UP                 = 276,
	K_JOY_STICK2_DOWN               = 277,
	K_JOY_STICK2_LEFT               = 278,
	K_JOY_STICK2_RIGHT              = 279,
	K_JOY_TRIGGER1                  = 280,
	K_JOY_TRIGGER2                  = 281,
	K_JOY_DPAD_UP                   = 282,
	K_JOY_DPAD_DOWN                 = 283,
	K_JOY_DPAD_LEFT                 = 284,
	K_JOY_DPAD_RIGHT                = 285,
	K_MOUSE1                        = 286,
	K_MOUSE2                        = 287,
	K_MOUSE3                        = 288,
	K_MOUSE4                        = 289,
	K_MOUSE5                        = 290,
	K_MOUSE6                        = 291,
	K_MOUSE7                        = 292,
	K_MOUSE8                        = 293,
	K_MWHEELDOWN                    = 294,
	K_MWHEELUP                      = 295,
	K_JOY_SIXAXIS_UP                = 296,
	K_JOY_SIXAXIS_DOWN              = 297,
	K_JOY_SIXAXIS_LEFT              = 298,
	K_JOY_SIXAXIS_RIGHT             = 299,
	K_COMBO_0                       = 300,
	K_COMBO_1                       = 301,
	K_COMBO_2                       = 302,
	K_COMBO_3                       = 303,
	K_COMBO_4                       = 304,
	K_LAST_COMBO_KEY                = 304,
	K_VR_START_INDEX                = 305,
	K_VR_END_INDEX                  = 385,
	K_STEAMVR_PRIMARY_START_INDEX   = 305,
	K_STEAMVR_PRIMARY_SYSTEM        = 305,
	K_STEAMVR_PRIMARY_APPLICATION   = 306,
	K_STEAMVR_PRIMARY_GRIP          = 307,
	K_STEAMVR_PRIMARY_DPAD_UP       = 309,
	K_STEAMVR_PRIMARY_DPAD_DOWN     = 311,
	K_STEAMVR_PRIMARY_DPAD_LEFT     = 308,
	K_STEAMVR_PRIMARY_DPAD_RIGHT    = 310,
	K_STEAMVR_PRIMARY_A             = 312,
	K_STEAMVR_PRIMARY_AXIS0         = 313,
	K_STEAMVR_PRIMARY_AXIS1         = 314,
	K_STEAMVR_PRIMARY_AXIS2         = 315,
	K_STEAMVR_PRIMARY_AXIS3         = 316,
	K_STEAMVR_PRIMARY_AXIS4         = 317,
	K_STEAMVR_PRIMARY_TOUCHPAD      = 313,
	K_STEAMVR_PRIMARY_TRIGGER       = 314,
	K_STEAMVR_SECONDARY_START_INDEX = 321,
	K_STEAMVR_SECONDARY_SYSTEM      = 321,
	K_STEAMVR_SECONDARY_APPLICATION = 322,
	K_STEAMVR_SECONDARY_GRIP        = 323,
	K_STEAMVR_SECONDARY_DPAD_UP     = 325,
	K_STEAMVR_SECONDARY_DPAD_DOWN   = 327,
	K_STEAMVR_SECONDARY_DPAD_LEFT   = 324,
	K_STEAMVR_SECONDARY_DPAD_RIGHT  = 326,
	K_STEAMVR_SECONDARY_A           = 328,
	K_STEAMVR_SECONDARY_AXIS0       = 329,
	K_STEAMVR_SECONDARY_AXIS1       = 330,
	K_STEAMVR_SECONDARY_AXIS2       = 331,
	K_STEAMVR_SECONDARY_AXIS3       = 332,
	K_STEAMVR_SECONDARY_AXIS4       = 333,
	K_STEAMVR_SECONDARY_TOUCHPAD    = 329,
	K_STEAMVR_SECONDARY_TRIGGER     = 330,
	K_PSMOVE_PRIMARY_START_INDEX    = 337,
	K_PSMOVE_PRIMARY_SELECT         = 337,
	K_PSMOVE_PRIMARY_TRIGGER        = 346,
	K_PSMOVE_PRIMARY_MOVE           = 345,
	K_PSMOVE_PRIMARY_START          = 339,
	K_PSMOVE_PRIMARY_TRIANGLE       = 340,
	K_PSMOVE_PRIMARY_CIRCLE         = 342,
	K_PSMOVE_PRIMARY_CROSS          = 343,
	K_PSMOVE_PRIMARY_SQUARE         = 341,
	K_PSMOVE_SECONDARY_START_INDEX  = 353,
	K_PSMOVE_SECONDARY_SELECT       = 353,
	K_PSMOVE_SECONDARY_TRIGGER      = 362,
	K_PSMOVE_SECONDARY_MOVE         = 361,
	K_PSMOVE_SECONDARY_START        = 355,
	K_PSMOVE_SECONDARY_TRIANGLE     = 356,
	K_PSMOVE_SECONDARY_CIRCLE       = 358,
	K_PSMOVE_SECONDARY_CROSS        = 359,
	K_PSMOVE_SECONDARY_SQUARE       = 357,
	K_PSAIM_START_INDEX             = 369,
	K_PSAIM_TRIANGLE                = 369,
	K_PSAIM_SQUARE                  = 370,
	K_PSAIM_CIRCLE                  = 371,
	K_PSAIM_CROSS                   = 372,
	K_PSAIM_L1                      = 373,
	K_PSAIM_L2                      = 374,
	K_PSAIM_L3                      = 375,
	K_PSAIM_R1                      = 376,
	K_PSAIM_R2                      = 377,
	K_PSAIM_R3                      = 378,
	K_PSAIM_DPAD_LEFT               = 379,
	K_PSAIM_DPAD_UP                 = 380,
	K_PSAIM_DPAD_RIGHT              = 381,
	K_PSAIM_DPAD_DOWN               = 382,
	K_PSAIM_TOUCHPAD                = 383,
	K_PSAIM_OPTIONS                 = 384,
	K_LAST_KEY                      = 385,
};
}
