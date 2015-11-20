/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_speedProfileElement_to_int */
void CAST_DMI_speedProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::dmi_speedProfileElemen */ DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::valid */ kcg_int *valid,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_abs */ kcg_int *loc_abs,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_lrbg */ kcg_int *loc_lrbg,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::mrs */ kcg_int *mrs)
{
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L1 */
  static DMI_speedProfileElement_T_DMI_Types_Pkg _L1;
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L5 */
  static kcg_bool _L5;
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L2 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::_L6 */
  static kcg_int _L6;
  
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
    &_L1,
    dmi_speedProfileElemen);
  _L2 = _L1.MRS;
  _L3 = _L1.Loc_LRBG;
  _L4 = _L1.Loc_Abs;
  _L5 = _L1.valid;
  _L6 = /* 1 */ Bool_to_Int_Utilities(_L5);
  *valid = _L6;
  *loc_abs = _L4;
  *loc_lrbg = _L3;
  *mrs = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_speedProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

