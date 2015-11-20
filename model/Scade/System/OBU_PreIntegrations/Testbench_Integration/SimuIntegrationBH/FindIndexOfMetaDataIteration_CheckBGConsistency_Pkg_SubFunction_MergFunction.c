/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
  static MetadataElement_T_Common_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L1 */
  static Metadata_T_Common_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L7 */
  static kcg_int _L7;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L8 */
  static kcg_bool _L8;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */
  static MetadataElement_T_Common_Types_Pkg _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L17 */
  static MetadataElement_T_Common_Types_Pkg _L17;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L18 */
  static kcg_int _L18;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L19 */
  static array_168486 _L19;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L1, metadata);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L17, &_L1[0]);
  kcg_copy_array_168486(&_L19, (array_168486 *) &_L1[1]);
  _L8 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L12, &_L17);
  if (_L8) {
    for (i = 0; i < 29; i++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &_L12);
      /* 1 */
      FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &acc,
        &_L19[i],
        &cond_iterw,
        &_L12);
      _L7 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
  *index = _L7;
  _L18 = _L12.endAddress;
  *endAddress = _L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

