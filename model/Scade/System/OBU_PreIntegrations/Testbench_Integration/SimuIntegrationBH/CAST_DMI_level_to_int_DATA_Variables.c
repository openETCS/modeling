/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_level_to_int */
void CAST_DMI_level_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_level_to_int::dmi_level_ct */ DMI_level_T_DMI_Types_Pkg *dmi_level_ct,
  /* DATA::Variables::CAST_DMI_level_to_int::level_int */ kcg_int *level_int,
  /* DATA::Variables::CAST_DMI_level_to_int::nid_stm_int */ kcg_int *nid_stm_int)
{
  /* DATA::Variables::CAST_DMI_level_to_int::_L7 */
  static M_LEVEL _L7;
  /* DATA::Variables::CAST_DMI_level_to_int::_L6 */
  static NID_STM_DMI_Types_Pkg _L6;
  /* DATA::Variables::CAST_DMI_level_to_int::_L8 */
  static kcg_int _L8;
  /* DATA::Variables::CAST_DMI_level_to_int::_L14 */
  static DMI_level_T_DMI_Types_Pkg _L14;
  
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L14, dmi_level_ct);
  _L6 = _L14.nid_stm;
  _L7 = _L14.level;
  _L8 = /* 1 */ CAST_M_LEVEL_to_int_TM_conversions(_L7);
  *level_int = _L8;
  *nid_stm_int = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_level_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

