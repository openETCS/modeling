/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_warning_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_warning_for_V */
V_internal_real_Type_SDM_Types_Pkg dV_warning_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_warning_for_V::V_input */ V_internal_real_Type_SDM_Types_Pkg V_input)
{
  /* SDM_Types_Pkg::dV_warning_for_V::_L8 */ kcg_real _L8;
  /* SDM_Types_Pkg::dV_warning_for_V::dv_warning */ V_internal_real_Type_SDM_Types_Pkg dv_warning;
  
  _L8 = (V_input - V_warning_min_SDM_Types_Pkg) *
    ((dV_warning_max_SDM_Types_Pkg - dV_warning_min_SDM_Types_Pkg) /
      (V_warning_max_SDM_Types_Pkg - V_warning_min_SDM_Types_Pkg)) +
    dV_warning_min_SDM_Types_Pkg;
  if (V_input > V_warning_min_SDM_Types_Pkg) {
    if (_L8 <= dV_warning_max_SDM_Types_Pkg) {
      dv_warning = _L8;
    }
    else {
      dv_warning = dV_warning_max_SDM_Types_Pkg;
    }
  }
  else {
    dv_warning = dV_warning_min_SDM_Types_Pkg;
  }
  return dv_warning;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** dV_warning_for_V_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

