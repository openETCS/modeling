/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr */
void extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::i */kcg_int i,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_in */kcg_int acc_in,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::message */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *message,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::cont */kcg_bool *cont,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_out */kcg_int *acc_out)
{
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L8 */
  static M_TrainTrack_Message_T_TM_radio_messages _L8;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L89 */
  static kcg_bool _L89;
  
  if ((0 <= i) & (i < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L8, &(*message)[i]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  _L89 = _L8.Message.valid & (136 == _L8.Message.nid_message) &
    ((nid_meta_p000_TM_radio_messages == _L8.OptionalPackets[0]) |
      (_L8.OptionalPackets[0] == nid_meta_p001_TM_radio_messages));
  if (_L89) {
    *acc_out = i;
  }
  else {
    *acc_out = acc_in;
  }
  *cont = !_L89;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

