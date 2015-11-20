/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L2 */
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L3 */
  static positionedBGs_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L6 */
  static kcg_int _L6;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L8 */
  static array_169086 _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L12 */
  static kcg_bool _L12;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L3, BGs_in);
  /* 1 */
  findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&_L3, &_L2);
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L8[i1], &_L3);
  }
  _L12 = kcg_true;
  if (_L12) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
        &_L2[i],
        &_L8[i],
        &cond_iterw,
        &_L5[i]);
      _L6 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L6 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L6; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L5[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L5);
  noname = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

