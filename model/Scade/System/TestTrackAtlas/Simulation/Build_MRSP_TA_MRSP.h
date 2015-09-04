/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
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
#include "Build_StaticSpeedProfile_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::Build_MRSP::newMRSP */ newMRSP;
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::MRSP */ MRSP;
  kcg_bool /* TA_MRSP::Build_MRSP::SSP_available */ SSP_available;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::_L1 */ _L1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Calculate_MRSP_TA_MRSP /* 1 */ _12_Context_1;
  outC_Build_SSP_Matrix_TA_SpeedProfiles /* 1 */ _11_Context_1;
  outC_SP_TSR_TA_SpeedProfiles /* 1 */ _10_Context_1;
  outC_SP_STM_SystemSpeed_TA_SpeedProfiles /* 1 */ _9_Context_1;
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles /* 1 */ _8_Context_1;
  outC_SP_SignalingRelated_TA_SpeedProfiles /* 1 */ _7_Context_1;
  outC_SP_PBD_SR_TA_SpeedProfiles /* 1 */ _6_Context_1;
  outC_SP_OverrideRelated_TA_SpeedProfiles /* 1 */ _5_Context_1;
  outC_SP_ModeRelated_TA_SpeedProfiles /* 1 */ _4_Context_1;
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles /* 1 */ _3_Context_1;
  outC_SP_LX_SR_TA_SpeedProfiles /* 1 */ _2_Context_1;
  outC_SP_ASP_TA_SpeedProfiles /* 1 */ _1_Context_1;
  outC_Build_StaticSpeedProfile_TA_SSP /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L2 */ _L2;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L3 */ _L3;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L4 */ _L4;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L5 */ _L5;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L7 */ _L7;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L8 */ _L8;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L9 */ _L9;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L11 */ _L11;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L13 */ _L13;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L14 */ _L14;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L15 */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* TA_MRSP::Build_MRSP::_L16 */ _L16;
  FromTIU_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::_L17 */ _L17;
  kcg_bool /* TA_MRSP::Build_MRSP::_L19 */ _L19;
  kcg_bool /* TA_MRSP::Build_MRSP::_L20 */ _L20;
  kcg_bool /* TA_MRSP::Build_MRSP::_L21 */ _L21;
  trainPosition_T_TrainPosition_Types_Pck /* TA_MRSP::Build_MRSP::_L23 */ _L23;
  kcg_bool /* TA_MRSP::Build_MRSP::_L24 */ _L24;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* TA_MRSP::Build_MRSP::_L25 */ _L25;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::_L26 */ _L26;
  kcg_bool /* TA_MRSP::Build_MRSP::_L27 */ _L27;
  SSP_cat_t_TA_MRSP /* TA_MRSP::Build_MRSP::_L29 */ _L29;
  kcg_bool /* TA_MRSP::Build_MRSP::_L32 */ _L32;
  kcg_int /* TA_MRSP::Build_MRSP::_L34 */ _L34;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MRSP::Build_MRSP::_L22 */ _L22;
} outC_Build_MRSP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Build_MRSP */
extern void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP::Build_MRSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC);

extern void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC);

#endif /* _Build_MRSP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MRSP_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

