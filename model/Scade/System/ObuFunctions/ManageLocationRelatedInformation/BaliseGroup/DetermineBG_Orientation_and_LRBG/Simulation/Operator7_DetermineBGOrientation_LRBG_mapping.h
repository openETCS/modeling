#ifndef OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING
#define OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Operator7_DetermineBGOrientation_LRBG_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Operator7_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_Operator7_DetermineBGOrientation_LRBG();

void* _SCSIM_Get_Operator7_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_Off_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Off_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_On_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_On_SM1_Utils;
static int _SCSIM_ClockActive_SSM_st_On_SM1(void*);

#endif /*OPERATOR7_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING */
