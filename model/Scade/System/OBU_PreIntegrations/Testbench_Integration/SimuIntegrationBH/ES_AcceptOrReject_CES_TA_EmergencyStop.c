/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_AcceptOrReject_CES_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_AcceptOrReject_CES */
void ES_AcceptOrReject_CES_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::updateEOA */ kcg_bool *updateEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::newEOA */ L_internal_Type_Obu_BasicTypes_Pkg *newEOA,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::cesAccepted */ kcg_bool *cesAccepted)
{
  static D_REF noname;
  static Q_DIR _1_noname;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L1 */
  static Q_SCALE _L1;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L2 */
  static D_REF _L2;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L3 */
  static Q_DIR _L3;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L4 */
  static D_EMERGENCYSTOP _L4;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L5 */
  static trainPosition_T_TrainPosition_Types_Pck _L5;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L12 */
  static kcg_bool _L12;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L17 */
  static kcg_bool _L17;
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L18 */
  static kcg_bool _L18;
  
  _L1 = q_scale;
  _L2 = d_ref;
  _L3 = q_dir;
  _L4 = d_emergencystop;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L5, TrainPositionIn);
  _L9 = _L5.minSafeFrontEndPosition;
  _L8 = /* 1 */ ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(_L1, _L4);
  _L12 = _L9 < _L8;
  *cesAccepted = _L12;
  _L16 = currentEOA;
  _L17 = _L8 < _L16;
  _L18 = _L12 & _L17;
  _L14 = cEOA_NONE_TA_EmergencyStop;
  /* 1 */ if (_L18) {
    _L13 = _L8;
  }
  else {
    _L13 = _L14;
  }
  *newEOA = _L13;
  noname = _L2;
  _1_noname = _L3;
  *updateEOA = _L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_AcceptOrReject_CES_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

