/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfileElement */
void CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::valid */ kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::begin_section */ kcg_int begin_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::end_section */ kcg_int end_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::gradiant */ kcg_int gradiant,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::dmi_gradientProfileElemen */ DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElemen)
{
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L11 */
  static DMI_gradientProfileElement_T_DMI_Types_Pkg _L11;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L12 */
  static kcg_bool _L12;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L13 */
  static kcg_int _L13;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L14 */
  static kcg_int _L14;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L15 */
  static kcg_int _L15;
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::_L16 */
  static kcg_int _L16;
  
  _L13 = valid;
  _L12 = /* 1 */ Int_to_Bool_Utilities(_L13);
  _L14 = begin_section;
  _L15 = end_section;
  _L16 = gradiant;
  _L11.valid = _L12;
  _L11.begin_section = _L14;
  _L11.end_section = _L15;
  _L11.gradient = _L16;
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    dmi_gradientProfileElemen,
    &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_gradientProfileElement_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

