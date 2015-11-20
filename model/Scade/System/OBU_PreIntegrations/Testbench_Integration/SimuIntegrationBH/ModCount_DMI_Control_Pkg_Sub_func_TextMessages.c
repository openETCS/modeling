/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void ModCount_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  outC->_L5 = 0;
  outC->count = 0.0;
  outC->rippleclock = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::ModCount */
void ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::incre */ kcg_bool incre,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::Modulo */ kcg_int Modulo,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::initialValue */ kcg_int initialValue,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L1 */
  static kcg_int _L1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L2 */
  static int32 _L2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L3 */
  static kcg_int _L3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L4 */
  static kcg_int _L4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L6 */
  static kcg_int _L6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L7 */
  static kcg_bool _L7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L8 */
  static kcg_bool _L8;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L9 */
  static kcg_real _L9;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L10 */
  static kcg_int _L10;
  
  _L2 = 1;
  _L10 = initialValue;
  /* fby_1_init_1 */ if (outC->init) {
    _L4 = _L10;
  }
  else {
    _L4 = outC->_L5;
  }
  _L1 = _L2 + _L4;
  _L8 = incre;
  /* 1 */ if (_L8) {
    _L3 = _L1;
  }
  else {
    _L3 = _L4;
  }
  _L6 = Modulo;
  outC->_L5 = _L3 % _L6;
  _L7 = _L3 != outC->_L5;
  outC->rippleclock = _L7;
  _L9 = (kcg_real) outC->_L5;
  outC->count = _L9;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ModCount_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

