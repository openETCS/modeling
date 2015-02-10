#include "Decode_Packet_000_Decode_Packets_mapping.h"
#include "Decode_Packet_000_Decode_Packets_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Decode_Packet_000_Decode_Packets();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Decode_Packets::Decode_Packet_000/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Decode_Packet_000_Decode_Packets() {
	pSimulator->m_pfnSetRoot(pSimulator, "Decode_Packets::Decode_Packet_000/", &outputs_ctx, _SCSIM_Get_Decode_Packet_000_Decode_Packets_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Information_T_BM_Types_Flat_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_InfoElement_T_BM_Types_Flat_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "VBCMK", &_SCSIM_NID_VBCMK_T_Types_Notfound_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PacketInfoIn", &_SCSIM_Information_T_BM_Types_Flat_Utils, 4, valid, 0, 0);
}

void* _SCSIM_Get_Decode_Packet_000_Decode_Packets_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L41);
		case 2:
			return &(outputs_ctx._L43);
		case 3:
			return &(outputs_ctx.VBCMK);
		case 4:
			return &(inputs_ctx.PacketInfoIn);
		default:
			break;
	}
	return 0;
}

