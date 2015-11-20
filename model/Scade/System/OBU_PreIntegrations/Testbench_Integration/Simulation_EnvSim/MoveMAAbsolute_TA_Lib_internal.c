/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute */
void MoveMAAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute::ProfileIn */MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::ProfileOut */MovementAuthority_t_TrackAtlasTypes *ProfileOut)
{
  static MovementAuthoritySectionlist_t_TrackAtlasTypes tmp;
  static kcg_int i;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  if ((*ProfileIn).q_dangerpoint) {
    /* 2 */
    Move_DP_or_OL_TA_Lib_internal(
      &(*ProfileIn).dangerpoint,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).dangerpoint);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &(*ProfileOut).dangerpoint,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
  if ((*ProfileIn).q_overlap) {
    /* 1 */
    Move_DP_or_OL_TA_Lib_internal(
      &(*ProfileIn).overlap,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).overlap);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &(*ProfileOut).overlap,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &(*ProfileOut).sections,
    &(*ProfileIn).sections);
  for (i = 0; i < 10; i++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &tmp,
      &(*ProfileOut).sections);
    /* 1 */
    MoveMAAbsolute_Loop_TA_Lib_internal(
      i,
      &tmp,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      &(*ProfileOut).sections);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveMAAbsolute_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

