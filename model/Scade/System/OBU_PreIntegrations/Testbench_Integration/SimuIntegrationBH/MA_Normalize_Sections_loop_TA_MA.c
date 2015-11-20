/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_Sections_loop_TA_MA.h"

/* TA_MA::MA_Normalize_Sections_loop */
void MA_Normalize_Sections_loop_TA_MA(
  /* TA_MA::MA_Normalize_Sections_loop::i */ kcg_int i,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileIn */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* TA_MA::MA_Normalize_Sections_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileNormalized_LRBG */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_MA::MA_Normalize_Sections_loop::_L1 */
  static kcg_int _L1;
  /* TA_MA::MA_Normalize_Sections_loop::_L2 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L2;
  /* TA_MA::MA_Normalize_Sections_loop::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA::MA_Normalize_Sections_loop::_L4 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L4;
  /* TA_MA::MA_Normalize_Sections_loop::_L5 */
  static kcg_bool _L5;
  /* TA_MA::MA_Normalize_Sections_loop::_L7 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L7;
  /* TA_MA::MA_Normalize_Sections_loop::_L9 */
  static kcg_int _L9;
  /* TA_MA::MA_Normalize_Sections_loop::_L10 */
  static kcg_int _L10;
  /* TA_MA::MA_Normalize_Sections_loop::_L11 */
  static kcg_int _L11;
  /* TA_MA::MA_Normalize_Sections_loop::_L45 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L45;
  /* TA_MA::MA_Normalize_Sections_loop::_L48 */
  static kcg_int _L48;
  /* TA_MA::MA_Normalize_Sections_loop::_L47 */
  static kcg_int _L47;
  /* TA_MA::MA_Normalize_Sections_loop::_L49 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L49;
  /* TA_MA::MA_Normalize_Sections_loop::_L50 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L50;
  /* TA_MA::MA_Normalize_Sections_loop::_L51 */
  static kcg_int _L51;
  /* TA_MA::MA_Normalize_Sections_loop::_L52 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L52;
  
  _L1 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L2, ProfileIn);
  _L3 = pos_BG;
  if ((0 <= _L1) & (_L1 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L4, &_L2[_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L4,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  }
  _L5 = _L4.valid;
  _L52 = _L4.l_section;
  _L9 = _L52 - _L3;
  _L11 = 0;
  /* 1 */ if (_L5) {
    _L10 = _L9;
  }
  else {
    _L10 = _L11;
  }
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L7, &_L4);
  if (kcg_true) {
    _L7.l_section = _L10;
  }
  _L45 = _L4.d_sectiontimerstoploc;
  _L47 = _L45 - _L3;
  /* 3 */ if (_L5) {
    _L48 = _L47;
  }
  else {
    _L48 = _L11;
  }
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L49, &_L7);
  if (kcg_true) {
    _L49.d_sectiontimerstoploc = _L48;
  }
  _L51 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L50, &_L2);
  if ((0 <= _L51) & (_L51 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L50[_L51], &_L49);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    &_L50);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Normalize_Sections_loop_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

