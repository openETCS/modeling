/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG */
void op_findBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_findBG::acc */ kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */ positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */ NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::cond */ kcg_bool *cond,
  /* ProvidePositionReport_Pkg::op_findBG::fd */ kcg_bool *fd)
{
  /* ProvidePositionReport_Pkg::op_findBG::_L1 */
  static kcg_bool _L1;
  /* ProvidePositionReport_Pkg::op_findBG::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* ProvidePositionReport_Pkg::op_findBG::_L3 */
  static NID_BG _L3;
  /* ProvidePositionReport_Pkg::op_findBG::_L4 */
  static NID_BG _L4;
  /* ProvidePositionReport_Pkg::op_findBG::_L5 */
  static kcg_bool _L5;
  /* ProvidePositionReport_Pkg::op_findBG::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::op_findBG::_L7 */
  static kcg_bool _L7;
  /* ProvidePositionReport_Pkg::op_findBG::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::op_findBG::_L9 */
  static kcg_bool _L9;
  
  _L1 = acc;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, Input_BG);
  _L3 = Input_BG_IDToCheck;
  _L5 = _L2.valid;
  _L4 = _L2.nid_bg;
  _L6 = _L4 != _L3;
  _L7 = _L5 & _L6;
  _L8 = !_L7;
  _L9 = _L1 | _L8;
  *fd = _L9;
  *cond = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

