#include "Reverse_SSP_cat_LOOP_mapping.h"
#include "Reverse_SSP_cat_LOOP_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Reverse_SSP_cat_LOOP();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Reverse_SSP_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_cat_LOOP() {
	pSimulator->m_pfnSetRoot(pSimulator, "Reverse_SSP_cat_LOOP/", 0, _SCSIM_Get_Reverse_SSP_cat_LOOP_Handle);
}

void* _SCSIM_Get_Reverse_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		default:
			break;
	}
	return 0;
}

