#include "T_Build_Metadata_Packet_ID_TM_lib_internal_mapping.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_lib_internal::T_Build_Metadata_Packet_ID/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_lib_internal::T_Build_Metadata_Packet_ID/", &outputs_ctx, _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_PACKET_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet_meta", &_SCSIM_nid_packet_meta_TM_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet_in", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "meta_id", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet", &_SCSIM_NID_PACKET_Utils, 14, valid, 0, 0);
}

void* _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L4);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx._L8);
		case 7:
			return &(outputs_ctx._L9);
		case 8:
			return &(outputs_ctx._L10);
		case 9:
			return &(outputs_ctx._L11);
		case 10:
			return &(outputs_ctx._L12);
		case 11:
			return &(outputs_ctx.nid_packet_meta);
		case 12:
			return &(inputs_ctx.nid_packet_in);
		case 13:
			return &(inputs_ctx.meta_id);
		case 14:
			return &(inputs_ctx.nid_packet);
		default:
			break;
	}
	return 0;
}

