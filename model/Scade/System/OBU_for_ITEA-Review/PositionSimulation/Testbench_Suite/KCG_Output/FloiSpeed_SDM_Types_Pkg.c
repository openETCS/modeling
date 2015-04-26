/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FloiSpeed_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::FloiSpeed */
V_internal_real_Type_SDM_Types_Pkg FloiSpeed_SDM_Types_Pkg(
  /* SDM_Types_Pkg::FloiSpeed::v_sbi_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt,
  /* SDM_Types_Pkg::FloiSpeed::v_target_mrdt */ V_internal_real_Type_SDM_Types_Pkg v_target_mrdt,
  /* SDM_Types_Pkg::FloiSpeed::v_mrsp */ V_internal_real_Type_SDM_Types_Pkg v_mrsp,
  /* SDM_Types_Pkg::FloiSpeed::v_release */ V_internal_real_Type_SDM_Types_Pkg v_release,
  /* SDM_Types_Pkg::FloiSpeed::target */ TargetType_T_TargetManagement_types target)
{
  V_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L1 */ V_internal_real_Type_SDM_Types_Pkg _L1_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L2 */ kcg_real _L2_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L4 */ kcg_real _L4_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::else::_L3 */ kcg_real _L3_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::con */ kcg_bool con;
  /* SDM_Types_Pkg::FloiSpeed::v_floi_dmi */ V_internal_real_Type_SDM_Types_Pkg v_floi_dmi;
  
  con = (LoA_TargetManagement_types == target) | (target ==
      MRSP_TargetManagement_types);
  if (con) {
    _L4_IfBlock1 = v_target_mrdt + /* 5 */
      dV_sbi_for_V_SDM_Types_Pkg(v_target_mrdt);
    if (v_sbi_mrdt >= _L4_IfBlock1) {
      _L1_IfBlock1 = v_sbi_mrdt;
    }
    else {
      _L1_IfBlock1 = _L4_IfBlock1;
    }
    _L2_IfBlock1 = v_mrsp + /* 4 */ dV_sbi_for_V_SDM_Types_Pkg(v_mrsp);
    if (_L1_IfBlock1 <= _L2_IfBlock1) {
      v_floi_dmi = _L1_IfBlock1;
    }
    else {
      v_floi_dmi = _L2_IfBlock1;
    }
  }
  else {
    if (v_sbi_mrdt >= v_release) {
      tmp = v_sbi_mrdt;
    }
    else {
      tmp = v_release;
    }
    _L3_IfBlock1 = v_mrsp + /* 6 */ dV_sbi_for_V_SDM_Types_Pkg(v_mrsp);
    if (tmp <= _L3_IfBlock1) {
      v_floi_dmi = tmp;
    }
    else {
      v_floi_dmi = _L3_IfBlock1;
    }
  }
  return v_floi_dmi;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FloiSpeed_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

