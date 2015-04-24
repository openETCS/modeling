/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_LINKORIENTATION.h"

/* TOOLS_Int_to_Q_LINKORIENTATION */
Q_LINKORIENTATION TOOLS_Int_to_Q_LINKORIENTATION(
  /* TOOLS_Int_to_Q_LINKORIENTATION::q_linkreaction_int */ kcg_int q_linkreaction_int)
{
  /* TOOLS_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION q_linkorientation;
  
  if (q_linkreaction_int == INT_Q_LINKORIENTATION_nominal) {
    q_linkorientation = ENUM_Q_LINKORIENTATION_nominal_Q_LINKORIENTATION;
  }
  else {
    q_linkorientation = ENUM_Q_LINKORIENTATION_reverse_Q_LINKORIENTATION;
  }
  return q_linkorientation;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_LINKORIENTATION.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

