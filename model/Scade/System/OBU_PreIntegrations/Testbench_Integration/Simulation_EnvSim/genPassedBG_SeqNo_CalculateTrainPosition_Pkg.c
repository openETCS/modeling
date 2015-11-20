/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */
  static kcg_bool keepPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */
  static positionedBG_T_TrainPosition_Types_Pck _L8;
  
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedBG,
    BGs,
    (*passedBG).valid,
    &_L4,
    &_L5,
    &keepPassedBGSeqNo);
  if ((0 <= _L4) & (_L4 < 41)) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

