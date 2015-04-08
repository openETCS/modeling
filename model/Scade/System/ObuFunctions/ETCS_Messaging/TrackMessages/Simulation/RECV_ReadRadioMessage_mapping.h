#ifndef RECV_READRADIOMESSAGE_SCSIM_MAPPING
#define RECV_READRADIOMESSAGE_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ReadRadioMessage_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ReadRadioMessage.h"
void _SCSIM_Mapping_RECV_ReadRadioMessage();

void* _SCSIM_Get_RECV_ReadRadioMessage_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupRadioPacket.h"
void _SCSIM_Mapping_RECV_LookupRadioPacket(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupRadioPacket_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadRadioPacket.h"
void _SCSIM_Mapping_RECV_ReadRadioPacket(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadRadioPacket_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_LookupRadioPacketLoop.h"
void _SCSIM_Mapping_RECV_LookupRadioPacketLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_LookupRadioPacketLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadRadioPacketLoop.h"
void _SCSIM_Mapping_RECV_ReadRadioPacketLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadRadioPacketLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);

#endif /*RECV_READRADIOMESSAGE_SCSIM_MAPPING */
