/*==============================================================================================
 *
 *  sdy_events.h
 *  -------------------
 *
 *  Copyright (C) 2008-2014 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef __SDY_EVENTS_H_
#define __SDY_EVENTS_H_

#include "sgl_types.h"

typedef void (*T_COSIM_REFRESH_CALLBACK) (void);
typedef void (*T_ENUM_STRING_CALLBACK)(const char*);
typedef void (*T_CURSOR_POS_REQUEST_CALLBACK)(void*, SGLlong, SGLfloat, SGLfloat);

typedef struct {
	SGLint32 id; /* pointer id */
	SGLfloat position[2];
	SGLint32 button;
	SGLbool pressed;
	SGLbool released;
	SGLint32 modifiers;
} sdy_pointer_event_t;

typedef struct {
	SGLint32 id; /* keyboard id */
	SGLint32 keycode;
	SGLbool pressed;
	SGLbool released;
	SGLint32 modifiers;
} sdy_keyboard_event_t;

#endif
