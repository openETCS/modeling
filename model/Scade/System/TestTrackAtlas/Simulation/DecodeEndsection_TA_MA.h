/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _DecodeEndsection_TA_MA_H_
#define _DecodeEndsection_TA_MA_H_

#include "kcg_types.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::DecodeEndsection::section */ section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Eval_Q_SCALE_TA_MRSP /* 1 */ Context_1;
  outC_Eval_Q_SCALE_TA_MRSP /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_ENDSECTION /* TA_MA::DecodeEndsection::_L1 */ _L1;
  Q_SECTIONTIMER /* TA_MA::DecodeEndsection::_L2 */ _L2;
  T_SECTIONTIMER /* TA_MA::DecodeEndsection::_L3 */ _L3;
  D_SECTIONTIMERSTOPLOC /* TA_MA::DecodeEndsection::_L4 */ _L4;
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::DecodeEndsection::_L5 */ _L5;
  kcg_bool /* TA_MA::DecodeEndsection::_L6 */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::DecodeEndsection::_L7 */ _L7;
  Q_SCALE /* TA_MA::DecodeEndsection::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::DecodeEndsection::_L10 */ _L10;
  Q_SECTIONTIMER /* TA_MA::DecodeEndsection::_L11 */ _L11;
  kcg_bool /* TA_MA::DecodeEndsection::_L12 */ _L12;
  kcg_int /* TA_MA::DecodeEndsection::_L13 */ _L13;
  kcg_int /* TA_MA::DecodeEndsection::_L14 */ _L14;
} outC_DecodeEndsection_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::DecodeEndsection */
extern void DecodeEndsection_TA_MA(
  /* TA_MA::DecodeEndsection::l_endsection */L_ENDSECTION l_endsection,
  /* TA_MA::DecodeEndsection::q_scale */Q_SCALE q_scale,
  /* TA_MA::DecodeEndsection::q_sectiontimer */Q_SECTIONTIMER q_sectiontimer,
  /* TA_MA::DecodeEndsection::t_sectiontimer */T_SECTIONTIMER t_sectiontimer,
  /* TA_MA::DecodeEndsection::d_sectiontimerstoploc */D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc,
  outC_DecodeEndsection_TA_MA *outC);

extern void DecodeEndsection_reset_TA_MA(outC_DecodeEndsection_TA_MA *outC);

#endif /* _DecodeEndsection_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DecodeEndsection_TA_MA.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

