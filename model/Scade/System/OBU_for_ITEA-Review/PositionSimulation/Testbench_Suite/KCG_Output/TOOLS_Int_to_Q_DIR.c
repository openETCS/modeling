/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_DIR.h"

/* TOOLS_Int_to_Q_DIR */
Q_DIR TOOLS_Int_to_Q_DIR(
  /* TOOLS_Int_to_Q_DIR::Q_DIR_as_sInt */ kcg_int Q_DIR_as_sInt)
{
  /* TOOLS_Int_to_Q_DIR::QDIR */ Q_DIR QDIR;
  
  if (Q_DIR_as_sInt == INT_Q_DIR_nomiinal) {
    QDIR = ENUM_Q_DIR_nomiinal_QDIR;
  }
  else if (Q_DIR_as_sInt == INT_Q_DIR_both) {
    QDIR = ENUM_Q_DIR_both_QDIR;
  }
  else {
    QDIR = ENUM_Q_DIR_reverse_QDIR;
  }
  return QDIR;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_DIR.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

