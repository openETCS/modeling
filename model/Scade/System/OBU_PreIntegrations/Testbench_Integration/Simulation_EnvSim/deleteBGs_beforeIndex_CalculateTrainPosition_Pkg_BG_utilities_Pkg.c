/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
void deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::del */kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L20 */
  static array__156522 _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L21 */
  static kcg_int _L21;
  
  _L8 = del & (indexOfBG > 0) & (indexOfBG <
      cMaxNoOfStoredBGs_TrainPosition_Types_Pck);
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        indexOfBG,
        BGs_in,
        &tmp,
        &_L20[i]);
      _L21 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L21 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L21; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L20[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (_L8) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L20);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

