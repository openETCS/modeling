/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_bec_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_bec */
void v_bec_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_bec::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_bec::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_bec::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::v_bec::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::v_bec::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::v_bec::V_bec */ V_internal_real_Type_SDM_Types_Pkg *V_bec,
  /* TargetLimits_Pkg::v_bec::D_bec */ L_internal_real_Type_SDM_Types_Pkg *D_bec)
{
  V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_bec::_L24 */ kcg_real _L24;
  /* TargetLimits_Pkg::v_bec::_L39 */ kcg_real _L39;
  
  _L39 = V_est + (*V_dt)[0] + (*V_dt)[1] * 0.5;
  _L24 = V_est + (*V_dt)[0] + (*V_dt)[1];
  if (V_target >= _L24) {
    tmp = V_target;
  }
  else {
    tmp = _L24;
  }
  *V_bec = tmp + (*V_dt)[2];
  if (V_target >= _L39) {
    tmp = V_target;
  }
  else {
    tmp = _L39;
  }
  *D_bec = T_Traction * tmp + T_berem * (*V_bec - (*V_dt)[2] * 0.5);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_bec_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

