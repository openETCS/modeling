#ifndef RECV_EXTRACTDATAFROMRADIO_SCSIM_MAPPING
#define RECV_EXTRACTDATAFROMRADIO_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RECV_ExtractDataFromRadio_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RECV_ExtractDataFromRadio.h"
void _SCSIM_Mapping_RECV_ExtractDataFromRadio();

void* _SCSIM_Get_RECV_ExtractDataFromRadio_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*RECV_EXTRACTDATAFROMRADIO_SCSIM_MAPPING */
