/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

void Read_P027V1_Legacy_for_ML_reset_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC)
{
  /* 1 */
  C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
    &outC->_1_Context_1);
  /* 1 */ Read_P027V1_reset_TM_baseline2(&outC->Context_1);
}

/* TM_specific::Read_P027V1_Legacy_for_ML */
void Read_P027V1_Legacy_for_ML_TM_specific(
  /* TM_specific::Read_P027V1_Legacy_for_ML::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC)
{
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg tmp;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* 1 */ Read_P027V1_TM_baseline2(&outC->_L3, &outC->Context_1);
  outC->_L1 = outC->Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L2, &outC->Context_1.P027V1_out);
  outC->tmp = outC->_L1;
  if (outC->tmp) {
    /* 1 */
    C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
      &outC->_L2,
      &outC->_1_Context_1);
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &tmp,
      &outC->_1_Context_1.P027_legacy_out);
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &outC->_L4,
      &tmp);
  }
  else {
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &outC->_L4,
      (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
        &DEFAULT_P027V1_legacy_TM_baseline2);
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->P027_legacy_out,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_Legacy_for_ML_TM_specific.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

