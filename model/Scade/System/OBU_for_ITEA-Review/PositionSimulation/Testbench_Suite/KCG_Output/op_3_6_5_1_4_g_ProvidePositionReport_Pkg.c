/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_g_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_g_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_g_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.m_leveltr = M_LEVELTR_Level_0;
  outC->rem_modeLevelStatus.m_level = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.m_mode = M_MODE_Full_Supervision;
  outC->b = kcg_true;
}


void op_3_6_5_1_4_g_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_g_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_g */
void op_3_6_5_1_4_g_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_g::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_g_ProvidePositionReport_Pkg *outC)
{
  M_LEVEL tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cModeAndLevelStatus_ProvidePositionReport_Pkg.m_level;
  }
  else {
    tmp = outC->rem_modeLevelStatus.m_level;
  }
  outC->b = tmp != (*modeLevelStatus).m_level;
  kcg_copy_ModeAndLevelStatus_T_BG_Types_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_g_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

