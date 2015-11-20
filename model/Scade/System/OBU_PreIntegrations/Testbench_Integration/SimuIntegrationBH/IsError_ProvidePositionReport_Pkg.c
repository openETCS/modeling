/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsError_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::IsError */
kcg_bool IsError_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::IsError::inError */ kcg_bool inError,
  /* ProvidePositionReport_Pkg::IsError::errorVector */ ErrorMessage_T_ProvidePositionReport_Pkg *errorVector)
{
  /* ProvidePositionReport_Pkg::IsError::_L2 */
  static kcg_bool _L2;
  /* ProvidePositionReport_Pkg::IsError::_L1 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::IsError::_L3 */
  static kcg_bool _L3;
  /* ProvidePositionReport_Pkg::IsError::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::IsError::containsError */
  static kcg_bool containsError;
  
  _L2 = inError;
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L1, errorVector);
  _L3 = _L1.present;
  _L4 = _L2 | _L3;
  containsError = _L4;
  return containsError;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsError_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

