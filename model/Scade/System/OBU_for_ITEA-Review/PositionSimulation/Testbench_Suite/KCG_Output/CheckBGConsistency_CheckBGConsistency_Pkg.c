/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */ M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG)
{
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::startTheCheck */ kcg_bool startTheCheck;
  
  startTheCheck = /* 1 */ CheckMode_CheckBGConsistency_Pkg_SubFunction(mMode) &
    (*trackSide_ForCheck).valid;
  IfBlock1_clock = startTheCheck & ((*trainPosition).linkingIsUsedOnboard &
      (*trainPosition).valid) &
    ((*trackSide_ForCheck).telegramHeaders.Telegrams[0].telegramheader.q_link ==
      Q_LINK_Linked);
  if (IfBlock1_clock) {
    *errorUnlinkedBG = kcg_false;
    *badBaliseMessageToDMI = kcg_false;
    *applyServiceBrake = kcg_false;
    /* 1 */
    CaseLinkingInUse_CheckBGConsistency_Pkg(
      storedBGs,
      trackSide_ForCheck,
      q_nvlocacc,
      passedBG_out,
      errorLinkedBG);
  }
  else {
    *errorLinkedBG = kcg_false;
    if (startTheCheck) {
      /* 2 */
      CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        trackSide_ForCheck,
        q_nvlocacc,
        applyServiceBrake,
        badBaliseMessageToDMI,
        passedBG_out,
        errorUnlinkedBG);
    }
    else {
      *badBaliseMessageToDMI = kcg_false;
      *applyServiceBrake = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      *errorUnlinkedBG = kcg_false;
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

