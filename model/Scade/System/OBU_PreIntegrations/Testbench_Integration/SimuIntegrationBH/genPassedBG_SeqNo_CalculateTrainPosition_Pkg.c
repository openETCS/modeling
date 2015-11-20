/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  outC->seqNo = 0;
  /* 1 */
  countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */ kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */
  static kcg_bool keepPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::incrPassedBGSeqNo */
  static kcg_bool incrPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L1 */
  static passedBG_T_BG_Types_Pkg _L1;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */
  static positionedBG_T_TrainPosition_Types_Pck _L8;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L10 */
  static kcg_bool _L10;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L15 */
  static kcg_bool _L15;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L16 */
  static kcg_bool _L16;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L19 */
  static kcg_int _L19;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L20 */
  static kcg_int _L20;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L22 */
  static kcg_bool _L22;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L1, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs);
  _L3 = reset;
  _L9 = _L1.valid;
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    &_L2,
    _L9,
    &_L4,
    &_L5,
    &_L6);
  if ((0 <= _L4) & (_L4 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L8, &_L2[_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L8,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  noname = _L6;
  _L10 = _L8.valid;
  _L11 = _L8.infoFromPassing.valid;
  _L12 = _L10 & _L11 & _L5;
  keepPassedBGSeqNo = _L12;
  _L22 = kcg_true;
  _L13 = _L22 & _L9;
  _L14 = !_L5;
  incrPassedBGSeqNo = _L13;
  _L15 = incrPassedBGSeqNo;
  _L16 = keepPassedBGSeqNo;
  _L17 = !_L16;
  _L18 = _L17 & _L15;
  /* 1 */
  countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    _L18,
    _L3,
    &outC->Context_1);
  _L19 = outC->Context_1.counter;
  _L20 = _L8.seqNoOnTrack;
  /* 1 */ if (_L16) {
    _L21 = _L20;
  }
  else {
    _L21 = _L19;
  }
  outC->seqNo = _L21;
  _1_noname = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

