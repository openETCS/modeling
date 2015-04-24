/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_sbi_for_V */
V_internal_real_Type_SDM_Types_Pkg dV_sbi_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_sbi_for_V::V_input */ V_internal_real_Type_SDM_Types_Pkg V_input)
{
  /* SDM_Types_Pkg::dV_sbi_for_V::_L8 */ kcg_real _L8;
  /* SDM_Types_Pkg::dV_sbi_for_V::dv_sbi */ V_internal_real_Type_SDM_Types_Pkg dv_sbi;
  
  _L8 = (V_input - V_sbi_min_SDM_Types_Pkg) * ((dV_sbi_max_SDM_Types_Pkg -
        dV_sbi_min_SDM_Types_Pkg) / (V_sbi_max_SDM_Types_Pkg -
        V_sbi_min_SDM_Types_Pkg)) + dV_sbi_min_SDM_Types_Pkg;
  if (V_input > V_sbi_min_SDM_Types_Pkg) {
    if (_L8 <= dV_sbi_max_SDM_Types_Pkg) {
      dv_sbi = _L8;
    }
    else {
      dv_sbi = dV_sbi_max_SDM_Types_Pkg;
    }
  }
  else {
    dv_sbi = dV_sbi_min_SDM_Types_Pkg;
  }
  return dv_sbi;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** dV_sbi_for_V_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

