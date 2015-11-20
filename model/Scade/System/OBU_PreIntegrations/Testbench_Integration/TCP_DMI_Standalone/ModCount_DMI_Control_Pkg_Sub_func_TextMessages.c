/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h"

void ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::ModCount */
void ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::incre */kcg_bool incre,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::Modulo */kcg_int Modulo,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::initialValue */kcg_int initialValue,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L3 */ kcg_int _L3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ModCount::_L4 */ kcg_int _L4;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L4 = initialValue;
  }
  else {
    _L4 = outC->_L5;
  }
  if (incre) {
    _L3 = 1 + _L4;
  }
  else {
    _L3 = _L4;
  }
  outC->_L5 = _L3 % Modulo;
  outC->count = (kcg_real) outC->_L5;
  outC->rippleclock = _L3 != outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModCount_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

