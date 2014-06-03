#ifndef DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING
#define DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING

#include "SmuTypes.h"
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG();

void* _SCSIM_Get_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckBaliseGroup_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_CheckBaliseGroup_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "FinalCheck_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_FinalCheck_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_FinalCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_Initial_1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_Initial_2_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Initial_SM1_Utils;
extern ControlUtils _SCSIM_SSM_st_Level0or1_SM1_Utils;
extern ControlUtils _SCSIM_SSM_TR_Init_1_SM2_SM1_Level2or3_Utils;
extern ControlUtils _SCSIM_SSM_TR_Init_2_SM2_SM1_Level2or3_Utils;
extern ControlUtils _SCSIM_SSM_st_Init_SM1_Level2or3_SM2_Utils;
extern ControlUtils _SCSIM_SSM_st_Ack_SM1_Level2or3_SM2_Utils;
extern ControlUtils _SCSIM_SSM_st_NoAck_SM1_Level2or3_SM2_Utils;
extern ControlUtils _SCSIM_SSM_st_Level2or3_SM1_Utils;
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ArrCheck_DetermineBGOrientation_LRBG.h"
void _SCSIM_Mapping_ArrCheck_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ArrCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_SSM_st_NoAck_SM1_Level2or3_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2(void*);
static int _SCSIM_ClockActive_SSM_st_Level2or3_SM1(void*);
static int _SCSIM_ClockActive_SSM_st_Level0or1_SM1(void*);

#endif /*DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_SCSIM_MAPPING */
