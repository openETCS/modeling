/*==============================================================================================
 *
 *  SDY1_DMI.h 
 *  -------------------
 *
 *  Copyright (C) 2008-2011 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef _SDY1_DMI_H
#define _SDY1_DMI_H

#include "CoSimTypes.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API int SDY1_DMI__lockio();
DLL_API int SDY1_DMI__unlockio();
DLL_API int SDY1_DMI__init();
DLL_API int SDY1_DMI__draw();
DLL_API int SDY1_DMI__cancelled();
DLL_API int SDY1_DMI__refreshCallback(T_COSIM_REFRESH_CALLBACK f);

DLL_API int SDY1_DMI__getKeyboardEvent();
DLL_API int SDY1_DMI__getMouseEvent();
DLL_API double SDY1_DMI__getMousePosX();
DLL_API double SDY1_DMI__getMousePosY();

#undef DLL_API
#include "SDY1_DMI_DMI_interface.h"

#endif
