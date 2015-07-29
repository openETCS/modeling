/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
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
  NID_BG /* TA_SpeedProfiles::SP_SSP::_L111 */ _L111;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_LRBG_then_SSP_TA_SSP /* 1 */ _5_Context_1;
  outC_Update_SSP_then_LRBG_TA_SSP /* 1 */ _4_Context_1;
  outC_Update_SSP_only_TA_SSP /* 1 */ _3_Context_1;
  outC_Update_LRBG_only_TA_SSP /* 1 */ _2_Context_1;
  outC_Eval_LRBG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_Read_P027V1_TM_baseline2 /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else */ _7_else_clock_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else */ else_clock_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else */ _6_else_clock_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::then::_L4 */ _L4_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::then::_L3 */ _L3_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_SpeedProfiles::SP_SSP::IfBlock1::then::_L2 */ _L2_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L6 */ _L6_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L5 */ _L512_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L4 */ _L413_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L3 */ _L314_IfBlock1;
  P027V1_OBU_T_TM_baseline2 /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L2 */ _L215_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::then::_L1 */ _L116_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::else::_L1 */ _L124_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::else::_L3 */ _L323_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L1 */ _L122_IfBlock1;
  P027V1_OBU_T_TM_baseline2 /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L2 */ _L221_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L3 */ _L320_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L4 */ _L419_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L5 */ _L518_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else::then::_L6 */ _L617_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::then::_L1 */ _L111_IfBlock1;
  P027V1_OBU_T_TM_baseline2 /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::then::_L2 */ _L210_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::then::_L3 */ _L39_IfBlock1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::then::_L4 */ _L48_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::new_SSP */ new_SSP;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::new_LRBG */ new_LRBG;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::msg_LRBG */ msg_LRBG;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::msg_prvLRBG */ msg_prvLRBG;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::newSSP_only */ newSSP_only;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::newLRBG_only */ newLRBG_only;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::both_new_prvLRBG */ both_new_prvLRBG;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::both_new_curLRBG */ both_new_curLRBG;
  P027V1_OBU_T_TM_baseline2 /* TA_SpeedProfiles::SP_SSP::P27V1_local */ P27V1_local;
  ReceivedMessage_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_SSP::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_SpeedProfiles::SP_SSP::_L42 */ _L42;
  P027V1_OBU_T_TM_baseline2 /* TA_SpeedProfiles::SP_SSP::_L60 */ _L60;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L59 */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_SSP::_L73 */ _L73;
  NID_BG /* TA_SpeedProfiles::SP_SSP::_L103 */ _L103;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L104 */ _L104;
  ReceivedMessage_T_Common_Types_Pkg /* TA_SpeedProfiles::SP_SSP::_L107 */ _L107;
  kcg_int /* TA_SpeedProfiles::SP_SSP::_L108 */ _L108;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L109 */ _L109;
  NID_BG /* TA_SpeedProfiles::SP_SSP::_L112 */ _L112;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L113 */ _L113;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L116 */ _L116;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L117 */ _L117;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L118 */ _L118;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L119 */ _L119;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L124 */ _L124;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L125 */ _L125;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L128 */ _L128;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L127 */ _L127;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L129 */ _L129;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L130 */ _L130;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L133 */ _L133;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L132 */ _L132;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L134 */ _L134;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L135 */ _L135;
  kcg_bool /* TA_SpeedProfiles::SP_SSP::_L136 */ _L136;
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
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

