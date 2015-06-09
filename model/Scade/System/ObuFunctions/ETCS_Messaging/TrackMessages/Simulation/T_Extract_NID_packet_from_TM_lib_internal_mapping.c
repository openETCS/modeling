#include "T_Extract_NID_packet_from_TM_lib_internal_mapping.h"
#include "T_Extract_NID_packet_from_TM_lib_internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_T_Extract_NID_packet_from_TM_lib_internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_lib_internal::T_Extract_NID_packet_from_Meta/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_T_Extract_NID_packet_from_TM_lib_internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_lib_internal::T_Extract_NID_packet_from_Meta/", &outputs_ctx, _SCSIM_Get_T_Extract_NID_packet_from_TM_lib_internal_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet_int", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet_meta", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
}

void* _SCSIM_Get_T_Extract_NID_packet_from_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx.nid_packet_int);
		case 5:
			return &(inputs_ctx.nid_packet_meta);
		default:
			break;
	}
	return 0;
}

