/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfileElement_to_int */
void CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::dmi_gradientProfileElement */ DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElement,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::valid */ kcg_int *valid,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::start_section */ kcg_int *start_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::end_section */ kcg_int *end_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::gradiant */ kcg_int *gradiant)
{
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L1 */
  static DMI_gradientProfileElement_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L5 */
  static kcg_bool _L5;
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L2 */
  static G_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::_L6 */
  static kcg_int _L6;
  
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &_L1,
    dmi_gradientProfileElement);
  _L2 = _L1.gradient;
  _L3 = _L1.end_section;
  _L4 = _L1.begin_section;
  _L5 = _L1.valid;
  _L6 = /* 1 */ Bool_to_Int_Utilities(_L5);
  *valid = _L6;
  *start_section = _L4;
  *end_section = _L3;
  *gradiant = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_gradientProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

