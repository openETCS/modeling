#ifndef TEST_DMI_SCSIM_MAPPING
#define TEST_DMI_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Test_DMI_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Test_DMI.h"
void _SCSIM_Mapping_Test_DMI();

void* _SCSIM_Get_Test_DMI_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_6_Utils;
extern ControlUtils _SCSIM_8_Utils;
extern ControlUtils _SCSIM_5_Utils;
extern ControlUtils _SCSIM_10_Utils;
extern ControlUtils _SCSIM_12_Utils;
extern ControlUtils _SCSIM_13_Utils;
extern ControlUtils _SCSIM_SSM_TR_VisibleState_1_ShowDistanceToTarget_Utils;
extern ControlUtils _SCSIM_SSM_st_VisibleState_ShowDistanceToTarget_Utils;
extern ControlUtils _SCSIM_SSM_TR_InvisibleState_1_ShowDistanceToTarget_Utils;
extern ControlUtils _SCSIM_SSM_st_InvisibleState_ShowDistanceToTarget_Utils;
extern ControlUtils _SCSIM_SSM_TR_VisibleState_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_VisibleState_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_InvisibleState_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_InvisibleState_SM1_Utils;
#include "Train.h"
void _SCSIM_Mapping_Train(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Train_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_93_Utils;
extern ControlUtils _SCSIM_95_Utils;
extern ControlUtils _SCSIM_92_Utils;
extern ControlUtils _SCSIM_97_Utils;
#include "SpeedToDigit.h"
void _SCSIM_Mapping_SpeedToDigit(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SpeedToDigit_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CalculateDistanceToTarget.h"
void _SCSIM_Mapping_CalculateDistanceToTarget(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CalculateDistanceToTarget_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_144_Utils;
extern ControlUtils _SCSIM_153_Utils;
extern ControlUtils _SCSIM_143_Utils;
extern ControlUtils _SCSIM_155_Utils;
extern ControlUtils _SCSIM_142_Utils;
extern ControlUtils _SCSIM_161_Utils;
static int _SCSIM_ClockActive_SSM_st_InvisibleState_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_VisibleState_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_InvisibleState_ShowDistanceToTarget(void*);
static int _SCSIM_ClockActive_SSM_st_VisibleState_ShowDistanceToTarget(void*);
static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*TEST_DMI_SCSIM_MAPPING */
