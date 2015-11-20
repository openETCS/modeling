/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */Metadata_T_Common_Types_Pkg *metadata,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::index */kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::endAddress */kcg_int *endAddress)
{
  static MetadataElement_T_Common_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */
  static MetadataElement_T_Common_Types_Pkg _L12;
  
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

