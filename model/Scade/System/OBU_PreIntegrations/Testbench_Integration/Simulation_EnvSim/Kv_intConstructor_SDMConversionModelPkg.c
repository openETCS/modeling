/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intConstructor_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intConstructor */
void Kv_intConstructor_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intConstructor::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::Kv_intConstructor::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kv_intConstructor::A_ebmax */A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_em */av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_safe */av_MergedMap_t_SDMConversionModelPkg *A_brake_safe)
{
  static struct__158051 tmp;
  static kcg_bool tmp1;
  static kcg_int i;
  /* SDMConversionModelPkg::Kv_intConstructor::_L12 */
  static kcg_bool _L12;
  /* SDMConversionModelPkg::Kv_intConstructor::_L14 */
  static nvkvintset_T_Packet_Types_Pkg _L14;
  /* SDMConversionModelPkg::Kv_intConstructor::_L38 */
  static array_int_7 _L38;
  /* SDMConversionModelPkg::Kv_intConstructor::_L39 */
  static kcg_int _L39;
  /* SDMConversionModelPkg::Kv_intConstructor::_L41 */
  static array_int_7 _L41;
  /* SDMConversionModelPkg::Kv_intConstructor::_L51 */
  static kcg_bool _L51;
  /* SDMConversionModelPkg::Kv_intConstructor::_L57 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L57;
  /* SDMConversionModelPkg::Kv_intConstructor::_L58 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L58;
  
  _L12 = kcg_false;
  if (Q_NVKINT_Integrated_correction_factors_follow ==
    (*NationalValues).q_nvkint) {
    for (i = 0; i < 7; i++) {
      tmp1 = _L12;
      /* 1 */
      Kv_intSetIterator_SDMConversionModelPkg(
        tmp1,
        &(*NationalValues).nvkvintsetArray[i],
        (*trainData).trainCategory,
        &_L51,
        &_L12);
      _L57 = i + 1;
      if (!_L51) {
        break;
      }
    }
  }
  else {
    _L57 = 0;
  }
  if ((0 <= _L57 - 1) & (_L57 - 1 < 7)) {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(
      &_L14,
      &(*NationalValues).nvkvintsetArray[_L57 - 1]);
  }
  else {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(
      &_L14,
      (nvkvintset_T_Packet_Types_Pkg *) &cEmptyKvIntSet_SDMConversionModelPkg);
  }
  _L57 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L14.a_nvp12);
  _L58 = /* 2 */ TransformA_realToA_int_SDM_Types_Pkg(_L14.a_nvp23);
  _L51 = _L14.q_nvkvintset == Q_NVKVINTSET_Conventional_passenger_trains;
  if (_L14.valid) {
    for (i = 0; i < 7; i++) {
      /* 1 */
      Kv_intIterator_SDMConversionModelPkg(
        &_L14.nvkintArray[i],
        A_ebmax,
        _L57,
        _L58,
        _L51,
        &tmp1,
        &_L41[i],
        &_L38[i]);
      _L39 = i + 1;
      if (!tmp1) {
        break;
      }
    }
  }
  else {
    _L39 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L39; i < 7; i++) {
    _L41[i] = 100;
    _L38[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_int_7(&tmp.m, &_L41);
  kcg_copy_array_int_7(&tmp.v, &_L38);
  /* 1 */
  Kv_intVectorMapper_SDMConversionModelPkg(&tmp, A_brake_em, A_brake_safe);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Kv_intConstructor_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

