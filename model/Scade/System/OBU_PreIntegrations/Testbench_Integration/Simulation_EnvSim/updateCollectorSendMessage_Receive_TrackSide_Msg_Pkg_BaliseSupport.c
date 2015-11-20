/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

