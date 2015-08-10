/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_GP_per_LRBG_loop_TA_Lib_internal.h"

/* TA_Lib_internal::Update_GP_per_LRBG_loop */
void Update_GP_per_LRBG_loop_TA_Lib_internal(
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::i */kcg_int i,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::GP */GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::new_GP_received */GradientProfile_t_TrackAtlasTypes *new_GP_received,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::GradientProfile_out */GradientProfile_t_TrackAtlasTypes *GradientProfile_out)
{
  Gradient_section_t_TrackAtlasTypes tmp;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile_out, GP);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*new_GP_received)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  if ((0 <= i + First_Section_To_Replace) & (i + First_Section_To_Replace <
      50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &(*GradientProfile_out)[i + First_Section_To_Replace],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_per_LRBG_loop_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

