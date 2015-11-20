/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::probe_RadioOutput */
void probe_RadioOutput_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_RadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* RadioSupport_Pkg::probe_RadioOutput::msg1 */ NID_MESSAGE *msg1,
  /* RadioSupport_Pkg::probe_RadioOutput::msg2 */ NID_MESSAGE *msg2,
  /* RadioSupport_Pkg::probe_RadioOutput::msg3 */ NID_MESSAGE *msg3,
  /* RadioSupport_Pkg::probe_RadioOutput::msg4 */ NID_MESSAGE *msg4,
  /* RadioSupport_Pkg::probe_RadioOutput::msg5 */ NID_MESSAGE *msg5)
{
  /* RadioSupport_Pkg::probe_RadioOutput::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* RadioSupport_Pkg::probe_RadioOutput::_L2 */
  static M_TrainTrack_Message_T_TM_radio_messages _L2;
  /* RadioSupport_Pkg::probe_RadioOutput::_L3 */
  static kcg_int _L3;
  /* RadioSupport_Pkg::probe_RadioOutput::_L4 */
  static M_TrainTrack_Message_T_TM_radio_messages _L4;
  /* RadioSupport_Pkg::probe_RadioOutput::_L5 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L5;
  /* RadioSupport_Pkg::probe_RadioOutput::_L6 */
  static kcg_int _L6;
  /* RadioSupport_Pkg::probe_RadioOutput::_L11 */
  static kcg_int _L11;
  /* RadioSupport_Pkg::probe_RadioOutput::_L10 */
  static M_TrainTrack_Message_T_TM_radio_messages _L10;
  /* RadioSupport_Pkg::probe_RadioOutput::_L9 */
  static kcg_int _L9;
  /* RadioSupport_Pkg::probe_RadioOutput::_L8 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L8;
  /* RadioSupport_Pkg::probe_RadioOutput::_L7 */
  static M_TrainTrack_Message_T_TM_radio_messages _L7;
  /* RadioSupport_Pkg::probe_RadioOutput::_L16 */
  static kcg_int _L16;
  /* RadioSupport_Pkg::probe_RadioOutput::_L15 */
  static kcg_int _L15;
  /* RadioSupport_Pkg::probe_RadioOutput::_L14 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L14;
  /* RadioSupport_Pkg::probe_RadioOutput::_L13 */
  static M_TrainTrack_Message_T_TM_radio_messages _L13;
  /* RadioSupport_Pkg::probe_RadioOutput::_L12 */
  static M_TrainTrack_Message_T_TM_radio_messages _L12;
  /* RadioSupport_Pkg::probe_RadioOutput::_L26 */
  static kcg_int _L26;
  /* RadioSupport_Pkg::probe_RadioOutput::_L25 */
  static M_TrainTrack_Message_T_TM_radio_messages _L25;
  /* RadioSupport_Pkg::probe_RadioOutput::_L24 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L24;
  /* RadioSupport_Pkg::probe_RadioOutput::_L23 */
  static M_TrainTrack_Message_T_TM_radio_messages _L23;
  /* RadioSupport_Pkg::probe_RadioOutput::_L22 */
  static kcg_int _L22;
  /* RadioSupport_Pkg::probe_RadioOutput::_L31 */
  static kcg_int _L31;
  /* RadioSupport_Pkg::probe_RadioOutput::_L30 */
  static M_TrainTrack_Message_T_TM_radio_messages _L30;
  /* RadioSupport_Pkg::probe_RadioOutput::_L29 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L29;
  /* RadioSupport_Pkg::probe_RadioOutput::_L28 */
  static M_TrainTrack_Message_T_TM_radio_messages _L28;
  /* RadioSupport_Pkg::probe_RadioOutput::_L27 */
  static kcg_int _L27;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, MessageBus);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L4,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  _L3 = 0;
  if ((0 <= _L3) & (_L3 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L2, &_L1[_L3]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L2, &_L4);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L5, &_L2.Message);
  _L6 = _L5.nid_message;
  *msg1 = _L6;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L10,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  _L9 = 1;
  if ((0 <= _L9) & (_L9 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L7, &_L1[_L9]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L7, &_L10);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L8, &_L7.Message);
  _L11 = _L8.nid_message;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L12,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  _L15 = 2;
  if ((0 <= _L15) & (_L15 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L13, &_L1[_L15]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L13, &_L12);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L14, &_L13.Message);
  _L16 = _L14.nid_message;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L23,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  _L26 = 3;
  if ((0 <= _L26) & (_L26 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L25, &_L1[_L26]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L25, &_L23);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L24, &_L25.Message);
  _L22 = _L24.nid_message;
  _L27 = 4;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L28,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  if ((0 <= _L27) & (_L27 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L30, &_L1[_L27]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L30, &_L28);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L29, &_L30.Message);
  _L31 = _L29.nid_message;
  *msg2 = _L11;
  *msg3 = _L16;
  *msg4 = _L22;
  *msg5 = _L31;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** probe_RadioOutput_RadioSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

