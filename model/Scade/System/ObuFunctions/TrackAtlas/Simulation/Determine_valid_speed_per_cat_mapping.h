#ifndef DETERMINE_VALID_SPEED_PER_CAT_SCSIM_MAPPING
#define DETERMINE_VALID_SPEED_PER_CAT_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Determine_valid_speed_per_cat_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Determine_valid_speed_per_cat.h"
void _SCSIM_Mapping_Determine_valid_speed_per_cat();

void* _SCSIM_Get_Determine_valid_speed_per_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Determine_valid_speed_per.h"
void _SCSIM_Mapping_Determine_valid_speed_per(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Determine_valid_speed_per_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Reverse_SSP_cat.h"
void _SCSIM_Mapping_Reverse_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FillUP_SSP_cat.h"
void _SCSIM_Mapping_FillUP_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FillUP_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FillUP_SSP_cat_LOOP.h"
void _SCSIM_Mapping_FillUP_SSP_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FillUP_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINE_VALID_SPEED_PER_CAT_SCSIM_MAPPING */
