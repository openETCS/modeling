/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_UPDOWN.h"

/* TOOLS_Int_to_Q_UPDOWN */
Q_UPDOWN TOOLS_Int_to_Q_UPDOWN(
  /* TOOLS_Int_to_Q_UPDOWN::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN q_updown;
  
  if (int_in == INT_Q_UPDOWN_uplink) {
    q_updown = ENUM_Q_UPDOWN_uplink_Q_UPDOWN;
  }
  else {
    q_updown = ENUM_Q_UPDOWN_downlink_Q_UPDOWN;
  }
  return q_updown;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_UPDOWN.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

