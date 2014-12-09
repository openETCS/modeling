/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_EitherEdge_digital.h"

void MoRC_EitherEdge_init_digital(MoRC_outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_EE_Input = kcg_true;
  outC->EE_Output = kcg_true;
}


void MoRC_EitherEdge_reset_digital(MoRC_outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::EitherEdge */
void MoRC_EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  MoRC_outC_EitherEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = EE_Input;
  }
  else {
    tmp = outC->rem_EE_Input;
  }
  outC->EE_Output = (tmp && !EE_Input) || (!tmp && EE_Input);
  outC->rem_EE_Input = EE_Input;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_EitherEdge_digital.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

