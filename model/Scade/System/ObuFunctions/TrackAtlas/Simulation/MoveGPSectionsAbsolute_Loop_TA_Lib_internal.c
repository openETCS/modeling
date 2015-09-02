/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_TA_Lib_internal.h"

void MoveGPSectionsAbsolute_Loop_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
void MoveGPSectionsAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal *outC)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::offset */ L_internal_Type_Obu_BasicTypes_Pkg _1_offset;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::offset */ L_internal_Type_Obu_BasicTypes_Pkg offset;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::offset */ L_internal_Type_Obu_BasicTypes_Pkg _2_offset;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::offset */ L_internal_Type_Obu_BasicTypes_Pkg _3_offset;
  
  outC->IfBlock1_clock = (msg_LRBG == kcg_true) & (msg_prvLRBG == kcg_false);
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = pos_LRBG;
    _1_offset = outC->_L1_IfBlock1;
    outC->offset = _1_offset;
  }
  else {
    outC->else_clock_IfBlock1 = (msg_LRBG == kcg_false) & (msg_prvLRBG ==
        kcg_true);
    if (outC->else_clock_IfBlock1) {
      outC->_L11_IfBlock1 = pos_prvLRBG;
      _3_offset = outC->_L11_IfBlock1;
      offset = _3_offset;
    }
    else {
      outC->_L12_IfBlock1 = 0;
      _2_offset = outC->_L12_IfBlock1;
      offset = _2_offset;
    }
    outC->offset = offset;
  }
  outC->_L141 = outC->offset;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  outC->_L1 = i;
  if ((0 <= outC->_L1) & (outC->_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L6,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L130 = outC->_L6.Loc_Absolute;
  outC->_L10 = outC->_L130 + outC->_L141;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, &outC->_L6);
  if (kcg_true) {
    outC->_L9.Loc_Absolute = outC->_L10;
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
** MoveGPSectionsAbsolute_Loop_TA_Lib_internal.c
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

