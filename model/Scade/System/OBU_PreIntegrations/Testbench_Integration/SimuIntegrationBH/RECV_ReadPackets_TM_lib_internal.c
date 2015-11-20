/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPackets */
void RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */ CompressedPacketData_T_Common_Types_Pkg *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_Pkg *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */ kcg_bool *received)
{
  /* TM_lib_internal::RECV_ReadPackets */
  static CompressedPacketData_T_Common_Types_Pkg op_call;
  /* TM_lib_internal::RECV_ReadPackets */
  static kcg_bool ck_every;
  static kcg_int noname;
  /* TM_lib_internal::RECV_ReadPackets::_L3 */
  static MetadataElement_T_Common_Types_Pkg _L3;
  /* TM_lib_internal::RECV_ReadPackets::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::RECV_ReadPackets::_L1 */
  static kcg_bool _L1;
  /* TM_lib_internal::RECV_ReadPackets::_L4 */
  static CompressedPacketData_T_Common_Types_Pkg _L4;
  /* TM_lib_internal::RECV_ReadPackets::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_lib_internal::RECV_ReadPackets::_L45 */
  static kcg_int _L45;
  /* TM_lib_internal::RECV_ReadPackets::_L46 */
  static CompressedPackets_T_Common_Types_Pkg _L46;
  /* TM_lib_internal::RECV_ReadPackets::_L48 */
  static CompressedPacketData_T_Common_Types_Pkg _L48;
  /* TM_lib_internal::RECV_ReadPackets::_L47 */
  static Metadata_T_Common_Types_Pkg _L47;
  /* TM_lib_internal::RECV_ReadPackets::_L49 */
  static kcg_bool _L49;
  /* TM_lib_internal::RECV_ReadPackets::_L50 */
  static kcg_bool _L50;
  
  _L45 = PacketID;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L46, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L47, &_L46.PacketHeaders);
  _L49 = F_version;
  _L50 = F_id;
  /* 1 */
  RECV_LookupPacket_TM_lib_internal(_L45, &_L47, _L49, _L50, &_L1, &_L2, &_L3);
  ck_every = _L1;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L48, &_L46.PacketData);
  /* ck_RECV_ReadPackets */ if (ck_every) {
    /* 1 */ RECV_ReadPacketKernel_TM_lib_internal(&_L3, &_L48, &op_call);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &_L44,
    (CompressedPacketData_T_Common_Types_Pkg *) &DEFAULT_CompressedPackets_TM);
  /* ck_RECV_ReadPackets */ if (ck_every) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L4, &op_call);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L4, &_L44);
  }
  noname = _L2;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(Data, &_L4);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Metadata, &_L3);
  *received = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPackets_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

