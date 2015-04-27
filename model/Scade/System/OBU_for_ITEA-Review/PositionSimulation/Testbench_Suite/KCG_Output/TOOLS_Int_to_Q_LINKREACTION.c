/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_LINKREACTION.h"

/* TOOLS_Int_to_Q_LINKREACTION */
Q_LINKREACTION TOOLS_Int_to_Q_LINKREACTION(
  /* TOOLS_Int_to_Q_LINKREACTION::q_linkreaction_int */ kcg_int q_linkreaction_int)
{
  /* TOOLS_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION q_linkreaction;
  
  if (q_linkreaction_int == INT_Q_LINKREACTION_Apply_servicebrake) {
    q_linkreaction = ENUM_Q_LINKREACTION_Apply_servicebrake_Q_LINKREACTION;
  }
  else if (q_linkreaction_int == INT_Q_LINKREACTION_Train_trip) {
    q_linkreaction = ENUM_Q_LINKREACTION_Train_trip_Q_LINKREACTION;
  }
  else {
    q_linkreaction = ENUM_Q_LINKREACTION_No_Reaction_Q_LINKREACTION;
  }
  return q_linkreaction;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_LINKREACTION.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

