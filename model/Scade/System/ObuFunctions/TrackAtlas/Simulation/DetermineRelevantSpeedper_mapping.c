#include "DetermineRelevantSpeedper_mapping.h"
#include "DetermineRelevantSpeedper_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_DetermineRelevantSpeedper();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineRelevantSpeedperCat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DetermineRelevantSpeedper() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineRelevantSpeedperCat_LOOP/", &outputs_ctx, _SCSIM_Get_DetermineRelevantSpeedper_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_valid_section_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_SSP_t_section_t_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_t_section_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_section_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_relevant_target_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L84", &_SCSIM_SSP_t_section_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_SSP_t_section_t_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_SSP_valid_section_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_SSP_t_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_SSP_t_section_t_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_SSP_relevant_target_t_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L111", &_SCSIM_SSP_relevant_target_t_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L117", &_SCSIM_SSP_relevant_target_t_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TargetCurrentCycle", &_SCSIM_SSP_relevant_target_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TargetCycleBefore", &_SCSIM_SSP_relevant_target_t_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Relevant_Section", &_SCSIM_SSP_valid_section_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section", &_SCSIM_SSP_section_t_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "ReferenceTarget", &_SCSIM_SSP_t_section_t_Utils, 28, valid, 0, 0);
}

void* _SCSIM_Get_DetermineRelevantSpeedper_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L3);
		case 3:
			return &(outputs_ctx._L46);
		case 4:
			return &(outputs_ctx._L47);
		case 5:
			return &(outputs_ctx._L73);
		case 6:
			return &(outputs_ctx._L72);
		case 7:
			return &(outputs_ctx._L5);
		case 8:
			return &(outputs_ctx._L4);
		case 9:
			return &(outputs_ctx._L2);
		case 10:
			return &(outputs_ctx._L78);
		case 11:
			return &(outputs_ctx._L74);
		case 12:
			return &(outputs_ctx._L79);
		case 13:
			return &(outputs_ctx._L84);
		case 14:
			return &(outputs_ctx._L102);
		case 15:
			return &(outputs_ctx._L103);
		case 16:
			return &(outputs_ctx._L104);
		case 17:
			return &(outputs_ctx._L105);
		case 18:
			return &(outputs_ctx._L109);
		case 19:
			return &(outputs_ctx._L110);
		case 20:
			return &(outputs_ctx._L111);
		case 21:
			return &(outputs_ctx._L117);
		case 22:
			return &(outputs_ctx.cont);
		case 23:
			return &(outputs_ctx.TargetCurrentCycle);
		case 24:
			return &(inputs_ctx.i);
		case 25:
			return &(inputs_ctx.TargetCycleBefore);
		case 26:
			return &(inputs_ctx.Relevant_Section);
		case 27:
			return &(inputs_ctx.SSP_section);
		case 28:
			return &(inputs_ctx.ReferenceTarget);
		default:
			break;
	}
	return 0;
}

