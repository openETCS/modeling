/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Build_MRSP_TA_MRSP_H_
#define _Build_MRSP_TA_MRSP_H_

#include "kcg_types.h"
#include "Calculate_MRSP_TA_MRSP.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"
#include "SP_ASP_TA_SpeedProfiles.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"
#include "SP_OverrideRelated_TA_SpeedProfiles.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"
#include "SP_STM_SystemSpeed_TA_SpeedProfiles.h"
#include "SP_TSR_TA_SpeedProfiles.h"
#include "SP_SSP_TA_SpeedProfiles.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::Build_MRSP::newMRSP */ newMRSP;
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::MRSP */ MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SP_SSP_TA_SpeedProfiles /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MRSP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Build_MRSP */
extern void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */kcg_int TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeDataIn */kcg_bool ModeDataIn,
  /* TA_MRSP::Build_MRSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC);

extern void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC);

#endif /* _Build_MRSP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MRSP_TA_MRSP.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

