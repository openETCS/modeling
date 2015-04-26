/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
kcg_bool op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L17 */ kcg_bool _L17;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::b */ kcg_bool b;
  
  _L17 = (Q_LINK_Linked == (*LRBG).q_link) & (*LRBG).valid;
  if ((*trainPos).linkingIsUsedOnboard) {
    b = ((*LRBG).nid_bg == (*LRBG).infoFromLinking.linkingInfo.nid_bg) & _L17;
  }
  else {
    b = _L17;
  }
  return b;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

