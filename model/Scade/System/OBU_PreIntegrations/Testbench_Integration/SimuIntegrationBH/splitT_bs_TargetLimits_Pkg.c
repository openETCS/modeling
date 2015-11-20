/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitT_bs_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::splitT_bs */
void splitT_bs_TargetLimits_Pkg(
  /* TargetLimits_Pkg::splitT_bs::bs */ T_internal_real_Type_SDM_Types_Pkg bs,
  /* TargetLimits_Pkg::splitT_bs::isSB_FBAvailable */ kcg_bool isSB_FBAvailable,
  /* TargetLimits_Pkg::splitT_bs::isSB_CmdAvailable */ kcg_bool isSB_CmdAvailable,
  /* TargetLimits_Pkg::splitT_bs::bs1 */ T_internal_real_Type_SDM_Types_Pkg *bs1,
  /* TargetLimits_Pkg::splitT_bs::bs2 */ T_internal_real_Type_SDM_Types_Pkg *bs2)
{
  /* TargetLimits_Pkg::splitT_bs::_L1 */
  static T_internal_real_Type_SDM_Types_Pkg _L1;
  /* TargetLimits_Pkg::splitT_bs::_L2 */
  static kcg_bool _L2;
  /* TargetLimits_Pkg::splitT_bs::_L3 */
  static kcg_bool _L3;
  /* TargetLimits_Pkg::splitT_bs::_L6 */
  static T_internal_real_Type_SDM_Types_Pkg _L6;
  /* TargetLimits_Pkg::splitT_bs::_L7 */
  static T_internal_real_Type_SDM_Types_Pkg _L7;
  /* TargetLimits_Pkg::splitT_bs::_L8 */
  static T_internal_real_Type_SDM_Types_Pkg _L8;
  /* TargetLimits_Pkg::splitT_bs::_L9 */
  static kcg_real _L9;
  /* TargetLimits_Pkg::splitT_bs::_L10 */
  static T_internal_real_Type_SDM_Types_Pkg _L10;
  /* TargetLimits_Pkg::splitT_bs::_L11 */
  static T_internal_real_Type_SDM_Types_Pkg _L11;
  
  _L1 = bs;
  _L3 = isSB_CmdAvailable;
  _L2 = isSB_FBAvailable;
  _L11 = bs;
  /* 2 */ if (_L2) {
    _L8 = _L11;
  }
  else {
    _L8 = _L1;
  }
  _L9 = 0.0;
  /* 1 */ if (_L3) {
    _L6 = _L8;
  }
  else {
    _L6 = _L9;
  }
  *bs1 = _L6;
  /* 2 */ if (_L2) {
    _L10 = _L11;
  }
  else {
    _L10 = _L1;
  }
  /* 1 */ if (_L3) {
    _L7 = _L10;
  }
  else {
    _L7 = _L9;
  }
  *bs2 = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** splitT_bs_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

