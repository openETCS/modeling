/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckElem_iterator_DMI_Control_Pkg.h"

/* DMI_Control_Pkg::CheckElem_iterator */
void CheckElem_iterator_DMI_Control_Pkg(
  /* DMI_Control_Pkg::CheckElem_iterator::acc */ kcg_bool acc,
  /* DMI_Control_Pkg::CheckElem_iterator::elem */ kcg_int elem,
  /* DMI_Control_Pkg::CheckElem_iterator::key */ kcg_int key,
  /* DMI_Control_Pkg::CheckElem_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::CheckElem_iterator::result */ kcg_bool *result)
{
  /* DMI_Control_Pkg::CheckElem_iterator::_L4 */ kcg_bool _L4;
  
  _L4 = elem == key;
  if (_L4) {
    *result = kcg_true;
  }
  else {
    *result = kcg_false;
  }
  *condition = !_L4;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckElem_iterator_DMI_Control_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

