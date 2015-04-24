/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBCSimulation.h"

/* RBCSimulation */
void RBCSimulation(
  /* RBCSimulation::inMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inMessage,
  /* RBCSimulation::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* RBCSimulation::outMessage */ API_TrackSideInput_T_API_Msg_Pkg *outMessage)
{
  switch ((*inMessage).header.nid_message) {
    case 155 :
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        outMessage,
        (API_TrackSideInput_T_API_Msg_Pkg *) &cRBCMessage32);
      (*outMessage).systemTimeMsgReceived = systemTime;
      (*outMessage).rtm_msg.Radio_Common_Header.t_train = cTTrainUnknown;
      break;
    
    default :
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        outMessage,
        (API_TrackSideInput_T_API_Msg_Pkg *) &cAPITrackSideMessage);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RBCSimulation.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

