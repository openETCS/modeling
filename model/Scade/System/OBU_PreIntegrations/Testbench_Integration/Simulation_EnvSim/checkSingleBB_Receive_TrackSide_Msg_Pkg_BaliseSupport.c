/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB */
void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inTelegram */Telegram_T_BG_Types_Pkg *inTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
  (*outCollector).BGMessageSent = !(*inTelegram).valid &
    !(*inCollector).BGMessageSent & ((*inCollector).collectedTelegrams == 0);
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
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

