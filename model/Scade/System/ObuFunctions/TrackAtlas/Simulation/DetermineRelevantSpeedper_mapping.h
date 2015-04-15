#ifndef DETERMINERELEVANTSPEEDPER_SCSIM_MAPPING
#define DETERMINERELEVANTSPEEDPER_SCSIM_MAPPING

#include "SmuTypes.h"
#include "DetermineRelevantSpeedper_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "DetermineRelevantSpeedper.h"
void _SCSIM_Mapping_DetermineRelevantSpeedper();

void* _SCSIM_Get_DetermineRelevantSpeedper_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINERELEVANTSPEEDPER_SCSIM_MAPPING */
