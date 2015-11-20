/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA.h"

/* TA_MA::MA_Convert_P15_to_DistanceProfile */
void MA_Convert_P15_to_DistanceProfile_TA_MA(
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::Packet15_in */P015_OBU_T_TM *Packet15_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::MovementAuthority */MovementAuthority_t_TrackAtlasTypes *MovementAuthority)
{
  static P015_section_enum_T_TM tmp1;
  static AccuDistanceProfileMA_TA_MA tmp;
  static kcg_int i;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L77 */
  static AccuDistanceProfileMA_TA_MA _L77;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L130 */
  static kcg_bool _L130;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L131 */
  static DP_or_OL_t_TrackAtlasTypes _L131;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L132 */
  static kcg_bool _L132;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L133 */
  static DP_or_OL_t_TrackAtlasTypes _L133;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L145 */
  static kcg_bool _L145;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L146 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L146;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::_L166 */
  static P015_OBU_sectionlist_enum_T_TM _L166;
  
  /* 2 */ EVAL_T_LOA_TA_Lib_internal(Packet15_in, &_L145, &_L146);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L166, &(*Packet15_in).sections);
  /* 1 */ Pack_Endsection_TA_MA(Packet15_in, &tmp1);
  if ((0 <= (*Packet15_in).n_iter) & ((*Packet15_in).n_iter < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L166[(*Packet15_in).n_iter], &tmp1);
  }
  kcg_copy_AccuDistanceProfileMA_TA_MA(
    &_L77,
    (AccuDistanceProfileMA_TA_MA *) &DEFAULT_AccuDistanceProfileMA_TA_MA);
  for (i = 0; i < 10; i++) {
    kcg_copy_AccuDistanceProfileMA_TA_MA(&tmp, &_L77);
    /* 1 */
    MA_Convert_P15_to_DistanceProfile_loop_TA_MA(
      i,
      &tmp,
      &_L166,
      (*Packet15_in).n_iter,
      (*Packet15_in).q_scale,
      &_L77);
  }
  /* 1 */
  Normalize_Dangerpoint_TA_MA(
    _L77.d_endsection,
    Packet15_in,
    NV_in,
    &_L130,
    &_L131);
  /* 1 */
  Normalize_Overlap_TA_MA(
    _L77.d_endsection,
    Packet15_in,
    NV_in,
    &_L132,
    &_L133);
  if ((*Packet15_in).valid) {
    (*MovementAuthority).valid = (*Packet15_in).valid;
    (*MovementAuthority).Level = MA_level23_TA_MA;
    (*MovementAuthority).q_dir = (*Packet15_in).q_dir;
    (*MovementAuthority).v_main = DEFAULT_v_main_TA_MA;
    (*MovementAuthority).v_loa = (*Packet15_in).v_loa;
    (*MovementAuthority).t_loa_unlimited = _L145;
    (*MovementAuthority).t_loa = _L146;
    (*MovementAuthority).n_iter = (*Packet15_in).n_iter;
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &(*MovementAuthority).sections,
      &_L77.sections);
    (*MovementAuthority).q_dangerpoint = _L130;
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &(*MovementAuthority).dangerpoint,
      &_L131);
    (*MovementAuthority).q_overlap = _L132;
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&(*MovementAuthority).overlap, &_L133);
    (*MovementAuthority).q_endtimer = kcg_false;
    kcg_copy_Endtimer_t_TrackAtlasTypes(
      &(*MovementAuthority).endtimer_t,
      (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasTypes);
  }
  else {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      MovementAuthority,
      (MovementAuthority_t_TrackAtlasTypes *)
        &DEFAULT_MovementAuthority_TrackAtlasTypes);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Convert_P15_to_DistanceProfile_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

