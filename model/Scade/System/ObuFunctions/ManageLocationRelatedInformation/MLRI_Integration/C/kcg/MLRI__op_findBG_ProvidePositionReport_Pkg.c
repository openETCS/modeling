/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG */
void MLRI__op_findBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_findBG::acc */kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */MLRI__positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */MLRI__NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::fd */kcg_bool *fd,
  /* ProvidePositionReport_Pkg::op_findBG::cond */kcg_bool *cond)
{
  *cond = (*Input_BG).nid_bg != Input_BG_IDToCheck;
  *fd = acc | ((*Input_BG).valid & !*cond);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

