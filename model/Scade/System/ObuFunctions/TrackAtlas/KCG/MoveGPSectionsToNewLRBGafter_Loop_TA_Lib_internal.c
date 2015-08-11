/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsToNewLRBGafter_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop */
void MoveGPSectionsToNewLRBGafter_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::ProfileOut */GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  Gradient_section_t_TrackAtlasTypes tmp;
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L6 */ Gradient_section_t_TrackAtlasTypes _L6;
  
  if ((0 <= FirstElement + i) & (FirstElement + i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L6,
      &(*ProfileIn)[FirstElement + i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &_L6);
  tmp.Loc_LRBG = /* 1 */
    NormalizePos_TA_Lib_internal(_L6.Loc_LRBG - Distance_2LRBGs, 0);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&(*ProfileOut)[i], &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsToNewLRBGafter_Loop_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

