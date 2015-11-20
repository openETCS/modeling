/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */ GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *CompensatedProfile)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
  static ACC_SDM_GradientAcceleration_Pkg acc;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::initilizedCompensatedProfile */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types initilizedCompensatedProfile;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front_index */
  static kcg_int d_est_front_index;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::rear_end_index */
  static kcg_int rear_end_index;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L1 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L1;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L3 */
  static ACC_SDM_GradientAcceleration_Pkg _L3;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L5 */
  static kcg_int _L5;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L6 */
  static L_internal_real_Type_SDM_Types_Pkg _L6;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L7 */
  static array_real_100 _L7;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L8 */
  static array_170168 _L8;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L9 */
  static ACC_SDM_GradientAcceleration_Pkg _L9;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L11 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L11;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L12 */
  static kcg_real _L12;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L13 */
  static kcg_bool _L13;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L15 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L15;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L16 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L16;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L17 */
  static kcg_bool _L17;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L18 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L18;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L37 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L37;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L45 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L45;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L52 */
  static kcg_int _L52;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L66 */
  static kcg_int _L66;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L88 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L88;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L89 */
  static kcg_int _L89;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L90 */
  static kcg_int _L90;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L92 */
  static L_internal_real_Type_SDM_Types_Pkg _L92;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L91 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L91;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L93 */
  static trainData_T_TIU_Types_Pkg _L93;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L94 */
  static kcg_real _L94;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L95 */
  static L_internal_real_Type_SDM_Types_Pkg _L95;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L96 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L96;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L97 */
  static L_internal_real_Type_SDM_Types_Pkg _L97;
  
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L1,
    GradientProfile);
  _L21 = d_est_front;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L45,
    GradientProfile);
  _L97 = d_est_front;
  _L89 = /* SearchIndexInGradientProfile */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(&_L45, _L97);
  d_est_front_index = _L89;
  _L52 = d_est_front_index;
  _L95 = d_est_front;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L93, trainData);
  _L91 = _L93.trainLength;
  _L92 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg(_L91);
  _L94 = _L95 - _L92;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L96,
    GradientProfile);
  _L90 = /* 1 */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(&_L96, _L94);
  rear_end_index = _L90;
  _L66 = rear_end_index;
  _L12 = 0.0;
  _L13 = kcg_false;
  _L11.location = _L12;
  _L11.gradient = _L12;
  _L11.valid = _L13;
  /* pow */ for (i3 = 0; i3 < 100; i3++) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L18[i3],
      &_L11);
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &initilizedCompensatedProfile,
    &_L18);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L37,
    &initilizedCompensatedProfile);
  _L9.frontPos = _L21;
  _L9.frontIndex = _L52;
  _L9.rearPos = _L94;
  _L9.rearIndex = _L66;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L9.compensatedGradientProfile,
    &_L37);
  _L6 = SvLPosition;
  /* pow */ for (i2 = 0; i2 < 100; i2++) {
    _L7[i2] = _L6;
  }
  /* pow */ for (i1 = 0; i1 < 100; i1++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &_L8[i1],
      &_L1);
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L15,
    GradientProfile);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &_L16,
    &_L15[0]);
  _L17 = _L16.valid;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L3, &_L9);
  if (_L17) {
    for (i = 0; i < 100; i++) {
      kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&acc, &_L3);
      /* 1 */
      internalCycle_SDM_GradientAcceleration_Pkg(
        i,
        &acc,
        _L7[i],
        &_L8[i],
        &cond_iterw,
        &_L3);
      _L5 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L5 = 0;
  }
  noname = _L5;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L88,
    &_L3.compensatedGradientProfile);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    CompensatedProfile,
    &_L88);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

