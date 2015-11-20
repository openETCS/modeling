/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::cont */kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outTelegrams */Telegram_T_BG_Types_Pkg *outTelegrams,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outIsDuplicate */kcg_bool *outIsDuplicate)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::doReplace */
  static kcg_bool doReplace;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L11 */
  static kcg_bool _L11;
  
  doReplace = (*inTelegramArray).valid &
    ((*inTelegramArray).telegramheader.n_pig ==
      (*newTelegram).telegramheader.n_pig);
  _L11 = !doReplace;
  if (_L11) {
    kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, inTelegramArray);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, newTelegram);
  }
  *cont = (*inTelegramArray).valid & _L11;
  if (doReplace) {
    *outIsDuplicate = /* 1 */
      compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
        newTelegram,
        inTelegramArray);
  }
  else {
    *outIsDuplicate = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

