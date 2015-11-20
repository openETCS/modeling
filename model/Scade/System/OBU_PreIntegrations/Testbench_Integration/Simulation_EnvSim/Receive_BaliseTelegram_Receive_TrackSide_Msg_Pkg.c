/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */ BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  static struct__157707 tmp;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::telegramPresent */
  static kcg_bool telegramPresent;
  
  outC->outTrackMessage_for_check.systemTime =
    (*API_TrackSide_Msg).systemTimeMsgReceived;
  outC->outTrackMessage_for_check.msg_type = (*API_TrackSide_Msg).msg_type;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(
    &outC->outTrackMessage_for_check.radio_Msg,
    (RadioMessage_T_Radio_Types_Pkg *) &cEmptyRadioMsg_Radio_Types_Pkg);
  telegramPresent = (*API_TrackSide_Msg).valid &
    (*API_TrackSide_Msg).btm_msg.present;
  tmp.valid = telegramPresent;
  tmp.checkResult = (*API_TrackSide_Msg).btm_msg.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &tmp.telegramheader,
    &(*API_TrackSide_Msg).btm_msg.api_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp.packets,
    &(*API_TrackSide_Msg).packets);
  /* 1 */
  BuildBGMessage_Receive_TrackSide_Msg_Pkg(
    reset,
    telegramPresent,
    &tmp,
    &(*API_TrackSide_Msg).btm_msg.centerOfBalisePosition,
    inActualOdometry,
    &outC->Context_1);
  outC->outTrackMessage_for_check.valid = outC->Context_1.outBGMessage.present;
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &outC->outTrackMessage_for_check.telegramHeaders,
    &outC->Context_1.outBGMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

