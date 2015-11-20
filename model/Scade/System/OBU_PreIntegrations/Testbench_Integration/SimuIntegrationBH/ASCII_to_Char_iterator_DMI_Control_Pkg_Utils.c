/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void ASCII_to_Char_iterator_init_DMI_Control_Pkg_Utils(
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L12 = 0;
  outC->_L1 = ' ';
  outC->_L2 = ' ';
  outC->_L3 = ' ';
  outC->_L4 = ' ';
  outC->_L5 = ' ';
  outC->_L6 = ' ';
  outC->_L7 = ' ';
  outC->_L8 = ' ';
  outC->_L9 = ' ';
  outC->_L10 = ' ';
  outC->_L11 = ' ';
  outC->outChar = ' ';
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ASCII_to_Char_iterator_reset_DMI_Control_Pkg_Utils(
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator */
void ASCII_to_Char_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator::ascii */ kcg_int ascii,
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L1 = '3';
  outC->_L2 = '9';
  outC->_L3 = '1';
  outC->_L4 = '2';
  outC->_L5 = '0';
  outC->_L6 = '8';
  outC->_L12 = ascii;
  outC->_L10 = '4';
  outC->_L9 = '5';
  outC->_L8 = '6';
  outC->_L11 = '7';
  switch (outC->_L12) {
    case 49 :
      outC->_L7 = outC->_L3;
      break;
    case 50 :
      outC->_L7 = outC->_L4;
      break;
    case 51 :
      outC->_L7 = outC->_L1;
      break;
    case 52 :
      outC->_L7 = outC->_L10;
      break;
    case 53 :
      outC->_L7 = outC->_L9;
      break;
    case 54 :
      outC->_L7 = outC->_L8;
      break;
    case 55 :
      outC->_L7 = outC->_L11;
      break;
    case 56 :
      outC->_L7 = outC->_L6;
      break;
    case 57 :
      outC->_L7 = outC->_L2;
      break;
    
    default :
      outC->_L7 = outC->_L5;
  }
  outC->outChar = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

