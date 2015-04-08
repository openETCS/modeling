#include "Flatten_SSP_mapping.h"
#include "Flatten_SSP_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Flatten_SSP();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Flatten_SSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Flatten_SSP() {
	pSimulator->m_pfnSetRoot(pSimulator, "Flatten_SSP/", &outputs_ctx, _SCSIM_Get_Flatten_SSP_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_matrix_t_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_int_3_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_int_3_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array_int_3_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_3_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_int_3_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_int_3_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_3_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_3_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_3_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_3_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_3_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_array_int_6_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_array_int_9_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_array_int_12_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_array_int_15_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_array_int_18_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_int_21_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_int_24_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_array_int_27_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_array_int_30_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_array_int_33_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSPflat", &_SCSIM_SSP_list_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix", &_SCSIM_SSP_matrix_t_Utils, 24, valid, 0, 0);
}

void* _SCSIM_Get_Flatten_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L13);
		case 3:
			return &(outputs_ctx._L12);
		case 4:
			return &(outputs_ctx._L11);
		case 5:
			return &(outputs_ctx._L10);
		case 6:
			return &(outputs_ctx._L9);
		case 7:
			return &(outputs_ctx._L8);
		case 8:
			return &(outputs_ctx._L7);
		case 9:
			return &(outputs_ctx._L6);
		case 10:
			return &(outputs_ctx._L5);
		case 11:
			return &(outputs_ctx._L4);
		case 12:
			return &(outputs_ctx._L3);
		case 13:
			return &(outputs_ctx._L25);
		case 14:
			return &(outputs_ctx._L26);
		case 15:
			return &(outputs_ctx._L27);
		case 16:
			return &(outputs_ctx._L28);
		case 17:
			return &(outputs_ctx._L29);
		case 18:
			return &(outputs_ctx._L30);
		case 19:
			return &(outputs_ctx._L31);
		case 20:
			return &(outputs_ctx._L32);
		case 21:
			return &(outputs_ctx._L33);
		case 22:
			return &(outputs_ctx._L34);
		case 23:
			return &(outputs_ctx.SSPflat);
		case 24:
			return &(inputs_ctx.SSP_matrix);
		default:
			break;
	}
	return 0;
}

