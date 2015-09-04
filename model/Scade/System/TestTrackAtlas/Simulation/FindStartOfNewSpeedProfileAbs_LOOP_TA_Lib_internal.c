/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

void FindStartOfNewSpeedProfileAbs_LOOP_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP */
void FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::distance_in */L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC)
{
  kcg_int noname;
  
  outC->_L27 = kcg_true;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, Profile_in);
  outC->_L3 = i;
  if ((0 <= outC->_L3) & (outC->_L3 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L2[outC->_L3]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L26 = outC->_L4.v_static;
  outC->_L7 = i;
  outC->_L23 = 0;
  outC->_L24 = - 1;
  if (outC->_L27) {
    outC->_L21 = outC->_L23;
  }
  else {
    outC->_L21 = outC->_L24;
  }
  outC->_L25 = outC->_L7 + outC->_L21;
  outC->_L22 = 635;
  outC->_L8_1 = 0;
  outC->A_Input_1 = outC->_L26;
  outC->_L5_1 = outC->A_Input_1;
  outC->_L1_1 = outC->_L8_1 <= outC->_L5_1;
  outC->_L3_1 = - outC->_L5_1;
  if (outC->_L1_1) {
    outC->_L2_1 = outC->_L5_1;
  }
  else {
    outC->_L2_1 = outC->_L3_1;
  }
  outC->A_Output_1 = outC->_L2_1;
  outC->_L20 = outC->A_Output_1;
  outC->_L19 = outC->_L20 != outC->_L22;
  outC->_L14 = i;
  outC->_L12 = 0;
  outC->_L13 = outC->_L14 > outC->_L12;
  outC->_L5 = outC->_L4.d_static_abs;
  outC->_L15 = outC->_L12 == outC->_L5;
  outC->_L16 = outC->_L13 & outC->_L15;
  outC->_L17 = !outC->_L16;
  outC->_L1 = distance_in;
  outC->_L6 = outC->_L5 < outC->_L1;
  outC->_L18 = outC->_L17 & outC->_L6 & outC->_L19;
  outC->_L8 = Acc;
  noname = outC->_L8;
  outC->relevant_section = outC->_L25;
  outC->cont = outC->_L18;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

