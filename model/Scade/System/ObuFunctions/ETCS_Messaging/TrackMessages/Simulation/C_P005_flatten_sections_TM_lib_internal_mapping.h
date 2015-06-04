#ifndef C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING
#define C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING

#include "SmuTypes.h"
#include "C_P005_flatten_sections_TM_lib_internal_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "C_P005_flatten_sections_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal();

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_flatten_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "C_P005_fs_struct_to_array_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING */
