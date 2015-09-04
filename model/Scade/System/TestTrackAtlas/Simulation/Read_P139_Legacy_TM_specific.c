/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P139_Legacy_TM_specific.h"

void Read_P139_Legacy_reset_TM_specific(outC_Read_P139_Legacy_TM_specific *outC)
{
  /* 1 */ C_P139_to_legacy_t_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Read_P139_reset_TM(&outC->Context_1);
}

/* TM_specific::Read_P139_Legacy */
void Read_P139_Legacy_TM_specific(
  /* TM_specific::Read_P139_Legacy::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P139_Legacy_TM_specific *outC)
{
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg tmp;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* 1 */ Read_P139_TM(&outC->_L3, &outC->Context_1);
  outC->_L1 = outC->Context_1.received;
  kcg_copy_P139_OBU_T_TM(&outC->_L2, &outC->Context_1.P139_OBU_out);
  outC->tmp = outC->_L1;
  if (outC->tmp) {
    /* 1 */ C_P139_to_legacy_t_TM_conversions(&outC->_L2, &outC->_1_Context_1);
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &tmp,
      &outC->_1_Context_1.P139_legacy_out);
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &outC->_L4,
      &tmp);
  }
  else {
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &outC->_L4,
      (P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *)
        &DEFAULT_P139_legacy_TM);
  }
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->P139_legacy_out,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P139_Legacy_TM_specific.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

