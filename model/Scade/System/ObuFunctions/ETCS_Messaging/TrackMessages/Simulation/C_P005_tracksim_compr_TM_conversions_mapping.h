#ifndef C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_SCSIM_MAPPING
#define C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_SCSIM_MAPPING

#include "SmuTypes.h"
#include "C_P005_tracksim_compr_TM_conversions_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "C_P005_tracksim_compr_TM_conversions.h"
void _SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions();

void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_DIR_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_43_Utils;
extern ControlUtils _SCSIM_46_Utils;
extern ControlUtils _SCSIM_42_Utils;
extern ControlUtils _SCSIM_49_Utils;
extern ControlUtils _SCSIM_41_Utils;
extern ControlUtils _SCSIM_52_Utils;
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

#endif /*C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_SCSIM_MAPPING */
