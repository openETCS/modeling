/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_RisingEdge_digital.h"

void MoRC_RisingEdge_init_digital(MoRC_outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_RE_Input = kcg_true;
  outC->RE_Output = kcg_true;
}


void MoRC_RisingEdge_reset_digital(MoRC_outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::RisingEdge */
void MoRC_RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */ kcg_bool RE_Input,
  MoRC_outC_RisingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = !RE_Input;
  }
  else {
    tmp = !outC->rem_RE_Input;
  }
  outC->RE_Output = tmp && RE_Input;
  outC->rem_RE_Input = RE_Input;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_RisingEdge_digital.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

