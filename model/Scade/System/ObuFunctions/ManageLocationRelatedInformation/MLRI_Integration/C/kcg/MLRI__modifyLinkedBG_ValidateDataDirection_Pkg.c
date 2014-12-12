/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__modifyLinkedBG_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::modifyLinkedBG */
void MLRI__modifyLinkedBG_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::modifyLinkedBG::singleDirectionInvalid */kcg_bool singleDirectionInvalid,
  /* ValidateDataDirection_Pkg::modifyLinkedBG::linkedBG */MLRI__LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* ValidateDataDirection_Pkg::modifyLinkedBG::bgOrientation */MLRI__BG_Orientation_T_BG_Types_Pkg bgOrientation,
  /* ValidateDataDirection_Pkg::modifyLinkedBG::modifiedLinkedBG */MLRI__LinkedBG_T_BG_Types_Pkg *modifiedLinkedBG)
{
  kcg_bool tmp;
  /* ValidateDataDirection_Pkg::modifyLinkedBG::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::modifyLinkedBG::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::modifyLinkedBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  (*modifiedLinkedBG).nid_LRBG = (*linkedBG).nid_LRBG;
  (*modifiedLinkedBG).q_dir = (*linkedBG).q_dir;
  (*modifiedLinkedBG).q_scale = (*linkedBG).q_scale;
  (*modifiedLinkedBG).d_link = (*linkedBG).d_link;
  (*modifiedLinkedBG).q_newcountry = (*linkedBG).q_newcountry;
  (*modifiedLinkedBG).nid_c = (*linkedBG).nid_c;
  (*modifiedLinkedBG).nid_bg = (*linkedBG).nid_bg;
  (*modifiedLinkedBG).q_linkorientation = (*linkedBG).q_linkorientation;
  (*modifiedLinkedBG).q_linkreaction = (*linkedBG).q_linkreaction;
  (*modifiedLinkedBG).q_locacc = (*linkedBG).q_locacc;
  IfBlock1_clock = ((*linkedBG).q_dir == MLRI__Q_DIR_Reverse) &
    (bgOrientation == MLRI__BG_Orientation_Reverse_BG_Types_Pkg) &
    !singleDirectionInvalid;
  if (IfBlock1_clock) {
    tmp = kcg_true;
  }
  else {
    _1_else_clock_IfBlock1 = ((*linkedBG).q_dir == MLRI__Q_DIR_Nominal) &
      (bgOrientation == MLRI__BG_Orientation_Nominal_BG_Types_Pkg);
    if (_1_else_clock_IfBlock1) {
      tmp = kcg_true;
    }
    else {
      else_clock_IfBlock1 = ((*linkedBG).q_dir == MLRI__Q_DIR_Both_directions) &
        !(bgOrientation == MLRI__BG_Orientation_Unknown_BG_Types_Pkg);
      if (else_clock_IfBlock1) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
    }
  }
  (*modifiedLinkedBG).valid = tmp & (*linkedBG).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__modifyLinkedBG_ValidateDataDirection_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

