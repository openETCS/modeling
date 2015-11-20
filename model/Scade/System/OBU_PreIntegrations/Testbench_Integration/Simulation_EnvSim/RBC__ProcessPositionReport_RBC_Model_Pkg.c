/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"

void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessPositionReport */
void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp2;
  static PosData_T tmp1;
  static PosData_T tmp;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    outC->init = kcg_false;
    POSITION_REPORT_SM_state_sel = SSM_st_IDLE_POSITION_REPORT_SM;
  }
  else {
    POSITION_REPORT_SM_state_sel = outC->POSITION_REPORT_SM_state_nxt;
  }
  /* 2 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp2);
  radioTrainTrackMessageId = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp2);
  switch (POSITION_REPORT_SM_state_sel) {
    case SSM_st_IDLE_POSITION_REPORT_SM :
      if (radioTrainTrackMessageId == 136) {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      break;
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      if (radioTrainTrackMessageId == 136) {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (POSITION_REPORT_SM_state_act) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      /* 2 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp);
      /* 2 */
      PosData__Update_RBC_Session_Pkg(
        &tmp,
        &outC->outRadioTrainTrackMessage,
        &tmp1);
      /* 1 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp1,
        &outC->outDataBus.session);
      outC->POSITION_REPORT_SM_state_nxt =
        SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessPositionReport_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

