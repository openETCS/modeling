/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead */
void recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::referenceBG */ positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc;
  static kcg_int i;
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L3 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L4 */
  static positionedBGs_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L7 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L7;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L8 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L9 */
  static trainProperties_T_TrainPosition_Types_Pck _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L10 */
  static array_168973 _L10;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, referenceBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs_in);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L7,
    (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&_L8, &_L7);
  if (kcg_true) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L8.refBG, &_L1);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L9, trainProperties);
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L10[i1], &_L9);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&_L3, &_L8);
  for (i = 0; i < 41; i++) {
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&acc, &_L3);
    /* 1 */
    recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &_L2[i],
      &_L10[i],
      &_L3,
      &_L4[i]);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L4);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&noname, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

