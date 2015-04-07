#ifndef TEST_SSP_SCSIM_MAPPING
#define TEST_SSP_SCSIM_MAPPING

#include "SmuTypes.h"
#include "Test_SSP_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "Test_SSP.h"
void _SCSIM_Mapping_Test_SSP();

void* _SCSIM_Get_Test_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*TEST_SSP_SCSIM_MAPPING */
