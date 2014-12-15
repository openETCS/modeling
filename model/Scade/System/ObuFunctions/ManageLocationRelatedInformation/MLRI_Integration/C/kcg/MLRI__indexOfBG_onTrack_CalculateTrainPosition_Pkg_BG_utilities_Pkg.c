/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Determines the index of BG in BGs - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "Version : 00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
void MLRI__indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG_found */kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexValid */kcg_bool *indexValid)
{
  kcg_int tmp2;
  kcg_int i;
  kcg_bool tmp1;
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp;
  
  *indexOfBG = MLRI__cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 8; i++) {
      tmp2 = *indexOfBG;
      /* 1 */
      MLRI__indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp2,
        BG,
        &(*BGs)[i],
        &tmp1,
        indexOfBG);
      if (!tmp1) {
        break;
      }
    }
  }
  *indexValid = *indexOfBG != MLRI__cNoValidIndex_CalculateTrainPosition_Pkg;
  if ((0 <= *indexOfBG) & (*indexOfBG < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*BGs)[*indexOfBG]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  tmp1 = /* 1 */
    MLRI__positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BG,
      &tmp);
  *BG_found = *indexValid & tmp1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

