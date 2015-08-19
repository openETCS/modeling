#ifndef ROOT_SDM_SCSIM_MAPPING
#define ROOT_SDM_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Root_SDM_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Root_SDM.h"
void _SCSIM_Mapping_Root_SDM();

void* _SCSIM_Get_Root_SDM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Step_Operator.h"
void _SCSIM_Mapping_Step_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Step_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "EBD_Operator.h"
void _SCSIM_Mapping_EBD_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_EBD_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "MRSP_Operator.h"
void _SCSIM_Mapping_MRSP_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_MRSP_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ACCeler_Operator.h"
void _SCSIM_Mapping_ACCeler_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ACCeler_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SBD_Operator.h"
void _SCSIM_Mapping_SBD_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SBD_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Min3_math_real.h"
void _SCSIM_Mapping_Min3_math_real(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Min3_math_real_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "dV_Operator.h"
void _SCSIM_Mapping_dV_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_dV_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_143_Utils;
extern ControlUtils _SCSIM_144_Utils;
extern ControlUtils _SCSIM_142_Utils;
extern ControlUtils _SCSIM_145_Utils;
#include "Spreader_Operator_8_4.h"
void _SCSIM_Mapping_Spreader_Operator_8_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Spreader_Operator_8_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Spreader_Operator_2_2.h"
void _SCSIM_Mapping_Spreader_Operator_2_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Spreader_Operator_2_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Spreader_Operator_1_1.h"
void _SCSIM_Mapping_Spreader_Operator_1_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Spreader_Operator_1_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "AEB_Operator.h"
void _SCSIM_Mapping_AEB_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_AEB_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ASB_Operator.h"
void _SCSIM_Mapping_ASB_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ASB_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ComputeAcc.h"
void _SCSIM_Mapping_ComputeAcc(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ComputeAcc_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Bool_Spreader_Operator_2.h"
void _SCSIM_Mapping_Bool_Spreader_Operator_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Bool_Spreader_Operator_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Spreader_Operator_8_8.h"
void _SCSIM_Mapping_Spreader_Operator_8_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Spreader_Operator_8_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanPositions_8_4.h"
void _SCSIM_Mapping_ScanPositions_8_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanPositions_8_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanPositions_2_2.h"
void _SCSIM_Mapping_ScanPositions_2_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanPositions_2_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanPositions_1_1.h"
void _SCSIM_Mapping_ScanPositions_1_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanPositions_1_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "BooleanScanPositions_2.h"
void _SCSIM_Mapping_BooleanScanPositions_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_BooleanScanPositions_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanPositions_8_8.h"
void _SCSIM_Mapping_ScanPositions_8_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanPositions_8_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanSSP_4.h"
void _SCSIM_Mapping_ScanSSP_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanSSP_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanSSP_2.h"
void _SCSIM_Mapping_ScanSSP_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanSSP_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanSSP_1.h"
void _SCSIM_Mapping_ScanSSP_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanSSP_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanAdh_2.h"
void _SCSIM_Mapping_ScanAdh_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanAdh_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "ScanSSP_8.h"
void _SCSIM_Mapping_ScanSSP_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_ScanSSP_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*ROOT_SDM_SCSIM_MAPPING */
