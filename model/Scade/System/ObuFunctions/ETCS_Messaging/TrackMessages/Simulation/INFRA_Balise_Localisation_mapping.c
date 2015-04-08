#include "INFRA_Balise_Localisation_mapping.h"
#include "INFRA_Balise_Localisation_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_INFRA_Balise_Localisation();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** INFRA_Balise_Localisation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_INFRA_Balise_Localisation() {
	pSimulator->m_pfnSetRoot(pSimulator, "INFRA_Balise_Localisation/", &outputs_ctx, _SCSIM_Get_INFRA_Balise_Localisation_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Loc", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainPos", &_SCSIM_kcg_real_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "accuracy", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
}

void* _SCSIM_Get_INFRA_Balise_Localisation_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L2);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L7);
		case 5:
			return &(outputs_ctx._L8);
		case 6:
			return &(outputs_ctx._L9);
		case 7:
			return &(outputs_ctx._L10);
		case 8:
			return &(outputs_ctx._L12);
		case 9:
			return &(outputs_ctx._L13);
		case 10:
			return &(outputs_ctx._L14);
		case 11:
			return &(outputs_ctx.TrainPass);
		case 12:
			return &(inputs_ctx.Loc);
		case 13:
			return &(inputs_ctx.TrainPos);
		case 14:
			return &(inputs_ctx.accuracy);
		default:
			break;
	}
	return 0;
}

