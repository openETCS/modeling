/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "A_brake_safe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::A_brake_safe */
void A_brake_safe_SDMConversionModelPkg(
  /* SDMConversionModelPkg::A_brake_safe::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::A_brake_safe::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::A_brake_safe::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::A_brake_safe::aBrakeSafe_cm */ av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm)
{
  static kcg_int i4;
  static kcg_int i3;
  /* SDMConversionModelPkg::A_brake_safe */
  static kcg_int acc;
  static kcg_int i2;
  /* math::Max::_L4 */
  static kcg_int _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_int _L2_1;
  /* math::Max::_L1 */
  static kcg_int _L1_1;
  static kcg_int i1;
  static kcg_int i;
  /* SDMConversionModelPkg::A_brake_safe::_L10 */
  static kcg_int _L10;
  /* SDMConversionModelPkg::A_brake_safe::_L11 */
  static P3_NationalValues_T_Packet_Types_Pkg _L11;
  /* SDMConversionModelPkg::A_brake_safe::_L12 */
  static trainData_T_TIU_Types_Pkg _L12;
  /* SDMConversionModelPkg::A_brake_safe::_L13 */
  static a_Brake_t_SDMConversionModelPkg _L13;
  /* SDMConversionModelPkg::A_brake_safe::_L14 */
  static a_BrakeSteps_t_SDMConversionModelPkg _L14;
  /* SDMConversionModelPkg::A_brake_safe::_L16 */
  static array_int_6 _L16;
  /* SDMConversionModelPkg::A_brake_safe::_L17 */
  static array_int_6 _L17;
  /* SDMConversionModelPkg::A_brake_safe::_L18 */
  static kcg_int _L18;
  /* SDMConversionModelPkg::A_brake_safe::_L19 */
  static kcg_int _L19;
  /* SDMConversionModelPkg::A_brake_safe::_L23 */
  static array_int_6 _L23;
  /* SDMConversionModelPkg::A_brake_safe::_L25 */
  static array_int_6 _L25;
  /* SDMConversionModelPkg::A_brake_safe::_L26 */
  static kcg_int _L26;
  /* SDMConversionModelPkg::A_brake_safe::_L30 */
  static P3_NationalValues_T_Packet_Types_Pkg _L30;
  /* SDMConversionModelPkg::A_brake_safe::_L32 */
  static av_MergedMap_t_SDMConversionModelPkg _L32;
  /* SDMConversionModelPkg::A_brake_safe::_L34 */
  static trainData_T_TIU_Types_Pkg _L34;
  /* SDMConversionModelPkg::A_brake_safe::_L47 */
  static av_Map_t_SDMConversionModelPkg _L47;
  /* SDMConversionModelPkg::A_brake_safe::_L48 */
  static v_BrakeSteps_t_SDMConversionModelPkg _L48;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L11, NationalValues);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L12, trainData);
  _L10 = /* 1 */ Kr_intLookUp_SDMConversionModelPkg(&_L11, &_L12);
  kcg_copy_a_Brake_t_SDMConversionModelPkg(&_L13, aBrake);
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&_L14, &_L13.emergency.a);
  /* pow */ for (i4 = 0; i4 < 6; i4++) {
    _L17[i4] = _L10;
  }
  /* 1 */ for (i3 = 0; i3 < 6; i3++) {
    _L16[i3] = _L17[i3] * _L14[i3];
  }
  _L19 = 0;
  _L18 = _L19;
  /* 2 */ for (i2 = 0; i2 < 6; i2++) {
    acc = _L18;
    _L1_1 = acc;
    _L2_1 = _L14[i2];
    _L3_1 = _L1_1 >= _L2_1;
    /* 2 */ if (_L3_1) {
      _L4_1 = _L1_1;
    }
    else {
      _L4_1 = _L2_1;
    }
    _L18 = _L4_1;
  }
  _L26 = 100;
  /* pow */ for (i1 = 0; i1 < 6; i1++) {
    _L25[i1] = _L26;
  }
  /* 4 */ for (i = 0; i < 6; i++) {
    _L23[i] = _L16[i] / _L25[i];
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L34, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L30, NationalValues);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L48, &_L13.emergency.v);
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&_L47.a, &_L23);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L47.v, &_L48);
  /* 1 */
  Kv_intConstructor_SDMConversionModelPkg(&_L34, &_L30, _L18, &_L47, &_L32);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(aBrakeSafe_cm, &_L32);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** A_brake_safe_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

