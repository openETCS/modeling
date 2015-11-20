/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */kcg_bool *isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */Q_LINKORIENTATION *q_linkorintation)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isStored */
  static kcg_bool isStored;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::indexLocal */
  static kcg_int indexLocal;
  
  /* 1 */
  isStored_iter_CheckBGConsistency_Pkg_SubFunction(
    storedBGs,
    recivedBG_header,
    &indexLocal,
    &isStored);
  if (isStored) {
    if ((0 <= indexLocal) & (indexLocal < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        &(*storedBGs)[indexLocal]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    *isAnnounced = _L2_IfBlock1.infoFromLinking.valid;
    *q_linkorintation =
      _L2_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
  }
  else {
    *isAnnounced = kcg_false;
    if ((0 <= indexLocal) & (indexLocal < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp,
        &(*storedBGs)[indexLocal]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    *q_linkorintation = tmp.infoFromLinking.linkingInfo.q_linkorientation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

