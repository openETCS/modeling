#ifndef RECV_READRADIOPACKET15_SCSIM_MAPPING
#define RECV_READRADIOPACKET15_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ReadRadioPacket15_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ReadRadioPacket15.h"
void _SCSIM_Mapping_RECV_ReadRadioPacket15();

void* _SCSIM_Get_RECV_ReadRadioPacket15_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ExtractDataFromRadio.h"
void _SCSIM_Mapping_RECV_ExtractDataFromRadio(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ExtractDataFromRadio_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*RECV_READRADIOPACKET15_SCSIM_MAPPING */
