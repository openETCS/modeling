/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__mergeAddInfo_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::mergeAddInfo */
void MLRI__mergeAddInfo_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::mergeAddInfo::newAddInfo */MLRI__AdditionalInformation_T_BG_Types_Pkg *newAddInfo,
  /* CheckBGConsistency_Pkg::SubFunction::mergeAddInfo::oldAddInfo */MLRI__AdditionalInformation_T_BG_Types_Pkg *oldAddInfo,
  /* CheckBGConsistency_Pkg::SubFunction::mergeAddInfo::mergedlAddInfo */MLRI__AdditionalInformation_T_BG_Types_Pkg *mergedlAddInfo)
{
  /* 1 */
  MLRI__mergeLinkedBGs_CheckBGConsistency_Pkg_SubFunction(
    &(*newAddInfo).linkingPackets,
    &(*oldAddInfo).linkingPackets,
    &(*mergedlAddInfo).linkingPackets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__mergeAddInfo_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

