#ifndef WRITE_P027V1_TM_TRACKSIDE_SCSIM_MAPPING
#define WRITE_P027V1_TM_TRACKSIDE_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Write_P027V1_TM_trackside_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Write_P027V1_TM_trackside.h"
void _SCSIM_Mapping_Write_P027V1_TM_trackside();

void* _SCSIM_Get_Write_P027V1_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P027V1_tracksim_merge_s_TM_conversions.h"
void _SCSIM_Mapping_C_P027V1_tracksim_merge_s_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027V1_tracksim_merge_s_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WriteMessageHeader_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_WriteMessageHeader_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WriteMessageHeader_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_MessageData_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_MessageData_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P027V1_tracksim_compr_body_TM_conversions.h"
void _SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_89_Utils;
extern ControlUtils _SCSIM_92_Utils;
extern ControlUtils _SCSIM_88_Utils;
extern ControlUtils _SCSIM_95_Utils;
extern ControlUtils _SCSIM_87_Utils;
extern ControlUtils _SCSIM_98_Utils;
#include "C_P027V1_tracksim_compr_o_TM_conversions.h"
void _SCSIM_Mapping_C_P027V1_tracksim_compr_o_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027V1_tracksim_compr_o_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_FindSlot_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_FindSlot_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_FindSlot_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"
void _SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"
void _SCSIM_Mapping_C_P027_flatten_sections_qdiff_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027_flatten_sections_qdiff_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
void _SCSIM_Mapping_T_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_T_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P027V1_fs_flatten_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P027V1_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027V1_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P027V1_fs_struct_to_arr_TM_lib_internal.h"
void _SCSIM_Mapping_C_P027V1_fs_struct_to_arr_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P027V1_fs_struct_to_arr_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*WRITE_P027V1_TM_TRACKSIDE_SCSIM_MAPPING */
