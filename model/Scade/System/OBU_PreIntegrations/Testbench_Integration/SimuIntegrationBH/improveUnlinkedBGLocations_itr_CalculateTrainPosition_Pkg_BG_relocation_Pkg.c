/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
void improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BG_index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L4 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L4;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L10 */
  static kcg_int _L10;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L15 */
  static positionedBG_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L17 */
  static positionedBG_T_TrainPosition_Types_Pck _L17;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, BGs_in);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L4,
    BG_index_in);
  _L5 = _L4.currentIndex;
  if ((0 <= _L5) & (_L5 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, &_L1[_L5]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L8 = _L2.valid;
  *cont = _L8;
  _L9 = _L4.subsequentLinkedBG_idx;
  if ((0 <= _L9) & (_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L17, &_L1[_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L17,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L10 = _L4.previousLinkedBG_idx;
  if ((0 <= _L10) & (_L10 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L16, &_L1[_L10]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L16,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L17,
    &_L16,
    &_L2,
    &_L15);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

