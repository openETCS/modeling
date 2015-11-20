/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void LowerOrHold_init_SDM_Commands_Pkg(outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_vi = 0;
  outC->rem_mrdt.targetType = EoA_TargetManagement_types;
  outC->rem_mrdt.distance = 0;
  outC->rem_mrdt.speed = 0;
  outC->rem_mrdt.valid = kcg_true;
  outC->vo = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LowerOrHold_reset_SDM_Commands_Pkg(outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::LowerOrHold */
void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::LowerOrHold::vo */
  static V_odometry_Type_Obu_BasicTypes_Pkg last_vo;
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */
  static Target_T_TargetManagement_types last_mrdt;
  /* SDM_Commands_Pkg::LowerOrHold::vi */
  static V_odometry_Type_Obu_BasicTypes_Pkg last_vi;
  /* SDM_Commands_Pkg::LowerOrHold::_L1 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1;
  /* SDM_Commands_Pkg::LowerOrHold::_L6 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L6;
  /* SDM_Commands_Pkg::LowerOrHold::_L14 */
  static Target_T_TargetManagement_types _L14;
  /* SDM_Commands_Pkg::LowerOrHold::_L15 */
  static Target_T_TargetManagement_types _L15;
  /* SDM_Commands_Pkg::LowerOrHold::_L19 */
  static TargetType_T_TargetManagement_types _L19;
  /* SDM_Commands_Pkg::LowerOrHold::_L18 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* SDM_Commands_Pkg::LowerOrHold::_L17 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* SDM_Commands_Pkg::LowerOrHold::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::LowerOrHold::_L20 */
  static TargetType_T_TargetManagement_types _L20;
  /* SDM_Commands_Pkg::LowerOrHold::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* SDM_Commands_Pkg::LowerOrHold::_L22 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* SDM_Commands_Pkg::LowerOrHold::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::LowerOrHold::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::LowerOrHold::_L25 */
  static kcg_bool _L25;
  /* SDM_Commands_Pkg::LowerOrHold::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::LowerOrHold::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::LowerOrHold::_L28 */
  static kcg_bool _L28;
  /* SDM_Commands_Pkg::LowerOrHold::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::LowerOrHold::_L31 */
  static kcg_int _L31;
  /* SDM_Commands_Pkg::LowerOrHold::_L30 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L30;
  /* SDM_Commands_Pkg::LowerOrHold::_L33 */
  static kcg_bool _L33;
  
  _L1 = vi;
  /* last_init_ck_vo */ if (outC->init) {
    last_vo = - 1;
  }
  else {
    last_vo = outC->vo;
  }
  kcg_copy_Target_T_TargetManagement_types(&_L14, mrdt);
  _L19 = _L14.targetType;
  /* last_init_ck_mrdt */ if (outC->init) {
    last_mrdt.targetType = EoA_TargetManagement_types;
    last_mrdt.distance = 0;
    last_mrdt.speed = 0;
    last_mrdt.valid = kcg_false;
  }
  else {
    kcg_copy_Target_T_TargetManagement_types(&last_mrdt, &outC->rem_mrdt);
  }
  kcg_copy_Target_T_TargetManagement_types(&_L15, &last_mrdt);
  _L20 = _L15.targetType;
  _L24 = _L19 == _L20;
  _L18 = _L14.distance;
  _L21 = _L15.distance;
  _L25 = _L18 == _L21;
  _L17 = _L14.speed;
  _L22 = _L15.speed;
  _L26 = _L17 == _L22;
  _L16 = _L14.valid;
  _L23 = _L15.valid;
  _L27 = _L16 == _L23;
  _L30 = last_vo;
  _L31 = 0;
  _L32 = _L30 > _L31;
  _L33 = _L30 < _L1;
  _L28 = _L24 & _L25 & _L26 & _L27 & _L32 & _L33;
  /* 1 */ if (_L28) {
    _L6 = _L30;
  }
  else {
    _L6 = _L1;
  }
  outC->vo = _L6;
  /* last_init_ck_vi */ if (outC->init) {
    last_vi = - 1;
  }
  else {
    last_vi = outC->rem_vi;
  }
  outC->rem_vi = vi;
  kcg_copy_Target_T_TargetManagement_types(&outC->rem_mrdt, mrdt);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

