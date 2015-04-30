/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG */
void op_findBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_findBG::acc */ kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */ positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */ NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::fd */ kcg_bool *fd,
  /* ProvidePositionReport_Pkg::op_findBG::cond */ kcg_bool *cond)
{
  *cond = (*Input_BG).nid_bg != Input_BG_IDToCheck;
  *fd = acc | ((*Input_BG).valid & !*cond);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

