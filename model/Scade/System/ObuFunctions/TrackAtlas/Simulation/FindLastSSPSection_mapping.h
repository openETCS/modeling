#ifndef FINDLASTSSPSECTION_SCSIM_MAPPING
#define FINDLASTSSPSECTION_SCSIM_MAPPING

#include "SmuTypes.h"
#include "FindLastSSPSection_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "FindLastSSPSection.h"
void _SCSIM_Mapping_FindLastSSPSection();

void* _SCSIM_Get_FindLastSSPSection_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FindLastSSPSection_LOOP.h"
void _SCSIM_Mapping_FindLastSSPSection_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FindLastSSPSection_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FINDLASTSSPSECTION_SCSIM_MAPPING */
