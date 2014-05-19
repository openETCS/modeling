#ifndef CIAO_SCSIM_MAPPING
#define CIAO_SCSIM_MAPPING

#include "SmuTypes.h"
#include "ciao_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "ciao.h"
void _SCSIM_Mapping_ciao();

void* _SCSIM_Get_ciao_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*CIAO_SCSIM_MAPPING */
