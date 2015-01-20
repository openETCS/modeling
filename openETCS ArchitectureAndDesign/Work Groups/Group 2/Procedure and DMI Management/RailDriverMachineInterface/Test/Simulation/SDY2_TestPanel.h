/*==============================================================================================
 *
 *  SDY2_TestPanel.h 
 *  -------------------
 *
 *  Copyright (C) 2008-2011 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef _SDY2_TestPanel_H
#define _SDY2_TestPanel_H

#include "CoSimTypes.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API int SDY2_TestPanel__lockio();
DLL_API int SDY2_TestPanel__unlockio();
DLL_API int SDY2_TestPanel__init();
DLL_API int SDY2_TestPanel__draw();
DLL_API int SDY2_TestPanel__cancelled();
DLL_API int SDY2_TestPanel__refreshCallback(T_COSIM_REFRESH_CALLBACK f);

DLL_API int SDY2_TestPanel__getKeyboardEvent();
DLL_API int SDY2_TestPanel__getMouseEvent();
DLL_API double SDY2_TestPanel__getMousePosX();
DLL_API double SDY2_TestPanel__getMousePosY();

#undef DLL_API
#include "SDY2_TestPanel_control_panel_interface.h"

#endif
