#include "Determine_valid_speed_per_mapping.h"
#include "Determine_valid_speed_per_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Determine_valid_speed_per();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Determine_valid_speed_per_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_valid_speed_per() {
	pSimulator->m_pfnSetRoot(pSimulator, "Determine_valid_speed_per_cat_LOOP/", &outputs_ctx, _SCSIM_Get_Determine_valid_speed_per_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_SSP_section_t_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_SSP_t_section_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_SSP_section_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_SSP_t_section_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_SSP_t_section_t_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_SSP_section_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_SSP_section_t_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_SSP_section_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ValidSection", &_SCSIM_SSP_section_t_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Section", &_SCSIM_SSP_section_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentTarget", &_SCSIM_SSP_t_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section", &_SCSIM_SSP_section_t_Utils, 17, valid, 0, 0);
}

void* _SCSIM_Get_Determine_valid_speed_per_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L39);
		case 2:
			return &(outputs_ctx._L40);
		case 3:
			return &(outputs_ctx._L41);
		case 4:
			return &(outputs_ctx._L42);
		case 5:
			return &(outputs_ctx._L47);
		case 6:
			return &(outputs_ctx._L48);
		case 7:
			return &(outputs_ctx._L49);
		case 8:
			return &(outputs_ctx._L50);
		case 9:
			return &(outputs_ctx._L55);
		case 10:
			return &(outputs_ctx._L56);
		case 11:
			return &(outputs_ctx._L57);
		case 12:
			return &(outputs_ctx._L58);
		case 13:
			return &(outputs_ctx.cont);
		case 14:
			return &(outputs_ctx.ValidSection);
		case 15:
			return &(inputs_ctx.Section);
		case 16:
			return &(inputs_ctx.CurrentTarget);
		case 17:
			return &(inputs_ctx.SSP_section);
		default:
			break;
	}
	return 0;
}

