/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L11 = 0;
  outC->counter = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */ kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */ kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L2 */
  static kcg_int _L2;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L6 */
  static kcg_int _L6;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L10 */
  static kcg_int _L10;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L12 */
  static kcg_int _L12;
  
  _L2 = 1;
  /* fby_1_init_1 */ if (outC->init) {
    _L6 = 0;
  }
  else {
    _L6 = outC->_L11;
  }
  _L4 = reset;
  _L12 = 0;
  _L3 = count;
  _L10 = 0;
  /* 1 */ if (_L3) {
    _L9 = _L2;
  }
  else {
    _L9 = _L10;
  }
  _L5 = _L6 + _L9;
  /* 2 */ if (_L4) {
    outC->_L11 = _L12;
  }
  else {
    outC->_L11 = _L5;
  }
  outC->counter = outC->_L11;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

