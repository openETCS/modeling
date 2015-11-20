/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfileAbs_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
kcg_int FindStartOfNewGradientProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::New_Profile */ GradientProfile_t_TrackAtlasTypes *New_Profile)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
  static kcg_int acc;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L1 */
  static GradientProfile_t_TrackAtlasTypes _L1;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L93 */
  static GradientProfile_t_TrackAtlasTypes _L93;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L94 */
  static kcg_int _L94;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L96 */
  static kcg_bool _L96;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L98 */
  static array_169371 _L98;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L99 */
  static kcg_int _L99;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L100 */
  static kcg_int _L100;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L198 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L198;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::relevant_section */
  static kcg_int relevant_section;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L1, New_Profile);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L93, Profile_in);
  _L2 = _L1[0].Loc_Absolute;
  _L100 = 0;
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L198[i2] = _L2;
  }
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L98[i1], &_L93);
  }
  _L96 = kcg_true;
  _L99 = _L100;
  /* 1 */ if (_L96) {
    /* 1 */ for (i = 0; i < 50; i++) {
      acc = _L99;
      /* 1 */
      FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal(
        i,
        acc,
        _L198[i],
        &_L98[i],
        &cond_iterw,
        &_L99);
      _L94 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L94 = 0;
  }
  relevant_section = _L99;
  noname = _L94;
  return relevant_section;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindStartOfNewGradientProfileAbs_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

