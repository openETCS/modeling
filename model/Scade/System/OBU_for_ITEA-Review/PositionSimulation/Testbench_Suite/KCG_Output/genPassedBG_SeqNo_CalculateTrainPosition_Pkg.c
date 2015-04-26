/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

void genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  outC->seqNo = 0;
  countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(&outC->Context_1);
}


void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */ kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */ kcg_bool keepPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */ kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */ kcg_int _L4;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */ positionedBG_T_TrainPosition_Types_Pck _L8;
  
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedBG,
    BGs,
    (*passedBG).valid,
    &_L4,
    &_L5,
    &keepPassedBGSeqNo);
  if ((0 <= _L4) & (_L4 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L8, &(*BGs)[_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L8,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  keepPassedBGSeqNo = _L8.valid & _L8.infoFromPassing.valid & _L5;
  /* 1 */
  countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    (kcg_bool) (!keepPassedBGSeqNo & (*passedBG).valid),
    reset,
    &outC->Context_1);
  if (keepPassedBGSeqNo) {
    outC->seqNo = _L8.seqNoOnTrack;
  }
  else {
    outC->seqNo = outC->Context_1.counter;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

