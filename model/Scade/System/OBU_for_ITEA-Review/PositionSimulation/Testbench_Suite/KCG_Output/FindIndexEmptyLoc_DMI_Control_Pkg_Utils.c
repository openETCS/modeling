/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc */
void FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::in_digit_display */ array_int_9 *in_digit_display,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::index */ kcg_int *index,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::DigitFull */ kcg_bool *DigitFull)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  
  *DigitFull = kcg_false;
  for (i = 0; i < 9; i++) {
    tmp1 = *DigitFull;
    /* 1 */
    FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
      i,
      tmp1,
      (*in_digit_display)[i],
      &tmp,
      DigitFull);
    *index = i + 1;
    if (!tmp) {
      break;
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FindIndexEmptyLoc_DMI_Control_Pkg_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

