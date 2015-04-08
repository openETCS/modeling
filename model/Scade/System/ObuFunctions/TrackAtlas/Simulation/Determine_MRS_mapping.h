#ifndef DETERMINE_MRS_SCSIM_MAPPING
#define DETERMINE_MRS_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Determine_MRS_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Determine_MRS.h"
void _SCSIM_Mapping_Determine_MRS();

void* _SCSIM_Get_Determine_MRS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "DetermineRelevantSpeedperCat.h"
void _SCSIM_Mapping_DetermineRelevantSpeedperCat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_DetermineRelevantSpeedperCat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Determine_Lowest_Speed.h"
void _SCSIM_Mapping_Determine_Lowest_Speed(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Determine_Lowest_Speed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "DetermineRelevantSpeedper.h"
void _SCSIM_Mapping_DetermineRelevantSpeedper(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_DetermineRelevantSpeedper_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindLastSSPSection.h"
void _SCSIM_Mapping_FindLastSSPSection(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindLastSSPSection_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindLastSSPSection_LOOP.h"
void _SCSIM_Mapping_FindLastSSPSection_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindLastSSPSection_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINE_MRS_SCSIM_MAPPING */
