/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
void deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::del */kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static array__156522 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L12 */
  static array__158687 _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L15 */
  static array__156522 _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L16 */
  static kcg_int _L16;
  
  _L8 = del & (indexOfBG >= 0) & (indexOfBG <
      cMaxNoOfStoredBGs_TrainPosition_Types_Pck);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L12[0],
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_array__166060(&tmp1[0], (array__166060 *) &(*BGs_in)[1]);
  kcg_copy_array__158687(&tmp1[40], &_L12);
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        indexOfBG,
        &(*BGs_in)[i],
        &tmp1[i],
        &tmp,
        &_L15[i]);
      _L16 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L16; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (_L8) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

