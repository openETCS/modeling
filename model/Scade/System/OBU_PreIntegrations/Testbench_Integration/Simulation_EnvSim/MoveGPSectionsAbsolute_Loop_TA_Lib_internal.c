/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
void MoveGPSectionsAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileOut */GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  static Gradient_section_t_TrackAtlasTypes tmp1;
  static kcg_int tmp;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L6 */
  static Gradient_section_t_TrackAtlasTypes _L6;
  
  IfBlock1_clock = msg_LRBG & !msg_prvLRBG;
  if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = !msg_LRBG & msg_prvLRBG;
  }
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp1, &_L6);
  tmp1.Loc_LRBG = 0;
  if (_L6.valid) {
    if (IfBlock1_clock) {
      tmp = pos_LRBG;
    }
    else if (else_clock_IfBlock1) {
      tmp = pos_prvLRBG;
    }
    else {
      tmp = 0;
    }
  }
  else {
    tmp = 0;
  }
  tmp1.Loc_Absolute = _L6.Loc_Absolute + tmp;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&(*ProfileOut)[i], &tmp1);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsAbsolute_Loop_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

