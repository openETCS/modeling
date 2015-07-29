#include "Root_SDM_mapping.h"
#include "Root_SDM_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Root_SDM();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Root_SDM/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Root_SDM() {
	pSimulator->m_pfnSetRoot(pSimulator, "Root_SDM/", &outputs_ctx, _SCSIM_Get_Root_SDM_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_Step_Operator("Step_Operator", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_EBD_Operator("EBD_Operator", "1", 2, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_MRSP_Operator("MRSP_Operator", "1", 3, 0, 0);
	_SCSIM_Mapping_ACCeler_Operator("ACCeler_Operator", "", 4, 0, 0);
	_SCSIM_Mapping_SBD_Operator("SBD_Operator", "1", 5, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_real_25_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_real_25_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_real_25_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_real_25_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_real_25_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_TY_SizePos_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_TY_SizePos_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_real_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_real_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_array__1647_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_array__1614_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array__1614_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_array__1611_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_array__1611_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_array__1611_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_TY_DistValue_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_array_real_25_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_array_real_25_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_array_real_25_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_array_real_25_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_25_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_array_real_25_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_array__1614_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_array_real_25_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_array__1611_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_TY_DistValue_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "dV_ebi", &_SCSIM_array_real_25_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Vebd", &_SCSIM_array_real_25_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Vsbd", &_SCSIM_array_real_25_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP", &_SCSIM_array__1614_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TSR_1", &_SCSIM_array__1611_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TSR_2", &_SCSIM_array__1611_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TSR_3", &_SCSIM_array__1611_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MA_EOA", &_SCSIM_TY_DistValue_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gradient", &_SCSIM_array__1614_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Adh", &_SCSIM_array__1647_Utils, 46, valid, 0, 0);
}

void* _SCSIM_Get_Root_SDM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			if (nSize != 1)
				break;
			return &(outputs_ctx._2_Context_1[pIteratorFilter[0]]);
		case 3:
			return &(outputs_ctx._1_Context_1);
		case 4:
			return &(outputs_ctx.Context_ACCeler_Operator);
		case 5:
			return &(outputs_ctx._3_Context_1);
		case 6:
			return &(outputs_ctx._L1);
		case 7:
			return &(outputs_ctx._L3);
		case 8:
			return &(outputs_ctx._L2);
		case 9:
			return &(outputs_ctx._L4);
		case 10:
			return &(outputs_ctx._L8);
		case 11:
			return &(outputs_ctx._L9);
		case 12:
			return &(outputs_ctx._L10);
		case 13:
			return &(outputs_ctx._L5);
		case 14:
			return &(outputs_ctx._L11);
		case 15:
			return &(outputs_ctx._L14);
		case 16:
			return &(outputs_ctx._L16);
		case 17:
			return &(outputs_ctx._L17);
		case 18:
			return &(outputs_ctx._L19);
		case 19:
			return &(outputs_ctx._L20);
		case 20:
			return &(outputs_ctx._L21);
		case 21:
			return &(outputs_ctx._L22);
		case 22:
			return &(outputs_ctx._L23);
		case 23:
			return &(outputs_ctx._L24);
		case 24:
			return &(outputs_ctx._L25);
		case 25:
			return &(outputs_ctx._L26);
		case 26:
			return &(outputs_ctx._L27);
		case 27:
			return &(outputs_ctx._L28);
		case 28:
			return &(outputs_ctx._L29);
		case 29:
			return &(outputs_ctx._L30);
		case 30:
			return &(outputs_ctx._L31);
		case 31:
			return &(outputs_ctx._L32);
		case 32:
			return &(outputs_ctx._L33);
		case 33:
			return &(outputs_ctx._L34);
		case 34:
			return &(outputs_ctx._L35);
		case 35:
			return &(outputs_ctx._L36);
		case 36:
			return &(outputs_ctx._L37);
		case 37:
			return &(outputs_ctx.dV_ebi);
		case 38:
			return &(outputs_ctx.Vebd);
		case 39:
			return &(outputs_ctx.Vsbd);
		case 40:
			return &(inputs_ctx.SSP);
		case 41:
			return &(inputs_ctx.TSR_1);
		case 42:
			return &(inputs_ctx.TSR_2);
		case 43:
			return &(inputs_ctx.TSR_3);
		case 44:
			return &(inputs_ctx.MA_EOA);
		case 45:
			return &(inputs_ctx.Gradient);
		case 46:
			return &(inputs_ctx.Adh);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Step_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Step_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Step_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_TY_SizePos_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Next_SizePos", &_SCSIM_TY_SizePos_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SIZE", &_SCSIM_kcg_real_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "POS", &_SCSIM_kcg_real_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Step_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Step_Operator* pContext = (outC_Step_Operator*)pInstance;
	switch (nHandleIdent) {
		case 47:
			return &((*pContext)._L1);
		case 48:
			return &((*pContext)._L2);
		case 49:
			return &((*pContext)._L3);
		case 50:
			return &((*pContext)._L12);
		case 51:
			return &((*pContext)._L13);
		case 52:
			return &((*pContext)._L14);
		case 53:
			return &((*pContext).Next_SizePos);
		case 54:
			return &((*pContext).SIZE);
		case 55:
			return &((*pContext).POS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** EBD_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_EBD_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_EBD_Operator_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_real_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_real_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Vebd", &_SCSIM_kcg_real_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Vebd_Table", &_SCSIM_kcg_real_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_EBD_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_EBD_Operator* pContext = (outC_EBD_Operator*)pInstance;
	switch (nHandleIdent) {
		case 56:
			return &((*pContext).Mi_Output_1);
		case 57:
			return &((*pContext).I1_1);
		case 58:
			return &((*pContext).I2_1);
		case 59:
			return &((*pContext)._L21_1);
		case 60:
			return &((*pContext)._L22_1);
		case 61:
			return &((*pContext)._L24_1);
		case 62:
			return &((*pContext)._L25_1);
		case 63:
			return &((*pContext)._L1);
		case 64:
			return &((*pContext)._L2);
		case 65:
			return &((*pContext)._L3);
		case 66:
			return &((*pContext)._L5);
		case 67:
			return &((*pContext)._L6);
		case 68:
			return &((*pContext)._L8);
		case 69:
			return &((*pContext)._L9);
		case 70:
			return &((*pContext)._L10);
		case 71:
			return &((*pContext)._L11);
		case 72:
			return &((*pContext)._L12);
		case 73:
			return &((*pContext)._L13);
		case 74:
			return &((*pContext)._L14);
		case 75:
			return &((*pContext)._L16);
		case 76:
			return &((*pContext).Vebd);
		case 77:
			return &((*pContext).Vebd_Table);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** MRSP_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_MRSP_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_MRSP_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_Min3_math_real("math::Min3", "3", 78, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_Min3_math_real("math::Min3", "2", 79, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array_real_25_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_array_real_25_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_array_real_25_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_array_bool_25_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_dV_Operator("dV_Operator", "1", 84, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_Spreader_Operator_8_4("Spreader_Operator", "1", 85, 0, 0);
	_SCSIM_Mapping_Spreader_Operator_2_2("Spreader_Operator", "2", 86, 0, 0);
	_SCSIM_Mapping_Spreader_Operator_2_2("Spreader_Operator", "3", 87, 0, 0);
	_SCSIM_Mapping_Spreader_Operator_1_1("Spreader_Operator", "5", 88, 0, 0);
	_SCSIM_Mapping_Spreader_Operator_2_2("Spreader_Operator", "4", 89, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array__1614_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_real_25_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array__1611_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array__1611_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_TY_DistValue_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_real_25_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_real_25_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array_real_25_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_real_25_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_array__1611_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_array_real_25_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_array_real_25_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_array_real_25_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_real_25_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_array_real_25_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_array__1638_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRSP", &_SCSIM_array_real_25_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "dV_ebi", &_SCSIM_array_real_25_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_MRSP_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_MRSP_Operator* pContext = (outC_MRSP_Operator*)pInstance;
	switch (nHandleIdent) {
		case 78:
			if (nSize != 1)
				break;
			return &((*pContext).Context_3[pIteratorFilter[0]]);
		case 79:
			if (nSize != 1)
				break;
			return &((*pContext)._2_Context_2[pIteratorFilter[0]]);
		case 80:
			if (nSize != 1)
				break;
			return &((*pContext)._L21_2[pIteratorFilter[0]]);
		case 81:
			if (nSize != 1)
				break;
			return &((*pContext)._L22_2[pIteratorFilter[0]]);
		case 82:
			if (nSize != 1)
				break;
			return &((*pContext)._L24_2[pIteratorFilter[0]]);
		case 83:
			if (nSize != 1)
				break;
			return &((*pContext)._L25_2[pIteratorFilter[0]]);
		case 84:
			if (nSize != 1)
				break;
			return &((*pContext)._3_Context_1[pIteratorFilter[0]]);
		case 85:
			return &((*pContext).Context_1);
		case 86:
			return &((*pContext).Context_2);
		case 87:
			return &((*pContext)._1_Context_3);
		case 88:
			return &((*pContext).Context_5);
		case 89:
			return &((*pContext).Context_4);
		case 90:
			return &((*pContext)._L1);
		case 91:
			return &((*pContext)._L2);
		case 92:
			return &((*pContext)._L4);
		case 93:
			return &((*pContext)._L5);
		case 94:
			return &((*pContext)._L7);
		case 95:
			return &((*pContext)._L8);
		case 96:
			return &((*pContext)._L9);
		case 97:
			return &((*pContext)._L10);
		case 98:
			return &((*pContext)._L11);
		case 99:
			return &((*pContext)._L13);
		case 100:
			return &((*pContext)._L14);
		case 101:
			return &((*pContext)._L15);
		case 102:
			return &((*pContext)._L16);
		case 103:
			return &((*pContext)._L17);
		case 104:
			return &((*pContext)._L18);
		case 105:
			return &((*pContext)._L19);
		case 106:
			return &((*pContext)._L20);
		case 107:
			return &((*pContext).MRSP);
		case 108:
			return &((*pContext).dV_ebi);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ACCeler_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ACCeler_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ACCeler_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_AEB_Operator("AEB_Operator", "1", 109, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_ASB_Operator("ASB_Operator", "1", 110, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	_SCSIM_Mapping_ComputeAcc("ComputeAcc", "", 111, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 25, 25);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_Bool_Spreader_Operator_2("Bool_Spreader_Operator", "1", 112, 0, 0);
	_SCSIM_Mapping_Spreader_Operator_8_8("Spreader_Operator", "2", 113, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_real_25_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1647_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array__1614_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_bool_25_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_real_25_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_array_real_25_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_array__1659_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_array_real_25_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_array_bool_25_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array_real_25_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_array_real_25_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_array_real_25_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Asafe", &_SCSIM_array_real_25_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Aservice", &_SCSIM_array_real_25_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ACCeler_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ACCeler_Operator* pContext = (outC_ACCeler_Operator*)pInstance;
	switch (nHandleIdent) {
		case 109:
			if (nSize != 1)
				break;
			return &((*pContext)._2_Context_1[pIteratorFilter[0]]);
		case 110:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 111:
			if (nSize != 1)
				break;
			return &((*pContext).Context_ComputeAcc[pIteratorFilter[0]]);
		case 112:
			return &((*pContext)._1_Context_1);
		case 113:
			return &((*pContext).Context_2);
		case 114:
			return &((*pContext)._L1);
		case 115:
			return &((*pContext)._L2);
		case 116:
			return &((*pContext)._L3);
		case 117:
			return &((*pContext)._L4);
		case 118:
			return &((*pContext)._L5);
		case 119:
			return &((*pContext)._L13);
		case 120:
			return &((*pContext)._L14);
		case 121:
			return &((*pContext)._L16);
		case 122:
			return &((*pContext)._L17);
		case 123:
			return &((*pContext)._L19);
		case 124:
			return &((*pContext)._L21);
		case 125:
			return &((*pContext)._L24);
		case 126:
			return &((*pContext)._L25);
		case 127:
			return &((*pContext).Asafe);
		case 128:
			return &((*pContext).Aservice);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SBD_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SBD_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SBD_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_real_25_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_real_25_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Vsbd", &_SCSIM_array_real_25_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SBD_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SBD_Operator* pContext = (outC_SBD_Operator*)pInstance;
	switch (nHandleIdent) {
		case 129:
			return &((*pContext)._L1);
		case 130:
			return &((*pContext)._L2);
		case 131:
			return &((*pContext).Vsbd);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** math::Min3/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Min3_math_real(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Min3_math_real_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi3_Output", &_SCSIM_kcg_real_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Min3_math_real_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Min3_math_real* pContext = (outC_Min3_math_real*)pInstance;
	switch (nHandleIdent) {
		case 132:
			return &((*pContext)._L1);
		case 133:
			return &((*pContext)._L2);
		case 134:
			return &((*pContext)._L3);
		case 135:
			return &((*pContext)._L4);
		case 136:
			return &((*pContext)._L5);
		case 137:
			return &((*pContext)._L6);
		case 138:
			return &((*pContext)._L7);
		case 139:
			return &((*pContext)._L8);
		case 140:
			return &((*pContext)._L9);
		case 141:
			return &((*pContext).Mi3_Output);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** dV_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_dV_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_dV_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_142_Utils, 142);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_143_Utils, 143);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_144_Utils, 144);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_145_Utils, 145);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "dV", &_SCSIM_kcg_real_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_dV_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_dV_Operator* pContext = (outC_dV_Operator*)pInstance;
	switch (nHandleIdent) {
		case 142:
			return &((*pContext).IfBlock1_clock);
		case 143:
			return &((*pContext).else_clock_IfBlock1);
		case 144:
			return &((*pContext).else_clock_IfBlock1);
		case 145:
			return &((*pContext).IfBlock1_clock);
		case 146:
			return &((*pContext).dV);
		default:
			break;
	}
	return 0;
}

static int Is143Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_143_Utils = {Is143Active};

static int Is144Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_144_Utils = {Is144Active};

static int Is142Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_142_Utils = {Is142Active};

static int Is145Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_145_Utils = {Is145Active};

/****************************************************************
 ** Spreader_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Spreader_Operator_8_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Spreader_Operator_8_4_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_ScanPositions_8_4("ScanPositions", "1", 147, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_real_25_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_real_1_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_real_24_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1629_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array__1614_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_real_25_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_100", &_SCSIM_array_real_25_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Spreader_Operator_8_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Spreader_Operator_8_4* pContext = (outC_Spreader_Operator_8_4*)pInstance;
	switch (nHandleIdent) {
		case 147:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 148:
			return &((*pContext)._L9);
		case 149:
			return &((*pContext)._L8);
		case 150:
			return &((*pContext)._L7);
		case 151:
			return &((*pContext)._L6);
		case 152:
			return &((*pContext)._L4);
		case 153:
			return &((*pContext)._L5);
		case 154:
			return &((*pContext)._L3);
		case 155:
			return &((*pContext)._L2);
		case 156:
			return &((*pContext)._L1);
		case 157:
			return &((*pContext)._L10);
		case 158:
			return &((*pContext)._L11);
		case 159:
			return &((*pContext)._L12);
		case 160:
			return &((*pContext).SSP_100);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Spreader_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Spreader_Operator_2_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Spreader_Operator_2_2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_ScanPositions_2_2("ScanPositions", "1", 161, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_real_25_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_real_1_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_real_24_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1635_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array__1611_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_real_25_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_100", &_SCSIM_array_real_25_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Spreader_Operator_2_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Spreader_Operator_2_2* pContext = (outC_Spreader_Operator_2_2*)pInstance;
	switch (nHandleIdent) {
		case 161:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 162:
			return &((*pContext)._L9);
		case 163:
			return &((*pContext)._L8);
		case 164:
			return &((*pContext)._L7);
		case 165:
			return &((*pContext)._L6);
		case 166:
			return &((*pContext)._L4);
		case 167:
			return &((*pContext)._L5);
		case 168:
			return &((*pContext)._L3);
		case 169:
			return &((*pContext)._L2);
		case 170:
			return &((*pContext)._L1);
		case 171:
			return &((*pContext)._L10);
		case 172:
			return &((*pContext)._L11);
		case 173:
			return &((*pContext)._L12);
		case 174:
			return &((*pContext).SSP_100);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Spreader_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Spreader_Operator_1_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Spreader_Operator_1_1_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_ScanPositions_1_1("ScanPositions", "1", 175, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_real_25_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_real_1_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_real_24_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1641_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array__1638_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_real_25_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_100", &_SCSIM_array_real_25_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Spreader_Operator_1_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Spreader_Operator_1_1* pContext = (outC_Spreader_Operator_1_1*)pInstance;
	switch (nHandleIdent) {
		case 175:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 176:
			return &((*pContext)._L9);
		case 177:
			return &((*pContext)._L8);
		case 178:
			return &((*pContext)._L7);
		case 179:
			return &((*pContext)._L6);
		case 180:
			return &((*pContext)._L4);
		case 181:
			return &((*pContext)._L5);
		case 182:
			return &((*pContext)._L3);
		case 183:
			return &((*pContext)._L2);
		case 184:
			return &((*pContext)._L1);
		case 185:
			return &((*pContext)._L10);
		case 186:
			return &((*pContext)._L11);
		case 187:
			return &((*pContext)._L12);
		case 188:
			return &((*pContext).SSP_100);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AEB_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_AEB_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_AEB_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "EB", &_SCSIM_kcg_real_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_AEB_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_AEB_Operator* pContext = (outC_AEB_Operator*)pInstance;
	switch (nHandleIdent) {
		case 189:
			return &((*pContext)._L1);
		case 190:
			return &((*pContext)._L2);
		case 191:
			return &((*pContext)._L3);
		case 192:
			return &((*pContext)._L4);
		case 193:
			return &((*pContext).EB);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ASB_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ASB_Operator(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ASB_Operator_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output1", &_SCSIM_kcg_real_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ASB_Operator_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ASB_Operator* pContext = (outC_ASB_Operator*)pInstance;
	switch (nHandleIdent) {
		case 194:
			return &((*pContext)._L1);
		case 195:
			return &((*pContext)._L2);
		case 196:
			return &((*pContext)._L4);
		case 197:
			return &((*pContext).Output1);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ComputeAcc/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ComputeAcc(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ComputeAcc_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output1", &_SCSIM_kcg_real_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ComputeAcc_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ComputeAcc* pContext = (outC_ComputeAcc*)pInstance;
	switch (nHandleIdent) {
		case 198:
			return &((*pContext)._L1);
		case 199:
			return &((*pContext)._L2);
		case 200:
			return &((*pContext)._L3);
		case 201:
			return &((*pContext)._L4);
		case 202:
			return &((*pContext)._L5);
		case 203:
			return &((*pContext).Output1);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Bool_Spreader_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Bool_Spreader_Operator_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Bool_Spreader_Operator_2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_BooleanScanPositions_2("BooleanScanPositions", "1", 204, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_bool_25_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_bool_25_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_bool_1_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_bool_25_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_bool_24_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1656_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array__1647_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_real_25_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Values_100", &_SCSIM_array_bool_25_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Bool_Spreader_Operator_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Bool_Spreader_Operator_2* pContext = (outC_Bool_Spreader_Operator_2*)pInstance;
	switch (nHandleIdent) {
		case 204:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 205:
			return &((*pContext)._L9);
		case 206:
			return &((*pContext)._L8);
		case 207:
			return &((*pContext)._L7);
		case 208:
			return &((*pContext)._L6);
		case 209:
			return &((*pContext)._L4);
		case 210:
			return &((*pContext)._L5);
		case 211:
			return &((*pContext)._L3);
		case 212:
			return &((*pContext)._L2);
		case 213:
			return &((*pContext)._L1);
		case 214:
			return &((*pContext)._L10);
		case 215:
			return &((*pContext)._L11);
		case 216:
			return &((*pContext)._L12);
		case 217:
			return &((*pContext).Values_100);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Spreader_Operator/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Spreader_Operator_8_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Spreader_Operator_8_8_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 25, 25);
	_SCSIM_Mapping_ScanPositions_8_8("ScanPositions", "1", 218, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_real_25_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_array_real_25_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_real_1_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_real_25_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_real_24_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1629_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array__1614_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_real_25_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_100", &_SCSIM_array_real_25_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Spreader_Operator_8_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Spreader_Operator_8_8* pContext = (outC_Spreader_Operator_8_8*)pInstance;
	switch (nHandleIdent) {
		case 218:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 219:
			return &((*pContext)._L9);
		case 220:
			return &((*pContext)._L8);
		case 221:
			return &((*pContext)._L7);
		case 222:
			return &((*pContext)._L6);
		case 223:
			return &((*pContext)._L4);
		case 224:
			return &((*pContext)._L5);
		case 225:
			return &((*pContext)._L3);
		case 226:
			return &((*pContext)._L2);
		case 227:
			return &((*pContext)._L1);
		case 228:
			return &((*pContext)._L10);
		case 229:
			return &((*pContext)._L11);
		case 230:
			return &((*pContext)._L12);
		case 231:
			return &((*pContext).SSP_100);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanPositions/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanPositions_8_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanPositions_8_4_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_ScanSSP_4("ScanSSP", "1", 232, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1614_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_real_8_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_8_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Pos_i_next", &_SCSIM_kcg_real_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_kcg_real_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanPositions_8_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanPositions_8_4* pContext = (outC_ScanPositions_8_4*)pInstance;
	switch (nHandleIdent) {
		case 232:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 233:
			return &((*pContext)._L2);
		case 234:
			return &((*pContext)._L20);
		case 235:
			return &((*pContext)._L22);
		case 236:
			return &((*pContext)._L26);
		case 237:
			return &((*pContext)._L27);
		case 238:
			return &((*pContext)._L28);
		case 239:
			return &((*pContext)._L29);
		case 240:
			return &((*pContext)._L30);
		case 241:
			return &((*pContext)._L31);
		case 242:
			return &((*pContext)._L32);
		case 243:
			return &((*pContext).Pos_i_next);
		case 244:
			return &((*pContext).MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanPositions/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanPositions_2_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanPositions_2_2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_ScanSSP_2("ScanSSP", "1", 245, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1611_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_real_2_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_2_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Pos_i_next", &_SCSIM_kcg_real_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_kcg_real_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanPositions_2_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanPositions_2_2* pContext = (outC_ScanPositions_2_2*)pInstance;
	switch (nHandleIdent) {
		case 245:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 246:
			return &((*pContext)._L2);
		case 247:
			return &((*pContext)._L20);
		case 248:
			return &((*pContext)._L22);
		case 249:
			return &((*pContext)._L26);
		case 250:
			return &((*pContext)._L27);
		case 251:
			return &((*pContext)._L28);
		case 252:
			return &((*pContext)._L29);
		case 253:
			return &((*pContext)._L30);
		case 254:
			return &((*pContext)._L31);
		case 255:
			return &((*pContext)._L32);
		case 256:
			return &((*pContext).Pos_i_next);
		case 257:
			return &((*pContext).MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanPositions/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanPositions_1_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanPositions_1_1_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_ScanSSP_1("ScanSSP", "1", 258, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1638_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_real_1_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_1_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Pos_i_next", &_SCSIM_kcg_real_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_kcg_real_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanPositions_1_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanPositions_1_1* pContext = (outC_ScanPositions_1_1*)pInstance;
	switch (nHandleIdent) {
		case 258:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 259:
			return &((*pContext)._L2);
		case 260:
			return &((*pContext)._L20);
		case 261:
			return &((*pContext)._L22);
		case 262:
			return &((*pContext)._L26);
		case 263:
			return &((*pContext)._L27);
		case 264:
			return &((*pContext)._L28);
		case 265:
			return &((*pContext)._L29);
		case 266:
			return &((*pContext)._L30);
		case 267:
			return &((*pContext)._L31);
		case 268:
			return &((*pContext)._L32);
		case 269:
			return &((*pContext).Pos_i_next);
		case 270:
			return &((*pContext).MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** BooleanScanPositions/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_BooleanScanPositions_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_BooleanScanPositions_2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 2, 2);
	_SCSIM_Mapping_ScanAdh_2("ScanAdh", "1", 271, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1647_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_real_2_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_2_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Pos_i_next", &_SCSIM_kcg_real_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_kcg_bool_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_BooleanScanPositions_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_BooleanScanPositions_2* pContext = (outC_BooleanScanPositions_2*)pInstance;
	switch (nHandleIdent) {
		case 271:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 272:
			return &((*pContext)._L2);
		case 273:
			return &((*pContext)._L20);
		case 274:
			return &((*pContext)._L22);
		case 275:
			return &((*pContext)._L26);
		case 276:
			return &((*pContext)._L27);
		case 277:
			return &((*pContext)._L28);
		case 278:
			return &((*pContext)._L29);
		case 279:
			return &((*pContext)._L30);
		case 280:
			return &((*pContext)._L31);
		case 281:
			return &((*pContext)._L32);
		case 282:
			return &((*pContext).Pos_i_next);
		case 283:
			return &((*pContext).MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanPositions/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanPositions_8_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanPositions_8_8_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_ScanSSP_8("ScanSSP", "1", 284, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array__1614_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_array_real_8_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_array_real_8_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Pos_i_next", &_SCSIM_kcg_real_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_kcg_real_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanPositions_8_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanPositions_8_8* pContext = (outC_ScanPositions_8_8*)pInstance;
	switch (nHandleIdent) {
		case 284:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 285:
			return &((*pContext)._L2);
		case 286:
			return &((*pContext)._L20);
		case 287:
			return &((*pContext)._L22);
		case 288:
			return &((*pContext)._L26);
		case 289:
			return &((*pContext)._L27);
		case 290:
			return &((*pContext)._L28);
		case 291:
			return &((*pContext)._L29);
		case 292:
			return &((*pContext)._L30);
		case 293:
			return &((*pContext)._L31);
		case 294:
			return &((*pContext)._L32);
		case 295:
			return &((*pContext).Pos_i_next);
		case 296:
			return &((*pContext).MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanSSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanSSP_4(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanSSP_4_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TY_DistValue_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Continue", &_SCSIM_kcg_bool_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updated_MRS", &_SCSIM_kcg_real_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanSSP_4_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanSSP_4* pContext = (outC_ScanSSP_4*)pInstance;
	switch (nHandleIdent) {
		case 297:
			return &((*pContext).Mi_Output_1);
		case 298:
			return &((*pContext).I1_1);
		case 299:
			return &((*pContext).I2_1);
		case 300:
			return &((*pContext)._L21_1);
		case 301:
			return &((*pContext)._L22_1);
		case 302:
			return &((*pContext)._L24_1);
		case 303:
			return &((*pContext)._L25_1);
		case 304:
			return &((*pContext)._L1);
		case 305:
			return &((*pContext)._L2);
		case 306:
			return &((*pContext)._L8);
		case 307:
			return &((*pContext)._L7);
		case 308:
			return &((*pContext)._L9);
		case 309:
			return &((*pContext)._L10);
		case 310:
			return &((*pContext)._L11);
		case 311:
			return &((*pContext)._L12);
		case 312:
			return &((*pContext)._L13);
		case 313:
			return &((*pContext)._L16);
		case 314:
			return &((*pContext)._L17);
		case 315:
			return &((*pContext)._L18);
		case 316:
			return &((*pContext)._L15);
		case 317:
			return &((*pContext)._L19);
		case 318:
			return &((*pContext)._L22);
		case 319:
			return &((*pContext)._L26);
		case 320:
			return &((*pContext).Continue);
		case 321:
			return &((*pContext).Updated_MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanSSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanSSP_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanSSP_2_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TY_DistValue_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Continue", &_SCSIM_kcg_bool_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updated_MRS", &_SCSIM_kcg_real_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanSSP_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanSSP_2* pContext = (outC_ScanSSP_2*)pInstance;
	switch (nHandleIdent) {
		case 322:
			return &((*pContext).Mi_Output_1);
		case 323:
			return &((*pContext).I1_1);
		case 324:
			return &((*pContext).I2_1);
		case 325:
			return &((*pContext)._L21_1);
		case 326:
			return &((*pContext)._L22_1);
		case 327:
			return &((*pContext)._L24_1);
		case 328:
			return &((*pContext)._L25_1);
		case 329:
			return &((*pContext)._L1);
		case 330:
			return &((*pContext)._L2);
		case 331:
			return &((*pContext)._L8);
		case 332:
			return &((*pContext)._L7);
		case 333:
			return &((*pContext)._L9);
		case 334:
			return &((*pContext)._L10);
		case 335:
			return &((*pContext)._L11);
		case 336:
			return &((*pContext)._L12);
		case 337:
			return &((*pContext)._L13);
		case 338:
			return &((*pContext)._L16);
		case 339:
			return &((*pContext)._L17);
		case 340:
			return &((*pContext)._L18);
		case 341:
			return &((*pContext)._L15);
		case 342:
			return &((*pContext)._L19);
		case 343:
			return &((*pContext)._L22);
		case 344:
			return &((*pContext)._L26);
		case 345:
			return &((*pContext).Continue);
		case 346:
			return &((*pContext).Updated_MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanSSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanSSP_1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanSSP_1_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TY_DistValue_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 356, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 357, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 358, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 362, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 363, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 364, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 369, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Continue", &_SCSIM_kcg_bool_Utils, 370, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updated_MRS", &_SCSIM_kcg_real_Utils, 371, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanSSP_1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanSSP_1* pContext = (outC_ScanSSP_1*)pInstance;
	switch (nHandleIdent) {
		case 347:
			return &((*pContext).Mi_Output_1);
		case 348:
			return &((*pContext).I1_1);
		case 349:
			return &((*pContext).I2_1);
		case 350:
			return &((*pContext)._L21_1);
		case 351:
			return &((*pContext)._L22_1);
		case 352:
			return &((*pContext)._L24_1);
		case 353:
			return &((*pContext)._L25_1);
		case 354:
			return &((*pContext)._L1);
		case 355:
			return &((*pContext)._L2);
		case 356:
			return &((*pContext)._L8);
		case 357:
			return &((*pContext)._L7);
		case 358:
			return &((*pContext)._L9);
		case 359:
			return &((*pContext)._L10);
		case 360:
			return &((*pContext)._L11);
		case 361:
			return &((*pContext)._L12);
		case 362:
			return &((*pContext)._L13);
		case 363:
			return &((*pContext)._L16);
		case 364:
			return &((*pContext)._L17);
		case 365:
			return &((*pContext)._L18);
		case 366:
			return &((*pContext)._L15);
		case 367:
			return &((*pContext)._L19);
		case 368:
			return &((*pContext)._L22);
		case 369:
			return &((*pContext)._L26);
		case 370:
			return &((*pContext).Continue);
		case 371:
			return &((*pContext).Updated_MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanAdh/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanAdh_2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanAdh_2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TY_Adh_Utils, 372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 376, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 377, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 379, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 380, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 382, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 383, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 384, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 385, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 386, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 387, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Continue", &_SCSIM_kcg_bool_Utils, 388, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updated_MRS", &_SCSIM_kcg_bool_Utils, 389, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanAdh_2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanAdh_2* pContext = (outC_ScanAdh_2*)pInstance;
	switch (nHandleIdent) {
		case 372:
			return &((*pContext)._L1);
		case 373:
			return &((*pContext)._L2);
		case 374:
			return &((*pContext)._L8);
		case 375:
			return &((*pContext)._L7);
		case 376:
			return &((*pContext)._L9);
		case 377:
			return &((*pContext)._L10);
		case 378:
			return &((*pContext)._L11);
		case 379:
			return &((*pContext)._L12);
		case 380:
			return &((*pContext)._L13);
		case 381:
			return &((*pContext)._L16);
		case 382:
			return &((*pContext)._L17);
		case 383:
			return &((*pContext)._L18);
		case 384:
			return &((*pContext)._L15);
		case 385:
			return &((*pContext)._L19);
		case 386:
			return &((*pContext)._L22);
		case 387:
			return &((*pContext)._L25);
		case 388:
			return &((*pContext).Continue);
		case 389:
			return &((*pContext).Updated_MRS);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ScanSSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ScanSSP_8(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ScanSSP_8_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 390, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 391, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 392, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 393, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 394, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 395, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 396, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TY_DistValue_Utils, 397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 398, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 399, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 400, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 401, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 402, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 403, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 406, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 407, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 408, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 409, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 410, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 412, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Continue", &_SCSIM_kcg_bool_Utils, 413, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updated_MRS", &_SCSIM_kcg_real_Utils, 414, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ScanSSP_8_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ScanSSP_8* pContext = (outC_ScanSSP_8*)pInstance;
	switch (nHandleIdent) {
		case 390:
			return &((*pContext).Mi_Output_1);
		case 391:
			return &((*pContext).I1_1);
		case 392:
			return &((*pContext).I2_1);
		case 393:
			return &((*pContext)._L21_1);
		case 394:
			return &((*pContext)._L22_1);
		case 395:
			return &((*pContext)._L24_1);
		case 396:
			return &((*pContext)._L25_1);
		case 397:
			return &((*pContext)._L1);
		case 398:
			return &((*pContext)._L2);
		case 399:
			return &((*pContext)._L8);
		case 400:
			return &((*pContext)._L7);
		case 401:
			return &((*pContext)._L9);
		case 402:
			return &((*pContext)._L10);
		case 403:
			return &((*pContext)._L11);
		case 404:
			return &((*pContext)._L12);
		case 405:
			return &((*pContext)._L13);
		case 406:
			return &((*pContext)._L16);
		case 407:
			return &((*pContext)._L17);
		case 408:
			return &((*pContext)._L18);
		case 409:
			return &((*pContext)._L15);
		case 410:
			return &((*pContext)._L19);
		case 411:
			return &((*pContext)._L22);
		case 412:
			return &((*pContext)._L26);
		case 413:
			return &((*pContext).Continue);
		case 414:
			return &((*pContext).Updated_MRS);
		default:
			break;
	}
	return 0;
}

