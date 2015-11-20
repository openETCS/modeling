/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition */
void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::outUpdateBGPosition */centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  if ((((*newTelegram).telegramheader.m_dup != M_DUP_No_duplicates) &
      (N_PIG_I_am_the_2nd == (*newTelegram).telegramheader.n_pig) &
      !(*inOldPosition).odometerOfBaliseDetection.valid) |
    ((*newTelegram).telegramheader.n_pig == N_PIG_I_am_the_1st)) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      inOldPosition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

