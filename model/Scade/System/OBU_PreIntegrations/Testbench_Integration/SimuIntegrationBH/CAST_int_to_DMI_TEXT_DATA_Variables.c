/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_TEXT */
void CAST_int_to_DMI_TEXT_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_int_array_in */ DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_in,
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_string_out */ DMI_TEXT_DMI_Types_Pkg *dmi_text_string_out)
{
  static kcg_int i;
  /* DATA::Variables::CAST_int_to_DMI_TEXT::_L1 */
  static DMI_TEXT_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_int_to_DMI_TEXT::_L2 */
  static DMI_TEXT_INT_Array_T_DATA _L2;
  
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&_L2, dmi_text_int_array_in);
  /* 1 */ for (i = 0; i < 255; i++) {
    _L1[i] = /* 1 */ Int_to_Char_Utilities(_L2[i]);
  }
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(dmi_text_string_out, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_TEXT_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

