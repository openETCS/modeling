/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioMessages_trainData_pkg.h"

/* trainData_pkg::checkRadioMessages */
void checkRadioMessages_trainData_pkg(
  /* trainData_pkg::checkRadioMessages::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkRadioMessages::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::checkRadioMessages::ackReceived */kcg_bool *ackReceived,
  /* trainData_pkg::checkRadioMessages::ackRequested */kcg_bool *ackRequested)
{
  *ackReceived = (*trackMessages).valid & ((*trackMessages).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    (((*trackMessages).Radio_Common_Header.nid_message ==
        cm08_Acknowledgement_of_Train_Data_Id_Pkg) &
      ((*trackMessages).Radio_Common_Header.t_train_reference ==
        (*actualStatus).timeStampValidateToRBC));
  if (*ackReceived) {
    *ackRequested = (*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required;
  }
  else {
    *ackRequested = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkRadioMessages_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

