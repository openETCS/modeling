/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackConditionElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_trackConditionElement_to_int */
void CAST_DMI_trackConditionElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::dmi_trackConditionElement */ DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElement,
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::d_trackcond_int */ kcg_int *d_trackcond_int,
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::m_trackcond_int */ kcg_int *m_trackcond_int)
{
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::_L1 */
  static DMI_trackConditionElement_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::_L3 */
  static D_TRACKCOND _L3;
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::_L2 */
  static M_TRACKCOND _L2;
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::_L4 */
  static kcg_int _L4;
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::_L5 */
  static kcg_int _L5;
  
  kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(
    &_L1,
    dmi_trackConditionElement);
  _L2 = _L1.m_trackcond;
  _L3 = _L1.d_trackcond;
  _L4 = /* 1 */ CAST_D_TRACKCOND_to_int_TM_conversions(_L3);
  _L5 = /* 1 */ CAST_M_TRACKCOND_to_int_TM_conversions(_L2);
  *d_trackcond_int = _L4;
  *m_trackcond_int = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_trackConditionElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

