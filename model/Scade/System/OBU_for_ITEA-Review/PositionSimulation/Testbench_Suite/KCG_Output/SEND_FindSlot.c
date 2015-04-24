/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot.h"

/* SEND_FindSlot */
void SEND_FindSlot(
  /* SEND_FindSlot::a */ kcg_int a,
  /* SEND_FindSlot::MessageIn */ MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* SEND_FindSlot::EmptyHeader */ MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  /* SEND_FindSlot::Cont */ kcg_bool *Cont,
  /* SEND_FindSlot::Acc */ kcg_int *Acc)
{
  *Cont = (*MessageIn).nid_packet != (*EmptyHeader).nid_packet;
  if (*Cont) {
    *Acc = (*MessageIn).endAddress;
  }
  else {
    *Acc = a;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_FindSlot.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

