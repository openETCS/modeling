#ifndef INFRA_BALISE_LOCALISATION_SCSIM_MAPPING
#define INFRA_BALISE_LOCALISATION_SCSIM_MAPPING

#include "SmuTypes.h"
#include "INFRA_Balise_Localisation_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "INFRA_Balise_Localisation.h"
void _SCSIM_Mapping_INFRA_Balise_Localisation();

void* _SCSIM_Get_INFRA_Balise_Localisation_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*INFRA_BALISE_LOCALISATION_SCSIM_MAPPING */
