/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessModeAndLevel_RBC_Model_Pkg.h"

void RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessModeAndLevel */
void RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::inTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L3 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L3;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L4 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L4;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L9 */
  static M_MODE _L9;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L24 */
  static M_LEVEL _L24;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L24 = M_LEVEL_Level_0;
    _L9 = M_MODE_No_Power;
  }
  else {
    _L24 = outC->out_level;
    _L9 = outC->out_mode;
  }
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inTrainTrackMessage,
    &_L2);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L3);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L4);
  if (_L3.valid) {
    outC->out_mode = _L3.packet0.mode;
    outC->out_level = _L3.packet0.level;
  }
  else {
    else_clock_IfBlock1 = _L4.valid & !_L3.valid;
    if (else_clock_IfBlock1) {
      outC->out_mode = _L4.packet1.mode;
      outC->out_level = _L4.packet1.level;
    }
    else {
      outC->out_mode = _L9;
      outC->out_level = _L24;
    }
  }
  if (outC->out_level != _L24) {
    outC->out_levelChanged = kcg_true;
  }
  else {
    outC->out_levelChanged = kcg_false;
  }
  if (outC->out_mode != _L9) {
    outC->out_modeChanged = kcg_true;
  }
  else {
    outC->out_modeChanged = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessModeAndLevel_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

