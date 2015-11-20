/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion */
void CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trackVersion */M_VERSION trackVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trainVersion */M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::isSameVersion */kcg_bool *isSameVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::compatibleVersion */kcg_bool *compatibleVersion)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L4 */
  static kcg_int _L4;
  
  _L3 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(trainVersion);
  _L4 = /* 2 */ CAST_M_VERSION_to_int_TM_conversions(trackVersion);
  *isSameVersion = _L3 == _L4;
  *compatibleVersion = _L3 >= _L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMVersion_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

