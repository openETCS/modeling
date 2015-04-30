/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_LINK.h"

/* TOOLS_Int_to_Q_LINK */
Q_LINK TOOLS_Int_to_Q_LINK(
  /* TOOLS_Int_to_Q_LINK::Q_DIR_as_sInt */ kcg_int Q_DIR_as_sInt)
{
  /* TOOLS_Int_to_Q_LINK::QDIR */ Q_LINK QDIR;
  
  if (Q_DIR_as_sInt == INT_Q_LINK_linked) {
    QDIR = ENUM_Q_LINK_linked_Q_LINK;
  }
  else {
    QDIR = ENUM_Q_LINK_unlinked_Q_LINK;
  }
  return QDIR;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_LINK.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

