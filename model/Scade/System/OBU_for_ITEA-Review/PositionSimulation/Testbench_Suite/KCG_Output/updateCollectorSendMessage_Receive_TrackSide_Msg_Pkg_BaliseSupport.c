/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
  (*outCollector).BGMessageSent = kcg_true;
  (*outCollector).C_ID = (*inCollector).C_ID;
  (*outCollector).BG_ID = (*inCollector).BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).balisePosition,
    &(*inCollector).balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).positionFirstContact,
    &(*inCollector).positionFirstContact);
  (*outCollector).collectedTelegrams = (*inCollector).collectedTelegrams;
  (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

