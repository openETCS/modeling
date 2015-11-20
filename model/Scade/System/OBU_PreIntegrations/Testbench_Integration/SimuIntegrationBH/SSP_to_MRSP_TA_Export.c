/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_to_MRSP_TA_Export.h"

/* TA_Export::SSP_to_MRSP */
void SSP_to_MRSP_TA_Export(
  /* TA_Export::SSP_to_MRSP::i */ kcg_int i,
  /* TA_Export::SSP_to_MRSP::MRSP_init */ MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* TA_Export::SSP_to_MRSP::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  /* TA_Export::SSP_to_MRSP::cont */ kcg_bool *cont,
  /* TA_Export::SSP_to_MRSP::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  static kcg_bool noname;
  /* TA_Export::SSP_to_MRSP::_L1 */
  static kcg_int _L1;
  /* TA_Export::SSP_to_MRSP::_L3 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L3;
  /* TA_Export::SSP_to_MRSP::_L4 */
  static MRSP_Profile_t_TrackAtlasTypes _L4;
  /* TA_Export::SSP_to_MRSP::_L5 */
  static MRSP_Profile_t_TrackAtlasTypes _L5;
  /* TA_Export::SSP_to_MRSP::_L7 */
  static StaticSpeedSection_t_TrackAtlasTypes _L7;
  /* TA_Export::SSP_to_MRSP::_L8 */
  static kcg_int _L8;
  /* TA_Export::SSP_to_MRSP::_L18 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* TA_Export::SSP_to_MRSP::_L17 */
  static kcg_bool _L17;
  /* TA_Export::SSP_to_MRSP::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_Export::SSP_to_MRSP::_L15 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L15;
  /* TA_Export::SSP_to_MRSP::_L14 */
  static kcg_bool _L14;
  /* TA_Export::SSP_to_MRSP::_L19 */
  static MRSP_section_t_TrackAtlasTypes _L19;
  
  _L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L3, SSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L5, MRSP_init);
  _L8 = i;
  if ((0 <= _L8) & (_L8 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L7, &_L3[_L8]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L7,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L14 = _L7.valid;
  *cont = _L14;
  _L15 = _L7.d_static_abs;
  _L16 = _L7.d_static_LRBG;
  _L18 = _L7.v_static;
  _L19.valid = _L14;
  _L19.Loc_Abs = _L15;
  _L19.Loc_LRBG = _L16;
  _L19.MRS = _L18;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L4, &_L5);
  if ((0 <= _L1) & (_L1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L4[_L1], &_L19);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(MRSP, &_L4);
  _L17 = _L7.q_train_length_corr;
  noname = _L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_to_MRSP_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

