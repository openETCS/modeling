/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void signChanged_init_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_val = 0;
  outC->change = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::signChanged */
void signChanged_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::signChanged::val */ kcg_int val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_1;
  /* math::Abs::A_Input */
  static kcg_int A_Input_1;
  /* math::Abs::_L8 */
  static kcg_int _L8_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1;
  /* math::Abs::_L3 */
  static kcg_int _L3_1;
  /* math::Abs::_L2 */
  static kcg_int _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  /* math::Abs::A_Output */
  static kcg_int A_Output_2;
  /* math::Abs::A_Input */
  static kcg_int A_Input_2;
  /* math::Abs::_L8 */
  static kcg_int _L8_2;
  /* math::Abs::_L5 */
  static kcg_int _L5_2;
  /* math::Abs::_L3 */
  static kcg_int _L3_2;
  /* math::Abs::_L2 */
  static kcg_int _L2_2;
  /* math::Abs::_L1 */
  static kcg_bool _L1_2;
  /* math::Abs::A_Output */
  static kcg_int A_Output_3;
  /* math::Abs::A_Input */
  static kcg_int A_Input_3;
  /* math::Abs::_L8 */
  static kcg_int _L8_3;
  /* math::Abs::_L5 */
  static kcg_int _L5_3;
  /* math::Abs::_L3 */
  static kcg_int _L3_3;
  /* math::Abs::_L2 */
  static kcg_int _L2_3;
  /* math::Abs::_L1 */
  static kcg_bool _L1_3;
  /* BasicLocationFunctions_Pkg::signChanged::val */
  static kcg_int last_val;
  /* BasicLocationFunctions_Pkg::signChanged::_L1 */
  static kcg_int _L1;
  /* BasicLocationFunctions_Pkg::signChanged::_L2 */
  static kcg_int _L2;
  /* BasicLocationFunctions_Pkg::signChanged::_L3 */
  static kcg_int _L3;
  /* BasicLocationFunctions_Pkg::signChanged::_L4 */
  static kcg_int _L4;
  /* BasicLocationFunctions_Pkg::signChanged::_L5 */
  static kcg_bool _L5;
  /* BasicLocationFunctions_Pkg::signChanged::_L6 */
  static kcg_int _L6;
  /* BasicLocationFunctions_Pkg::signChanged::_L7 */
  static kcg_int _L7;
  /* BasicLocationFunctions_Pkg::signChanged::_L8 */
  static kcg_int _L8;
  
  _L1 = val;
  /* last_init_ck_val */ if (outC->init) {
    last_val = 0;
  }
  else {
    last_val = outC->rem_val;
  }
  _L2 = last_val;
  _L3 = _L1 + _L2;
  _L8_1 = 0;
  A_Input_1 = _L3;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L4 = A_Output_1;
  _L8_2 = 0;
  A_Input_2 = _L1;
  _L5_2 = A_Input_2;
  _L1_2 = _L8_2 <= _L5_2;
  _L3_2 = - _L5_2;
  /* 2 */ if (_L1_2) {
    _L2_2 = _L5_2;
  }
  else {
    _L2_2 = _L3_2;
  }
  A_Output_2 = _L2_2;
  _L6 = A_Output_2;
  _L8_3 = 0;
  A_Input_3 = _L2;
  _L5_3 = A_Input_3;
  _L1_3 = _L8_3 <= _L5_3;
  _L3_3 = - _L5_3;
  /* 2 */ if (_L1_3) {
    _L2_3 = _L5_3;
  }
  else {
    _L2_3 = _L3_3;
  }
  A_Output_3 = _L2_3;
  _L7 = A_Output_3;
  _L8 = _L6 + _L7;
  _L5 = _L4 < _L8;
  outC->change = _L5;
  outC->rem_val = val;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** signChanged_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

