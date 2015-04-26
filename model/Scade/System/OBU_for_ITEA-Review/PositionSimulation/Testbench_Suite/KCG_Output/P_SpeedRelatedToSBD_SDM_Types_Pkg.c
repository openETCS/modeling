/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P_SpeedRelatedToSBD_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::P_SpeedRelatedToSBD */
V_internal_real_Type_SDM_Types_Pkg P_SpeedRelatedToSBD_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_estfront */ L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiParabola */ ParabolaCurve_T_CalcBrakingCurves_types *guiParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::t_bs1 */ T_internal_real_Type_SDM_Types_Pkg t_bs1,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::sdbParabola */ ParabolaCurve_T_CalcBrakingCurves_types *sdbParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_eoa */ L_internal_real_Type_SDM_Types_Pkg d_eoa)
{
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L14 */ kcg_real _L14;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L3 */ kcg_bool _L3;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L4 */ kcg_bool _L4;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L24 */ V_internal_real_Type_SDM_Types_Pkg _L24;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L25 */ V_internal_real_Type_SDM_Types_Pkg _L25;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::p_speed */ V_internal_real_Type_SDM_Types_Pkg p_speed;
  
  /* 3 */
  getSpeedOnCurve_CalcBrakingCurves_types(guiParabola, v_est, &_L4, &_L25);
  _L14 = d_estfront + v_est * (T_driver_SDM_Types_Pkg + t_bs1);
  /* 2 */
  getSpeedOnCurve_CalcBrakingCurves_types(sdbParabola, _L14, &_L3, &_L24);
  if ((d_eoa > _L14) & _L3) {
    if (guiCurveEnabled & _L4) {
      if (_L25 <= _L24) {
        p_speed = _L25;
      }
      else {
        p_speed = _L24;
      }
    }
    else {
      p_speed = _L24;
    }
  }
  else {
    p_speed = 0.0;
  }
  return p_speed;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** P_SpeedRelatedToSBD_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

