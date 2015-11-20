/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcBec_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::calcBec */
void calcBec_TargetLimits_Pkg(
  /* TargetLimits_Pkg::calcBec::V_dt */TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::calcBec::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::calcBec::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::calcBec::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::calcBec::bec */bec_t_TargetLimits_Pkg *bec)
{
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::calcBec::v_bec */
  static V_internal_real_Type_SDM_Types_Pkg v_bec;
  /* TargetLimits_Pkg::calcBec::_L39 */
  static kcg_real _L39;
  
  v_bec = V_est + (*V_dt)[0] + (*V_dt)[1];
  if (V_target >= v_bec) {
    _L39 = V_target;
  }
  else {
    _L39 = v_bec;
  }
  v_bec = _L39 + (*V_dt)[2];
  (*bec).v = v_bec;
  _L39 = V_est + (*V_dt)[0] + (*V_dt)[1] * 0.5;
  if (V_target >= _L39) {
    tmp = V_target;
  }
  else {
    tmp = _L39;
  }
  (*bec).d = (*T).Traction * tmp + (*T).berem * (v_bec - (*V_dt)[2] * 0.5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calcBec_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

