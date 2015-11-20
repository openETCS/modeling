/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ABrakeFactory_SDMModelPkg.h"

/* SDMModelPkg::ABrakeFactory */
void ABrakeFactory_SDMModelPkg(
  /* SDMModelPkg::ABrakeFactory::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::ABrakeFactory::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMModelPkg::ABrakeFactory::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* SDMModelPkg::ABrakeFactory::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::ABrakeFactory::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService)
{
  /* SDMModelPkg::ABrakeFactory::_L1 */
  static trainData_T_TIU_Types_Pkg _L1;
  /* SDMModelPkg::ABrakeFactory::_L2 */
  static P3_NationalValues_T_Packet_Types_Pkg _L2;
  /* SDMModelPkg::ABrakeFactory::_L3 */
  static t_Brake_t_SDMModelPkg _L3;
  /* SDMModelPkg::ABrakeFactory::_L4 */
  static av_MergedMap_t_SDMConversionModelPkg _L4;
  /* SDMModelPkg::ABrakeFactory::_L5 */
  static ASafe_T_CalcBrakingCurves_types _L5;
  /* SDMModelPkg::ABrakeFactory::_L7 */
  static P3_NationalValues_T_Packet_Types_Pkg _L7;
  /* SDMModelPkg::ABrakeFactory::_L6 */
  static trainData_T_TIU_Types_Pkg _L6;
  /* SDMModelPkg::ABrakeFactory::_L9 */
  static P3_NationalValues_T_Packet_Types_Pkg _L9;
  /* SDMModelPkg::ABrakeFactory::_L8 */
  static trainData_T_TIU_Types_Pkg _L8;
  /* SDMModelPkg::ABrakeFactory::_L10 */
  static a_Brake_t_SDMConversionModelPkg _L10;
  /* SDMModelPkg::ABrakeFactory::_L14 */
  static trainData_T_TIU_Types_Pkg _L14;
  /* SDMModelPkg::ABrakeFactory::_L25 */
  static ASafe_T_CalcBrakingCurves_types _L25;
  /* SDMModelPkg::ABrakeFactory::_L32 */
  static ASafe_T_CalcBrakingCurves_types _L32;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L1, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L2, NationalValues);
  /* 1 */ brakeBuildUp_SDMConversionModelPkg(&_L1, &_L2, &_L3);
  kcg_copy_t_Brake_t_SDMModelPkg(T_b, &_L3);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L14, trainData);
  /* 1 */ brakePercentToABrake_SDMConversionModelPkg(&_L14, &_L10);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L6, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L7, NationalValues);
  /* 1 */ A_brake_safe_SDMConversionModelPkg(&_L10, &_L6, &_L7, &_L4);
  /* 1 */ InflateABrakeSafe_SDMConversionModelPkg(&_L4, &_L25);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L8, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L9, NationalValues);
  /* 1 */ LimitToReducedAdhesion_SDMModelPkg(&_L25, &_L8, &_L9, &_L5);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(aBrakeSafe, &_L5);
  /* 1 */ InflateABrakeService_SDMConversionModelPkg(&_L10, &_L32);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(aBrakeService, &_L32);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ABrakeFactory_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

