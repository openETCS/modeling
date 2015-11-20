/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */ positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L33 */
  static positionedBGs_T_TrainPosition_Types_Pck _L33;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L34 */
  static positionedBGs_T_TrainPosition_Types_Pck _L34;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L38 */
  static positionedBGs_T_TrainPosition_Types_Pck _L38;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L39 */
  static trainProperties_T_TrainPosition_Types_Pck _L39;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, referenceBG);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L39, trainProperties);
  /* 1 */
  recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L2,
    &_L1,
    &_L39,
    &_L33);
  /* 1 */
  recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L2,
    &_L33,
    &_L39,
    &_L34);
  /* 1 */
  improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L34,
    &_L38);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L38);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

