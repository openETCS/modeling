#ifndef SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_SCSIM_MAPPING
#define SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_SCSIM_MAPPING

#include "SmuTypes.h"
#include "SEND_WritePacket005_IT_legacy_TM_trackside_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "SEND_WritePacket005_IT_legacy_TM_trackside.h"
void _SCSIM_Mapping_SEND_WritePacket005_IT_legacy_TM_trackside();

void* _SCSIM_Get_SEND_WritePacket005_IT_legacy_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SIM_SEND_WriteBaliseMessa_DRAFTS.h"
void _SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_MessageData_TM_lib_internal.h"
void _SCSIM_Mapping_SEND_MessageData_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SEND_ConvertP005forWrite_IT_TM_conversions.h"
void _SCSIM_Mapping_SEND_ConvertP005forWrite_IT_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_ConvertP005forWrite_IT_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

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

#include "SEND_ConvertP005forWriteS_TM_conversions.h"
void _SCSIM_Mapping_SEND_ConvertP005forWriteS_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SEND_ConvertP005forWriteS_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TOOLS_calculate_L_PACKET_TM_conversions.h"
void _SCSIM_Mapping_TOOLS_calculate_L_PACKET_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_calculate_L_PACKET_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);
static int _SCSIM_ClockActive_kcg_false(void*);

#endif /*SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_SCSIM_MAPPING */
