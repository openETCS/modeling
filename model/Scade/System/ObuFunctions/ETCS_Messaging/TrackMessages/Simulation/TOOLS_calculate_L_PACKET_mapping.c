#include "TOOLS_calculate_L_PACKET_mapping.h"
#include "TOOLS_calculate_L_PACKET_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_TOOLS_calculate_L_PACKET();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TOOLS_calculate_L_PACKET/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_calculate_L_PACKET() {
	pSimulator->m_pfnSetRoot(pSimulator, "TOOLS_calculate_L_PACKET/", &outputs_ctx, _SCSIM_Get_TOOLS_calculate_L_PACKET_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "L_PACKET", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "N_ITER_out", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "N_ITER", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "l_common_data", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "l_section", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
}

void* _SCSIM_Get_TOOLS_calculate_L_PACKET_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
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
			return &(outputs_ctx._L5);
		case 6:
			return &(outputs_ctx._L6);
		case 7:
			return &(outputs_ctx._L7);
		case 8:
			return &(outputs_ctx.L_PACKET);
		case 9:
			return &(outputs_ctx.N_ITER_out);
		case 10:
			return &(inputs_ctx.N_ITER);
		case 11:
			return &(inputs_ctx.l_common_data);
		case 12:
			return &(inputs_ctx.l_section);
		default:
			break;
	}
	return 0;
}

