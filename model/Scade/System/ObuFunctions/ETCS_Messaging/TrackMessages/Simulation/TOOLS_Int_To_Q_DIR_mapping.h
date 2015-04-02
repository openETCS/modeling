#ifndef TOOLS_INT_TO_Q_DIR_SCSIM_MAPPING
#define TOOLS_INT_TO_Q_DIR_SCSIM_MAPPING

#include "SmuTypes.h"
#include "TOOLS_Int_To_Q_DIR_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "TOOLS_Int_To_Q_DIR.h"
void _SCSIM_Mapping_TOOLS_Int_To_Q_DIR();

void* _SCSIM_Get_TOOLS_Int_To_Q_DIR_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*TOOLS_INT_TO_Q_DIR_SCSIM_MAPPING */
