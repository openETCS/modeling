#include "C_P005_extract_el_section_TM_lib_internal_mapping.h"
#include "C_P005_extract_el_section_TM_lib_internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_lib_internal::C_P005_extract_el_section/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_lib_internal::C_P005_extract_el_section/", &outputs_ctx, _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_sections_array_flat_TM_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "element", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "offset", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_TM_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L5);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx.element);
		case 7:
			return &(inputs_ctx.offset);
		case 8:
			return &(inputs_ctx.flat);
		case 9:
			return &(inputs_ctx.modulo);
		default:
			break;
	}
	return 0;
}

