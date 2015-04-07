#ifndef FLATTEN_SSP_SCSIM_MAPPING
#define FLATTEN_SSP_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Flatten_SSP_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Flatten_SSP.h"
void _SCSIM_Mapping_Flatten_SSP();

void* _SCSIM_Get_Flatten_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FLATTEN_SSP_SCSIM_MAPPING */
