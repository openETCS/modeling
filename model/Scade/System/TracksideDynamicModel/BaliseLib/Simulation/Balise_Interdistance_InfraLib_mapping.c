#include "Balise_Interdistance_InfraLib_mapping.h"
#include "Balise_Interdistance_InfraLib_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Balise_Interdistance_InfraLib();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** InfraLib::Balise_Interdistance/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Interdistance_InfraLib() {
	pSimulator->m_pfnSetRoot(pSimulator, "InfraLib::Balise_Interdistance/", &outputs_ctx, _SCSIM_Get_Balise_Interdistance_InfraLib_Handle);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "pig0", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "n_pig", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
}

void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.A_Output_1);
		case 2:
			return &(outputs_ctx.A_Input_1);
		case 3:
			return &(outputs_ctx._L1_1);
		case 4:
			return &(outputs_ctx._L2_1);
		case 5:
			return &(outputs_ctx._L3_1);
		case 6:
			return &(outputs_ctx._L5_1);
		case 7:
			return &(outputs_ctx._L8_1);
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
			return &(outputs_ctx._L8);
		case 15:
			return &(outputs_ctx._L9);
		case 16:
			return &(outputs_ctx._L10);
		case 17:
			return &(outputs_ctx._L11);
		case 18:
			return &(outputs_ctx._L12);
		case 19:
			return &(outputs_ctx._L13);
		case 20:
			return &(outputs_ctx._L14);
		case 21:
			return &(outputs_ctx.distance_BB);
		case 22:
			return &(inputs_ctx.pig0);
		case 23:
			return &(inputs_ctx.n_pig);
		default:
			break;
	}
	return 0;
}

