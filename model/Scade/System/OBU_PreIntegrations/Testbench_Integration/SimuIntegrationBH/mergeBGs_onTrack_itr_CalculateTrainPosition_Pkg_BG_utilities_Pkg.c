/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr */
void mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_in */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_out */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L2 */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L12 */
  static positionedBGs_T_TrainPosition_Types_Pck _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L14 */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L17 */
  static positionedBGs_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L19 */
  static kcg_bool _L19;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, BG);
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(&_L2, BGs_in);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, &_L2.BGs);
  /* 1 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    &_L17,
    &_L12,
    &_L13);
  _L18 = _L2.overrun;
  _L19 = _L13 | _L18;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L14.BGs, &_L12);
  _L14.overrun = _L19;
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(BGs_out, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

