#ifndef C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_SCSIM_MAPPING
#define C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_SCSIM_MAPPING

#include "SmuTypes.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "C_P027V1_tracksim_compr_body_TM_conversions.h"
void _SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions();

void* _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_5_Utils;
extern ControlUtils _SCSIM_8_Utils;
extern ControlUtils _SCSIM_4_Utils;
extern ControlUtils _SCSIM_11_Utils;
extern ControlUtils _SCSIM_3_Utils;
extern ControlUtils _SCSIM_14_Utils;
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"
void _SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_SCSIM_MAPPING */
