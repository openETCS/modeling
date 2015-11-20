/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator */
void ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::acc */kcg_int acc,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::ascii */kcg_int ascii,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::power */kcg_int power,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::outInt */kcg_int *outInt)
{
  kcg_int tmp;
  /* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator::_L19 */ kcg_int _L19;
  
  _L19 = power - 2 - index;
  *condition = !(_L19 == 0);
  switch (ascii) {
    case 49 :
      tmp = 1;
      break;
    case 50 :
      tmp = 2;
      break;
    case 51 :
      tmp = 3;
      break;
    case 52 :
      tmp = 4;
      break;
    case 53 :
      tmp = 5;
      break;
    case 54 :
      tmp = 6;
      break;
    case 55 :
      tmp = 7;
      break;
    case 56 :
      tmp = 8;
      break;
    case 57 :
      tmp = 9;
      break;
    
    default :
      tmp = 0;
  }
  *outInt = acc + tmp * /* 1 */ PowerI_mathext(10, _L19);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

