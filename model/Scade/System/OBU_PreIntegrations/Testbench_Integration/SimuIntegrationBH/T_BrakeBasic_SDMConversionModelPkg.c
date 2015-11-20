/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_BrakeBasic_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::T_BrakeBasic */
T_internal_real_Type_SDM_Types_Pkg T_BrakeBasic_SDMConversionModelPkg(
  /* SDMConversionModelPkg::T_BrakeBasic::coeff */ coeff_BrakeBasic_t_SDMConversionModelPkg *coeff,
  /* SDMConversionModelPkg::T_BrakeBasic::trainLength */ L_internal_real_Type_SDM_Types_Pkg trainLength)
{
  /* SDMConversionModelPkg::T_BrakeBasic::_L1 */
  static coeff_BrakeBasic_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::T_BrakeBasic::_L7 */
  static T_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDMConversionModelPkg::T_BrakeBasic::_L6 */
  static T_internal_real_Type_SDM_Types_Pkg _L6;
  /* SDMConversionModelPkg::T_BrakeBasic::_L5 */
  static T_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDMConversionModelPkg::T_BrakeBasic::_L12 */
  static L_internal_real_Type_SDM_Types_Pkg _L12;
  /* SDMConversionModelPkg::T_BrakeBasic::_L13 */
  static kcg_real _L13;
  /* SDMConversionModelPkg::T_BrakeBasic::_L14 */
  static kcg_real _L14;
  /* SDMConversionModelPkg::T_BrakeBasic::_L15 */
  static kcg_real _L15;
  /* SDMConversionModelPkg::T_BrakeBasic::_L16 */
  static kcg_real _L16;
  /* SDMConversionModelPkg::T_BrakeBasic::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::T_BrakeBasic::T_BB */
  static T_internal_real_Type_SDM_Types_Pkg T_BB;
  
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&_L1, coeff);
  _L7 = _L1[2];
  _L6 = _L1[1];
  _L5 = _L1[0];
  _L12 = trainLength;
  _L14 = 100.0;
  _L13 = _L12 / _L14;
  _L16 = _L13 * _L6;
  _L17 = _L13 * _L13 * _L7;
  _L15 = _L5 + _L16 + _L17;
  T_BB = _L15;
  return T_BB;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_BrakeBasic_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

