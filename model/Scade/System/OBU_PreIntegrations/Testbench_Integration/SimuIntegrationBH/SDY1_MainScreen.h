/*==============================================================================================
 *
 *  SDY1_MainScreen.h 
 *  -------------------
 *
 *  Copyright (C) 2008-2014 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef _SDY1_MainScreen_H
#define _SDY1_MainScreen_H

#include "sdy_events.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API int SDY1_MainScreen__lockio();
DLL_API int SDY1_MainScreen__unlockio();
DLL_API int SDY1_MainScreen__init();
DLL_API int SDY1_MainScreen__draw();
DLL_API int SDY1_MainScreen__cancelled();
DLL_API int SDY1_MainScreen__refreshCallback(T_COSIM_REFRESH_CALLBACK f);

#include "SDY1_MainScreen_control_panel.h"
DLL_API SDY1_MainScreen_typ_control_panel * SDY1_MainScreen_L_control_panel(void);

#include "SDY1_MainScreen_graphical.h"
DLL_API SDY1_MainScreen_typ_graphical * SDY1_MainScreen_L_graphical(void);


#endif

