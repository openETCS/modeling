/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WA_Speed_NTC_TrackAtlas.h"

void WA_Speed_NTC_reset_TrackAtlas(outC_WA_Speed_NTC_TrackAtlas *outC)
{
}

/* TrackAtlas::WA_Speed_NTC */
void WA_Speed_NTC_TrackAtlas(
  /* TrackAtlas::WA_Speed_NTC::SSP_available */kcg_bool SSP_available,
  /* TrackAtlas::WA_Speed_NTC::to_supervision_data */DataForSupervision_nextGen_t_TrackAtlasTypes *to_supervision_data,
  outC_WA_Speed_NTC_TrackAtlas *outC)
{
  outC->_L37 = SSP_available;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L36,
    (MRSP_Profile_t_TrackAtlasTypes *)
      &DEFAULT_to_Supervision_NTC_TrackAtlasTypes);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L21,
    to_supervision_data);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L2,
    to_supervision_data);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L17, &outC->_L2.MRSP);
  if (outC->_L37) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L18, &outC->_L17);
  }
  else {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L18, &outC->_L36);
  }
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L20,
    &outC->_L21);
  if (kcg_true) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L20.MRSP, &outC->_L18);
  }
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L20);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** WA_Speed_NTC_TrackAtlas.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

