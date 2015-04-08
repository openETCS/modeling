#include "RECV_ExtractDataFromRadio_mapping.h"
#include "RECV_ExtractDataFromRadio_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RECV_ExtractDataFromRadio();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** RECV_ExtractDataFromRadio/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ExtractDataFromRadio() {
	pSimulator->m_pfnSetRoot(pSimulator, "RECV_ExtractDataFromRadio/", &outputs_ctx, _SCSIM_Get_RECV_ExtractDataFromRadio_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PacketData", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AddressStart", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AddressEnd", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
}

void* _SCSIM_Get_RECV_ExtractDataFromRadio_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L3);
		case 3:
			return &(outputs_ctx._L4);
		case 4:
			return &(outputs_ctx._L9);
		case 5:
			return &(outputs_ctx._L18);
		case 6:
			return &(outputs_ctx._L19);
		case 7:
			return &(outputs_ctx._L20);
		case 8:
			return &(outputs_ctx._L21);
		case 9:
			return &(outputs_ctx._L22);
		case 10:
			return &(outputs_ctx._L23);
		case 11:
			return &(outputs_ctx._L24);
		case 12:
			return &(outputs_ctx._L25);
		case 13:
			return &(outputs_ctx._L26);
		case 14:
			return &(outputs_ctx.Cont);
		case 15:
			return &(outputs_ctx.PacketOut);
		case 16:
			return &(inputs_ctx.Index);
		case 17:
			return &(inputs_ctx.PacketData);
		case 18:
			return &(inputs_ctx.AddressStart);
		case 19:
			return &(inputs_ctx.AddressEnd);
		default:
			break;
	}
	return 0;
}

