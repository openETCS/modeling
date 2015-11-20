/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LimitToReducedAdhesion_SDMModelPkg.h"

/* SDMModelPkg::LimitToReducedAdhesion */
void LimitToReducedAdhesion_SDMModelPkg(
  /* SDMModelPkg::LimitToReducedAdhesion::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::LimitToReducedAdhesion::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::LimitToReducedAdhesion::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMModelPkg::LimitToReducedAdhesion::A_brake_safe_reduced */ ASafe_T_CalcBrakingCurves_types *A_brake_safe_reduced)
{
  static kcg_int i;
  static array_int_14 noname;
  static kcg_bool _1_noname;
  /* SDMModelPkg::LimitToReducedAdhesion::_L4 */
  static NC_TRAIN _L4;
  /* SDMModelPkg::LimitToReducedAdhesion::_L3 */
  static trainData_T_TIU_Types_Pkg _L3;
  /* SDMModelPkg::LimitToReducedAdhesion::_L2 */
  static A_NVMAXREDADH1 _L2;
  /* SDMModelPkg::LimitToReducedAdhesion::_L1 */
  static P3_NationalValues_T_Packet_Types_Pkg _L1;
  /* SDMModelPkg::LimitToReducedAdhesion::_L5 */
  static A_NVMAXREDADH1 _L5;
  /* SDMModelPkg::LimitToReducedAdhesion::_L6 */
  static A_NVMAXREDADH2 _L6;
  /* SDMModelPkg::LimitToReducedAdhesion::_L7 */
  static A_NVMAXREDADH3 _L7;
  /* SDMModelPkg::LimitToReducedAdhesion::_L8 */
  static A_NVMAXREDADH1 _L8;
  /* SDMModelPkg::LimitToReducedAdhesion::_L9 */
  static kcg_bool _L9;
  /* SDMModelPkg::LimitToReducedAdhesion::_L10 */
  static ASafe_T_CalcBrakingCurves_types _L10;
  /* SDMModelPkg::LimitToReducedAdhesion::_L24 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L24;
  /* SDMModelPkg::LimitToReducedAdhesion::_L23 */
  static array_int_14 _L23;
  /* SDMModelPkg::LimitToReducedAdhesion::_L30 */
  static ASafe_Data_T_CalcBrakingCurves_types _L30;
  /* SDMModelPkg::LimitToReducedAdhesion::_L29 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L29;
  /* SDMModelPkg::LimitToReducedAdhesion::_L28 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L28;
  /* SDMModelPkg::LimitToReducedAdhesion::_L34 */
  static ASafe_T_CalcBrakingCurves_types _L34;
  /* SDMModelPkg::LimitToReducedAdhesion::_L35 */
  static Q_NVDRIVER_ADHES _L35;
  /* SDMModelPkg::LimitToReducedAdhesion::_L36 */
  static kcg_bool _L36;
  /* SDMModelPkg::LimitToReducedAdhesion::_L37 */
  static kcg_bool _L37;
  /* SDMModelPkg::LimitToReducedAdhesion::_L38 */
  static P3_NationalValues_T_Packet_Types_Pkg _L38;
  /* SDMModelPkg::LimitToReducedAdhesion::_L39 */
  static kcg_bool _L39;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L1, NationalValues);
  _L2 = _L1.a_nvmaxredadh1;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L3, trainData);
  _L4 = _L3.trainCategory;
  _L9 = kcg_false;
  _L6 = _L1.a_nvmaxredadh2;
  /* 1 */ if (_L9) {
    _L8 = _L2;
  }
  else {
    _L8 = _L6;
  }
  _L7 = _L1.a_nvmaxredadh3;
  switch (_L4) {
    case NC_TRAIN_Passenger_train :
      _L5 = _L8;
      break;
    
    default :
      _L5 = _L7;
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L10, aBrakeSafe);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L28,
    &_L10.distance_definition);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L29,
    &_L10.speed_definition);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L30, &_L10.data);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L34.distance_definition,
    &_L28);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L34.speed_definition,
    &_L29);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L34.data, &_L30);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(A_brake_safe_reduced, &_L34);
  _L24 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L5);
  /* pow */ for (i = 0; i < 14; i++) {
    _L23[i] = _L24;
  }
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L38, NationalValues);
  _L35 = _L38.q_nvdriver_adhes;
  _L39 = kcg_false;
  _L37 = kcg_false;
  switch (_L35) {
    case Q_NVDRIVER_ADHES_Allowed :
      _L36 = _L39;
      break;
    
    default :
      _L36 = _L37;
  }
  kcg_copy_array_int_14(&noname, &_L23);
  _1_noname = _L36;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LimitToReducedAdhesion_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

