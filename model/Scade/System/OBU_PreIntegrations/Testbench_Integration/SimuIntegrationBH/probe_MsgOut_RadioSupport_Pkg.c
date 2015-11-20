/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void probe_MsgOut_init_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->lastTTrain = 0;
  outC->lastMSG = 0;
  outC->outTTrain = 0;
  outC->Msg_0ut = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RadioSupport_Pkg::probe_MsgOut */
void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */ M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */ kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  /* RadioSupport_Pkg::probe_MsgOut::isRelevant */
  static kcg_bool _3_isRelevant;
  /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */
  static T_TRAIN _2_lastTTrain;
  /* RadioSupport_Pkg::probe_MsgOut::lastMSG */
  static NID_MESSAGE _1_lastMSG;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L12 */
  static T_TRAIN _L12_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L9 */
  static NID_MESSAGE _L9_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L5 */
  static NID_MESSAGE _L5_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L2 */
  static M_TrainTrack_Message_T_TM_radio_messages _L2_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L3 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L3_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::isRelevant */
  static kcg_bool isRelevant;
  /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */
  static T_TRAIN lastTTrain;
  /* RadioSupport_Pkg::probe_MsgOut::lastMSG */
  static NID_MESSAGE lastMSG;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::else::_L2 */
  static NID_MESSAGE _L24_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::else::_L1 */
  static T_TRAIN _L15_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */
  static T_TRAIN last_lastTTrain;
  /* RadioSupport_Pkg::probe_MsgOut::lastMSG */
  static NID_MESSAGE last_lastMSG;
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RadioSupport_Pkg::probe_MsgOut::isValid */
  static kcg_bool isValid;
  /* RadioSupport_Pkg::probe_MsgOut::isRelevant */
  static kcg_bool _6_isRelevant;
  /* RadioSupport_Pkg::probe_MsgOut::_L46 */
  static NID_MESSAGE _L46;
  /* RadioSupport_Pkg::probe_MsgOut::_L47 */
  static T_TRAIN _L47;
  /* RadioSupport_Pkg::probe_MsgOut::_L50 */
  static kcg_bool _L50;
  /* RadioSupport_Pkg::probe_MsgOut::_L49 */
  static M_TrainTrack_Message_T_TM_radio_messages _L49;
  /* RadioSupport_Pkg::probe_MsgOut::_L48 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L48;
  
  /* last_init_ck_lastMSG */ if (outC->init) {
    last_lastMSG = 0;
  }
  else {
    last_lastMSG = outC->lastMSG;
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L49, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L48, &_L49.Message);
  _L50 = _L48.valid;
  isValid = _L50;
  IfBlock1_clock = isValid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L2_IfBlock1, fromEVC);
    kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
      &_L3_IfBlock1,
      &_L2_IfBlock1.Message);
    _L1_IfBlock1 = _L3_IfBlock1.nid_message;
    _L5_IfBlock1 = co136_Train_Position_Report_Id_Pkg;
    _L4_IfBlock1 = _L1_IfBlock1 != _L5_IfBlock1;
    _L6_IfBlock1 = show136;
    _L7_IfBlock1 = _L4_IfBlock1 | _L6_IfBlock1;
    _3_isRelevant = _L7_IfBlock1;
    _L10_IfBlock1 = _3_isRelevant;
    _L9_IfBlock1 = last_lastMSG;
    /* 4 */ if (_L10_IfBlock1) {
      _L8_IfBlock1 = _L1_IfBlock1;
    }
    else {
      _L8_IfBlock1 = _L9_IfBlock1;
    }
    _1_lastMSG = _L8_IfBlock1;
    outC->lastMSG = _1_lastMSG;
  }
  else {
    _L24_IfBlock1 = last_lastMSG;
    lastMSG = _L24_IfBlock1;
    outC->lastMSG = lastMSG;
  }
  _L46 = outC->lastMSG;
  /* last_init_ck_lastTTrain */ if (outC->init) {
    last_lastTTrain = 0;
  }
  else {
    last_lastTTrain = outC->lastTTrain;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L14_IfBlock1 = _3_isRelevant;
    _L11_IfBlock1 = _L3_IfBlock1.t_train;
    _L12_IfBlock1 = last_lastTTrain;
    /* 5 */ if (_L14_IfBlock1) {
      _L13_IfBlock1 = _L11_IfBlock1;
    }
    else {
      _L13_IfBlock1 = _L12_IfBlock1;
    }
    _2_lastTTrain = _L13_IfBlock1;
    outC->lastTTrain = _2_lastTTrain;
  }
  else {
    _L15_IfBlock1 = last_lastTTrain;
    lastTTrain = _L15_IfBlock1;
    outC->lastTTrain = lastTTrain;
  }
  _L47 = outC->lastTTrain;
  outC->Msg_0ut = _L46;
  outC->outTTrain = _L47;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _6_isRelevant = _3_isRelevant;
  }
  else {
    isRelevant = kcg_false;
    _6_isRelevant = isRelevant;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** probe_MsgOut_RadioSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

