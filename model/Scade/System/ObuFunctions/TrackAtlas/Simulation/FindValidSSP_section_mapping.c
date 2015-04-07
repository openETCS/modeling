#include "FindValidSSP_section_mapping.h"
#include "FindValidSSP_section_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_FindValidSSP_section();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** FindValidSSP_section/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindValidSSP_section() {
	pSimulator->m_pfnSetRoot(pSimulator, "FindValidSSP_section/", &outputs_ctx, _SCSIM_Get_FindValidSSP_section_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_SSP_t_section_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_s_section_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_section_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "valid", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section_In", &_SCSIM_SSP_section_t_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
}

void* _SCSIM_Get_FindValidSSP_section_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L6);
		case 3:
			return &(outputs_ctx._L8);
		case 4:
			return &(outputs_ctx._L9);
		case 5:
			return &(outputs_ctx._L10);
		case 6:
			return &(outputs_ctx._L11);
		case 7:
			return &(outputs_ctx._L12);
		case 8:
			return &(outputs_ctx._L13);
		case 9:
			return &(outputs_ctx._L14);
		case 10:
			return &(outputs_ctx._L19);
		case 11:
			return &(outputs_ctx._L20);
		case 12:
			return &(outputs_ctx._L21);
		case 13:
			return &(outputs_ctx._L22);
		case 14:
			return &(outputs_ctx._L23);
		case 15:
			return &(outputs_ctx._L24);
		case 16:
			return &(outputs_ctx._L25);
		case 17:
			return &(outputs_ctx._L26);
		case 18:
			return &(outputs_ctx.valid);
		case 19:
			return &(inputs_ctx.SSP_section_In);
		case 20:
			return &(inputs_ctx.i);
		default:
			break;
	}
	return 0;
}

