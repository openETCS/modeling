/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_Sections_loop_TA_MA.h"

/* TA_MA::MA_Normalize_Sections_loop */
void MA_Normalize_Sections_loop_TA_MA(
  /* TA_MA::MA_Normalize_Sections_loop::i */kcg_int i,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileIn */MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* TA_MA::MA_Normalize_Sections_loop::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_MA::MA_Normalize_Sections_loop::ProfileNormalized_LRBG */MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static MovementAuthoritySection_t_TrackAtlasTypes tmp;
  /* TA_MA::MA_Normalize_Sections_loop::_L4 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L4;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L4, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L4,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    ProfileIn);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&tmp, &_L4);
  if (_L4.valid) {
    tmp.l_section = _L4.l_section - pos_BG;
    tmp.d_sectiontimerstoploc = _L4.d_sectiontimerstoploc - pos_BG;
  }
  else {
    tmp.l_section = 0;
    tmp.d_sectiontimerstoploc = 0;
  }
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &(*ProfileNormalized_LRBG)[i],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Normalize_Sections_loop_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

