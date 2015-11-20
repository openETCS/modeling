/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_AcknowledgementNew */
void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::updateEOA */kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::m147 */M_147_T_TM_radio_messages *m147)
{
  (*m147).valid = kcg_true;
  (*m147).nid_message = 147;
  (*m147).l_message = 0;
  (*m147).t_train = t_train;
  (*m147).nid_engine = (*trainProps).nid_engine;
  (*m147).nid_em = nid_em;
  if (receivedMsg16) {
    (*m147).q_emergencystop =
      Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  }
  else if (cesAccepted) {
    if (updateEOA) {
      (*m147).q_emergencystop =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
    }
    else {
      (*m147).q_emergencystop =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
    }
  }
  else {
    (*m147).q_emergencystop = Q_EMERGENCYSTOP_Emergency_stop;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_AcknowledgementNew_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

