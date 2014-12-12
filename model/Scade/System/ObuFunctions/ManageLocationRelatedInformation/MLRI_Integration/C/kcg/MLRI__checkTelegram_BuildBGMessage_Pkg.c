/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__checkTelegram_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::checkTelegram */
void MLRI__checkTelegram_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::checkTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::checkTelegram::inTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* BuildBGMessage_Pkg::checkTelegram::BGCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *BGCollector,
  /* BuildBGMessage_Pkg::checkTelegram::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector,
  /* BuildBGMessage_Pkg::checkTelegram::outTelegramArray */MLRI__TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* BuildBGMessage_Pkg::checkTelegram::outTelegramNotInGroup */kcg_bool *outTelegramNotInGroup,
  /* BuildBGMessage_Pkg::checkTelegram::outBGchangedEarly */kcg_bool *outBGchangedEarly)
{
  MLRI__BGCollector_T_BuildBGMessage_Pkg tmp1;
  kcg_bool tmp;
  /* BuildBGMessage_Pkg::checkTelegram::newBGInitNeeded */ kcg_bool newBGInitNeeded;
  /* BuildBGMessage_Pkg::checkTelegram::_L36 */ kcg_bool _L36;
  
  _L36 = (*newTelegram).telegramheader.nid_bg == (*BGCollector).BG_ID;
  tmp = !_L36 & ((*BGCollector).totalTelegrams > 0);
  newBGInitNeeded = tmp & (*BGCollector).BGMessageSent;
  if (newBGInitNeeded) {
    /* 1 */
    MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport(newTelegram, &tmp1);
  }
  else {
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(&tmp1, BGCollector);
  }
  /* 1 */
  MLRI__checkSingleBB_BuildBGMessage_Pkg_BaliseSupport(
    newTelegram,
    &tmp1,
    outCollector);
  *outBGchangedEarly = tmp & !(*BGCollector).BGMessageSent;
  if (newBGInitNeeded) {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      outTelegramArray,
      (MLRI__TelegramArray_T_BG_Types_Pkg *)
        &MLRI__cemptyHeaderArray_BG_Types_Pkg);
  }
  else {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      outTelegramArray,
      inTelegramArray);
  }
  tmp = /* 1 */
    MLRI__findTelegram_BuildBGMessage_Pkg_BaliseSupport(
      (*newTelegram).telegramheader.n_pig,
      outTelegramArray,
      (kcg_bool) ((*newTelegram).valid & _L36));
  *outTelegramNotInGroup = !tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkTelegram_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

