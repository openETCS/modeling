/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
void op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool tmp1;
  static NID_BG tmp;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L17 */
  static kcg_bool _L17;
  
  _L17 = (Q_LINK_Linked == (*LRBG).q_link) & (*LRBG).valid;
  if ((*trainPos).linkingIsUsedOnboard) {
    tmp1 = ((*LRBG).nid_bg == (*LRBG).infoFromLinking.linkingInfo.nid_bg) &
      _L17;
  }
  else {
    tmp1 = _L17;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cPositionedBG_T_ProvidePositionReport_Pkg.nid_bg;
  }
  else {
    tmp = outC->rem_LRBG.nid_bg;
  }
  outC->trigger = tmp1 & ((*LRBG).nid_bg != tmp);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->rem_LRBG, LRBG);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

