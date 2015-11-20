/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator */
kcg_char ASCII_to_Char_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator::ascii */kcg_int ascii)
{
  /* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator::outChar */ kcg_char outChar;
  
  switch (ascii) {
    case 49 :
      outChar = '1';
      break;
    case 50 :
      outChar = '2';
      break;
    case 51 :
      outChar = '3';
      break;
    case 52 :
      outChar = '4';
      break;
    case 53 :
      outChar = '5';
      break;
    case 54 :
      outChar = '6';
      break;
    case 55 :
      outChar = '7';
      break;
    case 56 :
      outChar = '8';
      break;
    case 57 :
      outChar = '9';
      break;
    
    default :
      outChar = '0';
  }
  return outChar;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

