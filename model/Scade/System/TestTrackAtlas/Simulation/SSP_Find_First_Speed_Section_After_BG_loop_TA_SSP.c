/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.h"

void SSP_Find_First_Speed_Section_After_BG_loop_reset_TA_SSP(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP *outC)
{
}

/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::i */kcg_int i,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Acc */kcg_int Acc,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP *outC)
{
  kcg_int noname;
  
  outC->_L5 = i;
  outC->_L14 = 1;
  outC->_L13 = outC->_L5 - outC->_L14;
  outC->_L16 = 0;
  outC->_L15 = outC->_L13 < outC->_L16;
  if (outC->_L15) {
    outC->_L17 = outC->_L16;
  }
  else {
    outC->_L17 = outC->_L13;
  }
  outC->_L12 = 0;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L7, Profile_in);
  if ((0 <= outC->_L5) & (outC->_L5 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L9,
      &outC->_L7[outC->_L5]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L9,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L10 = outC->_L9.d_static_LRBG;
  outC->_L11 = outC->_L10 < outC->_L12;
  outC->_L6 = Acc;
  noname = outC->_L6;
  outC->Pointer = outC->_L17;
  outC->cont = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

