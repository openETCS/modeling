/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetDistance_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TargetDistance */
L_internal_real_Type_SDM_Types_Pkg TargetDistance_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TargetDistance::d_P_of_V_target */ L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target,
  /* SDM_Types_Pkg::TargetDistance::d_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* SDM_Types_Pkg::TargetDistance::d_estfront */ L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* SDM_Types_Pkg::TargetDistance::d_svl */ L_internal_real_Type_SDM_Types_Pkg d_svl,
  /* SDM_Types_Pkg::TargetDistance::d_eoa */ L_internal_real_Type_SDM_Types_Pkg d_eoa,
  /* SDM_Types_Pkg::TargetDistance::target */ TargetType_T_TargetManagement_types target)
{
  /* SDM_Types_Pkg::TargetDistance::IfBlock1::then::_L2 */ kcg_real _L2_IfBlock1;
  /* SDM_Types_Pkg::TargetDistance::IfBlock1::else::_L3 */ kcg_real _L3_IfBlock1;
  /* SDM_Types_Pkg::TargetDistance::IfBlock1::else::_L4 */ kcg_real _L4_IfBlock1;
  /* SDM_Types_Pkg::TargetDistance::IfBlock1::else::_L6 */ kcg_real _L6_IfBlock1;
  /* SDM_Types_Pkg::TargetDistance::con */ kcg_bool con;
  /* SDM_Types_Pkg::TargetDistance::targetDistance */ L_internal_real_Type_SDM_Types_Pkg targetDistance;
  
  con = (EoA_TargetManagement_types != target) | (target !=
      SvL_TargetManagement_types);
  if (con) {
    _L2_IfBlock1 = d_P_of_V_target - d_maxsafefront;
    if (_L2_IfBlock1 >= 0.0) {
      targetDistance = _L2_IfBlock1;
    }
    else {
      targetDistance = 0.0;
    }
  }
  else {
    _L6_IfBlock1 = d_eoa - d_estfront;
    _L4_IfBlock1 = d_svl - d_maxsafefront;
    if (_L6_IfBlock1 <= _L4_IfBlock1) {
      _L3_IfBlock1 = _L6_IfBlock1;
    }
    else {
      _L3_IfBlock1 = _L4_IfBlock1;
    }
    if (_L3_IfBlock1 >= 0.0) {
      targetDistance = _L3_IfBlock1;
    }
    else {
      targetDistance = 0.0;
    }
  }
  return targetDistance;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetDistance_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

