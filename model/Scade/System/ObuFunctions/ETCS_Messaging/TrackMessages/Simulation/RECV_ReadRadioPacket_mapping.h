#ifndef RECV_READRADIOPACKET_SCSIM_MAPPING
#define RECV_READRADIOPACKET_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ReadRadioPacket_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ReadRadioPacket.h"
void _SCSIM_Mapping_RECV_ReadRadioPacket();

void* _SCSIM_Get_RECV_ReadRadioPacket_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadRadioPacketLoop.h"
void _SCSIM_Mapping_RECV_ReadRadioPacketLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadRadioPacketLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*RECV_READRADIOPACKET_SCSIM_MAPPING */
