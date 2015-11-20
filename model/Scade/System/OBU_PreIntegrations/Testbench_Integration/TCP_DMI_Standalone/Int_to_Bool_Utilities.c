/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Bool_Utilities.h"

/* Utilities::Int_to_Bool */
kcg_bool Int_to_Bool_Utilities(
  /* Utilities::Int_to_Bool::int_in */kcg_int int_in)
{
  /* Utilities::Int_to_Bool::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* Utilities::Int_to_Bool::bool_out */ kcg_bool bool_out;
  
  IfBlock1_clock = int_in == 0;
  if (IfBlock1_clock) {
    bool_out = kcg_false;
  }
  else {
    else_clock_IfBlock1 = int_in == 1;
    if (else_clock_IfBlock1) {
      bool_out = kcg_true;
    }
    else {
      bool_out = kcg_false;
    }
  }
  return bool_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Int_to_Bool_Utilities.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

