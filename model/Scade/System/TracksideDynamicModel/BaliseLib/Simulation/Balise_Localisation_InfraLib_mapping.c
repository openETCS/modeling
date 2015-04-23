#include "Balise_Localisation_InfraLib_mapping.h"
#include "Balise_Localisation_InfraLib_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Balise_Localisation_InfraLib();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** InfraLib::Balise_Localisation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Localisation_InfraLib() {
	pSimulator->m_pfnSetRoot(pSimulator, "InfraLib::Balise_Localisation/", &outputs_ctx, _SCSIM_Get_Balise_Localisation_InfraLib_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_real_Utils, 1, valid, 0, 0);
	_SCSIM_Mapping_Balise_Interdistance_InfraLib("InfraLib::Balise_Interdistance", "1", 2, 0, 0);
	_SCSIM_Mapping_TOOLS_convert_engineering("TOOLS_convert_engineering_location", "1", 3, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_B_data_internal_InfraLib_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_bool_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_B_data_internal_InfraLib_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_real_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_bool_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_kcg_bool_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_bool_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PIG_0_out", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_InfraLib_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
}

void* _SCSIM_Get_Balise_Localisation_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L73);
		case 2:
			return &(outputs_ctx.Context_1);
		case 3:
			return &(outputs_ctx._1_Context_1);
		case 4:
			return &(outputs_ctx._L15);
		case 5:
			return &(outputs_ctx._L16);
		case 6:
			return &(outputs_ctx._L47);
		case 7:
			return &(outputs_ctx._L48);
		case 8:
			return &(outputs_ctx._L50);
		case 9:
			return &(outputs_ctx._L51);
		case 10:
			return &(outputs_ctx._L52);
		case 11:
			return &(outputs_ctx._L65);
		case 12:
			return &(outputs_ctx._L66);
		case 13:
			return &(outputs_ctx._L72);
		case 14:
			return &(outputs_ctx._L71);
		case 15:
			return &(outputs_ctx._L70);
		case 16:
			return &(outputs_ctx._L69);
		case 17:
			return &(outputs_ctx._L68);
		case 18:
			return &(outputs_ctx._L67);
		case 19:
			return &(outputs_ctx._L75);
		case 20:
			return &(outputs_ctx._L76);
		case 21:
			return &(outputs_ctx._L77);
		case 22:
			return &(outputs_ctx._L80);
		case 23:
			return &(outputs_ctx._L79);
		case 24:
			return &(outputs_ctx._L78);
		case 25:
			return &(outputs_ctx._L81);
		case 26:
			return &(outputs_ctx.PIG_0_out);
		case 27:
			return &(outputs_ctx.TrainPass);
		case 28:
			return &(inputs_ctx.B_data_in);
		case 29:
			return &(inputs_ctx.Header);
		case 30:
			return &(inputs_ctx.PIG_nom);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Balise_Interdistance/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Interdistance_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Interdistance_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Interdistance_InfraLib* pContext = (outC_Balise_Interdistance_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 31:
			return &((*pContext).A_Output_1);
		case 32:
			return &((*pContext).A_Input_1);
		case 33:
			return &((*pContext)._L1_1);
		case 34:
			return &((*pContext)._L2_1);
		case 35:
			return &((*pContext)._L3_1);
		case 36:
			return &((*pContext)._L5_1);
		case 37:
			return &((*pContext)._L8_1);
		case 38:
			return &((*pContext)._L1);
		case 39:
			return &((*pContext)._L2);
		case 40:
			return &((*pContext)._L3);
		case 41:
			return &((*pContext)._L4);
		case 42:
			return &((*pContext)._L5);
		case 43:
			return &((*pContext)._L6);
		case 44:
			return &((*pContext)._L8);
		case 45:
			return &((*pContext)._L9);
		case 46:
			return &((*pContext)._L10);
		case 47:
			return &((*pContext)._L11);
		case 48:
			return &((*pContext)._L12);
		case 49:
			return &((*pContext)._L13);
		case 50:
			return &((*pContext)._L14);
		case 51:
			return &((*pContext).distance_BB);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TOOLS_convert_engineering_location/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_convert_engineering(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_convert_engineering_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Loc_real", &_SCSIM_kcg_real_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_convert_engineering_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_convert_engineering* pContext = (outC_TOOLS_convert_engineering*)pInstance;
	switch (nHandleIdent) {
		case 52:
			return &((*pContext)._L1);
		case 53:
			return &((*pContext)._L2);
		case 54:
			return &((*pContext)._L3);
		case 55:
			return &((*pContext)._L4);
		case 56:
			return &((*pContext).Loc_real);
		default:
			break;
	}
	return 0;
}

