/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Preprocessing_TA_SSP_H_
#define _SSP_Preprocessing_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"
#include "MoveSSPSectionsAbsolute_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Preprocessing::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSSPSectionsAbsolute_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::SSP_Preprocessing::_L1 */ _L1;
  kcg_bool /* TA_SSP::SSP_Preprocessing::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Preprocessing::_L16 */ _L16;
  kcg_bool /* TA_SSP::SSP_Preprocessing::_L15 */ _L15;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Preprocessing::_L14 */ _L14;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Preprocessing::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Preprocessing::_L11 */ _L11;
  kcg_bool /* TA_SSP::SSP_Preprocessing::_L21 */ _L21;
} outC_SSP_Preprocessing_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Preprocessing */
extern void SSP_Preprocessing_TA_SSP(
  /* TA_SSP::SSP_Preprocessing::p27v1 */P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP::SSP_Preprocessing::reset */kcg_bool reset,
  /* TA_SSP::SSP_Preprocessing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_SSP::SSP_Preprocessing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_SSP_Preprocessing_TA_SSP *outC);

extern void SSP_Preprocessing_reset_TA_SSP(outC_SSP_Preprocessing_TA_SSP *outC);

#endif /* _SSP_Preprocessing_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Preprocessing_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

