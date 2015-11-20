/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ExtractMsgParams */
void ES_ExtractMsgParams_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */kcg_bool receivedESMsg,
  /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */NID_EM *nid_em,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */Q_SCALE *q_scale,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */D_REF *d_ref,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */Q_DIR *q_dir,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */D_EMERGENCYSTOP *d_emergencystop)
{
  *d_emergencystop = (*messageIn).Radio_Common_Header.d_emergencystop;
  *q_dir = (*messageIn).Radio_Common_Header.q_dir;
  *d_ref = (*messageIn).Radio_Common_Header.d_ref;
  *q_scale = (*messageIn).Radio_Common_Header.q_scale;
  if (receivedESMsg) {
    *nid_em = (*messageIn).Radio_Common_Header.nid_em;
  }
  else {
    *nid_em = cNID_EM_NONE_TA_EmergencyStop;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ExtractMsgParams_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

