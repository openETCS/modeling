/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMerger_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMerger */
void Kv_intVectorMerger_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_in */ array_int_2 *indices_in,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Kv */ mv_Map_t_SDMConversionModelPkg *Kv,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Abrake */ av_Map_t_SDMConversionModelPkg *Abrake,
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_out */ array_int_2 *indices_out,
  /* SDMConversionModelPkg::Kv_intVectorMerger::a */ A_internal_Type_Obu_BasicTypes_Pkg *a,
  /* SDMConversionModelPkg::Kv_intVectorMerger::v */ V_internal_Type_Obu_BasicTypes_Pkg *v)
{
  /* math::Max::Ma_Output */
  static kcg_int Ma_Output_1;
  /* math::Max::I2 */
  static kcg_int I2_1;
  /* math::Max::I1 */
  static kcg_int I1_1;
  /* math::Max::_L4 */
  static kcg_int _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_int _L2_1;
  /* math::Max::_L1 */
  static kcg_int _L1_1;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L1 */
  static array_int_2 _L1;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L2 */
  static mv_Map_t_SDMConversionModelPkg _L2;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L3 */
  static av_Map_t_SDMConversionModelPkg _L3;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L4 */
  static kcg_int _L4;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L5 */
  static kcg_int _L5;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L6 */
  static array_int_2 _L6;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L7 */
  static a_BrakeSteps_t_SDMConversionModelPkg _L7;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L8 */
  static m_KvSteps_t_SDMConversionModelPkg _L8;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L9 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L10 */
  static kcg_int _L10;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L11 */
  static kcg_int _L11;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L12 */
  static kcg_int _L12;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L13 */
  static kcg_int _L13;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L23 */
  static kcg_int _L23;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L22 */
  static kcg_int _L22;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L21 */
  static array_int_2 _L21;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L20 */
  static av_Map_t_SDMConversionModelPkg _L20;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L19 */
  static array_int_2 _L19;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L18 */
  static kcg_int _L18;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L17 */
  static v_KvSteps_t_SDMConversionModelPkg _L17;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L16 */
  static mv_Map_t_SDMConversionModelPkg _L16;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L15 */
  static v_BrakeSteps_t_SDMConversionModelPkg _L15;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L14 */
  static kcg_int _L14;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L24 */
  static kcg_int _L24;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L25 */
  static kcg_int _L25;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L26 */
  static kcg_int _L26;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L27 */
  static kcg_bool _L27;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L28 */
  static array_int_2 _L28;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L29 */
  static kcg_int _L29;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L30 */
  static kcg_bool _L30;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L31 */
  static kcg_int _L31;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L51 */
  static array_int_2 _L51;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L50 */
  static kcg_int _L50;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L49 */
  static v_BrakeSteps_t_SDMConversionModelPkg _L49;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L48 */
  static kcg_int _L48;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L47 */
  static array_int_2 _L47;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L46 */
  static mv_Map_t_SDMConversionModelPkg _L46;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L45 */
  static kcg_int _L45;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L44 */
  static kcg_int _L44;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L43 */
  static av_Map_t_SDMConversionModelPkg _L43;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L42 */
  static v_KvSteps_t_SDMConversionModelPkg _L42;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L54 */
  static kcg_int _L54;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L55 */
  static kcg_bool _L55;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L56 */
  static kcg_bool _L56;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L57 */
  static kcg_int _L57;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L58 */
  static kcg_bool _L58;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L60 */
  static kcg_int _L60;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L59 */
  static kcg_bool _L59;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L64 */
  static kcg_bool _L64;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L66 */
  static kcg_bool _L66;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L67 */
  static kcg_bool _L67;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L68 */
  static kcg_bool _L68;
  
  kcg_copy_array_int_2(&_L1, indices_in);
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&_L2, Kv);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L3, Abrake);
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&_L16, Kv);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&_L17, &_L16.v);
  _L25 = 1;
  kcg_copy_array_int_2(&_L19, indices_in);
  _L22 = _L19[0];
  _L24 = _L25 + _L22;
  if ((0 <= _L24) & (_L24 < 7)) {
    _L23 = _L17[_L24];
  }
  else {
    _L23 = 0;
  }
  _L57 = 0;
  _L56 = _L23 > _L57;
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L20, Abrake);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L15, &_L20.v);
  kcg_copy_array_int_2(&_L21, indices_in);
  _L14 = _L21[1];
  _L26 = _L25 + _L14;
  if ((0 <= _L26) & (_L26 < 6)) {
    _L18 = _L15[_L26];
  }
  else {
    _L18 = 0;
  }
  _L27 = _L23 <= _L18;
  _L60 = 0;
  _L59 = _L18 > _L60;
  _L64 = !_L59;
  _L66 = _L27 | _L64;
  _L55 = _L56 & _L66;
  /* 1 */ if (_L55) {
    _L29 = _L24;
  }
  else {
    _L29 = _L22;
  }
  _L67 = !_L56;
  _L30 = _L23 >= _L18;
  _L68 = _L67 | _L30;
  _L58 = _L59 & _L68;
  /* 2 */ if (_L58) {
    _L31 = _L26;
  }
  else {
    _L31 = _L14;
  }
  _L28[0] = _L29;
  _L28[1] = _L31;
  kcg_copy_array_int_2(indices_out, &_L28);
  kcg_copy_m_KvSteps_t_SDMConversionModelPkg(&_L8, &_L2.m);
  _L4 = _L1[0];
  if ((0 <= _L4) & (_L4 < 7)) {
    _L9 = _L8[_L4];
  }
  else {
    _L9 = 1;
  }
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&_L7, &_L3.a);
  kcg_copy_array_int_2(&_L6, indices_in);
  _L5 = _L6[1];
  if ((0 <= _L5) & (_L5 < 6)) {
    _L10 = _L7[_L5];
  }
  else {
    _L10 = 0;
  }
  _L11 = _L9 * _L10;
  _L13 = 100;
  _L12 = _L11 / _L13;
  *a = _L12;
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&_L46, Kv);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&_L42, &_L46.v);
  kcg_copy_array_int_2(&_L47, indices_in);
  _L50 = _L47[0];
  if ((0 <= _L50) & (_L50 < 7)) {
    _L45 = _L42[_L50];
  }
  else {
    _L45 = 0;
  }
  I1_1 = _L45;
  _L1_1 = I1_1;
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L43, Abrake);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L49, &_L43.v);
  kcg_copy_array_int_2(&_L51, indices_in);
  _L48 = _L51[1];
  if ((0 <= _L48) & (_L48 < 6)) {
    _L44 = _L49[_L48];
  }
  else {
    _L44 = 0;
  }
  I2_1 = _L44;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L54 = Ma_Output_1;
  *v = _L54;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intVectorMerger_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

