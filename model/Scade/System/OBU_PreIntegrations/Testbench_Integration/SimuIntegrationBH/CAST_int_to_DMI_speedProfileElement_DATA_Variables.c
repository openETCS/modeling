/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_speedProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_speedProfileElement */
void CAST_int_to_DMI_speedProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::valid */ kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_abs */ kcg_int loc_abs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_lrbg */ kcg_int loc_lrbg,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::mrs */ kcg_int mrs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::dmi_speedProfileElemen */ DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen)
{
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L5 */
  static DMI_speedProfileElement_T_DMI_Types_Pkg _L5;
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L11 */
  static kcg_int _L11;
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L12 */
  static kcg_int _L12;
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L13 */
  static kcg_int _L13;
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L14 */
  static kcg_int _L14;
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::_L15 */
  static kcg_bool _L15;
  
  _L11 = valid;
  _L15 = /* 1 */ Int_to_Bool_Utilities(_L11);
  _L12 = loc_abs;
  _L13 = loc_lrbg;
  _L14 = mrs;
  _L5.valid = _L15;
  _L5.Loc_Abs = _L12;
  _L5.Loc_LRBG = _L13;
  _L5.MRS = _L14;
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
    dmi_speedProfileElemen,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_speedProfileElement_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

