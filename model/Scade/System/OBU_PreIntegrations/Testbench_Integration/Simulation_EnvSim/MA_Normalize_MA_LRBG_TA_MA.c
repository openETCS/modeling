/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_MA_LRBG_TA_MA.h"

/* TA_MA::MA_Normalize_MA_LRBG */
void MA_Normalize_MA_LRBG_TA_MA(
  /* TA_MA::MA_Normalize_MA_LRBG::ProfileIn */MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_MA::MA_Normalize_MA_LRBG::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_MA::MA_Normalize_MA_LRBG::ProfileNormalized_LRBG */MovementAuthority_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static MovementAuthoritySectionlist_t_TrackAtlasTypes tmp;
  static kcg_int i;
  /* TA_MA::MA_Normalize_MA_LRBG::_L36 */
  static DP_or_OL_t_TrackAtlasTypes _L36;
  /* TA_MA::MA_Normalize_MA_LRBG::_L35 */
  static DP_or_OL_t_TrackAtlasTypes _L35;
  
  /* 1 */ Normalize_DP_and_OL_LRBG_TA_MA(pos_BG, ProfileIn, &_L35, &_L36);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    ProfileIn);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &(*ProfileNormalized_LRBG).sections,
    &(*ProfileIn).sections);
  for (i = 0; i < 50; i++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &tmp,
      &(*ProfileNormalized_LRBG).sections);
    /* 1 */
    MA_Normalize_Sections_loop_TA_MA(
      i,
      &tmp,
      pos_BG,
      &(*ProfileNormalized_LRBG).sections);
  }
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &(*ProfileNormalized_LRBG).dangerpoint,
    &_L35);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &(*ProfileNormalized_LRBG).overlap,
    &_L36);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Normalize_MA_LRBG_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

