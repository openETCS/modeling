#ifndef WRITE_P005_TM_TRACKSIDE_SCSIM_MAPPING
#define WRITE_P005_TM_TRACKSIDE_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Write_P005_TM_trackside_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Write_P005_TM_trackside.h"
void _SCSIM_Mapping_Write_P005_TM_trackside();

void* _SCSIM_Get_Write_P005_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SIM_SEND_WriteBaliseMessa_DRAFTS.h"
void _SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_MessageData_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_MessageData_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_tracksim_compr_TM_conversions.h"
void _SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_62_Utils;
extern ControlUtils _SCSIM_65_Utils;
extern ControlUtils _SCSIM_61_Utils;
extern ControlUtils _SCSIM_68_Utils;
extern ControlUtils _SCSIM_60_Utils;
extern ControlUtils _SCSIM_71_Utils;
#include "SEND_FindSlot_DRAFTS.h"
void _SCSIM_Mapping_SEND_FindSlot_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "DeterminePacketSizeInt_TM_lib_internal.h"
void _SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_flatten_sections_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_flatten_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_struct_to_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*WRITE_P005_TM_TRACKSIDE_SCSIM_MAPPING */
