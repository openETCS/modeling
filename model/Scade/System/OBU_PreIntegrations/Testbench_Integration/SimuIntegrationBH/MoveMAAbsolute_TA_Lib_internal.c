/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute */
void MoveMAAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::ProfileOut */ MovementAuthority_t_TrackAtlasTypes *ProfileOut)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Lib_internal::MoveMAAbsolute */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Lib_internal::MoveMAAbsolute */
  static DP_or_OL_t_TrackAtlasTypes _5_op_call;
  /* TA_Lib_internal::MoveMAAbsolute */
  static DP_or_OL_t_TrackAtlasTypes op_call;
  /* TA_Lib_internal::MoveMAAbsolute */
  static kcg_bool ck_every;
  /* TA_Lib_internal::MoveMAAbsolute */
  static kcg_bool _6_ck_every;
  /* TA_Lib_internal::MoveMAAbsolute::_L4 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L4;
  /* TA_Lib_internal::MoveMAAbsolute::_L6 */
  static array_bool_10 _L6;
  /* TA_Lib_internal::MoveMAAbsolute::_L35 */
  static kcg_bool _L35;
  /* TA_Lib_internal::MoveMAAbsolute::_L36 */
  static kcg_bool _L36;
  /* TA_Lib_internal::MoveMAAbsolute::_L37 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L37;
  /* TA_Lib_internal::MoveMAAbsolute::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* TA_Lib_internal::MoveMAAbsolute::_L39 */
  static array_bool_10 _L39;
  /* TA_Lib_internal::MoveMAAbsolute::_L40 */
  static array_int_10 _L40;
  /* TA_Lib_internal::MoveMAAbsolute::_L41 */
  static array_int_10 _L41;
  /* TA_Lib_internal::MoveMAAbsolute::_L72 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L72;
  /* TA_Lib_internal::MoveMAAbsolute::_L103 */
  static MovementAuthority_t_TrackAtlasTypes _L103;
  /* TA_Lib_internal::MoveMAAbsolute::_L101 */
  static MovementAuthority_t_TrackAtlasTypes _L101;
  /* TA_Lib_internal::MoveMAAbsolute::_L106 */
  static DP_or_OL_t_TrackAtlasTypes _L106;
  /* TA_Lib_internal::MoveMAAbsolute::_L111 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L111;
  /* TA_Lib_internal::MoveMAAbsolute::_L110 */
  static kcg_bool _L110;
  /* TA_Lib_internal::MoveMAAbsolute::_L109 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L109;
  /* TA_Lib_internal::MoveMAAbsolute::_L107 */
  static kcg_bool _L107;
  /* TA_Lib_internal::MoveMAAbsolute::_L114 */
  static DP_or_OL_t_TrackAtlasTypes _L114;
  /* TA_Lib_internal::MoveMAAbsolute::_L115 */
  static DP_or_OL_t_TrackAtlasTypes _L115;
  /* TA_Lib_internal::MoveMAAbsolute::_L120 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L120;
  /* TA_Lib_internal::MoveMAAbsolute::_L119 */
  static DP_or_OL_t_TrackAtlasTypes _L119;
  /* TA_Lib_internal::MoveMAAbsolute::_L118 */
  static kcg_bool _L118;
  /* TA_Lib_internal::MoveMAAbsolute::_L117 */
  static kcg_bool _L117;
  /* TA_Lib_internal::MoveMAAbsolute::_L116 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L116;
  /* TA_Lib_internal::MoveMAAbsolute::_L121 */
  static MovementAuthority_t_TrackAtlasTypes _L121;
  /* TA_Lib_internal::MoveMAAbsolute::_L122 */
  static MovementAuthority_t_TrackAtlasTypes _L122;
  /* TA_Lib_internal::MoveMAAbsolute::_L123 */
  static kcg_bool _L123;
  /* TA_Lib_internal::MoveMAAbsolute::_L124 */
  static kcg_bool _L124;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L103, ProfileIn);
  _L124 = _L103.q_dangerpoint;
  ck_every = _L124;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L115, &_L103.dangerpoint);
  _L118 = msg_prvLRBG;
  _L117 = msg_LRBG;
  _L120 = pos_LRBG;
  _L116 = pos_prvLRBG;
  /* ck_MoveMAAbsolute */ if (ck_every) {
    /* 2 */
    Move_DP_or_OL_TA_Lib_internal(
      &_L115,
      _L118,
      _L117,
      _L120,
      _L116,
      &_5_op_call);
  }
  _L123 = _L103.q_overlap;
  _6_ck_every = _L123;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L114, &_L103.overlap);
  _L107 = msg_prvLRBG;
  _L110 = msg_LRBG;
  _L109 = pos_LRBG;
  _L111 = pos_prvLRBG;
  /* ck_MoveMAAbsolute */ if (_6_ck_every) {
    /* 1 */
    Move_DP_or_OL_TA_Lib_internal(&_L114, _L107, _L110, _L109, _L111, &op_call);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L72,
    &_L103.sections);
  _L35 = msg_prvLRBG;
  /* pow */ for (i4 = 0; i4 < 10; i4++) {
    _L6[i4] = _L35;
  }
  _L36 = msg_LRBG;
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    _L39[i3] = _L36;
  }
  _L37 = pos_LRBG;
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    _L40[i2] = _L37;
  }
  _L38 = pos_prvLRBG;
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    _L41[i1] = _L38;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L4, &_L72);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&acc, &_L4);
    /* 1 */
    MoveMAAbsolute_Loop_TA_Lib_internal(
      i,
      &acc,
      _L6[i],
      _L39[i],
      _L40[i],
      _L41[i],
      &_L4);
  }
  /* ck_MoveMAAbsolute */ if (ck_every) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L119, &_5_op_call);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &_L119,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L121, &_L103);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L121.dangerpoint, &_L119);
  }
  /* ck_MoveMAAbsolute */ if (_6_ck_every) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L106, &op_call);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &_L106,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L122, &_L121);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L122.overlap, &_L106);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L101, &_L122);
  if (kcg_true) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &_L101.sections,
      &_L4);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(ProfileOut, &_L101);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

