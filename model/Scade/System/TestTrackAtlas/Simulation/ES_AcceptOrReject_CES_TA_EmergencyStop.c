/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_AcceptOrReject_CES_TA_EmergencyStop.h"

void ES_AcceptOrReject_CES_reset_TA_EmergencyStop(
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC)
{
  /* 1 */ ES_Normalize_D_EMERGENCYSTOP_reset_TA_EmergencyStop(&outC->Context_1);
}

/* TA_EmergencyStop::ES_AcceptOrReject_CES */
void ES_AcceptOrReject_CES_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC)
{
  D_REF noname;
  Q_DIR _1_noname;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, TrainPositionIn);
  outC->_L9 = outC->_L5.minSafeFrontEndPosition;
  outC->_L1 = q_scale;
  outC->_L4 = d_emergencystop;
  /* 1 */
  ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
    outC->_L1,
    outC->_L4,
    &outC->Context_1);
  outC->_L8 = outC->Context_1.d_emergencystop_normalized;
  outC->_L12 = outC->_L9 < outC->_L8;
  outC->_L16 = currentEOA;
  outC->_L17 = outC->_L8 < outC->_L16;
  outC->_L18 = outC->_L12 & outC->_L17;
  outC->updateEOA = outC->_L18;
  outC->_L14 = cEOA_NONE_TA_EmergencyStop;
  if (outC->_L18) {
    outC->_L13 = outC->_L8;
  }
  else {
    outC->_L13 = outC->_L14;
  }
  outC->_L3 = q_dir;
  _1_noname = outC->_L3;
  outC->_L2 = d_ref;
  noname = outC->_L2;
  outC->newEOA = outC->_L13;
  outC->cesAccepted = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_AcceptOrReject_CES_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

