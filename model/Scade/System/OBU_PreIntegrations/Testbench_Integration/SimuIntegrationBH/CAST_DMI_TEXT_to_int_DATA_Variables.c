/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_TEXT_to_int */
void CAST_DMI_TEXT_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_string_in */ DMI_TEXT_DMI_Types_Pkg *dmi_text_string_in,
  /* DATA::Variables::CAST_DMI_TEXT_to_int::dmi_text_int_array_out */ DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_out)
{
  static kcg_int i;
  /* DATA::Variables::CAST_DMI_TEXT_to_int::_L4 */
  static DMI_TEXT_DMI_Types_Pkg _L4;
  /* DATA::Variables::CAST_DMI_TEXT_to_int::_L6 */
  static DMI_TEXT_INT_Array_T_DATA _L6;
  
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L4, dmi_text_string_in);
  /* 1 */ for (i = 0; i < 255; i++) {
    _L6[i] = /* 1 */ Char_to_Int_Utilities(_L4[i]);
  }
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(dmi_text_int_array_out, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_TEXT_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

