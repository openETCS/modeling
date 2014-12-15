/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport.h"

/* BuildBGMessage_Pkg::BaliseSupport::initCollector */
void MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport(
  /* BuildBGMessage_Pkg::BaliseSupport::initCollector::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::BaliseSupport::initCollector::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector)
{
  (*outCollector).badBaliseFlag = kcg_false;
  (*outCollector).BGMessageSent = kcg_true;
  (*outCollector).C_ID = (*newTelegram).telegramheader.nid_c;
  (*outCollector).BG_ID = (*newTelegram).telegramheader.nid_bg;
  MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).balisePosition,
    (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
      &MLRI__cemptyPosition_BG_Types_Pkg);
  MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &(*outCollector).positionFirstContact,
    (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
      &MLRI__cemptyPosition_BG_Types_Pkg);
  (*outCollector).collectedTelegrams = 0;
  (*outCollector).totalTelegrams = /* 1 */
    MLRI__convNTotal_BuildBGMessage_Pkg_BaliseSupport(
      (*newTelegram).telegramheader.n_total);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

