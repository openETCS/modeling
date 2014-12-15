/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
void MLRI__isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::bgHeader */MLRI__BG_Header_T_BG_Types_Pkg *bgHeader,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::index */kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::isStored */kcg_bool *isStored)
{
  MLRI__BG_Header_T_BG_Types_Pkg tmp2;
  kcg_bool tmp1;
  kcg_int i;
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L9 */ MLRI__BG_Header_T_BG_Types_Pkg _L9;
  
  MLRI__kcg_copy_BG_Header_T_BG_Types_Pkg(&_L9, bgHeader);
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_BG_Header_T_BG_Types_Pkg(&tmp2, &_L9);
    /* 1 */
    MLRI__isStored_CheckBGConsistency_Pkg_SubFunction(
      &tmp2,
      &(*storedBGs)[i],
      &tmp1,
      &_L9);
    *index = i + 1;
    if (!tmp1) {
      break;
    }
  }
  if ((0 <= *index) & (*index < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*storedBGs)[*index]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__NoStoredBG_CheckBGConsistency_Pkg);
  }
  *isStored = tmp.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__isStored_iter_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

