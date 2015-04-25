/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DisplayedPermittedSpeed_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::DisplayedPermittedSpeed */
V_internal_real_Type_SDM_Types_Pkg DisplayedPermittedSpeed_SDM_Types_Pkg(
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_p_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_p_mrdt,
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_target_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_target_mrdt,
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_mrsp */ V_internal_real_Type_SDM_Types_Pkg v_mrsp)
{
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::_L4 */ V_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_p_dmi */ V_internal_real_Type_SDM_Types_Pkg v_p_dmi;
  
  if (v_p_mrdt >= v_target_mrdt) {
    _L4 = v_p_mrdt;
  }
  else {
    _L4 = v_target_mrdt;
  }
  if (_L4 <= v_mrsp) {
    v_p_dmi = _L4;
  }
  else {
    v_p_dmi = v_mrsp;
  }
  return v_p_dmi;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DisplayedPermittedSpeed_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

