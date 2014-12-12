/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
kcg_bool MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L17 */ kcg_bool _L17;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::b */ kcg_bool b;
  
  _L17 = (MLRI__Q_LINK_Linked == (*LRBG).q_link) & (*LRBG).valid;
  if ((*trainPos).linkingIsUsedOnboard) {
    b = ((*LRBG).nid_bg == (*LRBG).infoFromLinking.linkingInfo.nid_bg) & _L17;
  }
  else {
    b = _L17;
  }
  return b;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

