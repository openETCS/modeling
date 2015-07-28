/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsToNewLRBGaf_TA_Lib_internal.h"

void MoveGPSectionsToNewLRBGaf_reset_TA_Lib_internal(
  outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal *outC)
{
  /* 1 */ NormalizePos_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop */
void MoveGPSectionsToNewLRBGaf_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  outC->_L3 = FirstElement;
  outC->_L1 = i;
  outC->_L5 = outC->_L3 + outC->_L1;
  if ((0 <= outC->_L5) & (outC->_L5 < 10)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L6,
      &outC->_L2[outC->_L5]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L8 = outC->_L6.Loc_LRBG;
  outC->_L4 = Distance_2LRBGs;
  outC->_L10 = outC->_L8 - outC->_L4;
  /* 1 */ NormalizePos_TA_Lib_internal(outC->_L10, 0, &outC->Context_1);
  outC->_L12 = outC->Context_1.Out;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, &outC->_L6);
  if (kcg_true) {
    outC->_L9.Loc_LRBG = outC->_L12;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L7, &outC->_L2);
  if ((0 <= outC->_L1) & (outC->_L1 < 10)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L7[outC->_L1],
      &outC->_L9);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsToNewLRBGaf_TA_Lib_internal.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

