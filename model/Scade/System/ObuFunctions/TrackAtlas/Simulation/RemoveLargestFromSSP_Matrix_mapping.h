#ifndef REMOVELARGESTFROMSSP_MATRIX_SCSIM_MAPPING
#define REMOVELARGESTFROMSSP_MATRIX_SCSIM_MAPPING

#include "SmuTypes.h"
#include "RemoveLargestFromSSP_Matrix_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "RemoveLargestFromSSP_Matrix.h"
void _SCSIM_Mapping_RemoveLargestFromSSP_Matrix();

void* _SCSIM_Get_RemoveLargestFromSSP_Matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*REMOVELARGESTFROMSSP_MATRIX_SCSIM_MAPPING */
