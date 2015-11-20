/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDriverOutput */
void CalcDriverOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */ SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */ SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */ V_odometry_Type_Obu_BasicTypes_Pkg *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */ kcg_bool *_40_valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */ V_odometry_Type_Obu_BasicTypes_Pkg *_39_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */ kcg_bool *_38_valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */ V_odometry_Type_Obu_BasicTypes_Pkg *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */ kcg_bool *_37_valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */ V_odometry_Type_Obu_BasicTypes_Pkg *_36_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */ kcg_bool *_35_valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */ V_odometry_Type_Obu_BasicTypes_Pkg *_34_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */ kcg_bool *_33_valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */ L_internal_Type_Obu_BasicTypes_Pkg *_32_targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */ kcg_bool *_31_valid_targetDistance)
{
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */
  static kcg_bool _30_valid_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */
  static L_internal_Type_Obu_BasicTypes_Pkg _29_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */
  static kcg_bool _28_valid_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */
  static V_odometry_Type_Obu_BasicTypes_Pkg _27_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */
  static kcg_bool _26_valid_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */
  static V_odometry_Type_Obu_BasicTypes_Pkg _25_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */
  static kcg_bool _24_valid_v_release;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */
  static kcg_bool _23_valid_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */
  static V_odometry_Type_Obu_BasicTypes_Pkg _22_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */
  static kcg_bool _21_valid_v_est;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::CSM::_L1 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1_WhenBlock1_CSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::CSM::_L2 */
  static Speeds_T_SDM_Types_Pkg _L2_WhenBlock1_CSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::CSM::_L3 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L3_WhenBlock1_CSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::CSM::_L4 */
  static kcg_bool _L4_WhenBlock1_CSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::CSM::_L5 */
  static kcg_bool _L5_WhenBlock1_CSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */
  static kcg_bool _20_valid_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */
  static L_internal_Type_Obu_BasicTypes_Pkg _19_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */
  static kcg_bool _18_valid_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */
  static V_odometry_Type_Obu_BasicTypes_Pkg _17_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */
  static kcg_bool _16_valid_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */
  static V_odometry_Type_Obu_BasicTypes_Pkg _15_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */
  static kcg_bool _14_valid_v_release;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */
  static kcg_bool _13_valid_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */
  static V_odometry_Type_Obu_BasicTypes_Pkg _12_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */
  static kcg_bool _11_valid_v_est;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L1 */
  static kcg_bool _L1_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L3 */
  static Speeds_T_SDM_Types_Pkg _L3_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L4 */
  static kcg_bool _L4_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L5 */
  static kcg_bool _L5_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L6 */
  static SupervisionStatus_T_SDM_Types_Pkg _L6_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L7 */
  static SupervisionStatus_T_SDM_Types_Pkg _L7_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L8 */
  static SDM_Locations_T_SDM_Types_Pkg _L8_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L9 */
  static SupervisionStatus_T_SDM_Types_Pkg _L9_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L10 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L10_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */
  static kcg_bool _10_valid_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */
  static L_internal_Type_Obu_BasicTypes_Pkg _9_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */
  static kcg_bool _8_valid_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */
  static V_odometry_Type_Obu_BasicTypes_Pkg _7_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */
  static kcg_bool _6_valid_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */
  static V_odometry_Type_Obu_BasicTypes_Pkg _5_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */
  static kcg_bool _4_valid_v_release;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */
  static kcg_bool _3_valid_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */
  static V_odometry_Type_Obu_BasicTypes_Pkg _2_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */
  static kcg_bool _1_valid_v_est;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L1 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L2 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L2_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L3 */
  static kcg_bool _L3_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L4 */
  static SupervisionStatus_T_SDM_Types_Pkg _L4_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L5 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L5_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L7 */
  static kcg_bool _L7_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L8 */
  static SupervisionStatus_T_SDM_Types_Pkg _L8_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L9 */
  static TargetType_T_TargetManagement_types _L9_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L10 */
  static TargetType_T_TargetManagement_types _L10_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L11 */
  static kcg_bool _L11_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L12 */
  static Target_T_TargetManagement_types _L12_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L13 */
  static kcg_bool _L13_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L14 */
  static Speeds_T_SDM_Types_Pkg _L14_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L15 */
  static TargetType_T_TargetManagement_types _L15_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L16 */
  static kcg_bool _L16_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L17 */
  static SDM_Locations_T_SDM_Types_Pkg _L17_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L18 */
  static kcg_bool _L18_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */
  static kcg_bool valid_targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */
  static L_internal_Type_Obu_BasicTypes_Pkg targetDistance;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */
  static kcg_bool valid_v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_floi;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */
  static kcg_bool valid_v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_mrdt;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */
  static kcg_bool valid_v_release;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */
  static kcg_bool valid_v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_permitted;
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */
  static kcg_bool valid_v_est;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1 */
  static SDM_Types_T_SDM_Types_Pkg WhenBlock1_clock;
  /* SDM_Commands_Pkg::CalcDriverOutput::owi */
  static kcg_bool owi;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L2 */
  static SupervisionStatus_T_SDM_Types_Pkg _L2;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L7 */
  static kcg_bool _L7;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L9 */
  static kcg_bool _L9;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L10 */
  static SupervisionStatus_T_SDM_Types_Pkg _L10;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L11 */
  static SupervisionStatus_T_SDM_Types_Pkg _L11;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L12 */
  static kcg_bool _L12;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L13 */
  static SupervisionStatus_T_SDM_Types_Pkg _L13;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L34 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L34;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L33 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L33;
  /* SDM_Commands_Pkg::CalcDriverOutput::_L32 */
  static Speeds_T_SDM_Types_Pkg _L32;
  
  _L2 = supVisStatus;
  _L10 = Overspeed_Supervision_SDM_Types_Pkg;
  _L8 = _L10 == _L2;
  _L11 = Warning_Supervision_SDM_Types_Pkg;
  _L9 = _L2 == _L11;
  _L13 = Intervention_Supervision_SDM_Types_Pkg;
  _L12 = _L2 == _L13;
  _L7 = _L8 | _L9 | _L12;
  owi = _L7;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L32, speeds);
  _L33 = _L32.V_est;
  _L34 = _L32.V_release;
  *v_release = _L34;
  WhenBlock1_clock = sdmType;
  /* ck_WhenBlock1 */ switch (WhenBlock1_clock) {
    case CSM_SDM_Types_Pkg :
      _L4_WhenBlock1_CSM = kcg_true;
      _21_valid_v_est = _L4_WhenBlock1_CSM;
      *_40_valid_v_est = _21_valid_v_est;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L2_WhenBlock1_CSM, speeds);
      _L3_WhenBlock1_CSM = _L2_WhenBlock1_CSM.V_MRSP;
      _22_v_permitted = _L3_WhenBlock1_CSM;
      *_39_v_permitted = _22_v_permitted;
      _23_valid_v_permitted = _L4_WhenBlock1_CSM;
      *_38_valid_v_permitted = _23_valid_v_permitted;
      _24_valid_v_release = kcg_false;
      *_37_valid_v_release = _24_valid_v_release;
      _25_v_mrdt = 0;
      *_36_v_mrdt = _25_v_mrdt;
      _26_valid_v_mrdt = kcg_false;
      *_35_valid_v_mrdt = _26_valid_v_mrdt;
      _L1_WhenBlock1_CSM = _L2_WhenBlock1_CSM.v_FLOI_dmi;
      _27_v_floi = _L1_WhenBlock1_CSM;
      *_34_v_floi = _27_v_floi;
      _L5_WhenBlock1_CSM = owi;
      _28_valid_v_floi = _L5_WhenBlock1_CSM;
      *_33_valid_v_floi = _28_valid_v_floi;
      _29_targetDistance = 0;
      *_32_targetDistance = _29_targetDistance;
      _30_valid_targetDistance = kcg_false;
      *_31_valid_targetDistance = _30_valid_targetDistance;
      break;
    case TSM_SDM_Types_Pkg :
      _L4_WhenBlock1_TSM = Undefined_Supervision_SDM_Types_Pkg;
      _L8_WhenBlock1_TSM = supVisStatus;
      _L3_WhenBlock1_TSM = _L4_WhenBlock1_TSM != _L8_WhenBlock1_TSM;
      _1_valid_v_est = _L3_WhenBlock1_TSM;
      *_40_valid_v_est = _1_valid_v_est;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L14_WhenBlock1_TSM, speeds);
      _L5_WhenBlock1_TSM = _L14_WhenBlock1_TSM.v_p_dmi;
      _2_v_permitted = _L5_WhenBlock1_TSM;
      *_39_v_permitted = _2_v_permitted;
      _3_valid_v_permitted = _L3_WhenBlock1_TSM;
      *_38_valid_v_permitted = _3_valid_v_permitted;
      _L15_WhenBlock1_TSM = SvL_TargetManagement_types;
      kcg_copy_Target_T_TargetManagement_types(&_L12_WhenBlock1_TSM, mrdt);
      _L10_WhenBlock1_TSM = _L12_WhenBlock1_TSM.targetType;
      _L13_WhenBlock1_TSM = _L15_WhenBlock1_TSM == _L10_WhenBlock1_TSM;
      _L9_WhenBlock1_TSM = EoA_TargetManagement_types;
      _L18_WhenBlock1_TSM = _L10_WhenBlock1_TSM == _L9_WhenBlock1_TSM;
      _L11_WhenBlock1_TSM = _L13_WhenBlock1_TSM | _L18_WhenBlock1_TSM;
      _L7_WhenBlock1_TSM = _L3_WhenBlock1_TSM & _L11_WhenBlock1_TSM;
      _4_valid_v_release = _L7_WhenBlock1_TSM;
      *_37_valid_v_release = _4_valid_v_release;
      _L1_WhenBlock1_TSM = _L14_WhenBlock1_TSM.V_target;
      _5_v_mrdt = _L1_WhenBlock1_TSM;
      *_36_v_mrdt = _5_v_mrdt;
      _6_valid_v_mrdt = _L3_WhenBlock1_TSM;
      *_35_valid_v_mrdt = _6_valid_v_mrdt;
      _L2_WhenBlock1_TSM = _L14_WhenBlock1_TSM.v_FLOI_dmi;
      _7_v_floi = _L2_WhenBlock1_TSM;
      *_34_v_floi = _7_v_floi;
      _L16_WhenBlock1_TSM = owi;
      _8_valid_v_floi = _L16_WhenBlock1_TSM;
      *_33_valid_v_floi = _8_valid_v_floi;
      kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L17_WhenBlock1_TSM, locations);
      _L6_WhenBlock1_TSM = _L17_WhenBlock1_TSM.d_target;
      _9_targetDistance = _L6_WhenBlock1_TSM;
      *_32_targetDistance = _9_targetDistance;
      _10_valid_targetDistance = _L3_WhenBlock1_TSM;
      *_31_valid_targetDistance = _10_valid_targetDistance;
      break;
    case RSM_SDM_Types_Pkg :
      _L7_WhenBlock1_RSM = Indication_Supervision_SDM_Types_Pkg;
      _L6_WhenBlock1_RSM = supVisStatus;
      _L4_WhenBlock1_RSM = _L7_WhenBlock1_RSM == _L6_WhenBlock1_RSM;
      _L9_WhenBlock1_RSM = Intervention_Supervision_SDM_Types_Pkg;
      _L1_WhenBlock1_RSM = _L6_WhenBlock1_RSM == _L9_WhenBlock1_RSM;
      _L5_WhenBlock1_RSM = _L4_WhenBlock1_RSM | _L1_WhenBlock1_RSM;
      _11_valid_v_est = _L5_WhenBlock1_RSM;
      *_40_valid_v_est = _11_valid_v_est;
      _12_v_permitted = 0;
      *_39_v_permitted = _12_v_permitted;
      _13_valid_v_permitted = kcg_false;
      *_38_valid_v_permitted = _13_valid_v_permitted;
      _14_valid_v_release = _L5_WhenBlock1_RSM;
      *_37_valid_v_release = _14_valid_v_release;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L3_WhenBlock1_RSM, speeds);
      _L10_WhenBlock1_RSM = _L3_WhenBlock1_RSM.v_p_mrdt;
      _15_v_mrdt = _L10_WhenBlock1_RSM;
      *_36_v_mrdt = _15_v_mrdt;
      _16_valid_v_mrdt = _L5_WhenBlock1_RSM;
      *_35_valid_v_mrdt = _16_valid_v_mrdt;
      _17_v_floi = 0;
      *_34_v_floi = _17_v_floi;
      _18_valid_v_floi = kcg_false;
      *_33_valid_v_floi = _18_valid_v_floi;
      kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L8_WhenBlock1_RSM, locations);
      _L2_WhenBlock1_RSM = _L8_WhenBlock1_RSM.d_target;
      _19_targetDistance = _L2_WhenBlock1_RSM;
      *_32_targetDistance = _19_targetDistance;
      _20_valid_targetDistance = _L5_WhenBlock1_RSM;
      *_31_valid_targetDistance = _20_valid_targetDistance;
      break;
    case No_SDM_Type_SDM_Types_Pkg :
      valid_v_est = kcg_false;
      *_40_valid_v_est = valid_v_est;
      v_permitted = 0;
      *_39_v_permitted = v_permitted;
      valid_v_permitted = kcg_false;
      *_38_valid_v_permitted = valid_v_permitted;
      valid_v_release = kcg_false;
      *_37_valid_v_release = valid_v_release;
      v_mrdt = 0;
      *_36_v_mrdt = v_mrdt;
      valid_v_mrdt = kcg_false;
      *_35_valid_v_mrdt = valid_v_mrdt;
      v_floi = 0;
      *_34_v_floi = v_floi;
      valid_v_floi = kcg_false;
      *_33_valid_v_floi = valid_v_floi;
      targetDistance = 0;
      *_32_targetDistance = targetDistance;
      valid_targetDistance = kcg_false;
      *_31_valid_targetDistance = valid_targetDistance;
      break;
    
  }
  *v_est = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDriverOutput_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

