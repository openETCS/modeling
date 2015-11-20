/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  (*outCollector).badBaliseFlag = kcg_false;
  (*outCollector).BGMessageSent = kcg_true;
  (*outCollector).C_ID = (*newTelegram).telegramheader.nid_c;
  (*outCollector).BG_ID = (*newTelegram).telegramheader.nid_bg;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).balisePosition,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).positionFirstContact,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  (*outCollector).collectedTelegrams = 0;
  (*outCollector).totalTelegrams = /* 1 */
    convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      (*newTelegram).telegramheader.n_total);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

