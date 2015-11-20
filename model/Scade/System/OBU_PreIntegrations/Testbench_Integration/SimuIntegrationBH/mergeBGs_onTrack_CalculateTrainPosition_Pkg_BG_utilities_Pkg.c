/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L8 */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L12 */
  static positionedBGs_T_TrainPosition_Types_Pck _L12;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, BGs_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs_2);
  _L9 = kcg_false;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L8.BGs, &_L1);
  _L8.overrun = _L9;
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(&_L7, &_L8);
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(&acc, &_L7);
    /* 1 */
    mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &acc,
      &_L2[i],
      &_L7);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L12, &_L7.BGs);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L12);
  _L13 = _L7.overrun;
  *overrun = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

