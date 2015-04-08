#include "Determine_Lowest_Speed_mapping.h"
#include "Determine_Lowest_Speed_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Determine_Lowest_Speed();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Determine_Lowest_Speed/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_Lowest_Speed() {
	pSimulator->m_pfnSetRoot(pSimulator, "Determine_Lowest_Speed/", &outputs_ctx, _SCSIM_Get_Determine_Lowest_Speed_Handle);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_s_section_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_s_section_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_s_section_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_SSP_s_section_t_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRSpeed", &_SCSIM_SSP_s_section_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Acc", &_SCSIM_SSP_s_section_t_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "ValidSpeed", &_SCSIM_SSP_s_section_t_Utils, 18, valid, 0, 0);
}

void* _SCSIM_Get_Determine_Lowest_Speed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Mi_Output_1);
		case 2:
			return &(outputs_ctx.I1_1);
		case 3:
			return &(outputs_ctx.I2_1);
		case 4:
			return &(outputs_ctx._L21_1);
		case 5:
			return &(outputs_ctx._L22_1);
		case 6:
			return &(outputs_ctx._L24_1);
		case 7:
			return &(outputs_ctx._L25_1);
		case 8:
			return &(outputs_ctx._L1);
		case 9:
			return &(outputs_ctx._L2);
		case 10:
			return &(outputs_ctx._L3);
		case 11:
			return &(outputs_ctx._L4);
		case 12:
			return &(outputs_ctx._L5);
		case 13:
			return &(outputs_ctx._L6);
		case 14:
			return &(outputs_ctx._L7);
		case 15:
			return &(outputs_ctx.MRSpeed);
		case 16:
			return &(inputs_ctx.i);
		case 17:
			return &(inputs_ctx.Acc);
		case 18:
			return &(inputs_ctx.ValidSpeed);
		default:
			break;
	}
	return 0;
}

