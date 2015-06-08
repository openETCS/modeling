#ifndef C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING
#define C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING

#include "SmuTypes.h"
#include "C_P005_unflatten_sections_TM_lib_internal_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "C_P005_unflatten_sections_TM_lib_internal.h"
void _SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal();

void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

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

extern ControlUtils _SCSIM_75_Utils;
extern ControlUtils _SCSIM_78_Utils;
extern ControlUtils _SCSIM_74_Utils;
extern ControlUtils _SCSIM_81_Utils;
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_90_Utils;
extern ControlUtils _SCSIM_93_Utils;
extern ControlUtils _SCSIM_89_Utils;
extern ControlUtils _SCSIM_96_Utils;
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_106_Utils;
extern ControlUtils _SCSIM_109_Utils;
extern ControlUtils _SCSIM_105_Utils;
extern ControlUtils _SCSIM_112_Utils;
extern ControlUtils _SCSIM_104_Utils;
extern ControlUtils _SCSIM_115_Utils;
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_SCSIM_MAPPING */
