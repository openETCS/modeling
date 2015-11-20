/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
void extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::messageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::found */kcg_bool *found,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::positionReport */M_TrainTrack_Message_T_TM_radio_messages *positionReport)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L4 */
  static kcg_int _L4;
  
  _L4 = - 1;
  for (i = 0; i < 5; i++) {
    tmp1 = _L4;
    /* 1 */
    extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
      i,
      tmp1,
      messageBus,
      &tmp,
      &_L4);
    if (!tmp) {
      break;
    }
  }
  if ((0 <= _L4) & (_L4 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      positionReport,
      &(*messageBus)[_L4]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      positionReport,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  *found = _L4 >= 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** extractPositionReportFromBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

