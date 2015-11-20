/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "A_brake_safe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::A_brake_safe */
void A_brake_safe_SDMConversionModelPkg(
  /* SDMConversionModelPkg::A_brake_safe::aBrake */a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::A_brake_safe::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::A_brake_safe::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::A_brake_safe::aBrakeSafe_cm */av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm)
{
  static struct__158027 tmp;
  static kcg_int tmp3;
  static kcg_int tmp2;
  static kcg_int i;
  static array_int_6 tmp1;
  /* SDMConversionModelPkg::A_brake_safe::_L10 */
  static kcg_int _L10;
  
  _L10 = /* 1 */ Kr_intLookUp_SDMConversionModelPkg(NationalValues, trainData);
  tmp3 = 0;
  for (i = 0; i < 6; i++) {
    tmp2 = tmp3;
    if (tmp2 >= (*aBrake).emergency.a[i]) {
      tmp3 = tmp2;
    }
    else {
      tmp3 = (*aBrake).emergency.a[i];
    }
    tmp1[i] = _L10 * (*aBrake).emergency.a[i] / 100;
  }
  kcg_copy_array_int_6(&tmp.a, &tmp1);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&tmp.v, &(*aBrake).emergency.v);
  /* 1 */
  Kv_intConstructor_SDMConversionModelPkg(
    trainData,
    NationalValues,
    tmp3,
    &tmp,
    aBrakeSafe_cm);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** A_brake_safe_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

