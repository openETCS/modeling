/*
 * libimpl_simu.h
 *
 * Copyright(c) 2003-2012 Esterel Technologies
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "NewSmuTypes.h"


/***********************************************
 * For simulator getXXX and displayXXX functions
 ***********************************************/

extern struct SimTypeVTable* pSimimpl_uint8VTable;
extern struct SimTypeVTable* pSimimpl_int8VTable;
extern struct SimTypeVTable* pSimimpl_uint16VTable;
extern struct SimTypeVTable* pSimimpl_int16VTable;
extern struct SimTypeVTable* pSimimpl_uint32VTable;
extern struct SimTypeVTable* pSimimpl_int32VTable;
extern struct SimTypeVTable* pSimimpl_int64VTable;


int MainGetConvInfo(SimConvType nTo, SimConvType nFrom);



