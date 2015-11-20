/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePosition_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePosition */
void brakePosition_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePosition::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePosition::T_brake_cm */t_Brake_t_SDMModelPkg *T_brake_cm)
{
  static coeff_BrakeBasic_t_SDMConversionModelPkg tmp1;
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDMConversionModelPkg::brakePosition::_L10 */
  static T_internal_real_Type_SDM_Types_Pkg _L10;
  /* SDMConversionModelPkg::brakePosition::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::brakePosition::_L27 */
  static kcg_bool _L27;
  /* SDMConversionModelPkg::brakePosition::_L51 */
  static L_internal_real_Type_SDM_Types_Pkg _L51;
  
  _L51 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg((*trainData).trainLength);
  _L27 = _L51 <= cBrakePositionLengthShort_SDMConversionModelPkg;
  if (cBrakePositionLengthMin_SDMConversionModelPkg >= _L51) {
    _L10 = cBrakePositionLengthMin_SDMConversionModelPkg;
  }
  else {
    _L10 = _L51;
  }
  if (_L27) {
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Passenger_train :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionPassengerSCoeff_SDMConversionModelPkg);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionFreightShortSCoeff_SDMConversionModelPkg);
    }
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
      &tmp1,
      (coeff_BrakeBasic_t_SDMConversionModelPkg *)
        &cBrakePositionFreightLongSCoeff_SDMConversionModelPkg);
  }
  switch ((*trainData).trainCategory) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L17 = _L10;
      break;
    
    default :
      _L17 = _L51;
  }
  tmp = /* 3 */ T_BrakeBasic_SDMConversionModelPkg(&tmp1, _L17);
  switch ((*trainData).trainCategory) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L17 = cBrakePositionGCt_SDMConversionModelPkg + 1.0;
      break;
    
    default :
      _L17 = cBrakePositionPCt_SDMConversionModelPkg + 1.0;
  }
  (*T_brake_cm).service[0] = tmp;
  (*T_brake_cm).service[1] = tmp * _L17;
  if (_L27) {
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Freight_train_braked_in_G_position :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionGECoeff_SDMConversionModelPkg);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionPECoeff_SDMConversionModelPkg);
    }
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
      &tmp1,
      (coeff_BrakeBasic_t_SDMConversionModelPkg *)
        &cBrakePositionFreightLongECoeff_SDMConversionModelPkg);
  }
  switch ((*trainData).trainCategory) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      tmp = _L51;
      break;
    
    default :
      tmp = _L10;
  }
  _L10 = /* 1 */ T_BrakeBasic_SDMConversionModelPkg(&tmp1, tmp);
  (*T_brake_cm).emergency[0] = _L10;
  (*T_brake_cm).emergency[1] = _L10 * _L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** brakePosition_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

