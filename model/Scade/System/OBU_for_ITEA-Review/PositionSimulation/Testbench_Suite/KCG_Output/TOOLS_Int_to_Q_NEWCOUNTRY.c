/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_NEWCOUNTRY.h"

/* TOOLS_Int_to_Q_NEWCOUNTRY */
Q_NEWCOUNTRY TOOLS_Int_to_Q_NEWCOUNTRY(
  /* TOOLS_Int_to_Q_NEWCOUNTRY::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY q_newcountry;
  
  if (int_in == INT_Q_NEWCOUNTRY_same) {
    q_newcountry = ENUM_Q_NEWCOUNTRY_same_Q_NEWCOUNTRY;
  }
  else {
    q_newcountry = ENUM_Q_NEWCOUNTRY_not_same_Q_NEWCOUNTRY;
  }
  return q_newcountry;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_NEWCOUNTRY.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

