/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3 */
void op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::posRep */ Position_Report_TrainToTrack *posRep,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::nidPrvLrbg */ kcg_int *nidPrvLrbg,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_2 */ kcg_bool *cond_3_4_2_3_3_2,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_3 */ kcg_bool *cond_3_4_2_3_3_3,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_4 */ kcg_bool *cond_3_4_2_3_3_4)
{
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L4 */
  static Q_DIRTRAIN _L4;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L3 */
  static Position_Report_TrainToTrack _L3;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L7 */
  static kcg_int _L7;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L10 */
  static kcg_bool _L10;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L11 */
  static kcg_bool _L11;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L12 */
  static kcg_bool _L12;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L13 */
  static Q_DIRTRAIN _L13;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L15 */
  static Q_DIRTRAIN _L15;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L16 */
  static Q_DIRTRAIN _L16;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L17 */
  static kcg_bool _L17;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L18 */
  static kcg_bool _L18;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L19 */
  static kcg_bool _L19;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L20 */
  static kcg_bool _L20;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L21 */
  static kcg_bool _L21;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L22 */
  static kcg_bool _L22;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L23 */
  static kcg_int _L23;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L24 */
  static Q_DIRTRAIN _L24;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L42 */
  static Q_DIRTRAIN _L42;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L43 */
  static kcg_int _L43;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L44 */
  static NID_BG _L44;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L45 */
  static NID_BG _L45;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5, &_L2.prvLRBG);
  _L44 = _L5.nid_bg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9, &_L2.LRBG);
  _L45 = _L9.nid_bg;
  _L8 = _L44 != _L45;
  _L15 = Q_DIRTRAIN_Reverse;
  kcg_copy_Position_Report_TrainToTrack(&_L3, posRep);
  _L13 = _L3.dirtrain;
  _L14 = _L15 == _L13;
  _L16 = Q_DIRTRAIN_Nominal;
  _L4 = prvDirTrain;
  _L17 = _L16 == _L4;
  _L18 = _L14 & _L17;
  _L42 = Q_DIRTRAIN_Nominal;
  _L20 = _L13 == _L42;
  _L24 = Q_DIRTRAIN_Reverse;
  _L19 = _L4 == _L24;
  _L21 = _L20 & _L19;
  _L22 = _L18 | _L21;
  _L12 = _L8 & _L22;
  _L43 = 16777215;
  /* 1 */ if (_L12) {
    _L23 = _L43;
  }
  else {
    _L23 = _L44;
  }
  *nidPrvLrbg = _L23;
  *cond_3_4_2_3_3_4 = _L12;
  _L7 = 16777215;
  _L6 = _L44 != _L7;
  _L11 = !_L6;
  *cond_3_4_2_3_3_3 = _L11;
  _L10 = _L6 & _L8;
  *cond_3_4_2_3_3_2 = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

