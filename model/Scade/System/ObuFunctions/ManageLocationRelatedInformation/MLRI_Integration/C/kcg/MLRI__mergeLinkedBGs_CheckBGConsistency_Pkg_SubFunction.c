/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__mergeLinkedBGs_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::mergeLinkedBGs */
void MLRI__mergeLinkedBGs_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::mergeLinkedBGs::newLinkedBGs */MLRI__LinkedBGs_T_BG_Types_Pkg *newLinkedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::mergeLinkedBGs::oldLinkedBGs */MLRI__LinkedBGs_T_BG_Types_Pkg *oldLinkedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::mergeLinkedBGs::mergedLinkedBGs */MLRI__LinkedBGs_T_BG_Types_Pkg *mergedLinkedBGs)
{
  if ((*oldLinkedBGs)[0].valid) {
    MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg(mergedLinkedBGs, oldLinkedBGs);
  }
  else {
    MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg(mergedLinkedBGs, newLinkedBGs);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__mergeLinkedBGs_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

