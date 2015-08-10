/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _SP_SSP_TA_SpeedProfiles_H_
#define _SP_SSP_TA_SpeedProfiles_H_

#include "kcg_types.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Update_LRBG_then_SSP_TA_SSP.h"
#include "Update_SSP_then_LRBG_TA_SSP.h"
#include "Update_SSP_only_TA_SSP.h"
#include "Update_LRBG_only_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::SSP */ SSP;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::updated */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_SpeedProfiles::SP_SSP::_L111 */ rem__L111;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SP_SSP_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_SSP */
extern void SP_SSP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SpeedProfiles::SP_SSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_SP_SSP_TA_SpeedProfiles *outC);

extern void SP_SSP_reset_TA_SpeedProfiles(outC_SP_SSP_TA_SpeedProfiles *outC);

#endif /* _SP_SSP_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SSP_TA_SpeedProfiles.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

