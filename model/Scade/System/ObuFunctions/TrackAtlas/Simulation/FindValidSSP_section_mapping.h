#ifndef FINDVALIDSSP_SECTION_SCSIM_MAPPING
#define FINDVALIDSSP_SECTION_SCSIM_MAPPING

#include "SmuTypes.h"
#include "FindValidSSP_section_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "FindValidSSP_section.h"
void _SCSIM_Mapping_FindValidSSP_section();

void* _SCSIM_Get_FindValidSSP_section_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*FINDVALIDSSP_SECTION_SCSIM_MAPPING */
