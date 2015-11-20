/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVectElt_digital.h"

/* digital::Int2BoolVectElt */
void Int2BoolVectElt_digital(
  /* digital::Int2BoolVectElt::Acc */kcg_int Acc,
  /* digital::Int2BoolVectElt::AccOut */kcg_int *AccOut,
  /* digital::Int2BoolVectElt::bi */kcg_bool *bi)
{
  *bi = Acc % 2 == 1;
  *AccOut = Acc / 2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Int2BoolVectElt_digital.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

