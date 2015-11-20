/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"

void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RadioSupport_Pkg::probe_MsgOut */
void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */
  static T_TRAIN last_lastTTrain;
  /* RadioSupport_Pkg::probe_MsgOut::lastMSG */
  static NID_MESSAGE last_lastMSG;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_lastTTrain = 0;
    last_lastMSG = 0;
  }
  else {
    last_lastTTrain = outC->outTTrain;
    last_lastMSG = outC->Msg_0ut;
  }
  if ((*fromEVC).Message.valid) {
    _L7_IfBlock1 = ((*fromEVC).Message.nid_message !=
        co136_Train_Position_Report_Id_Pkg) | show136;
    if (_L7_IfBlock1) {
      outC->Msg_0ut = (*fromEVC).Message.nid_message;
      outC->outTTrain = (*fromEVC).Message.t_train;
    }
    else {
      outC->Msg_0ut = last_lastMSG;
      outC->outTTrain = last_lastTTrain;
    }
  }
  else {
    outC->Msg_0ut = last_lastMSG;
    outC->outTTrain = last_lastTTrain;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** probe_MsgOut_RadioSupport_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

