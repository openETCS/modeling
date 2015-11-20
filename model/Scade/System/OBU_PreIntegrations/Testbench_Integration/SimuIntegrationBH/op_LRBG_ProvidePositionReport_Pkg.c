/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_LRBG */
kcg_int op_LRBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_LRBG::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_LRBG::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
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
  /* ProvidePositionReport_Pkg::op_LRBG::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* ProvidePositionReport_Pkg::op_LRBG::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::op_LRBG::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* ProvidePositionReport_Pkg::op_LRBG::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::op_LRBG::_L15 */
  static kcg_bool _L15;
  /* ProvidePositionReport_Pkg::op_LRBG::_L16 */
  static kcg_bool _L16;
  /* ProvidePositionReport_Pkg::op_LRBG::_L18 */
  static kcg_bool _L18;
  /* ProvidePositionReport_Pkg::op_LRBG::_L19 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L19;
  /* ProvidePositionReport_Pkg::op_LRBG::_L20 */
  static kcg_int _L20;
  /* ProvidePositionReport_Pkg::op_LRBG::_L31 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L31;
  /* ProvidePositionReport_Pkg::op_LRBG::_L32 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L32;
  /* ProvidePositionReport_Pkg::op_LRBG::_L33 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L33;
  /* ProvidePositionReport_Pkg::op_LRBG::_L37 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L37;
  /* ProvidePositionReport_Pkg::op_LRBG::_L39 */
  static positionedBG_T_TrainPosition_Types_Pck _L39;
  /* ProvidePositionReport_Pkg::op_LRBG::_L38 */
  static kcg_bool _L38;
  /* ProvidePositionReport_Pkg::op_LRBG::d_lrbg */
  static kcg_int d_lrbg;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPos);
  _L14 = _L2.valid;
  _L15 = _L2.trainPositionIsUnknown;
  _L16 = !_L15;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, posBGs);
  /* op_GetLRBGfromBGs */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(&_L1, &_L2, &_L38, &_L39);
  _L18 = _L14 & _L16 & _L38;
  _L8_1 = 0;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L32, &_L2.trainPosition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L37, &_L39.location);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L32, &_L37, &_L31);
  _L33 = _L31.nominal;
  A_Input_1 = _L33;
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
  _L19 = A_Output_1;
  _L20 = 32767;
  /* 5 */ if (_L18) {
    _L13 = _L19;
  }
  else {
    _L13 = _L20;
  }
  d_lrbg = _L13;
  return d_lrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_LRBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

