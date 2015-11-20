/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ES_AcceptOrReject_CES_TA_EmergencyStop_H_
#define _ES_AcceptOrReject_CES_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */


/* TA_EmergencyStop::ES_AcceptOrReject_CES */
extern void ES_AcceptOrReject_CES_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::updateEOA */kcg_bool *updateEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::newEOA */L_internal_Type_Obu_BasicTypes_Pkg *newEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::cesAccepted */kcg_bool *cesAccepted);

#endif /* _ES_AcceptOrReject_CES_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_AcceptOrReject_CES_TA_EmergencyStop.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

