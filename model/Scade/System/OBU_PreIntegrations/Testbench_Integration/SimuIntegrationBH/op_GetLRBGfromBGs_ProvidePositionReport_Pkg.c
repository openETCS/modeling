/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
void op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */ positionedBG_T_TrainPosition_Types_Pck *lrbg)
{
  static kcg_int i1;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
  static kcg_bool acc;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L3 */
  static kcg_int _L3;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L5 */
  static kcg_bool _L5;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L8 */
  static array_int_41 _L8;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L13 */
  static NID_BG _L13;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L14 */
  static positionedBG_T_TrainPosition_Types_Pck _L14;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L15 */
  static kcg_int _L15;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L16 */
  static kcg_int _L16;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, posBGs);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L14,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cPassedBG_ProvidePositionReport_Pkg);
  _L6 = kcg_false;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, &_L2.LRBG);
  _L13 = _L7.nid_bg;
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    _L8[i1] = _L13;
  }
  _L5 = kcg_true;
  _L4 = _L6;
  if (_L5) {
    for (i = 0; i < 41; i++) {
      acc = _L4;
      /* 1 */
      op_findBG_ProvidePositionReport_Pkg(
        acc,
        &_L1[i],
        _L8[i],
        &cond_iterw,
        &_L4);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  _L16 = 1;
  _L15 = _L3 - _L16;
  if ((0 <= _L15) & (_L15 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9, &_L1[_L15]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9, &_L14);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(lrbg, &_L9);
  *found = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_GetLRBGfromBGs_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

