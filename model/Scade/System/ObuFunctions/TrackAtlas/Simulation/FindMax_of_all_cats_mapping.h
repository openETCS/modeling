#ifndef FINDMAX_OF_ALL_CATS_SCSIM_MAPPING
#define FINDMAX_OF_ALL_CATS_SCSIM_MAPPING

#include "SmuTypes.h"
#include "FindMax_of_all_cats_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "FindMax_of_all_cats.h"
void _SCSIM_Mapping_FindMax_of_all_cats();

void* _SCSIM_Get_FindMax_of_all_cats_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindMax_of_all_cats_LOOP.h"
void _SCSIM_Mapping_FindMax_of_all_cats_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindMax_of_all_cats_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ConvertIndexedElements.h"
void _SCSIM_Mapping_ConvertIndexedElements(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ConvertIndexedElements_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FINDMAX_OF_ALL_CATS_SCSIM_MAPPING */
