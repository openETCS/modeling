/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckBGConsistency_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void MLRI__CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *trainStatus,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */kcg_bool *errorUnlinkedBG)
{
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L13 */ kcg_bool _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::startTheCheck */ kcg_bool startTheCheck;
  
  IfBlock1_clock = /* 1 */
    MLRI__CheckMode_CheckBGConsistency_Pkg_SubFunction((*trainStatus).m_mode);
  startTheCheck = IfBlock1_clock & (*bgMessage).present;
  IfBlock1_clock = startTheCheck & ((*trainPosition).linkingIsUsedOnboard &
      (*trainPosition).valid) &
    ((*bgMessage).Telegrams[0].telegramheader.q_link == MLRI__Q_LINK_Linked);
  if (IfBlock1_clock) {
    /* 1 */
    MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg(
      bgMessage,
      storedBGs,
      passedBG_out,
      errorLinkedBG);
    *applyServiceBrake = kcg_false;
    *badBaliseMessageToDMI = kcg_false;
    *errorUnlinkedBG = kcg_false;
  }
  else {
    if (startTheCheck) {
      /* 2 */
      MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        bgMessage,
        applyServiceBrake,
        badBaliseMessageToDMI,
        passedBG_out,
        &_L13_IfBlock1);
    }
    else {
      MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
        passedBG_out,
        (MLRI__passedBG_T_BG_Types_Pkg *)
          &MLRI__NoPassedBG_CheckBGConsistency_Pkg);
      *applyServiceBrake = kcg_false;
      *badBaliseMessageToDMI = kcg_false;
    }
    *errorLinkedBG = kcg_false;
    if (startTheCheck) {
      *errorUnlinkedBG = _L13_IfBlock1;
    }
    else {
      *errorUnlinkedBG = kcg_false;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

