#ifndef SPLIT_AND_REVERSE_SSP_MATRIX_SCSIM_MAPPING
#define SPLIT_AND_REVERSE_SSP_MATRIX_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Split_And_Reverse_SSP_matrix_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Split_And_Reverse_SSP_matrix.h"
void _SCSIM_Mapping_Split_And_Reverse_SSP_matrix();

void* _SCSIM_Get_Split_And_Reverse_SSP_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SplitAndReverseSSP_LOOP1.h"
void _SCSIM_Mapping_SplitAndReverseSSP_LOOP1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SplitAndReverseSSP_LOOP1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "SplitAndReverseSSP_LOOP2.h"
void _SCSIM_Mapping_SplitAndReverseSSP_LOOP2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_SplitAndReverseSSP_LOOP2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*SPLIT_AND_REVERSE_SSP_MATRIX_SCSIM_MAPPING */
