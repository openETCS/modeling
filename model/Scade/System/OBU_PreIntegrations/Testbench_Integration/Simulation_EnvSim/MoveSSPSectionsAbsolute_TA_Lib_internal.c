/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute */
void MoveSSPSectionsAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileOut */StaticSpeedProfile_t_TrackAtlasTypes *ProfileOut)
{
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, ProfileOut);
    /* 1 */
    MoveSSPSectionsAbsolute_Loop_TA_Lib_internal(
      i,
      &tmp,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      ProfileOut);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSSPSectionsAbsolute_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

