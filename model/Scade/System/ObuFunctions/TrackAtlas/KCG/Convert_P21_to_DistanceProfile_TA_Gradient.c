/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* TA_Gradient::Convert_P21_to_DistanceProfile */
void Convert_P21_to_DistanceProfile_TA_Gradient(
  /* TA_Gradient::Convert_P21_to_DistanceProfile::Packet21_in */P021_OBU_T_TM *Packet21_in,
  /* TA_Gradient::Convert_P21_to_DistanceProfile::GradientProfile */GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  GradientProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    GradientProfile,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, GradientProfile);
    /* 1 */
    Convert_P21_to_DistanceProfile_loop_TA_Gradient(
      i,
      &tmp,
      &(*Packet21_in).sections,
      (*Packet21_in).q_scale,
      GradientProfile);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P21_to_DistanceProfile_TA_Gradient.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

