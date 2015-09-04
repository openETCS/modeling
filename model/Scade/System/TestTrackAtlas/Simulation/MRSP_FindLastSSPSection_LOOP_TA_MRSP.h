/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_FindLastSSPSection_LOOP_TA_MRSP_H_
#define _MRSP_FindLastSSPSection_LOOP_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::cont */ cont;
  SSP_Mark_ValidSSPsection_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::i_out */ i_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_FindValidSSP_section::_L1 */ _L1_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L6 */ _L6_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L8 */ _L8_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L9 */ _L9_1;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_FindValidSSP_section::_L12 */ _L12_1;
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_FindValidSSP_section::_L13 */ _L13_1;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_FindValidSSP_section::_L14 */ _L14_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L19 */ _L19_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L21 */ _L21_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L22 */ _L22_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::_L23 */ _L23_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L25 */ _L25_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L26 */ _L26_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L27 */ _L27_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L28 */ _L28_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L30 */ _L30_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::_L31 */ _L31_1;
  kcg_bool /* TA_MRSP::MRSP_FindValidSSP_section::valid */ valid_1;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_FindValidSSP_section::SSP_section_In */ SSP_section_In_1;
  kcg_int /* TA_MRSP::MRSP_FindValidSSP_section::i */ i_1;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L1 */ _L1;
  kcg_bool /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L16 */ _L16;
  kcg_int /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L17 */ _L17;
  kcg_int /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L18 */ _L18;
  SSP_Mark_ValidSSPsection_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L19 */ _L19;
  kcg_bool /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L20 */ _L20;
  SSP_Mark_ValidSSPsection_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L22 */ _L22;
} outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_FindLastSSPSection_LOOP */
extern void MRSP_FindLastSSPSection_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::Init */SSP_Mark_ValidSSPsection_TA_MRSP *Init,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::SSP_Reverse_In */SSP_section_t_TA_MRSP *SSP_Reverse_In,
  outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP *outC);

extern void MRSP_FindLastSSPSection_LOOP_reset_TA_MRSP(
  outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP *outC);

#endif /* _MRSP_FindLastSSPSection_LOOP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_LOOP_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

