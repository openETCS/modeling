/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"

void C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC)
{
}

/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export */
void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_in */P027V1_OBU_T_TM_baseline2 *P027_in,
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC)
{
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L1, P027_in);
  outC->_L4 = outC->_L1.valid;
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L2,
    (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
      &DEFAULT_P027V1_legacy_TM_baseline2);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L3,
    &outC->_L2);
  if (kcg_true) {
    outC->_L3.valid = outC->_L4;
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->P027_legacy_out,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

