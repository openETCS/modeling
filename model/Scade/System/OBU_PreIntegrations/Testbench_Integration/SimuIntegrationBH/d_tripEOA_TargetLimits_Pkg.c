/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_tripEOA_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_tripEOA */
L_internal_real_Type_SDM_Types_Pkg d_tripEOA_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_tripEOA::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::d_tripEOA::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::d_tripEOA::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int)
{
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_1;
  /* math::Max::I2 */
  static kcg_real I2_1;
  /* math::Max::I1 */
  static kcg_real I1_1;
  /* math::Max::_L4 */
  static kcg_real _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_real _L2_1;
  /* math::Max::_L1 */
  static kcg_real _L1_1;
  /* math::Abs::A_Output */
  static kcg_real A_Output_2;
  /* math::Abs::A_Input */
  static kcg_real A_Input_2;
  /* math::Abs::_L8 */
  static kcg_real _L8_2;
  /* math::Abs::_L5 */
  static kcg_real _L5_2;
  /* math::Abs::_L3 */
  static kcg_real _L3_2;
  /* math::Abs::_L2 */
  static kcg_real _L2_2;
  /* math::Abs::_L1 */
  static kcg_bool _L1_2;
  /* TargetLimits_Pkg::d_tripEOA::_L4 */
  static kcg_real _L4;
  /* TargetLimits_Pkg::d_tripEOA::_L7 */
  static kcg_real _L7;
  /* TargetLimits_Pkg::d_tripEOA::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::d_tripEOA::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_tripEOA::_L13 */
  static kcg_real _L13;
  /* TargetLimits_Pkg::d_tripEOA::_L14 */
  static kcg_real _L14;
  /* TargetLimits_Pkg::d_tripEOA::_L15 */
  static L_internal_real_Type_SDM_Types_Pkg _L15;
  /* TargetLimits_Pkg::d_tripEOA::_L16 */
  static kcg_real _L16;
  /* TargetLimits_Pkg::d_tripEOA::_L24 */
  static L_internal_real_Type_SDM_Types_Pkg _L24;
  /* TargetLimits_Pkg::d_tripEOA::_L23 */
  static L_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::d_tripEOA::_L22 */
  static TrainLocations_real_T_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::d_tripEOA::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* TargetLimits_Pkg::d_tripEOA::_L20 */
  static L_internal_real_Type_SDM_Types_Pkg _L20;
  /* TargetLimits_Pkg::d_tripEOA::_L32 */
  static L_internal_real_Type_SDM_Types_Pkg _L32;
  /* TargetLimits_Pkg::d_tripEOA::_L31 */
  static kcg_real _L31;
  /* TargetLimits_Pkg::d_tripEOA::_L29 */
  static kcg_real _L29;
  /* TargetLimits_Pkg::d_tripEOA::_L33 */
  static trainData_internal_t_SDM_Types_Pkg _L33;
  /* TargetLimits_Pkg::d_tripEOA::_L34 */
  static L_internal_real_Type_SDM_Types_Pkg _L34;
  /* TargetLimits_Pkg::d_tripEOA::D_tripEOA */
  static L_internal_real_Type_SDM_Types_Pkg D_tripEOA;
  
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L33, trainData_int);
  _L21 = _L33.offsetAntennaL1;
  _L34 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg(_L21);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L22, trainLocations);
  _L20 = _L22.d_maxSafeFrontEndPos;
  _L23 = _L22.d_minSafeFrontEndPos;
  _L10 = _L20 - _L23;
  I1_1 = _L10;
  _L1_1 = I1_1;
  _L24 = _L22.d_accLRBG;
  _L13 = 10.0;
  _L14 = 0.1;
  _L8_2 = 0.;
  _L15 = D_EOA;
  _L32 = _L22.d_LRBG;
  _L31 = _L15 - _L32;
  A_Input_2 = _L31;
  _L5_2 = A_Input_2;
  _L1_2 = _L8_2 <= _L5_2;
  _L3_2 = - _L5_2;
  /* 2 */ if (_L1_2) {
    _L2_2 = _L5_2;
  }
  else {
    _L2_2 = _L3_2;
  }
  A_Output_2 = _L2_2;
  _L29 = A_Output_2;
  _L16 = _L14 * _L29;
  _L12 = _L24 + _L24 + _L13 + _L16;
  I2_1 = _L12;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L7 = Ma_Output_1;
  _L4 = _L34 + _L7 + _L29;
  D_tripEOA = _L4;
  return D_tripEOA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_tripEOA_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

