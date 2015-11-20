/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
void extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::messageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::found */ kcg_bool *found,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::positionReport */ M_TrainTrack_Message_T_TM_radio_messages *positionReport)
{
  static kcg_int i1;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
  static kcg_int acc;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L2 */
  static kcg_int _L2;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L3 */
  static kcg_bool _L3;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L4 */
  static kcg_int _L4;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L5 */
  static kcg_int _L5;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L6 */
  static array_169242 _L6;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L7 */
  static kcg_bool _L7;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L8 */
  static kcg_int _L8;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::_L9 */
  static M_TrainTrack_Message_T_TM_radio_messages _L9;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, messageBus);
  _L5 = - 1;
  /* pow */ for (i1 = 0; i1 < 5; i1++) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L6[i1], &_L1);
  }
  _L3 = kcg_true;
  _L4 = _L5;
  /* 1 */ if (_L3) {
    /* 1 */ for (i = 0; i < 5; i++) {
      acc = _L4;
      /* 1 */
      extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
        i,
        acc,
        &_L6[i],
        &cond_iterw,
        &_L4);
      _L2 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L2 = 0;
  }
  _L8 = 0;
  _L7 = _L4 >= _L8;
  *found = _L7;
  noname = _L2;
  if ((0 <= _L4) & (_L4 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L9, &_L1[_L4]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L9,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(positionReport, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

