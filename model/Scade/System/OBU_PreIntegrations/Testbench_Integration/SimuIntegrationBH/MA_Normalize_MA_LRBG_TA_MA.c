/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_MA_LRBG_TA_MA.h"

/* TA_MA::MA_Normalize_MA_LRBG */
void MA_Normalize_MA_LRBG_TA_MA(
  /* TA_MA::MA_Normalize_MA_LRBG::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_MA::MA_Normalize_MA_LRBG::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_MA::MA_Normalize_MA_LRBG::ProfileNormalized_LRBG */ MovementAuthority_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static kcg_int i1;
  /* TA_MA::MA_Normalize_MA_LRBG */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_MA::MA_Normalize_MA_LRBG::_L1 */
  static MovementAuthority_t_TrackAtlasTypes _L1;
  /* TA_MA::MA_Normalize_MA_LRBG::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_MA::MA_Normalize_MA_LRBG::_L3 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L3;
  /* TA_MA::MA_Normalize_MA_LRBG::_L4 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L4;
  /* TA_MA::MA_Normalize_MA_LRBG::_L36 */
  static DP_or_OL_t_TrackAtlasTypes _L36;
  /* TA_MA::MA_Normalize_MA_LRBG::_L35 */
  static DP_or_OL_t_TrackAtlasTypes _L35;
  /* TA_MA::MA_Normalize_MA_LRBG::_L37 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L37;
  /* TA_MA::MA_Normalize_MA_LRBG::_L68 */
  static MovementAuthority_t_TrackAtlasTypes _L68;
  /* TA_MA::MA_Normalize_MA_LRBG::_L69 */
  static MovementAuthority_t_TrackAtlasTypes _L69;
  /* TA_MA::MA_Normalize_MA_LRBG::_L70 */
  static MovementAuthority_t_TrackAtlasTypes _L70;
  /* TA_MA::MA_Normalize_MA_LRBG::_L72 */
  static MovementAuthority_t_TrackAtlasTypes _L72;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L1, ProfileIn);
  _L2 = pos_BG;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L72, ProfileIn);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L37, &_L1.sections);
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L4[i1] = _L2;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L3, &_L37);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&acc, &_L3);
    /* 1 */ MA_Normalize_Sections_loop_TA_MA(i, &acc, _L4[i], &_L3);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L68, &_L72);
  if (kcg_true) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &_L68.sections,
      &_L3);
  }
  /* 1 */ Normalize_DP_and_OL_LRBG_TA_MA(_L2, &_L1, &_L35, &_L36);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L69, &_L68);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L69.dangerpoint, &_L35);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L70, &_L69);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L70.overlap, &_L36);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(ProfileNormalized_LRBG, &_L70);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Normalize_MA_LRBG_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

