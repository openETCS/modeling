/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_H_
#define _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ SpeedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L73 */ _L73;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L71 */ _L71;
  Q_SCALE /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L65 */ _L65;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L63 */ _L63;
  array__11524 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L74 */ _L74;
  array__11527 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L76 */ _L76;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L77 */ _L77;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L83 */ _L83;
} outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
extern void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP *outC);

extern void SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP *outC);

#endif /* _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

