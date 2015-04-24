/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */ Metadata_T_Common_Types_Pkg *metadata,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::index */ kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::endAddress */ kcg_int *endAddress)
{
  MetadataElement_T_Common_Types_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */ MetadataElement_T_Common_Types_Pkg _L12;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L12, &(*metadata)[0]);
  for (i = 0; i < 29; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp1, &_L12);
    /* 1 */
    FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &tmp1,
      &(*metadata)[i + 1],
      &tmp,
      &_L12);
    *index = i + 1;
    if (!tmp) {
      break;
    }
  }
  *endAddress = _L12.endAddress;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

