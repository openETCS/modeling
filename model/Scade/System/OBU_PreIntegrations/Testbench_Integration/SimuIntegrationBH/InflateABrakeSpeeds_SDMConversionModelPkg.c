/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSpeeds */
void InflateABrakeSpeeds_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku */ V_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::V */ V_internal_Type_Obu_BasicTypes_Pkg V,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku_out */ V_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Vint */ V_internal_real_Type_SDM_Types_Pkg *Vint)
{
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L1 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L4 */
  static kcg_bool _L4;
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L5 */
  static kcg_int _L5;
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L6 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* SDMConversionModelPkg::InflateABrakeSpeeds::_L7 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L7;
  
  _L1 = V;
  _L5 = 0;
  _L4 = _L1 > _L5;
  _L7 = Akku;
  /* 1 */ if (_L4) {
    _L6 = _L1;
  }
  else {
    _L6 = _L7;
  }
  _L2 = /* 1 */ TransformV_intToV_real_SDM_Types_Pkg(_L6);
  *Vint = _L2;
  *Akku_out = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeSpeeds_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

