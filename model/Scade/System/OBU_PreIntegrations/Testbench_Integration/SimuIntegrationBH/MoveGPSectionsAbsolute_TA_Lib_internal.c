/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute */
void MoveGPSectionsAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L2 */
  static GradientProfile_t_TrackAtlasTypes _L2;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L4 */
  static GradientProfile_t_TrackAtlasTypes _L4;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L6 */
  static array_bool_50 _L6;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L35 */
  static kcg_bool _L35;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L36 */
  static kcg_bool _L36;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L37 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L37;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L39 */
  static array_bool_50 _L39;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L40 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L40;
  /* TA_Lib_internal::MoveGPSectionsAbsolute::_L41 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L41;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L2, ProfileIn);
  _L35 = msg_prvLRBG;
  /* pow */ for (i4 = 0; i4 < 50; i4++) {
    _L6[i4] = _L35;
  }
  _L36 = msg_LRBG;
  /* pow */ for (i3 = 0; i3 < 50; i3++) {
    _L39[i3] = _L36;
  }
  _L37 = pos_LRBG;
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L40[i2] = _L37;
  }
  _L38 = pos_prvLRBG;
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L41[i1] = _L38;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L4, &_L2);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &_L4);
    /* 1 */
    MoveGPSectionsAbsolute_Loop_TA_Lib_internal(
      i,
      &acc,
      _L6[i],
      _L39[i],
      _L40[i],
      _L41[i],
      &_L4);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveGPSectionsAbsolute_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

