/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _SP_ModeRelated_TA_SpeedProfiles_H_
#define _SP_ModeRelated_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ ModeRelated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_ModeRelated::_L1 */ _L1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TA_SpeedProfiles::SP_ModeRelated::_L2 */ _L2;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_ModeRelated::_L3 */ _L3;
  kcg_bool /* TA_SpeedProfiles::SP_ModeRelated::_L4 */ _L4;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_ModeRelated::_L5 */ _L5;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_ModeRelated::_L6 */ _L6;
  kcg_bool /* TA_SpeedProfiles::SP_ModeRelated::_L7 */ _L7;
  kcg_bool /* TA_SpeedProfiles::SP_ModeRelated::_L8 */ _L8;
} outC_SP_ModeRelated_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_ModeRelated */
extern void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  outC_SP_ModeRelated_TA_SpeedProfiles *outC);

extern void SP_ModeRelated_reset_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC);

#endif /* _SP_ModeRelated_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_ModeRelated_TA_SpeedProfiles.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

