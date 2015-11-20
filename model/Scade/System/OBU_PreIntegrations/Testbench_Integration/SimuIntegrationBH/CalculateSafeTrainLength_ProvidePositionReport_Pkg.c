/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ L_TRAININT *safeTrainLength,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ kcg_int *minSafeRearEnd)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_2;
  /* math::Abs::A_Input */
  static kcg_int A_Input_2;
  /* math::Abs::_L8 */
  static kcg_int _L8_2;
  /* math::Abs::_L5 */
  static kcg_int _L5_2;
  /* math::Abs::_L3 */
  static kcg_int _L3_2;
  /* math::Abs::_L2 */
  static kcg_int _L2_2;
  /* math::Abs::_L1 */
  static kcg_bool _L1_2;
  /* math::Abs::A_Output */
  static kcg_int A_Output_3;
  /* math::Abs::A_Input */
  static kcg_int A_Input_3;
  /* math::Abs::_L8 */
  static kcg_int _L8_3;
  /* math::Abs::_L5 */
  static kcg_int _L5_3;
  /* math::Abs::_L3 */
  static kcg_int _L3_3;
  /* math::Abs::_L2 */
  static kcg_int _L2_3;
  /* math::Abs::_L1 */
  static kcg_bool _L1_3;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L1 */
  static trainProperties_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L3 */
  static L_TRAIN _L3;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L6 */
  static kcg_int _L6;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L12 */
  static kcg_bool _L12;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */
  static kcg_int _L20;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L21 */
  static Location_T_Obu_BasicTypes_Pkg _L21;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L22 */
  static kcg_int _L22;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L23 */
  static kcg_int _L23;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L24 */
  static kcg_int _L24;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L1, trainProps);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPosition);
  _L8_2 = 0;
  _L12 = _L2.valid;
  _L9 = _L2.minSafeFrontEndPosition;
  _L3 = _L1.l_train;
  _L6 = _L9 - _L3;
  _L11 = cMinSafeRearEnd_ProvidePositionReport_Pkg;
  /* 1 */ if (_L12) {
    _L24 = _L6;
  }
  else {
    _L24 = _L11;
  }
  _L21 = _L2.estimatedFrontEndPosition;
  _L20 = _L24 - _L21;
  A_Input_2 = _L20;
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
  _L22 = A_Output_2;
  *safeTrainLength = _L22;
  _L8_3 = 0;
  A_Input_3 = _L24;
  _L5_3 = A_Input_3;
  _L1_3 = _L8_3 <= _L5_3;
  _L3_3 = - _L5_3;
  /* 2 */ if (_L1_3) {
    _L2_3 = _L5_3;
  }
  else {
    _L2_3 = _L3_3;
  }
  A_Output_3 = _L2_3;
  _L23 = A_Output_3;
  *minSafeRearEnd = _L23;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

