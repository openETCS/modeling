/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P139_Legacy_TM_specific.h"

/* TM_specific::Read_P139_Legacy */
void Read_P139_Legacy_TM_specific(
  /* TM_specific::Read_P139_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P139_Legacy::P139_legacy_out */ P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P139_legacy_out)
{
  /* TM_specific::Read_P139_Legacy */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg op_call;
  /* TM_specific::Read_P139_Legacy */
  static kcg_bool ck_every;
  /* TM_specific::Read_P139_Legacy::_L2 */
  static P139_OBU_T_TM _L2;
  /* TM_specific::Read_P139_Legacy::_L1 */
  static kcg_bool _L1;
  /* TM_specific::Read_P139_Legacy::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* TM_specific::Read_P139_Legacy::_L4 */
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _L4;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, Message_IN);
  /* 1 */ Read_P139_TM(&_L3, &_L1, &_L2);
  ck_every = _L1;
  /* ck_Read_P139_Legacy */ if (ck_every) {
    /* 1 */ C_P139_to_legacy_t_TM_conversions(&_L2, &op_call);
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &_L4,
      &op_call);
  }
  else {
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &_L4,
      (P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *)
        &DEFAULT_P139_legacy_TM);
  }
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    P139_legacy_out,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P139_Legacy_TM_specific.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

