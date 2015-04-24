#ifndef BALISE_INTERDISTANCE_INFRALIB_SCSIM_MAPPING
#define BALISE_INTERDISTANCE_INFRALIB_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Balise_Interdistance_InfraLib_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Balise_Interdistance_InfraLib.h"
void _SCSIM_Mapping_Balise_Interdistance_InfraLib();

void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*BALISE_INTERDISTANCE_INFRALIB_SCSIM_MAPPING */
