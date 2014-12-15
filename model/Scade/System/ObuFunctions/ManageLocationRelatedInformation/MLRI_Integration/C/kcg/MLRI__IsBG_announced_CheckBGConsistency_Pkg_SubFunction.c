/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
void MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */MLRI__BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */kcg_bool *isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */MLRI__Q_LINKORIENTATION *q_linkorintation)
{
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L2 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isStored */ kcg_bool isStored;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::indexLocal */ kcg_int indexLocal;
  
  /* 1 */
  MLRI__isStored_iter_CheckBGConsistency_Pkg_SubFunction(
    storedBGs,
    recivedBG_header,
    &indexLocal,
    &isStored);
  if (isStored) {
    if ((0 <= indexLocal) & (indexLocal < 8)) {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        &(*storedBGs)[indexLocal]);
    }
    else {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
          &MLRI__NoStoredBG_CheckBGConsistency_Pkg);
    }
    *isAnnounced = _L2_IfBlock1.infoFromLinking.valid;
    *q_linkorintation =
      _L2_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
  }
  else {
    *isAnnounced = kcg_false;
    if ((0 <= indexLocal) & (indexLocal < 8)) {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp,
        &(*storedBGs)[indexLocal]);
    }
    else {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp,
        (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
          &MLRI__NoStoredBG_CheckBGConsistency_Pkg);
    }
    *q_linkorintation = tmp.infoFromLinking.linkingInfo.q_linkorientation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

