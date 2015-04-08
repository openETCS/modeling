#ifndef INFRA_BG_PASSED_SCSIM_MAPPING
#define INFRA_BG_PASSED_SCSIM_MAPPING

#include "SmuTypes.h"
#include "INFRA_BG_passed_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "INFRA_BG_passed.h"
void _SCSIM_Mapping_INFRA_BG_passed();

void* _SCSIM_Get_INFRA_BG_passed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_B1_1_SM2_SM1_State1_Utils;
extern ControlUtils _SCSIM_SSM_st_B1_SM1_State1_SM2_Utils;
extern ControlUtils _SCSIM_SSM_st_B1_passed_SM1_State1_SM2_Utils;
extern ControlUtils _SCSIM_SSM_TR_B2_1_SM3_SM1_State1_Utils;
extern ControlUtils _SCSIM_SSM_st_B2_SM1_State1_SM3_Utils;
extern ControlUtils _SCSIM_SSM_st_B2_passed_SM1_State1_SM3_Utils;
extern ControlUtils _SCSIM_SSM_TR_State1_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_State1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_BG_passed_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_BG_passed_SM1_Utils;
static int _SCSIM_ClockActive_SSM_st_State1_SM1(void*);

#endif /*INFRA_BG_PASSED_SCSIM_MAPPING */
