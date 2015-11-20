/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void AGradient_init_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 100; i++) {
    outC->_L1[i].position = 0.0;
    outC->_L1[i].gradient_acceleration = 0.0;
    outC->_L1[i].valid = kcg_true;
  }
  for (i1 = 0; i1 < 100; i1++) {
    outC->A_gradient[i1].position = 0.0;
    outC->A_gradient[i1].gradient_acceleration = 0.0;
    outC->A_gradient[i1].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_GradientAcceleration_Pkg::AGradient */
void AGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */ TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */ kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::AGradient */
  static A_gradient_t_SDM_GradientAcceleration_types tmp;
  /* SDM_GradientAcceleration_Pkg::AGradient */
  static A_gradient_t_SDM_GradientAcceleration_types op_call;
  /* SDM_GradientAcceleration_Pkg::AGradient */
  static kcg_bool ck_every;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L2 */
  static TrainLocations_real_T_SDM_Types_Pkg _L2;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L3 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L3;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L4 */
  static trainData_T_TIU_Types_Pkg _L4;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L10 */
  static TargetCollection_T_TargetManagement_types _L10;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L11 */
  static kcg_bool _L11;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L12 */
  static L_internal_real_Type_SDM_Types_Pkg _L12;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L13 */
  static TargetType_T_TargetManagement_types _L13;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L15 */
  static kcg_bool _L15;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L16 */
  static kcg_bool _L16;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L17 */
  static A_gradient_element_t_SDM_GradientAcceleration_types _L17;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L18 */
  static kcg_real _L18;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L19 */
  static kcg_bool _L19;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L20 */
  static A_gradient_t_SDM_GradientAcceleration_types _L20;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L21 */
  static kcg_bool _L21;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L22 */
  static TargetType_T_TargetManagement_types _L22;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L23 */
  static L_internal_real_Type_SDM_Types_Pkg _L23;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L25 */
  static kcg_bool _L25;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L24 */
  static Target_real_T_TargetManagement_types _L24;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L26 */
  static Target_real_T_TargetManagement_types _L26;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L27 */
  static TargetCollection_T_TargetManagement_types _L27;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L29 */
  static TargetCollection_T_TargetManagement_types _L29;
  
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L10, targetCollection);
  _L25 = _L10.updatedTargetList;
  _L11 = GradientProfile_updated;
  _L16 = _L25 | _L11;
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L27, targetCollection);
  kcg_copy_Target_real_T_TargetManagement_types(&_L24, &_L27.SvL_LoA_target);
  _L13 = _L24.targetType;
  _L22 = invalid_TargetManagement_types;
  _L21 = _L13 != _L22;
  _L15 = _L16 & _L21;
  ck_every = _L15;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L2, TrainLocations);
  _L23 = _L2.d_est_frontendPos;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L3,
    GradientProfile);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L4, trainData);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L29, targetCollection);
  kcg_copy_Target_real_T_TargetManagement_types(&_L26, &_L29.SvL_LoA_target);
  _L12 = _L26.distance;
  /* ck_AGradient */ if (ck_every) {
    /* 1 */
    CalcA_Gradient_SDM_GradientAcceleration_Pkg(
      _L23,
      &_L3,
      &_L4,
      _L12,
      &op_call);
  }
  _L18 = 0.0;
  _L19 = kcg_false;
  _L17.position = _L18;
  _L17.gradient_acceleration = _L18;
  _L17.valid = _L19;
  /* pow */ for (i = 0; i < 100; i++) {
    kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
      &_L20[i],
      &_L17);
  }
  /* ck_AGradient */ if (ck_every) {
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L1, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&tmp, &_L20);
    }
    else {
      kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&tmp, &outC->_L1);
    }
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L1, &tmp);
  }
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &outC->A_gradient,
    &outC->_L1);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

