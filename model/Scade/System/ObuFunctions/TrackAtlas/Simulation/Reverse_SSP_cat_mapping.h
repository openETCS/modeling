#ifndef REVERSE_SSP_CAT_SCSIM_MAPPING
#define REVERSE_SSP_CAT_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Reverse_SSP_cat_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Reverse_SSP_cat.h"
void _SCSIM_Mapping_Reverse_SSP_cat();

void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FillUP_SSP_cat.h"
void _SCSIM_Mapping_FillUP_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FillUP_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FillUP_SSP_cat_LOOP.h"
void _SCSIM_Mapping_FillUP_SSP_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FillUP_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*REVERSE_SSP_CAT_SCSIM_MAPPING */
