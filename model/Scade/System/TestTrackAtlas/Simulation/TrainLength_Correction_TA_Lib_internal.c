/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

void TrainLength_Correction_reset_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::TrainLength_Correction */
void TrainLength_Correction_TA_Lib_internal(
  /* TA_Lib_internal::TrainLength_Correction::Static_Speed_Profile */StaticSpeedProfile_t_TrackAtlasTypes *Static_Speed_Profile,
  /* TA_Lib_internal::TrainLength_Correction::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_Lib_internal::TrainLength_Correction::i */kcg_int i,
  /* TA_Lib_internal::TrainLength_Correction::v_static */V_internal_Type_Obu_BasicTypes_Pkg v_static,
  /* TA_Lib_internal::TrainLength_Correction::distance */L_internal_Type_Obu_BasicTypes_Pkg distance,
  outC_TrainLength_Correction_TA_Lib_internal *outC)
{
  outC->_L14 = 635;
  outC->_L10 = v_static;
  outC->_L16 = outC->_L14 != outC->_L10;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L1,
    Static_Speed_Profile);
  outC->_L3 = i;
  outC->_L7 = 1;
  outC->_L6 = outC->_L3 - outC->_L7;
  if ((0 <= outC->_L6) & (outC->_L6 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5,
      &outC->_L1[outC->_L6]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  outC->_L9 = outC->_L5.v_static;
  outC->_L11 = outC->_L10 > outC->_L9;
  outC->_L15 = outC->_L16 & outC->_L11;
  outC->_L2 = train_length;
  outC->_L4 = distance;
  outC->_L13 = outC->_L2 + outC->_L4;
  if (outC->_L15) {
    outC->_L12 = outC->_L13;
  }
  else {
    outC->_L12 = outC->_L4;
  }
  outC->corrected_distance = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainLength_Correction_TA_Lib_internal.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

