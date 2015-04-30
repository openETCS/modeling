#include "TrackDiscontinuity_CalcTr_InfraLib_mapping.h"
#include "TrackDiscontinuity_CalcTr_InfraLib_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** InfraLib::TrackDiscontinuity_CalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib() {
	pSimulator->m_pfnSetRoot(pSimulator, "InfraLib::TrackDiscontinuity_CalcTrainPos/", &outputs_ctx, _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_TrainPosRaw_T_InfraLib_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_real_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_real_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPosCalibrated", &_SCSIM_kcg_real_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "DeltaIn", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "StartSection", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SectionDataIn", &_SCSIM_TrackSectionData_T_InfraLib_Utils, 21, valid, 0, 0);
}

void* _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L15);
		case 2:
			return &(outputs_ctx._L18);
		case 3:
			return &(outputs_ctx._L19);
		case 4:
			return &(outputs_ctx._L22);
		case 5:
			return &(outputs_ctx._L21);
		case 6:
			return &(outputs_ctx._L20);
		case 7:
			return &(outputs_ctx._L26);
		case 8:
			return &(outputs_ctx._L25);
		case 9:
			return &(outputs_ctx._L24);
		case 10:
			return &(outputs_ctx._L23);
		case 11:
			return &(outputs_ctx._L28);
		case 12:
			return &(outputs_ctx._L27);
		case 13:
			return &(outputs_ctx._L29);
		case 14:
			return &(outputs_ctx._L30);
		case 15:
			return &(outputs_ctx._L31);
		case 16:
			return &(outputs_ctx._L33);
		case 17:
			return &(outputs_ctx._L32);
		case 18:
			return &(outputs_ctx.TrainPosCalibrated);
		case 19:
			return &(inputs_ctx.DeltaIn);
		case 20:
			return &(inputs_ctx.StartSection);
		case 21:
			return &(inputs_ctx.SectionDataIn);
		default:
			break;
	}
	return 0;
}

