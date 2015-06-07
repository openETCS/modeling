#ifndef READ_P005_FORCALCTRAINPOS_TM_SCSIM_MAPPING
#define READ_P005_FORCALCTRAINPOS_TM_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Read_P005_ForCalcTrainPos_TM_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Read_P005_ForCalcTrainPos_TM.h"
void _SCSIM_Mapping_Read_P005_ForCalcTrainPos_TM();

void* _SCSIM_Get_Read_P005_ForCalcTrainPos_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Read_P005_TM.h"
void _SCSIM_Mapping_Read_P005_TM(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Read_P005_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_ForCalcTrainPos_TM_conversions.h"
void _SCSIM_Mapping_C_P005_ForCalcTrainPos_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_ForCalcTrainPos_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPackets_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_compr_onboard_TM_conversions.h"
void _SCSIM_Mapping_C_P005_compr_onboard_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_50_Utils;
extern ControlUtils _SCSIM_53_Utils;
extern ControlUtils _SCSIM_49_Utils;
extern ControlUtils _SCSIM_56_Utils;
extern ControlUtils _SCSIM_48_Utils;
extern ControlUtils _SCSIM_59_Utils;
extern ControlUtils _SCSIM_85_Utils;
extern ControlUtils _SCSIM_88_Utils;
extern ControlUtils _SCSIM_84_Utils;
extern ControlUtils _SCSIM_91_Utils;
extern ControlUtils _SCSIM_83_Utils;
extern ControlUtils _SCSIM_94_Utils;
#include "C_P005_LinkedBGs_TM_conversions.h"
void _SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacket_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernel_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_unflatten_sections_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacketLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_us_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_us_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_extract_el_section_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_D_LINK_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_NID_C_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_NID_BG_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_266_Utils;
extern ControlUtils _SCSIM_269_Utils;
extern ControlUtils _SCSIM_265_Utils;
extern ControlUtils _SCSIM_272_Utils;
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_281_Utils;
extern ControlUtils _SCSIM_284_Utils;
extern ControlUtils _SCSIM_280_Utils;
extern ControlUtils _SCSIM_287_Utils;
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_297_Utils;
extern ControlUtils _SCSIM_300_Utils;
extern ControlUtils _SCSIM_296_Utils;
extern ControlUtils _SCSIM_303_Utils;
extern ControlUtils _SCSIM_295_Utils;
extern ControlUtils _SCSIM_306_Utils;
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_false(void*);
static int _SCSIM_ClockActive_kcg_true(void*);

#endif /*READ_P005_FORCALCTRAINPOS_TM_SCSIM_MAPPING */
