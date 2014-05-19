#ifndef GETBGMESSAGEORIENTATION_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING
#define GETBGMESSAGEORIENTATION_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG();

void* _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ArrCheck_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_ArrCheck_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ArrCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*GETBGMESSAGEORIENTATION_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING */
