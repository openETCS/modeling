/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _SP_LX_SR_TA_SpeedProfiles_H_
#define _SP_LX_SR_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_LX_SR::LX_SR */ LX_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_LX_SR::_L4 */ _L4;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_LX_SR::_L5 */ _L5;
} outC_SP_LX_SR_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_LX_SR */
extern void SP_LX_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_LX_SR::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  outC_SP_LX_SR_TA_SpeedProfiles *outC);

extern void SP_LX_SR_reset_TA_SpeedProfiles(
  outC_SP_LX_SR_TA_SpeedProfiles *outC);

#endif /* _SP_LX_SR_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_LX_SR_TA_SpeedProfiles.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

