/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RequestAck_Acknowledgement.h"

void RequestAck_reset_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  outC->init = kcg_true;
}

/* Acknowledgement::RequestAck */
void RequestAck_Acknowledgement(
  /* Acknowledgement::RequestAck::isAckNeeded */kcg_bool isAckNeeded,
  /* Acknowledgement::RequestAck::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::RequestAck::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::RequestAck::levelAck */kcg_bool levelAck,
  /* Acknowledgement::RequestAck::IsNewLevel */kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC)
{
  /* Acknowledgement::RequestAck::SM1 */
  static _30_SSM_ST_SM1 SM1_state_sel;
  /* Acknowledgement::RequestAck::SM1 */
  static _30_SSM_ST_SM1 SM1_state_act;
  /* Acknowledgement::RequestAck::Loc_PositionInAckArea */
  static kcg_bool Loc_PositionInAckArea;
  
  Loc_PositionInAckArea = /* 1 */
    Position_In_Ack_Area_Acknowledgement(
      (*trainPosition).maxSafeFrontEndPostion,
      (*selected_level_transition).transition.position,
      (*selected_level_transition).transition.AckLength);
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_Waiting_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_Waiting_SM1 :
      if (isAckNeeded & (*selected_level_transition).is_set) {
        SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      else {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      break;
    case SSM_st_LaunchRequest_SM1 :
      if ((levelAck & !Loc_PositionInAckArea) | !isAckNeeded) {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      else if (levelAck & Loc_PositionInAckArea) {
        SM1_state_act = SSM_st_AckReceived_SM1;
      }
      else {
        SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      break;
    case SSM_st_AckReceived_SM1 :
      if (!Loc_PositionInAckArea | !isAckNeeded) {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      else {
        SM1_state_act = SSM_st_AckReceived_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_Waiting_SM1 :
      outC->needsAckFromDriver = kcg_false;
      outC->service_brake = kcg_false;
      outC->SM1_state_nxt = SSM_st_Waiting_SM1;
      break;
    case SSM_st_LaunchRequest_SM1 :
      outC->SM1_state_nxt = SSM_st_LaunchRequest_SM1;
      outC->service_brake = IsNewLevel;
      outC->needsAckFromDriver =
        (*selected_level_transition).transition.immediateAck |
        Loc_PositionInAckArea;
      break;
    case SSM_st_AckReceived_SM1 :
      outC->needsAckFromDriver = kcg_false;
      outC->service_brake = kcg_false;
      outC->SM1_state_nxt = SSM_st_AckReceived_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RequestAck_Acknowledgement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

