#ifndef BUILDTARGETLIST_SCSIM_MAPPING
#define BUILDTARGETLIST_SCSIM_MAPPING

#include "SmuTypes.h"
#include "BuildTargetList_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "BuildTargetList.h"
void _SCSIM_Mapping_BuildTargetList();

void* _SCSIM_Get_BuildTargetList_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "BuildTargetList_LOOP.h"
void _SCSIM_Mapping_BuildTargetList_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BuildTargetList_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Reverse_SSP_t_matrix.h"
void _SCSIM_Mapping_Reverse_SSP_t_matrix(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Reverse_SSP_t_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Find_First_in_each_t_SSP_cat.h"
void _SCSIM_Mapping_Find_First_in_each_t_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Find_First_in_each_t_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindMax_of_all_t_cats.h"
void _SCSIM_Mapping_FindMax_of_all_t_cats(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindMax_of_all_t_cats_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RemoveLargestFromSSP_t_matrix.h"
void _SCSIM_Mapping_RemoveLargestFromSSP_t_matrix(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RemoveLargestFromSSP_t_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Reverse_SSP_t_cat.h"
void _SCSIM_Mapping_Reverse_SSP_t_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Reverse_SSP_t_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Find_First_in_SSP_t_cat.h"
void _SCSIM_Mapping_Find_First_in_SSP_t_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Find_First_in_SSP_t_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindMax_of_all_t_cats_LOOP.h"
void _SCSIM_Mapping_FindMax_of_all_t_cats_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindMax_of_all_t_cats_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ConvertIndexedElements.h"
void _SCSIM_Mapping_ConvertIndexedElements(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ConvertIndexedElements_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Find_First_in_SSP_t_cat_LOOP.h"
void _SCSIM_Mapping_Find_First_in_SSP_t_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Find_First_in_SSP_t_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*BUILDTARGETLIST_SCSIM_MAPPING */
