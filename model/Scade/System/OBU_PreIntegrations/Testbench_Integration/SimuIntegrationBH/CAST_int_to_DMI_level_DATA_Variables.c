/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_level */
void CAST_int_to_DMI_level_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_level::level_int */ kcg_int level_int,
  /* DATA::Variables::CAST_int_to_DMI_level::nid_stm_int */ kcg_int nid_stm_int,
  /* DATA::Variables::CAST_int_to_DMI_level::dmi_level_ct */ DMI_level_T_DMI_Types_Pkg *dmi_level_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_level::_L17 */
  static kcg_int _L17;
  /* DATA::Variables::CAST_int_to_DMI_level::_L18 */
  static kcg_int _L18;
  /* DATA::Variables::CAST_int_to_DMI_level::_L19 */
  static DMI_level_T_DMI_Types_Pkg _L19;
  /* DATA::Variables::CAST_int_to_DMI_level::_L20 */
  static M_LEVEL _L20;
  
  _L18 = level_int;
  _L20 = /* 1 */ CAST_Int_to_M_LEVEL_TM_conversions(_L18);
  _L17 = nid_stm_int;
  _L19.level = _L20;
  _L19.nid_stm = _L17;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(dmi_level_ct, &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_level_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

