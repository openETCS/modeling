#ifndef RECV_READPACKET005_FORCAL_TM_SCSIM_MAPPING
#define RECV_READPACKET005_FORCAL_TM_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ReadPacket005_ForCal_TM_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ReadPacket005_ForCal_TM.h"
void _SCSIM_Mapping_RECV_ReadPacket005_ForCal_TM();

void* _SCSIM_Get_RECV_ReadPacket005_ForCal_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPackets_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "_2_RECV_ConvertP005afterRead_TM_conversions.h"
void _SCSIM_Mapping__2_RECV_ConvertP005afterRead_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get__2_RECV_ConvertP005afterRead_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacket_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernel_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ConvertP005afterRead_TM_conversions.h"
void _SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ConvertP005afterRead_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupPacketLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"
void _SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_172_Utils;
extern ControlUtils _SCSIM_175_Utils;
extern ControlUtils _SCSIM_171_Utils;
extern ControlUtils _SCSIM_178_Utils;
extern ControlUtils _SCSIM_170_Utils;
extern ControlUtils _SCSIM_181_Utils;
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_190_Utils;
extern ControlUtils _SCSIM_193_Utils;
extern ControlUtils _SCSIM_189_Utils;
extern ControlUtils _SCSIM_196_Utils;
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_205_Utils;
extern ControlUtils _SCSIM_208_Utils;
extern ControlUtils _SCSIM_204_Utils;
extern ControlUtils _SCSIM_211_Utils;
#include "CAST_Int_to_Q_DIR_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_221_Utils;
extern ControlUtils _SCSIM_224_Utils;
extern ControlUtils _SCSIM_220_Utils;
extern ControlUtils _SCSIM_227_Utils;
extern ControlUtils _SCSIM_219_Utils;
extern ControlUtils _SCSIM_230_Utils;
#include "CAST_Int_to_Q_SCALE_TM_conversions.h"
void _SCSIM_Mapping_CAST_Int_to_Q_SCALE_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_CAST_Int_to_Q_SCALE_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_240_Utils;
extern ControlUtils _SCSIM_243_Utils;
extern ControlUtils _SCSIM_239_Utils;
extern ControlUtils _SCSIM_246_Utils;
extern ControlUtils _SCSIM_238_Utils;
extern ControlUtils _SCSIM_249_Utils;
#include "TOOLS_evaluate_N_ITER_TM_conversions.h"
void _SCSIM_Mapping_TOOLS_evaluate_N_ITER_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TOOLS_evaluate_N_ITER_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_false(void*);
static int _SCSIM_ClockActive_kcg_true(void*);

#endif /*RECV_READPACKET005_FORCAL_TM_SCSIM_MAPPING */
