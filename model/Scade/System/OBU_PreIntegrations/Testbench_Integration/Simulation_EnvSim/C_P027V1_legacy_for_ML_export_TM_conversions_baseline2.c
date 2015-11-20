/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export */
void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_in */P027V1_OBU_T_TM_baseline2 *P027_in,
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_legacy_out */P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P027_legacy_out)
{
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    P027_legacy_out,
    (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
      &DEFAULT_P027V1_legacy_TM_baseline2);
  (*P027_legacy_out).valid = (*P027_in).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

