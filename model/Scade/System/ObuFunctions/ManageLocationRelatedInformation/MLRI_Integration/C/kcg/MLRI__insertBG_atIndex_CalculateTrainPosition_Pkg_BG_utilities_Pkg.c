/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
void MLRI__insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */kcg_bool insert,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::overrun */kcg_bool *overrun)
{
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp2;
  MLRI__positionedBGs_T_TrainPosition_Types_Pck tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L12 */ MLRI__array__23490 _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L15 */ MLRI__array__21407 _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L16 */ kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L34 */ kcg_bool _L34;
  
  if ((0 <= indexOfBG) & (indexOfBG < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp2,
      &(*BGs_in)[indexOfBG]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp2,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  tmp = /* 1 */
    MLRI__positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp2,
      BG);
  *overrun = !tmp & (*BGs_in)[7].valid;
  _L34 = insert & (indexOfBG >= 0) & (indexOfBG <
      MLRI__cMaxNoOfStoredBGs_TrainPosition_Types_Pck) & (*BG).valid &
    !*overrun;
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L12[0],
    (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
      &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (tmp) {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp1, BGs_in);
  }
  else {
    MLRI__kcg_copy_array__23490(&tmp1[0], &_L12);
    MLRI__kcg_copy_array__24642(&tmp1[1], (MLRI__array__24642 *) &(*BGs_in)[0]);
  }
  if (_L34) {
    for (i = 0; i < 8; i++) {
      /* 1 */
      MLRI__insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        indexOfBG,
        BG,
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
  
  for (i = _L16; i < 8; i++) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L15[i],
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (_L34) {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L15);
  }
  else {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

