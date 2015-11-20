/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr */
void extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::i */ kcg_int i,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_in */ kcg_int acc_in,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::message */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *message,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::cont */ kcg_bool *cont,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_out */ kcg_int *acc_out)
{
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L2 */
  static kcg_int _L2;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L3 */
  static kcg_int _L3;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L8 */
  static M_TrainTrack_Message_T_TM_radio_messages _L8;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L9 */
  static kcg_bool _L9;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L81 */
  static kcg_int _L81;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L82 */
  static kcg_bool _L82;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L83 */
  static kcg_int _L83;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L84 */
  static kcg_bool _L84;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L85 */
  static kcg_bool _L85;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L86 */
  static kcg_int _L86;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L87 */
  static kcg_int _L87;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L88 */
  static kcg_bool _L88;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L89 */
  static kcg_bool _L89;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L90 */
  static kcg_bool _L90;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L91 */
  static kcg_int _L91;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L92 */
  static kcg_bool _L92;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L93 */
  static kcg_int _L93;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, message);
  _L2 = i;
  _L3 = acc_in;
  if ((0 <= _L2) & (_L2 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L8, &_L1[_L2]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  _L9 = _L8.Message.valid;
  _L91 = 136;
  _L81 = _L8.Message.nid_message;
  _L90 = _L91 == _L81;
  _L82 = _L9 & _L90;
  _L86 = nid_meta_p000_TM_radio_messages;
  _L83 = _L8.OptionalPackets[0];
  _L84 = _L86 == _L83;
  _L87 = nid_meta_p001_TM_radio_messages;
  _L85 = _L83 == _L87;
  _L88 = _L84 | _L85;
  _L89 = _L82 & _L88;
  _L92 = !_L89;
  *cont = _L92;
  /* 1 */ if (_L89) {
    _L93 = _L2;
  }
  else {
    _L93 = _L3;
  }
  *acc_out = _L93;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

