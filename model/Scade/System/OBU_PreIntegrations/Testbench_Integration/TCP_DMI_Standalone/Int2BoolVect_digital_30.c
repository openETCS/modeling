/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVect_digital_30.h"

/* digital::Int2BoolVect */
void Int2BoolVect_digital_30(
  /* digital::Int2BoolVect::In */kcg_int In,
  /* digital::Int2BoolVect::BV */array_bool_30 *BV)
{
  kcg_int tmp;
  kcg_int i;
  /* digital::Int2BoolVect::Acc */ kcg_int Acc;
  /* digital::Int2BoolVect::_L4 */ array_bool_30 _L4;
  
  Acc = In;
  for (i = 0; i < 30; i++) {
    tmp = Acc;
    /* 1 */ Int2BoolVectElt_digital(tmp, &Acc, &_L4[i]);
  }
  for (i = 0; i < 30; i++) {
    (*BV)[i] = _L4[29 - i];
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Int2BoolVect_digital_30.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

