/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessModeAndLevel_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  outC->level = M_LEVEL_Level_0;
  outC->mode = M_MODE_Full_Supervision;
  outC->out_levelChanged = kcg_true;
  outC->out_level = M_LEVEL_Level_0;
  outC->out_modeChanged = kcg_true;
  outC->out_mode = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessModeAndLevel */
void RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::inTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */
  static M_LEVEL level2;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */
  static M_MODE mode1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::then::_L2 */
  static M_LEVEL _L2_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::then::_L1 */
  static M_MODE _L1_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */
  static M_LEVEL level;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */
  static M_MODE mode;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */
  static M_MODE mode3;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */
  static M_LEVEL level4;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::else::then::_L1 */
  static M_MODE _L18_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::else::then::_L2 */
  static M_LEVEL _L27_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */
  static M_MODE mode5;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */
  static M_LEVEL level6;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */
  static M_LEVEL last_level;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */
  static M_MODE last_mode;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p0_isValid */
  static kcg_bool p0_isValid;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p1_isValid */
  static kcg_bool p1_isValid;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p0_mode */
  static M_MODE p0_mode;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p0_level */
  static M_LEVEL p0_level;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p1_level */
  static M_LEVEL p1_level;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::p1_mode */
  static M_MODE p1_mode;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L3 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L3;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L4 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L4;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L5 */
  static kcg_bool _L5;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L6 */
  static Position_Report_TrainToTrack _L6;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L7 */
  static M_MODE _L7;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L9 */
  static M_MODE _L9;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L11 */
  static kcg_bool _L11;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L12 */
  static kcg_bool _L12;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L14 */
  static kcg_bool _L14;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L15 */
  static kcg_bool _L15;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L16 */
  static M_MODE _L16;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L22 */
  static kcg_bool _L22;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L20 */
  static kcg_bool _L20;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L18 */
  static kcg_bool _L18;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L17 */
  static kcg_bool _L17;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L23 */
  static M_LEVEL _L23;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L24 */
  static M_LEVEL _L24;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L27 */
  static M_LEVEL _L27;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L31 */
  static kcg_bool _L31;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L30 */
  static M_LEVEL _L30;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L29 */
  static M_MODE _L29;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L28 */
  static Position_Report_based_on_two_balise_groups_TrainToTrack _L28;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L32 */
  static M_LEVEL _L32;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L33 */
  static M_MODE _L33;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L2);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L3);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L4);
  _L5 = _L3.valid;
  kcg_copy_Position_Report_TrainToTrack(&_L6, &_L3.packet0);
  _L7 = _L6.mode;
  /* last_init_ck_mode */ if (outC->init) {
    last_mode = M_MODE_No_Power;
  }
  else {
    last_mode = outC->mode;
  }
  _L9 = last_mode;
  p0_isValid = _L5;
  IfBlock1_clock = p0_isValid == kcg_true;
  _L31 = _L4.valid;
  p1_isValid = _L31;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = (p1_isValid == kcg_true) & (p0_isValid == kcg_false);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      mode3 = last_mode;
    }
  }
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &_L28,
    &_L4.packet1);
  _L29 = _L28.mode;
  p1_mode = _L29;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    _L18_IfBlock1 = p1_mode;
    mode5 = _L18_IfBlock1;
    mode = mode5;
  }
  else {
    mode = mode3;
  }
  p0_mode = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = p0_mode;
    mode1 = _L1_IfBlock1;
    outC->mode = mode1;
  }
  else {
    outC->mode = mode;
  }
  _L16 = outC->mode;
  _L11 = _L16 != _L9;
  _L14 = kcg_true;
  _L15 = kcg_false;
  /* 2 */ if (_L11) {
    _L12 = _L14;
  }
  else {
    _L12 = _L15;
  }
  outC->out_modeChanged = _L12;
  /* last_init_ck_level */ if (outC->init) {
    last_level = M_LEVEL_Level_0;
  }
  else {
    last_level = outC->level;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
  }
  else {
    level4 = last_level;
  }
  _L30 = _L28.level;
  p1_level = _L30;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    _L27_IfBlock1 = p1_level;
    level6 = _L27_IfBlock1;
    level = level6;
  }
  else {
    level = level4;
  }
  _L27 = _L6.level;
  p0_level = _L27;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = p0_level;
    level2 = _L2_IfBlock1;
    outC->level = level2;
  }
  else {
    outC->level = level;
  }
  _L23 = outC->level;
  _L24 = last_level;
  _L17 = _L23 != _L24;
  _L18 = kcg_false;
  _L20 = kcg_true;
  /* 3 */ if (_L17) {
    _L22 = _L20;
  }
  else {
    _L22 = _L18;
  }
  outC->out_levelChanged = _L22;
  _L33 = outC->mode;
  outC->out_mode = _L33;
  _L32 = outC->level;
  outC->out_level = _L32;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessModeAndLevel_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

