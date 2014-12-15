/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void MLRI__validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::passedBG_in */MLRI__passedBG_T_BG_Types_Pkg *passedBG_in,
  /* ValidateDataDirection_Pkg::validateDataDirection::LRBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out)
{
  MLRI__array__21370 tmp;
  kcg_int i;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L95 */ MLRI__BG_Orientation_T_BG_Types_Pkg _L95;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L105 */ kcg_bool _L105;
  
  (*passedBG_out).valid = (*passedBG_in).valid;
  MLRI__kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &(*passedBG_out).bgPosition,
    &(*passedBG_in).bgPosition);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*passedBG_out).BG_centerDetectionInaccuraccuracies,
    &(*passedBG_in).BG_centerDetectionInaccuraccuracies);
  (*passedBG_out).q_nvlocacc = (*passedBG_in).q_nvlocacc;
  MLRI__kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*passedBG_out).BG_Header,
    &(*passedBG_in).BG_Header);
  (*passedBG_out).noCoordinateSystemHasBeenAssigned =
    (*passedBG_in).noCoordinateSystemHasBeenAssigned;
  (*passedBG_out).trainOrientationToBG = (*passedBG_in).trainOrientationToBG;
  (*passedBG_out).trainRunningDirectionToBG =
    (*passedBG_in).trainRunningDirectionToBG;
  _L105 = (*trainPosition).trainPositionIsUnknown |
    ((*passedBG_in).noCoordinateSystemHasBeenAssigned & (*passedBG_in).valid &
      (MLRI__N_TOTAL_1_balise_in_the_group ==
        (*passedBG_in).BG_Header.n_total));
  _L95 = /* 1 */
    MLRI__DetermineBGOrientation_ValidateDataDirection_Pkg_DetermineBG_Orientation_Pkg(
      passedBG_in,
      LRBG);
  for (i = 0; i < 4; i++) {
    /* 4 */
    MLRI__modifyLinkedBG_ValidateDataDirection_Pkg(
      _L105,
      &(*passedBG_in).linkedBGs[i],
      _L95,
      &tmp[i]);
  }
  MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg(&(*passedBG_out).linkedBGs, &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

