/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_MEDIA.h"

/* TOOLS_Int_to_Q_MEDIA */
Q_MEDIA TOOLS_Int_to_Q_MEDIA(/* TOOLS_Int_to_Q_MEDIA::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_Q_MEDIA::q_media */ Q_MEDIA q_media;
  
  if (int_in == INT_Q_MEDIA_Balise) {
    q_media = ENUM_Q_MEDIA_Balise_Q_MEDIA;
  }
  else {
    q_media = ENUM_Q_MEDIA_Loop_Q_MEDIA;
  }
  return q_media;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_Q_MEDIA.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

