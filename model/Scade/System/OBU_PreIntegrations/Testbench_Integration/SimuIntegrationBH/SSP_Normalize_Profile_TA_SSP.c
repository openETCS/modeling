/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP.h"

/* TA_SSP::SSP_Normalize_Profile */
void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_SSP::SSP_Normalize_Profile */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_SSP::SSP_Normalize_Profile::_L1 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L1;
  /* TA_SSP::SSP_Normalize_Profile::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_SSP::SSP_Normalize_Profile::_L3 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L3;
  /* TA_SSP::SSP_Normalize_Profile::_L4 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L4;
  /* TA_SSP::SSP_Normalize_Profile::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* TA_SSP::SSP_Normalize_Profile::_L6 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L6;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L1, ProfileIn);
  _L2 = pos_BG;
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L4[i2] = _L2;
  }
  _L5 = train_length;
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L6[i1] = _L5;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L3, &_L1);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &_L3);
    /* 1 */ SSP_Normalize_Profile_loop_TA_SSP(i, &acc, _L4[i], _L6[i], &_L3);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

