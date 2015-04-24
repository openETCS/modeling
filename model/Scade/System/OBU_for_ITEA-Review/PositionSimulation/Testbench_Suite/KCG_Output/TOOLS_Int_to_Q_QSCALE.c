/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_QSCALE.h"

/* TOOLS_Int_to_Q_QSCALE */
Q_SCALE TOOLS_Int_to_Q_QSCALE(
  /* TOOLS_Int_to_Q_QSCALE::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_Q_QSCALE::q_scale */ Q_SCALE q_scale;
  
  if (int_in == INT_Q_SCALE_1m) {
    q_scale = ENUM_Q_SCALE_1m_QSCALE;
  }
  else if (int_in == INT_Q_SCALE_10m) {
    q_scale = ENUM_Q_SCALE_10m_QSCALE;
  }
  else {
    q_scale = ENUM_Q_SCALE_10cm_QSCALE;
  }
  return q_scale;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_QSCALE.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

