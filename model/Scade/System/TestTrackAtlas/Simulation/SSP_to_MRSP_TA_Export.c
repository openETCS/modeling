/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_to_MRSP_TA_Export.h"

void SSP_to_MRSP_reset_TA_Export(outC_SSP_to_MRSP_TA_Export *outC)
{
}

/* TA_Export::SSP_to_MRSP */
void SSP_to_MRSP_TA_Export(
  /* TA_Export::SSP_to_MRSP::i */kcg_int i,
  /* TA_Export::SSP_to_MRSP::MRSP_init */MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* TA_Export::SSP_to_MRSP::SSP */StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  outC_SSP_to_MRSP_TA_Export *outC)
{
  kcg_bool noname;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, SSP);
  outC->_L8 = i;
  if ((0 <= outC->_L8) & (outC->_L8 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L7,
      &outC->_L3[outC->_L8]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L7,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L18 = outC->_L7.v_static;
  outC->_L17 = outC->_L7.q_train_length_corr;
  outC->_L16 = outC->_L7.d_static_LRBG;
  outC->_L15 = outC->_L7.d_static_abs;
  noname = outC->_L17;
  outC->_L14 = outC->_L7.valid;
  outC->_L19.valid = outC->_L14;
  outC->_L19.Loc_Abs = outC->_L15;
  outC->_L19.Loc_LRBG = outC->_L16;
  outC->_L19.MRS = outC->_L18;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L5, MRSP_init);
  outC->_L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L4, &outC->_L5);
  if ((0 <= outC->_L1) & (outC->_L1 < 200)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L4[outC->_L1], &outC->_L19);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L4);
  outC->cont = outC->_L14;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_to_MRSP_TA_Export.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

