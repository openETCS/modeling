/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"

void FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */
    FindStartOfNewSpeedProfileAbs_LOOP_reset_TA_Lib_internal(
      &outC->Context_1[i]);
  }
}

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
void FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::New_Profile */StaticSpeedProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, New_Profile);
  outC->_L2 = outC->_L1[0].d_static_abs;
  for (i2 = 0; i2 < 50; i2++) {
    outC->_L198[i2] = outC->_L2;
  }
  outC->_L100 = 0;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L93, Profile_in);
  for (i1 = 0; i1 < 50; i1++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L98[i1], &outC->_L93);
  }
  outC->_L96 = kcg_true;
  outC->_L99 = outC->_L100;
  if (outC->_L96) {
    for (i = 0; i < 50; i++) {
      tmp = outC->_L99;
      /* 1 */
      FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
        i,
        tmp,
        outC->_L198[i],
        &outC->_L98[i],
        &outC->Context_1[i]);
      outC->_L99 = outC->Context_1[i].relevant_section;
      outC->_L94 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L94 = 0;
  }
  noname = outC->_L94;
  outC->relevant_section = outC->_L99;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

