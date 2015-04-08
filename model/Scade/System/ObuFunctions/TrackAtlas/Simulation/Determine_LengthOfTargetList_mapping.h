#ifndef DETERMINE_LENGTHOFTARGETLIST_SCSIM_MAPPING
#define DETERMINE_LENGTHOFTARGETLIST_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Determine_LengthOfTargetList_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Determine_LengthOfTargetList.h"
void _SCSIM_Mapping_Determine_LengthOfTargetList();

void* _SCSIM_Get_Determine_LengthOfTargetList_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Determine_LengthOfTargetL.h"
void _SCSIM_Mapping_Determine_LengthOfTargetL(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Determine_LengthOfTargetL_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINE_LENGTHOFTARGETLIST_SCSIM_MAPPING */
