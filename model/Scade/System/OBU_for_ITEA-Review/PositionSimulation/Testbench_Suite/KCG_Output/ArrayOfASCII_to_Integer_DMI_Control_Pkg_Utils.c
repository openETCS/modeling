/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer */
kcg_int ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::TrainRunningNumber */ array_int_9 *TrainRunningNumber)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L9 */ kcg_int _L9;
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::Output1 */ kcg_int Output1;
  
  /* 1 */ FindIndexEmptyLoc_DMI_Control_Pkg_Utils(TrainRunningNumber, &i, &tmp);
  if (tmp) {
    _L9 = MAXTextLength_DMI_Control_Pkg + 1;
  }
  else {
    _L9 = i;
  }
  Output1 = 0;
  for (i = 0; i < 9; i++) {
    tmp1 = Output1;
    /* 1 */
    ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
      i,
      tmp1,
      (*TrainRunningNumber)[i],
      _L9,
      &tmp,
      &Output1);
    if (!tmp) {
      break;
    }
  }
  return Output1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

