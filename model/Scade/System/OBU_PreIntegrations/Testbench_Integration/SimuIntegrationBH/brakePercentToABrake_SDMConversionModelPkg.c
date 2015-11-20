/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentToABrake */
void brakePercentToABrake_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentToABrake::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePercentToABrake::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake)
{
  /* SDMConversionModelPkg::brakePercentToABrake */
  static av_Map_t_SDMConversionModelPkg op_call;
  /* SDMConversionModelPkg::brakePercentToABrake */
  static kcg_bool ck_every;
  /* SDMConversionModelPkg::brakePercentToABrake::_L1 */
  static av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::brakePercentToABrake::_L3 */
  static av_Map_t_SDMConversionModelPkg _L3;
  /* SDMConversionModelPkg::brakePercentToABrake::_L4 */
  static kcg_int _L4;
  /* SDMConversionModelPkg::brakePercentToABrake::_L5 */
  static kcg_bool _L5;
  /* SDMConversionModelPkg::brakePercentToABrake::_L8 */
  static a_Brake_t_SDMConversionModelPkg _L8;
  /* SDMConversionModelPkg::brakePercentToABrake::_L10 */
  static kcg_int _L10;
  /* SDMConversionModelPkg::brakePercentToABrake::_L9 */
  static trainData_T_TIU_Types_Pkg _L9;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L9, trainData);
  _L10 = _L9.brakePerctage;
  _L4 = cBrakePercentServiceMax_SDMConversionModelPkg;
  _L5 = _L10 > _L4;
  ck_every = _L5;
  /* ck_brakePercentToABrake */ if (ck_every) {
    /* 2 */ brakePercentLookUp_SDMConversionModelPkg(_L4, &op_call);
  }
  /* 1 */ brakePercentLookUp_SDMConversionModelPkg(_L10, &_L1);
  /* ck_brakePercentToABrake */ if (ck_every) {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&_L3, &op_call);
  }
  else {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&_L3, &_L1);
  }
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L8.emergency, &_L1);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L8.service, &_L3);
  kcg_copy_a_Brake_t_SDMConversionModelPkg(aBrake, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentToABrake_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

