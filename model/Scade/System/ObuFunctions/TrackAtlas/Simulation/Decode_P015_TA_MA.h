/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Decode_P015_TA_MA_H_
#define _Decode_P015_TA_MA_H_

#include "kcg_types.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"
#include "DecodeMASection_TA_MA.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Decode_P015::MA_decoded_out */ MA_decoded_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVAL_T_LOA_TA_Lib_internal /* 1 */ _6_Context_1;
  outC_EVAL_Q_DANGERPOINT_TA_Lib_internal /* 1 */ _5_Context_1;
  outC_EVAL_Q_OVERLAP_TA_Lib_internal /* 1 */ _4_Context_1;
  outC_Eval_Q_SCALE_TA_MRSP /* 1 */ _3_Context_1;
  outC_DecodeMASection_TA_MA /* 1 */ _2_Context_1;
  outC_EVAL_V_Release_TA_Lib_internal /* 1 */ Context_1;
  outC_Eval_Q_SCALE_TA_MRSP /* 2 */ _1_Context_2;
  outC_EVAL_V_Release_TA_Lib_internal /* 2 */ Context_2;
  outC_Eval_Q_SCALE_TA_MRSP /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* TA_MA::Decode_P015::_L1 */ _L1;
  D_OL /* TA_MA::Decode_P015::_L22 */ _L22;
  T_OL /* TA_MA::Decode_P015::_L21 */ _L21;
  D_STARTOL /* TA_MA::Decode_P015::_L20 */ _L20;
  Q_OVERLAP /* TA_MA::Decode_P015::_L19 */ _L19;
  V_RELEASEDP /* TA_MA::Decode_P015::_L18 */ _L18;
  D_DP /* TA_MA::Decode_P015::_L17 */ _L17;
  Q_DANGERPOINT /* TA_MA::Decode_P015::_L16 */ _L16;
  D_ENDTIMERSTARTLOC /* TA_MA::Decode_P015::_L15 */ _L15;
  T_ENDTIMER /* TA_MA::Decode_P015::_L14 */ _L14;
  Q_ENDTIMER /* TA_MA::Decode_P015::_L13 */ _L13;
  D_SECTIONTIMERSTOPLOC /* TA_MA::Decode_P015::_L12 */ _L12;
  T_SECTIONTIMER /* TA_MA::Decode_P015::_L11 */ _L11;
  Q_SECTIONTIMER /* TA_MA::Decode_P015::_L10 */ _L10;
  L_ENDSECTION /* TA_MA::Decode_P015::_L9 */ _L9;
  P015_OBU_sectionlist_enum_T_TM /* TA_MA::Decode_P015::_L8 */ _L8;
  N_ITER /* TA_MA::Decode_P015::_L7 */ _L7;
  T_LOA /* TA_MA::Decode_P015::_L6 */ _L6;
  V_LOA /* TA_MA::Decode_P015::_L5 */ _L5;
  Q_SCALE /* TA_MA::Decode_P015::_L4 */ _L4;
  Q_DIR /* TA_MA::Decode_P015::_L3 */ _L3;
  kcg_bool /* TA_MA::Decode_P015::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L45 */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L46 */ _L46;
  T_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L48 */ _L48;
  kcg_bool /* TA_MA::Decode_P015::_L47 */ _L47;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L49 */ _L49;
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L53 */ _L53;
  kcg_bool /* TA_MA::Decode_P015::_L54 */ _L54;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L56 */ _L56;
  kcg_bool /* TA_MA::Decode_P015::_L57 */ _L57;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L58 */ _L58;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Decode_P015::_L59 */ _L59;
  P003V1_OBU_T_TM_baseline2 /* TA_MA::Decode_P015::_L162 */ _L162;
  V_NVREL /* TA_MA::Decode_P015::_L161 */ _L161;
  kcg_int /* TA_MA::Decode_P015::_L163 */ _L163;
  MA_Level_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L164 */ _L164;
  kcg_bool /* TA_MA::Decode_P015::_L165 */ _L165;
  Endtimer_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L166 */ _L166;
  _4_MovementAuthoritySectionlist_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L168 */ _L168;
  V_RELEASEOL /* TA_MA::Decode_P015::_L169 */ _L169;
  DP_or_OL_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L178 */ _L178;
  kcg_bool /* TA_MA::Decode_P015::_L179 */ _L179;
  kcg_bool /* TA_MA::Decode_P015::_L180 */ _L180;
  DP_or_OL_t_TrackAtlasTypes /* TA_MA::Decode_P015::_L182 */ _L182;
} outC_Decode_P015_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::Decode_P015 */
extern void Decode_P015_TA_MA(
  /* TA_MA::Decode_P015::MA_onboard_in */P015_OBU_T_TM *MA_onboard_in,
  /* TA_MA::Decode_P015::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_Decode_P015_TA_MA *outC);

extern void Decode_P015_reset_TA_MA(outC_Decode_P015_TA_MA *outC);

#endif /* _Decode_P015_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_P015_TA_MA.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

