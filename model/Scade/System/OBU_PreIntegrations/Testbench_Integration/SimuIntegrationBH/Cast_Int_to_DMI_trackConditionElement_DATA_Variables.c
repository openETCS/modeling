/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Cast_Int_to_DMI_trackConditionElement_DATA_Variables.h"

/* DATA::Variables::Cast_Int_to_DMI_trackConditionElement */
void Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::d_trackcond_int */ kcg_int d_trackcond_int,
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::m_trackcond_int */ kcg_int m_trackcond_int,
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::dmi_trackConditionElemen_ct */ DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElemen_ct)
{
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::_L8 */
  static DMI_trackConditionElement_T_DMI_Types_Pkg _L8;
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::_L9 */
  static D_TRACKCOND _L9;
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::_L10 */
  static M_TRACKCOND _L10;
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::_L11 */
  static kcg_int _L11;
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::_L12 */
  static kcg_int _L12;
  
  _L11 = d_trackcond_int;
  _L9 = /* 1 */ CAST_Int_to_D_TRACKCOND_TM_conversions(_L11);
  _L12 = m_trackcond_int;
  _L10 = /* 1 */ CAST_Int_to_M_TRACKCOND_TM_conversions(_L12);
  _L8.d_trackcond = _L9;
  _L8.m_trackcond = _L10;
  kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(
    dmi_trackConditionElemen_ct,
    &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Cast_Int_to_DMI_trackConditionElement_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

