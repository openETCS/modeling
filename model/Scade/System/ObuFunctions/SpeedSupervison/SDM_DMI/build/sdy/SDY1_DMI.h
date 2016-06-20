/*==============================================================================================
 *
 *  SDY1_DMI.h 
 *  -------------------
 *
 *  Copyright (C) 2008-2014 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef _SDY1_DMI_H
#define _SDY1_DMI_H

#include "sdy_events.h"

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

#include "SDY1_DMI_DMI.h"
DLL_API SDY1_DMI_typ_DMI * SDY1_DMI_L_DMI(void);


#endif

