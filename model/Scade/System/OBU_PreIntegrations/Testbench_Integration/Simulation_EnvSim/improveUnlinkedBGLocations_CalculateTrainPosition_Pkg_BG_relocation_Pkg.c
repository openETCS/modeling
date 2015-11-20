/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L6 */
  static kcg_int _L6;
  
  /* 1 */
  findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(BGs_in, &tmp1);
  for (i = 0; i < 41; i++) {
    /* 1 */
    improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp1[i],
      BGs_in,
      &tmp,
      &(*BGs_out)[i]);
    _L6 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L6; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*BGs_out)[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

