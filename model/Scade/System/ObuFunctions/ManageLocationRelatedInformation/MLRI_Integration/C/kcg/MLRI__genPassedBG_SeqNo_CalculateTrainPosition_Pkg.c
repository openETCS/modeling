/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

void MLRI__genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  MLRI__countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */ kcg_bool keepPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */ kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */ kcg_int _L4;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L8;
  
  /* 1 */
  MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedBG,
    BGs,
    (*passedBG).valid,
    &_L4,
    &_L5,
    &keepPassedBGSeqNo);
  if ((0 <= _L4) & (_L4 < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L8, &(*BGs)[_L4]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L8,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  keepPassedBGSeqNo = _L8.valid & _L8.infoFromPassing.valid & _L5;
  /* 1 */
  MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
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
** MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

