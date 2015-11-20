/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg */
void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::isRadioMsg */
  static kcg_bool isRadioMsg;
  
  isRadioMsg = (*API_TrackSide_Msg).valid & ((*API_TrackSide_Msg).msg_type ==
      msrc_Euroradio_Common_Types_Pkg) & (*API_TrackSide_Msg).rtm_msg.present &
    !reset;
  if (isRadioMsg) {
    /* 1 */
    Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
      API_TrackSide_Msg,
      &outC->outTrackMessage_for_check);
  }
  else {
    /* 1 */
    Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
      reset,
      inActualOdometry,
      API_TrackSide_Msg,
      &outC->Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &outC->Context_1.outTrackMessage_for_check);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

