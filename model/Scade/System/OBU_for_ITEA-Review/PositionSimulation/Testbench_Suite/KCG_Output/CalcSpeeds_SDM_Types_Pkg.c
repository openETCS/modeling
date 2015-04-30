/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcSpeeds_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::CalcSpeeds */
void CalcSpeeds_SDM_Types_Pkg(
  /* SDM_Types_Pkg::CalcSpeeds::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_Types_Pkg::CalcSpeeds::v_MRSP */ V_internal_real_Type_SDM_Types_Pkg v_MRSP,
  /* SDM_Types_Pkg::CalcSpeeds::v_release */ V_internal_real_Type_SDM_Types_Pkg v_release,
  /* SDM_Types_Pkg::CalcSpeeds::v_target */ V_internal_real_Type_SDM_Types_Pkg v_target,
  /* SDM_Types_Pkg::CalcSpeeds::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_ebd */ V_internal_real_Type_SDM_Types_Pkg v_p_ebd,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_sbd */ V_internal_real_Type_SDM_Types_Pkg v_p_sbd,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_ebd_valid */ kcg_bool v_p_ebd_valid,
  /* SDM_Types_Pkg::CalcSpeeds::v_sbi_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt,
  /* SDM_Types_Pkg::CalcSpeeds::speeds */ Speeds_T_SDM_Types_Pkg *speeds)
{
  (*speeds).V_est = (*odometry).speed.v_safeNominal;
  (*speeds).V_MRSP = v_MRSP;
  (*speeds).V_release = v_release;
  (*speeds).V_target = v_target;
  (*speeds).v_sbi_mrdt = v_sbi_mrdt;
  (*speeds).v_p_mrdt = /* 1 */
    P_SpeedRelatedToMRDT_SDM_Types_Pkg(
      v_p_ebd,
      v_p_sbd,
      v_target,
      v_p_ebd_valid);
  (*speeds).v_FLOI = /* 1 */
    FloiSpeed_SDM_Types_Pkg(
      v_sbi_mrdt,
      v_target,
      v_MRSP,
      v_release,
      (*mrdt).targetType);
  (*speeds).dV_warning_V_MRSP = /* 1 */ dV_warning_for_V_SDM_Types_Pkg(v_MRSP);
  (*speeds).dV_warning_V_target = /* 2 */
    dV_warning_for_V_SDM_Types_Pkg(v_target);
  (*speeds).dV_sbi_V_MRSP = /* 1 */ dV_sbi_for_V_SDM_Types_Pkg(v_MRSP);
  (*speeds).dV_sbi_V_target = /* 2 */ dV_sbi_for_V_SDM_Types_Pkg(v_target);
  (*speeds).dV_ebi_V_MRSP = /* 1 */ dV_ebi_for_V_SDM_Types_Pkg(v_MRSP);
  (*speeds).dV_ebi_V_target = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg(v_target);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcSpeeds_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

