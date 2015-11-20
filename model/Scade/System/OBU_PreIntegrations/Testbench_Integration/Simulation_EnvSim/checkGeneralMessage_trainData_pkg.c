/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkGeneralMessage_trainData_pkg.h"

void checkGeneralMessage_reset_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC)
{
  outC->init = kcg_true;
}

/* trainData_pkg::checkGeneralMessage */
void checkGeneralMessage_trainData_pkg(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  outC_checkGeneralMessage_trainData_pkg *outC)
{
  static kcg_bool tmp;
  /* trainData_pkg::checkGeneralMessage::_L16 */
  static kcg_bool _L16;
  
  _L16 = (*trackMessages).valid & ((*trackMessages).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    ((*trackMessages).Radio_Common_Header.nid_message ==
      cm24_General_Message_Id_Pkg);
  if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->genMessageReceived;
  }
  outC->genMessageReceived = tmp | _L16;
  if (_L16) {
    outC->ackRequested = (*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required;
  }
  else {
    outC->ackRequested = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkGeneralMessage_trainData_pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

