/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::CheckElem_iterator */
void CheckElem_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::acc */kcg_bool acc,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::elem */kcg_int elem,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::key */kcg_int key,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::result */kcg_bool *result)
{
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::_L4 */ kcg_bool _L4;
  
  _L4 = elem == key;
  if (_L4) {
    *result = kcg_true;
  }
  else {
    *result = kcg_false;
  }
  *condition = !_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckElem_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

