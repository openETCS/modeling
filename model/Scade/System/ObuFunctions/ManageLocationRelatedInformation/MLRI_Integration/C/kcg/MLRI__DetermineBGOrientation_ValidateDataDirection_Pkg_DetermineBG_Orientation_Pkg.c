/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__DetermineBGOrientation_ValidateDataDirection_Pkg_DetermineBG_Orientation_Pkg.h"

/* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation */
MLRI__BG_Orientation_T_BG_Types_Pkg MLRI__DetermineBGOrientation_ValidateDataDirection_Pkg_DetermineBG_Orientation_Pkg(
  /* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation::passedBG_in */MLRI__passedBG_T_BG_Types_Pkg *passedBG_in,
  /* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation::lrbg */MLRI__positionedBG_T_TrainPosition_Types_Pck *lrbg)
{
  /* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation::BGIsLinked */ kcg_bool BGIsLinked;
  /* ValidateDataDirection_Pkg::DetermineBG_Orientation_Pkg::DetermineBGOrientation::bgOrientation */ MLRI__BG_Orientation_T_BG_Types_Pkg bgOrientation;
  
  BGIsLinked = (*lrbg).valid & (MLRI__Q_LINK_Linked == (*lrbg).q_link);
  if (BGIsLinked) {
    if ((*lrbg).infoFromLinking.linkingInfo.q_linkorientation ==
      MLRI__Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction) {
      bgOrientation = MLRI__BG_Orientation_Reverse_BG_Types_Pkg;
    }
    else {
      bgOrientation = MLRI__BG_Orientation_Nominal_BG_Types_Pkg;
    }
  }
  else {
    else_clock_IfBlock1 = (*passedBG_in).valid &
      (MLRI__N_TOTAL_1_balise_in_the_group != (*passedBG_in).BG_Header.n_total);
    if (else_clock_IfBlock1) {
      if ((*passedBG_in).BG_Header.q_updown ==
        MLRI__Q_UPDOWN_Down_link_telegram) {
        bgOrientation = MLRI__BG_Orientation_Reverse_BG_Types_Pkg;
      }
      else {
        bgOrientation = MLRI__BG_Orientation_Nominal_BG_Types_Pkg;
      }
    }
    else {
      bgOrientation = MLRI__BG_Orientation_Unknown_BG_Types_Pkg;
    }
  }
  return bgOrientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__DetermineBGOrientation_ValidateDataDirection_Pkg_DetermineBG_Orientation_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

