/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

void RECV_ReadPackets_reset_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC)
{
  /* 1 */ RECV_ReadPacketKernel_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ RECV_LookupPacket_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_lib_internal::RECV_ReadPackets */
void RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */kcg_bool F_id,
  outC_RECV_ReadPackets_TM_lib_internal *outC)
{
  array_int_500 tmp;
  kcg_int noname;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L46, Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L48,
    &outC->_L46.PacketData);
  outC->_L45 = PacketID;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L47, &outC->_L46.PacketHeaders);
  outC->_L49 = F_version;
  outC->_L50 = F_id;
  /* 1 */
  RECV_LookupPacket_TM_lib_internal(
    outC->_L45,
    &outC->_L47,
    outC->_L49,
    outC->_L50,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.Found;
  outC->_L2 = outC->Context_1.Index;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.HeaderFound);
  outC->received = outC->_L1;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Metadata, &outC->_L3);
  outC->tmp = outC->_L1;
  if (outC->tmp) {
    /* 1 */
    RECV_ReadPacketKernel_TM_lib_internal(
      &outC->_L3,
      &outC->_L48,
      &outC->_1_Context_1);
    kcg_copy_array_int_500(&tmp, &outC->_1_Context_1.PacketOut);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    (CompressedPacketData_T_Common_Types_Pkg *) &DEFAULT_CompressedPackets_TM);
  if (outC->tmp) {
    kcg_copy_array_int_500(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, &outC->_L44);
  }
  kcg_copy_array_int_500(&outC->Data, &outC->_L4);
  noname = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPackets_TM_lib_internal.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

