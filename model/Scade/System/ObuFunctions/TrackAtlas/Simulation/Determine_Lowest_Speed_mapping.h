#ifndef DETERMINE_LOWEST_SPEED_SCSIM_MAPPING
#define DETERMINE_LOWEST_SPEED_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Determine_Lowest_Speed_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Determine_Lowest_Speed.h"
void _SCSIM_Mapping_Determine_Lowest_Speed();

void* _SCSIM_Get_Determine_Lowest_Speed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*DETERMINE_LOWEST_SPEED_SCSIM_MAPPING */
