/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr */
void trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::prevSeqNo */ kcg_int prevSeqNo,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::seqNo */ kcg_int *seqNo,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L13 */
  static kcg_int _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L14 */
  static kcg_int _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L15 */
  static kcg_int _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, BG_in);
  _L3 = _L2.valid;
  _L4 = _L2.infoFromPassing.valid;
  _L6 = _L3 & _L4;
  _L8 = _L2.seqNoOnTrack;
  _L13 = prevSeqNo;
  _L15 = 1;
  _L14 = _L13 + _L15;
  /* 1 */ if (_L6) {
    _L7 = _L8;
  }
  else {
    _L7 = _L14;
  }
  *seqNo = _L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L16, &_L2);
  if (kcg_true) {
    _L16.seqNoOnTrack = _L7;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

