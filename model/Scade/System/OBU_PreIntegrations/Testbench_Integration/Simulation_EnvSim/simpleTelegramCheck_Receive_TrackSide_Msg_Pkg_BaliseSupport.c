/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::cont */kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegramAlreadyInGroup */kcg_bool *telegramAlreadyInGroup)
{
  *telegramAlreadyInGroup = (*telegram).valid &
    ((*telegram).telegramheader.n_pig == which_pig);
  *cont = (*telegram).valid & !*telegramAlreadyInGroup;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

