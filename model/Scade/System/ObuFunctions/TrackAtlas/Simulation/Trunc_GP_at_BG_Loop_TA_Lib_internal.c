/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Trunc_GP_at_BG_Loop_TA_Lib_internal.h"

void Trunc_GP_at_BG_Loop_reset_TA_Lib_internal(
  outC_Trunc_GP_at_BG_Loop_TA_Lib_internal *outC)
{
  /* 1 */ NormalizePos_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Lib_internal::Trunc_GP_at_BG_Loop */
void Trunc_GP_at_BG_Loop_TA_Lib_internal(
  /* TA_Lib_internal::Trunc_GP_at_BG_Loop::i */kcg_int i,
  /* TA_Lib_internal::Trunc_GP_at_BG_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::Trunc_GP_at_BG_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::Trunc_GP_at_BG_Loop::Pos_prvLRBG */kcg_int Pos_prvLRBG,
  outC_Trunc_GP_at_BG_Loop_TA_Lib_internal *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  outC->_L3 = FirstElement;
  outC->_L1 = i;
  outC->_L5 = outC->_L3 + outC->_L1;
  if ((0 <= outC->_L5) & (outC->_L5 < 50)) {
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
  outC->_L8 = outC->_L6.Loc_Absolute;
  outC->_L4 = Pos_prvLRBG;
  outC->_L10 = outC->_L8 - outC->_L4;
  /* 1 */ NormalizePos_TA_Lib_internal(outC->_L10, 0, &outC->Context_1);
  outC->_L12 = outC->Context_1.Out;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, &outC->_L6);
  if (kcg_true) {
    outC->_L9.Loc_Absolute = outC->_L12;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L7, &outC->_L2);
  if ((0 <= outC->_L1) & (outC->_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L7[outC->_L1],
      &outC->_L9);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trunc_GP_at_BG_Loop_TA_Lib_internal.c
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

