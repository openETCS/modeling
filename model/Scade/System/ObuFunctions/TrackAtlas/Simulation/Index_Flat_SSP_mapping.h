#ifndef INDEX_FLAT_SSP_SCSIM_MAPPING
#define INDEX_FLAT_SSP_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Index_Flat_SSP_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Index_Flat_SSP.h"
void _SCSIM_Mapping_Index_Flat_SSP();

void* _SCSIM_Get_Index_Flat_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*INDEX_FLAT_SSP_SCSIM_MAPPING */
