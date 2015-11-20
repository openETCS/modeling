/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_release_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_release */
void v_release_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_release::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_release::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_release::D_EOA */L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_release::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::v_release::V_ura */V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_release::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::v_release::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::v_release::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_release::V_release */V_internal_real_Type_SDM_Types_Pkg *V_release,
  /* TargetLimits_Pkg::v_release::valid */kcg_bool *valid)
{
  static V_internal_real_Type_SDM_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TargetLimits_Pkg::v_release::_L9 */
  static V_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::v_release::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  
  _L9 = V_target;
  if ((*MA).q_calculate_release) {
    _L21 = /* 1 */
      d_tripEOA_TargetLimits_Pkg(D_EOA, trainLocations, trainData_int);
    for (i = 0; i < 10; i++) {
      tmp1 = _L9;
      /* 1 */
      v_ReleaseOnboardIterator_TargetLimits_Pkg(
        tmp1,
        EBDcurve,
        V_ura,
        V_target,
        _L21,
        T,
        &tmp,
        &_L9);
      if (!tmp) {
        break;
      }
    }
    *V_release = _L9;
  }
  else {
    *V_release = (*MA).ReleaseSpeed;
  }
  *valid = !((*MA).q_calculate_release & (_L9 <= 0.0));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_release_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

