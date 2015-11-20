/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intConstructor_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intConstructor */
void Kv_intConstructor_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intConstructor::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::Kv_intConstructor::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kv_intConstructor::A_ebmax */ A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_safe */ av_MergedMap_t_SDMConversionModelPkg *A_brake_safe)
{
  static kcg_int i7;
  /* SDMConversionModelPkg::Kv_intConstructor */
  static kcg_bool acc;
  /* SDMConversionModelPkg::Kv_intConstructor */
  static kcg_bool _6_cond_iterw;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* SDMConversionModelPkg::Kv_intConstructor */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_bool noname;
  static kcg_int _8_noname;
  /* SDMConversionModelPkg::Kv_intConstructor::_L6 */
  static nvkvintsetArray_T_Packet_Types_Pkg _L6;
  /* SDMConversionModelPkg::Kv_intConstructor::_L4 */
  static P3_NationalValues_T_Packet_Types_Pkg _L4;
  /* SDMConversionModelPkg::Kv_intConstructor::_L9 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* SDMConversionModelPkg::Kv_intConstructor::_L10 */
  static kcg_int _L10;
  /* SDMConversionModelPkg::Kv_intConstructor::_L12 */
  static kcg_bool _L12;
  /* SDMConversionModelPkg::Kv_intConstructor::_L14 */
  static nvkvintset_T_Packet_Types_Pkg _L14;
  /* SDMConversionModelPkg::Kv_intConstructor::_L15 */
  static kcg_int _L15;
  /* SDMConversionModelPkg::Kv_intConstructor::_L16 */
  static kcg_int _L16;
  /* SDMConversionModelPkg::Kv_intConstructor::_L27 */
  static nvkvintset_T_Packet_Types_Pkg _L27;
  /* SDMConversionModelPkg::Kv_intConstructor::_L32 */
  static kcg_bool _L32;
  /* SDMConversionModelPkg::Kv_intConstructor::_L34 */
  static NC_TRAIN _L34;
  /* SDMConversionModelPkg::Kv_intConstructor::_L33 */
  static trainData_T_TIU_Types_Pkg _L33;
  /* SDMConversionModelPkg::Kv_intConstructor::_L35 */
  static array_169898 _L35;
  /* SDMConversionModelPkg::Kv_intConstructor::_L36 */
  static av_Map_t_SDMConversionModelPkg _L36;
  /* SDMConversionModelPkg::Kv_intConstructor::_L38 */
  static array_int_7 _L38;
  /* SDMConversionModelPkg::Kv_intConstructor::_L39 */
  static kcg_int _L39;
  /* SDMConversionModelPkg::Kv_intConstructor::_L41 */
  static array_int_7 _L41;
  /* SDMConversionModelPkg::Kv_intConstructor::_L42 */
  static kcg_bool _L42;
  /* SDMConversionModelPkg::Kv_intConstructor::_L43 */
  static nvkvintArray_T_Packet_Types_Pkg _L43;
  /* SDMConversionModelPkg::Kv_intConstructor::_L44 */
  static array_int_7 _L44;
  /* SDMConversionModelPkg::Kv_intConstructor::_L45 */
  static array_int_7 _L45;
  /* SDMConversionModelPkg::Kv_intConstructor::_L46 */
  static array_int_7 _L46;
  /* SDMConversionModelPkg::Kv_intConstructor::_L47 */
  static array_bool_7 _L47;
  /* SDMConversionModelPkg::Kv_intConstructor::_L48 */
  static A_NVP12 _L48;
  /* SDMConversionModelPkg::Kv_intConstructor::_L49 */
  static A_NVP23 _L49;
  /* SDMConversionModelPkg::Kv_intConstructor::_L50 */
  static Q_NVKVINTSET _L50;
  /* SDMConversionModelPkg::Kv_intConstructor::_L51 */
  static kcg_bool _L51;
  /* SDMConversionModelPkg::Kv_intConstructor::_L52 */
  static Q_NVKVINTSET _L52;
  /* SDMConversionModelPkg::Kv_intConstructor::_L55 */
  static kcg_int _L55;
  /* SDMConversionModelPkg::Kv_intConstructor::_L56 */
  static kcg_int _L56;
  /* SDMConversionModelPkg::Kv_intConstructor::_L57 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L57;
  /* SDMConversionModelPkg::Kv_intConstructor::_L58 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L58;
  /* SDMConversionModelPkg::Kv_intConstructor::_L59 */
  static av_MergedMap_t_SDMConversionModelPkg _L59;
  /* SDMConversionModelPkg::Kv_intConstructor::_L66 */
  static mv_Map_t_SDMConversionModelPkg _L66;
  /* SDMConversionModelPkg::Kv_intConstructor::_L70 */
  static Q_NVKINT _L70;
  /* SDMConversionModelPkg::Kv_intConstructor::_L68 */
  static Q_NVKINT _L68;
  /* SDMConversionModelPkg::Kv_intConstructor::_L67 */
  static kcg_bool _L67;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L4, NationalValues);
  kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg(&_L6, &_L4.nvkvintsetArray);
  _L9 = A_ebmax;
  _L32 = kcg_false;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L33, trainData);
  _L34 = _L33.trainCategory;
  /* pow */ for (i7 = 0; i7 < 7; i7++) {
    _L35[i7] = _L34;
  }
  _L70 = Q_NVKINT_Integrated_correction_factors_follow;
  _L68 = _L4.q_nvkint;
  _L67 = _L70 == _L68;
  _L12 = _L32;
  /* 1 */ if (_L67) {
    /* 1 */ for (i5 = 0; i5 < 7; i5++) {
      acc = _L12;
      /* 1 */
      Kv_intSetIterator_SDMConversionModelPkg(
        acc,
        &_L6[i5],
        _L35[i5],
        &_6_cond_iterw,
        &_L12);
      _L10 = i5 + 1;
      /* 1 */ if (!_6_cond_iterw) {
        break;
      }
    }
  }
  else {
    _L10 = 0;
  }
  kcg_copy_nvkvintset_T_Packet_Types_Pkg(
    &_L27,
    (nvkvintset_T_Packet_Types_Pkg *) &cEmptyKvIntSet_SDMConversionModelPkg);
  _L16 = 1;
  _L15 = _L10 - _L16;
  if ((0 <= _L15) & (_L15 < 7)) {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(&_L14, &_L6[_L15]);
  }
  else {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(&_L14, &_L27);
  }
  noname = _L12;
  kcg_copy_nvkvintArray_T_Packet_Types_Pkg(&_L43, &_L14.nvkintArray);
  /* pow */ for (i4 = 0; i4 < 7; i4++) {
    _L44[i4] = _L9;
  }
  _L48 = _L14.a_nvp12;
  _L57 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L48);
  /* pow */ for (i3 = 0; i3 < 7; i3++) {
    _L45[i3] = _L57;
  }
  _L49 = _L14.a_nvp23;
  _L58 = /* 2 */ TransformA_realToA_int_SDM_Types_Pkg(_L49);
  /* pow */ for (i2 = 0; i2 < 7; i2++) {
    _L46[i2] = _L58;
  }
  _L50 = _L14.q_nvkvintset;
  _L52 = Q_NVKVINTSET_Conventional_passenger_trains;
  _L51 = _L50 == _L52;
  /* pow */ for (i1 = 0; i1 < 7; i1++) {
    _L47[i1] = _L51;
  }
  _L42 = _L14.valid;
  _L55 = 100;
  _L56 = 0;
  /* 2 */ if (_L42) {
    /* 2 */ for (i = 0; i < 7; i++) {
      /* 1 */
      Kv_intIterator_SDMConversionModelPkg(
        &_L43[i],
        _L44[i],
        _L45[i],
        _L46[i],
        _L47[i],
        &cond_iterw,
        &_L41[i],
        &_L38[i]);
      _L39 = i + 1;
      /* 2 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L39 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = _L39; i < 7; i++) {
    _L41[i] = _L55;
    _L38[i] = _L56;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_m_KvSteps_t_SDMConversionModelPkg(&_L66.m, &_L41);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&_L66.v, &_L38);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L36, A_brake_em);
  /* 1 */ Kv_intVectorMapper_SDMConversionModelPkg(&_L66, &_L36, &_L59);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(A_brake_safe, &_L59);
  _8_noname = _L39;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intConstructor_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

