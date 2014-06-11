#ifndef OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING
#define OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Operator7_DetermineBGOrientation_LRBG_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Operator7_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_Operator7_DetermineBGOrientation_LRBG();

void* _SCSIM_Get_Operator7_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING */
