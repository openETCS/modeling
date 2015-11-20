/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVect_digital_30.h"

/* digital::Int2BoolVect */
void Int2BoolVect_digital_30(
  /* digital::Int2BoolVect::In */ kcg_int In,
  /* digital::Int2BoolVect::BV */ DMI_Available_Menu_int_T_DATA *BV)
{
  /* digital::Int2BoolVect */
  static kcg_int acc;
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  /* digital::Int2BoolVect::Acc */
  static kcg_int Acc;
  /* digital::Int2BoolVect::_L1 */
  static kcg_int _L1;
  /* digital::Int2BoolVect::_L4 */
  static DMI_Available_Menu_int_T_DATA _L4;
  /* digital::Int2BoolVect::_L5 */
  static DMI_Available_Menu_int_T_DATA _L5;
  
  _L1 = In;
  Acc = _L1;
  for (i1 = 0; i1 < 30; i1++) {
    acc = Acc;
    /* 1 */ Int2BoolVectElt_digital(acc, &Acc, &_L4[i1]);
  }
  for (i = 0; i < 30; i++) {
    _L5[i] = _L4[29 - i];
  }
  kcg_copy_DMI_Available_Menu_int_T_DATA(BV, &_L5);
  noname = Acc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int2BoolVect_digital_30.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

