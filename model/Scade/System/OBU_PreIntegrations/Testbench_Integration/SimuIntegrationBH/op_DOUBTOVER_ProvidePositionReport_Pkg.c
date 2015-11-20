/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTOVER */
L_DOUBTOVER op_DOUBTOVER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_1;
  /* math::Abs::A_Input */
  static kcg_int A_Input_1;
  /* math::Abs::_L8 */
  static kcg_int _L8_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1;
  /* math::Abs::_L3 */
  static kcg_int _L3_1;
  /* math::Abs::_L2 */
  static kcg_int _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L1 */
  static trainPosition_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L4 */
  static Location_T_Obu_BasicTypes_Pkg _L4;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L7 */
  static Location_T_Obu_BasicTypes_Pkg _L7;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L10 */
  static kcg_int _L10;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::l_doubtover */
  static L_DOUBTOVER l_doubtover;
  
  _L8_1 = 0;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L1, trainPos);
  _L4 = _L1.estimatedFrontEndPosition;
  _L7 = _L1.minSafeFrontEndPosition;
  _L11 = _L4 - _L7;
  A_Input_1 = _L11;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L10 = A_Output_1;
  l_doubtover = _L10;
  return l_doubtover;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_DOUBTOVER_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

