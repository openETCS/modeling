/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
  static kcg_int acc;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L3 */
  static positionedBGs_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L2 */
  static kcg_int _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L5 */
  static kcg_int _L5;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, BGs_in);
  _L5 = 0;
  _L2 = _L5;
  for (i = 0; i < 41; i++) {
    acc = _L2;
    /* 1 */
    trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      acc,
      &_L1[i],
      &_L2,
      &_L3[i]);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L3);
  noname = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

