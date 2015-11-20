/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePosition_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePosition */
void brakePosition_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePosition::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePosition::T_brake_cm */ t_Brake_t_SDMModelPkg *T_brake_cm)
{
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_2;
  /* math::Max::I2 */
  static kcg_real I2_2;
  /* math::Max::I1 */
  static kcg_real I1_2;
  /* math::Max::_L4 */
  static kcg_real _L4_2;
  /* math::Max::_L3 */
  static kcg_bool _L3_2;
  /* math::Max::_L2 */
  static kcg_real _L2_2;
  /* math::Max::_L1 */
  static kcg_real _L1_2;
  /* SDMConversionModelPkg::brakePosition::_L10 */
  static T_internal_real_Type_SDM_Types_Pkg _L10;
  /* SDMConversionModelPkg::brakePosition::_L14 */
  static t_Brake_t_SDMModelPkg _L14;
  /* SDMConversionModelPkg::brakePosition::_L16 */
  static kcg_real _L16;
  /* SDMConversionModelPkg::brakePosition::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::brakePosition::_L18 */
  static kcg_real _L18;
  /* SDMConversionModelPkg::brakePosition::_L19 */
  static kcg_real _L19;
  /* SDMConversionModelPkg::brakePosition::_L20 */
  static kcg_real _L20;
  /* SDMConversionModelPkg::brakePosition::_L21 */
  static kcg_real _L21;
  /* SDMConversionModelPkg::brakePosition::_L23 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L23;
  /* SDMConversionModelPkg::brakePosition::_L27 */
  static kcg_bool _L27;
  /* SDMConversionModelPkg::brakePosition::_L28 */
  static kcg_real _L28;
  /* SDMConversionModelPkg::brakePosition::_L29 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L29;
  /* SDMConversionModelPkg::brakePosition::_L31 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L31;
  /* SDMConversionModelPkg::brakePosition::_L33 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L33;
  /* SDMConversionModelPkg::brakePosition::_L34 */
  static kcg_real _L34;
  /* SDMConversionModelPkg::brakePosition::_L36 */
  static T_internal_real_Type_SDM_Types_Pkg _L36;
  /* SDMConversionModelPkg::brakePosition::_L37 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L37;
  /* SDMConversionModelPkg::brakePosition::_L38 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L38;
  /* SDMConversionModelPkg::brakePosition::_L39 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L39;
  /* SDMConversionModelPkg::brakePosition::_L40 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L40;
  /* SDMConversionModelPkg::brakePosition::_L41 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L41;
  /* SDMConversionModelPkg::brakePosition::_L42 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L42;
  /* SDMConversionModelPkg::brakePosition::_L45 */
  static t_BrakeVt_t_SDMModelPkg _L45;
  /* SDMConversionModelPkg::brakePosition::_L48 */
  static t_BrakeVt_t_SDMModelPkg _L48;
  /* SDMConversionModelPkg::brakePosition::_L49 */
  static trainData_T_TIU_Types_Pkg _L49;
  /* SDMConversionModelPkg::brakePosition::_L50 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L50;
  /* SDMConversionModelPkg::brakePosition::_L51 */
  static L_internal_real_Type_SDM_Types_Pkg _L51;
  /* SDMConversionModelPkg::brakePosition::_L52 */
  static NC_TRAIN _L52;
  /* SDMConversionModelPkg::brakePosition::_L53 */
  static L_internal_real_Type_SDM_Types_Pkg _L53;
  /* SDMConversionModelPkg::brakePosition::_L57 */
  static L_internal_real_Type_SDM_Types_Pkg _L57;
  /* SDMConversionModelPkg::brakePosition::_L58 */
  static L_internal_real_Type_SDM_Types_Pkg _L58;
  /* SDMConversionModelPkg::brakePosition::_L59 */
  static L_internal_real_Type_SDM_Types_Pkg _L59;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L49, trainData);
  _L50 = _L49.trainLength;
  _L51 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg(_L50);
  _L28 = cBrakePositionLengthShort_SDMConversionModelPkg;
  _L27 = _L51 <= _L28;
  _L52 = _L49.trainCategory;
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L31,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionGECoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L42,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionPECoeff_SDMConversionModelPkg);
  switch (_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L23, &_L31);
      break;
    
    default :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L23, &_L42);
  }
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L33,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightLongECoeff_SDMConversionModelPkg);
  /* 1 */ if (_L27) {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L29, &_L23);
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L29, &_L33);
  }
  _L53 = cBrakePositionLengthMin_SDMConversionModelPkg;
  I1_2 = _L53;
  _L1_2 = I1_2;
  I2_2 = _L51;
  _L2_2 = I2_2;
  _L3_2 = _L1_2 >= _L2_2;
  /* 2 */ if (_L3_2) {
    _L4_2 = _L1_2;
  }
  else {
    _L4_2 = _L2_2;
  }
  Ma_Output_2 = _L4_2;
  _L59 = Ma_Output_2;
  switch (_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L57 = _L51;
      break;
    
    default :
      _L57 = _L59;
  }
  _L10 = /* 1 */ T_BrakeBasic_SDMConversionModelPkg(&_L29, _L57);
  _L20 = cBrakePositionGCt_SDMConversionModelPkg;
  _L21 = cBrakePositionPCt_SDMConversionModelPkg;
  switch (_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L19 = _L20;
      break;
    
    default :
      _L19 = _L21;
  }
  _L18 = 1.0;
  _L17 = _L19 + _L18;
  _L16 = _L10 * _L17;
  _L45[0] = _L10;
  _L45[1] = _L16;
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L40,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionPassengerSCoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L41,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightShortSCoeff_SDMConversionModelPkg);
  switch (_L52) {
    case NC_TRAIN_Passenger_train :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L39, &_L40);
      break;
    
    default :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L39, &_L41);
  }
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &_L38,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightLongSCoeff_SDMConversionModelPkg);
  /* 2 */ if (_L27) {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L37, &_L39);
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L37, &_L38);
  }
  switch (_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L58 = _L59;
      break;
    
    default :
      _L58 = _L51;
  }
  _L36 = /* 3 */ T_BrakeBasic_SDMConversionModelPkg(&_L37, _L58);
  _L34 = _L36 * _L17;
  _L48[0] = _L36;
  _L48[1] = _L34;
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L14.emergency, &_L45);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L14.service, &_L48);
  kcg_copy_t_Brake_t_SDMModelPkg(T_brake_cm, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePosition_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

