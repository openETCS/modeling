/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_FallingEdge_digital.h"

void MoRC_FallingEdge_init_digital(MoRC_outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_FE_Input = kcg_true;
  outC->FE_Output = kcg_true;
}


void MoRC_FallingEdge_reset_digital(MoRC_outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FallingEdge */
void MoRC_FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  MoRC_outC_FallingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = FE_Input;
  }
  else {
    tmp = outC->rem_FE_Input;
  }
  outC->FE_Output = tmp && !FE_Input;
  outC->rem_FE_Input = FE_Input;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_FallingEdge_digital.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

