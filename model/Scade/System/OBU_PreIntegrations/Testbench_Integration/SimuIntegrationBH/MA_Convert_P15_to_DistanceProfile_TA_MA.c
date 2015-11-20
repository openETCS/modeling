/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA.h"

/* TA_MA::MA_Convert_P15_to_DistanceProfile */
void MA_Convert_P15_to_DistanceProfile_TA_MA(
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::MovementAuthority */ MovementAuthority_t_TrackAtlasTypes *MovementAuthority)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile */
  static AccuDistanceProfileMA_TA_MA acc;
  static kcg_int i;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L71 */
  static P015_OBU_sectionlist_enum_T_TM _L71;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L65 */
  static Q_SCALE _L65;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L74 */
  static array_168410 _L74;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L76 */
  static array_170418 _L76;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L77 */
  static AccuDistanceProfileMA_TA_MA _L77;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L83 */
  static AccuDistanceProfileMA_TA_MA _L83;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L128 */
  static MovementAuthority_t_TrackAtlasTypes _L128;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L130 */
  static kcg_bool _L130;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L131 */
  static DP_or_OL_t_TrackAtlasTypes _L131;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L132 */
  static kcg_bool _L132;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L133 */
  static DP_or_OL_t_TrackAtlasTypes _L133;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L134 */
  static P015_section_enum_T_TM _L134;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L137 */
  static P015_OBU_T_TM _L137;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L138 */
  static kcg_bool _L138;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L139 */
  static MA_Level_t_TrackAtlasTypes _L139;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L140 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L140;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L141 */
  static Q_DIR _L141;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L142 */
  static N_ITER _L142;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L145 */
  static kcg_bool _L145;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L146 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L146;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L149 */
  static V_LOA _L149;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L152 */
  static P003V1_OBU_T_TM_baseline2 _L152;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L157 */
  static kcg_bool _L157;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L156 */
  static Endtimer_t_TrackAtlasTypes _L156;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L162 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L162;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L161 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L161;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L163 */
  static N_ITER _L163;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L166 */
  static P015_OBU_sectionlist_enum_T_TM _L166;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L167 */
  static array_int_10 _L167;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L168 */
  static MovementAuthority_t_TrackAtlasTypes _L168;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L169 */
  static MovementAuthority_t_TrackAtlasTypes _L169;
  
  kcg_copy_P015_OBU_T_TM(&_L137, Packet15_in);
  _L65 = _L137.q_scale;
  kcg_copy_AccuDistanceProfileMA_TA_MA(
    &_L83,
    (AccuDistanceProfileMA_TA_MA *) &DEFAULT_AccuDistanceProfileMA_TA_MA);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L71, &_L137.sections);
  /* 1 */ Pack_Endsection_TA_MA(&_L137, &_L134);
  _L163 = _L137.n_iter;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L166, &_L71);
  if ((0 <= _L163) & (_L163 < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L166[_L163], &_L134);
  }
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L74[i3], &_L166);
  }
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    _L167[i2] = _L163;
  }
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    _L76[i1] = _L65;
  }
  kcg_copy_AccuDistanceProfileMA_TA_MA(&_L77, &_L83);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_AccuDistanceProfileMA_TA_MA(&acc, &_L77);
    /* 1 */
    MA_Convert_P15_to_DistanceProfile_loop_TA_MA(
      i,
      &acc,
      &_L74[i],
      _L167[i],
      _L76[i],
      &_L77);
  }
  _L138 = _L137.valid;
  _L139 = MA_level23_TA_MA;
  _L141 = _L137.q_dir;
  _L140 = DEFAULT_v_main_TA_MA;
  _L149 = _L137.v_loa;
  /* 2 */ EVAL_T_LOA_TA_Lib_internal(&_L137, &_L145, &_L146);
  _L142 = _L137.n_iter;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L161,
    &_L77.sections);
  _L162 = _L77.d_endsection;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L152, NV_in);
  /* 1 */ Normalize_Dangerpoint_TA_MA(_L162, &_L137, &_L152, &_L130, &_L131);
  /* 1 */ Normalize_Overlap_TA_MA(_L162, &_L137, &_L152, &_L132, &_L133);
  _L157 = kcg_false;
  kcg_copy_Endtimer_t_TrackAtlasTypes(
    &_L156,
    (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasTypes);
  _L128.valid = _L138;
  _L128.Level = _L139;
  _L128.q_dir = _L141;
  _L128.v_main = _L140;
  _L128.v_loa = _L149;
  _L128.t_loa_unlimited = _L145;
  _L128.t_loa = _L146;
  _L128.n_iter = _L142;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L128.sections,
    &_L161);
  _L128.q_dangerpoint = _L130;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L128.dangerpoint, &_L131);
  _L128.q_overlap = _L132;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L128.overlap, &_L133);
  _L128.q_endtimer = _L157;
  kcg_copy_Endtimer_t_TrackAtlasTypes(&_L128.endtimer_t, &_L156);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &_L169,
    (MovementAuthority_t_TrackAtlasTypes *)
      &DEFAULT_MovementAuthority_TrackAtlasTypes);
  /* 1 */ if (_L138) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L168, &_L128);
  }
  else {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L168, &_L169);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(MovementAuthority, &_L168);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Convert_P15_to_DistanceProfile_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

