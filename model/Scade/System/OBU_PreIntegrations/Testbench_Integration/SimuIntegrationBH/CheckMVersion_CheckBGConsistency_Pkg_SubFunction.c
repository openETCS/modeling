/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion */
void CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trackVersion */ M_VERSION trackVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trainVersion */ M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::isSameVersion */ kcg_bool *isSameVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::compatibleVersion */ kcg_bool *compatibleVersion)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L1 */
  static M_VERSION _L1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L2 */
  static M_VERSION _L2;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L5 */
  static kcg_bool _L5;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L7 */
  static kcg_bool _L7;
  
  _L1 = trainVersion;
  _L2 = trackVersion;
  _L3 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(_L1);
  _L4 = /* 2 */ CAST_M_VERSION_to_int_TM_conversions(_L2);
  _L5 = _L3 >= _L4;
  _L7 = _L3 == _L4;
  *isSameVersion = _L7;
  *compatibleVersion = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMVersion_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

