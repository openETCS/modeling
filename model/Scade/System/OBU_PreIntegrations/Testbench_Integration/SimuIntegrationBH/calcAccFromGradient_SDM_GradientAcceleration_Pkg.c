/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::calcAccFromGradient */
void calcAccFromGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::GradientSection */ Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSection,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::A_gradient_section */ A_gradient_element_t_SDM_GradientAcceleration_types *A_gradient_section)
{
  /* math::InRangeInIn::IRII_Output */
  static kcg_bool IRII_Output_1;
  /* math::InRangeInIn::B */
  static kcg_int B_1;
  /* math::InRangeInIn::A */
  static kcg_int A_1;
  /* math::InRangeInIn::IRII_Input */
  static kcg_int IRII_Input_1;
  /* math::InRangeInIn::_L8 */
  static kcg_int _L8_1;
  /* math::InRangeInIn::_L4 */
  static kcg_bool _L4_1;
  /* math::InRangeInIn::_L2 */
  static kcg_bool _L2_1;
  /* math::InRangeInIn::_L13 */
  static kcg_int _L13_1;
  /* math::InRangeInIn::_L12 */
  static kcg_bool _L12_1;
  /* math::InRangeInIn::_L10 */
  static kcg_int _L10_1;
  /* math::InRangeInIn::A1 */
  static kcg_bool A1_1;
  static trainData_T_TIU_Types_Pkg noname;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L4 */
  static Percentage_T_SDM_Types_Pkg _L4;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L5 */
  static kcg_bool _L5;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L6 */
  static kcg_real _L6;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L7 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L7;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L9 */
  static kcg_real _L9;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L10 */
  static kcg_real _L10;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L15 */
  static kcg_int _L15;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L14 */
  static kcg_int _L14;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L16 */
  static kcg_int _L16;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L20 */
  static kcg_int _L20;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L24 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L24;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L25 */
  static A_gradient_element_t_SDM_GradientAcceleration_types _L25;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L26 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L26;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L27 */
  static L_internal_real_Type_SDM_Types_Pkg _L27;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L28 */
  static kcg_bool _L28;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L30 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L30;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L31 */
  static A_internal_real_Type_SDM_Types_Pkg _L31;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L32 */
  static Percentage_T_SDM_Types_Pkg _L32;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L33 */
  static Percentage_T_SDM_Types_Pkg _L33;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L34 */
  static kcg_int _L34;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L35 */
  static kcg_bool _L35;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L36 */
  static kcg_int _L36;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L37 */
  static kcg_int _L37;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L38 */
  static trainData_T_TIU_Types_Pkg _L38;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L40 */
  static kcg_int _L40;
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::_L41 */
  static kcg_real _L41;
  
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &_L26,
    GradientSection);
  _L27 = _L26.location;
  _L30 = A_gravity_SDM_Types_Pkg;
  _L31 = /* 1 */ TransformA_intToA_real_SDM_Types_Pkg(_L30);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &_L7,
    GradientSection);
  _L24 = _L7.gradient;
  _L9 = _L31 * _L24;
  _L15 = 1000;
  _L37 = 50;
  B_1 = _L37;
  _L13_1 = B_1;
  _L40 = 0;
  IRII_Input_1 = _L40;
  _L8_1 = IRII_Input_1;
  _L12_1 = _L13_1 >= _L8_1;
  _L36 = 1;
  A_1 = _L36;
  _L10_1 = A_1;
  _L4_1 = _L8_1 >= _L10_1;
  _L2_1 = _L12_1 & _L4_1;
  IRII_Output_1 = _L2_1;
  _L35 = IRII_Output_1;
  _L6 = 0.0;
  _L5 = _L24 <= _L6;
  _L33 = M_rotating_min_SDM_Types_Pkg;
  _L32 = M_rotating_max_SDM_Types_Pkg;
  /* 1 */ if (_L5) {
    _L4 = _L33;
  }
  else {
    _L4 = _L32;
  }
  /* 2 */ if (_L35) {
    _L34 = _L40;
  }
  else {
    _L34 = _L4;
  }
  _L20 = 10;
  _L16 = _L34 * _L20;
  _L14 = _L15 + _L16;
  _L41 = (kcg_real) _L14;
  _L10 = _L9 / _L41;
  _L28 = _L26.valid;
  _L25.position = _L27;
  _L25.gradient_acceleration = _L10;
  _L25.valid = _L28;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
    A_gradient_section,
    &_L25);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L38, trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&noname, &_L38);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcAccFromGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

