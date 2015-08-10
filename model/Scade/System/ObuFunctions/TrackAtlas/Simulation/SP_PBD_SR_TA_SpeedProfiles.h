/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _SP_PBD_SR_TA_SpeedProfiles_H_
#define _SP_PBD_SR_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_PBD_SR::PBD_SR */ PBD_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_PBD_SR::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_PBD_SR::_L2 */ _L2;
} outC_SP_PBD_SR_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_PBD_SR */
extern void SP_PBD_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_PBD_SR::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_SP_PBD_SR_TA_SpeedProfiles *outC);

extern void SP_PBD_SR_reset_TA_SpeedProfiles(
  outC_SP_PBD_SR_TA_SpeedProfiles *outC);

#endif /* _SP_PBD_SR_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_PBD_SR_TA_SpeedProfiles.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

