#ifndef FINALCHECK_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING
#define FINALCHECK_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "FinalCheck_DetermineBGOrientation_LRBG_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "FinalCheck_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_FinalCheck_DetermineBGOrientation_LRBG();

void* _SCSIM_Get_FinalCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FINALCHECK_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING */
