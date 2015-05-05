#include "TrackDiscontinuity_InfraLib_mapping.h"
#include "TrackDiscontinuity_InfraLib_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_TrackDiscontinuity_InfraLib();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** InfraLib::TrackDiscontinuity/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TrackDiscontinuity_InfraLib() {
	pSimulator->m_pfnSetRoot(pSimulator, "InfraLib::TrackDiscontinuity/", &outputs_ctx, _SCSIM_Get_TrackDiscontinuity_InfraLib_Handle);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib("InfraLib::TrackDiscontinuity_CalcTrainPos", "2", 8, 9, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "NewOffset", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L59", &_SCSIM_kcg_real_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_real_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_real_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_TrainPosRaw_T_InfraLib_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_kcg_real_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L83", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L88", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L89", &_SCSIM_TrainPosRaw_T_InfraLib_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_TrainPosRaw_T_InfraLib_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L91", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SectionData_out", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SectionData_in", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "StartSection", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "EndSection", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
}

void* _SCSIM_Get_TrackDiscontinuity_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.A_Output_3);
		case 2:
			return &(outputs_ctx.A_Input_3);
		case 3:
			return &(outputs_ctx._L1_3);
		case 4:
			return &(outputs_ctx._L2_3);
		case 5:
			return &(outputs_ctx._L3_3);
		case 6:
			return &(outputs_ctx._L5_3);
		case 7:
			return &(outputs_ctx._L8_3);
		case 8:
			return &(outputs_ctx.Context_2);
		case 10:
			return &(outputs_ctx.NewOffset);
		case 11:
			return &(outputs_ctx._L2);
		case 12:
			return &(outputs_ctx._L3);
		case 13:
			return &(outputs_ctx._L16);
		case 14:
			return &(outputs_ctx._L49);
		case 15:
			return &(outputs_ctx._L50);
		case 16:
			return &(outputs_ctx._L57);
		case 17:
			return &(outputs_ctx._L59);
		case 18:
			return &(outputs_ctx._L60);
		case 19:
			return &(outputs_ctx._L61);
		case 20:
			return &(outputs_ctx._L62);
		case 21:
			return &(outputs_ctx._L63);
		case 22:
			return &(outputs_ctx._L79);
		case 23:
			return &(outputs_ctx._L80);
		case 24:
			return &(outputs_ctx._L81);
		case 25:
			return &(outputs_ctx._L82);
		case 26:
			return &(outputs_ctx._L83);
		case 27:
			return &(outputs_ctx._L88);
		case 28:
			return &(outputs_ctx._L89);
		case 29:
			return &(outputs_ctx._L90);
		case 30:
			return &(outputs_ctx._L91);
		case 9:
			return &(outputs_ctx.tmp);
		case 31:
			return &(outputs_ctx.SectionData_out);
		case 32:
			return &(inputs_ctx.SectionData_in);
		case 33:
			return &(inputs_ctx.StartSection);
		case 34:
			return &(inputs_ctx.EndSection);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::TrackDiscontinuity_CalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_TrainPosRaw_T_InfraLib_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_real_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_real_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPosCalibrated", &_SCSIM_kcg_real_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TrackDiscontinuity_CalcTr_InfraLib* pContext = (outC_TrackDiscontinuity_CalcTr_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 35:
			return &((*pContext)._L15);
		case 36:
			return &((*pContext)._L18);
		case 37:
			return &((*pContext)._L19);
		case 38:
			return &((*pContext)._L22);
		case 39:
			return &((*pContext)._L21);
		case 40:
			return &((*pContext)._L20);
		case 41:
			return &((*pContext)._L26);
		case 42:
			return &((*pContext)._L25);
		case 43:
			return &((*pContext)._L24);
		case 44:
			return &((*pContext)._L23);
		case 45:
			return &((*pContext)._L28);
		case 46:
			return &((*pContext)._L27);
		case 47:
			return &((*pContext)._L29);
		case 48:
			return &((*pContext)._L30);
		case 49:
			return &((*pContext)._L31);
		case 50:
			return &((*pContext)._L33);
		case 51:
			return &((*pContext)._L32);
		case 52:
			return &((*pContext).TrainPosCalibrated);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
