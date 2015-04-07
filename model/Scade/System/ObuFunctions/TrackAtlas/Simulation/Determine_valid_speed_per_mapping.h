#ifndef DETERMINE_VALID_SPEED_PER_SCSIM_MAPPING
#define DETERMINE_VALID_SPEED_PER_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Determine_valid_speed_per_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Determine_valid_speed_per.h"
void _SCSIM_Mapping_Determine_valid_speed_per();

void* _SCSIM_Get_Determine_valid_speed_per_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINE_VALID_SPEED_PER_SCSIM_MAPPING */
