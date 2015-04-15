#ifndef FIND_FIRST_IN_SSP_CAT_SCSIM_MAPPING
#define FIND_FIRST_IN_SSP_CAT_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Find_First_in_SSP_cat_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Find_First_in_SSP_cat.h"
void _SCSIM_Mapping_Find_First_in_SSP_cat();

void* _SCSIM_Get_Find_First_in_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Find_First_in_SSP_cat_LOOP.h"
void _SCSIM_Mapping_Find_First_in_SSP_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Find_First_in_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FIND_FIRST_IN_SSP_CAT_SCSIM_MAPPING */
