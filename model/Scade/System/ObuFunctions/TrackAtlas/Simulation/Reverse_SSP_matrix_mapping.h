#ifndef REVERSE_SSP_MATRIX_SCSIM_MAPPING
#define REVERSE_SSP_MATRIX_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Reverse_SSP_matrix_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Reverse_SSP_matrix.h"
void _SCSIM_Mapping_Reverse_SSP_matrix();

void* _SCSIM_Get_Reverse_SSP_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "Reverse_SSP_cat.h"
void _SCSIM_Mapping_Reverse_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*REVERSE_SSP_MATRIX_SCSIM_MAPPING */
