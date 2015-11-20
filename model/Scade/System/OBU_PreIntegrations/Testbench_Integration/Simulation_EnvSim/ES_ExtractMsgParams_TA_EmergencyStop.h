/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ES_ExtractMsgParams_TA_EmergencyStop_H_
#define _ES_ExtractMsgParams_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* TA_EmergencyStop::ES_ExtractMsgParams */
extern void ES_ExtractMsgParams_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */kcg_bool receivedESMsg,
  /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */NID_EM *nid_em,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */Q_SCALE *q_scale,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */D_REF *d_ref,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */Q_DIR *q_dir,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */D_EMERGENCYSTOP *d_emergencystop);

#endif /* _ES_ExtractMsgParams_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ExtractMsgParams_TA_EmergencyStop.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

