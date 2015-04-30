/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData */
void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc */ MetadataElement_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc1 */ MetadataElement_T_Common_Types_Pkg *acc1,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::metadata */ MetadataElement_T_Common_Types_Pkg *metadata)
{
  if ((*acc).endAddress < (*acc1).endAddress) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(metadata, acc1);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(metadata, acc1);
    (*metadata).endAddress = (*acc).endAddress;
  }
  *go_on = (*acc).valid & (*acc1).valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

