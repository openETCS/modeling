/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* TM_lib_internal::SEND_FindSlot */
void SEND_FindSlot_TM_lib_internal(
  /* TM_lib_internal::SEND_FindSlot::a */kcg_int a,
  /* TM_lib_internal::SEND_FindSlot::MessageIn */MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* TM_lib_internal::SEND_FindSlot::EmptyHeader */MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  /* TM_lib_internal::SEND_FindSlot::Cont */kcg_bool *Cont,
  /* TM_lib_internal::SEND_FindSlot::Acc */kcg_int *Acc)
{
  *Cont = (*MessageIn).nid_packet != (*EmptyHeader).nid_packet;
  if (*Cont) {
    *Acc = (*MessageIn).endAddress;
  }
  else {
    *Acc = a;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_FindSlot_TM_lib_internal.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

