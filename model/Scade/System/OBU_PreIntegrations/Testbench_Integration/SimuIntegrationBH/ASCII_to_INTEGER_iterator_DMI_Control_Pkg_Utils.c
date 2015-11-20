/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void ASCII_to_INTEGER_iterator_init_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L26 = 0;
  outC->_L25 = 0;
  outC->_L24 = 0;
  outC->_L23 = 0;
  outC->_L22 = 0;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L13 = 0;
  outC->_L10 = 0;
  outC->_L11 = 0;
  outC->_L12 = 0;
  outC->_L9 = 0;
  outC->_L8 = 0;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->outInt = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ASCII_to_INTEGER_iterator_reset_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator */
void ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::acc */ kcg_int acc,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::ascii */ kcg_int ascii,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::power */ kcg_int power,
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L1 = ascii;
  outC->_L13 = acc;
  outC->_L3 = 1;
  outC->_L4 = 2;
  outC->_L5 = 3;
  outC->_L6 = 4;
  outC->_L7 = 5;
  outC->_L8 = 6;
  outC->_L9 = 7;
  outC->_L11 = 8;
  outC->_L10 = 9;
  outC->_L12 = 0;
  switch (outC->_L1) {
    case 49 :
      outC->_L2 = outC->_L3;
      break;
    case 50 :
      outC->_L2 = outC->_L4;
      break;
    case 51 :
      outC->_L2 = outC->_L5;
      break;
    case 52 :
      outC->_L2 = outC->_L6;
      break;
    case 53 :
      outC->_L2 = outC->_L7;
      break;
    case 54 :
      outC->_L2 = outC->_L8;
      break;
    case 55 :
      outC->_L2 = outC->_L9;
      break;
    case 56 :
      outC->_L2 = outC->_L11;
      break;
    case 57 :
      outC->_L2 = outC->_L10;
      break;
    
    default :
      outC->_L2 = outC->_L12;
  }
  outC->_L23 = 10;
  outC->_L18 = power;
  outC->_L26 = 2;
  outC->_L25 = outC->_L18 - outC->_L26;
  outC->_L15 = index;
  outC->_L19 = outC->_L25 - outC->_L15;
  outC->_L17 = /* 1 */ PowerI_mathext(outC->_L23, outC->_L19);
  outC->_L24 = outC->_L2 * outC->_L17;
  outC->_L16 = outC->_L13 + outC->_L24;
  outC->outInt = outC->_L16;
  outC->_L22 = 0;
  outC->_L20 = outC->_L19 == outC->_L22;
  outC->_L21 = !outC->_L20;
  outC->condition = outC->_L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

