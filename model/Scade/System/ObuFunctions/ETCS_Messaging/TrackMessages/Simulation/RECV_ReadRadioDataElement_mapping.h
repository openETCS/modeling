#ifndef RECV_READRADIODATAELEMENT_SCSIM_MAPPING
#define RECV_READRADIODATAELEMENT_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ReadRadioDataElement_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ReadRadioDataElement.h"
void _SCSIM_Mapping_RECV_ReadRadioDataElement();

void* _SCSIM_Get_RECV_ReadRadioDataElement_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "RECV_ReadRadioDataElementLoop.h"
void _SCSIM_Mapping_RECV_ReadRadioDataElementLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_RECV_ReadRadioDataElementLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*RECV_READRADIODATAELEMENT_SCSIM_MAPPING */
