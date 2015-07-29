/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _MRSP_Determine_LengthOfTa_TA_MRSP_H_
#define _MRSP_Determine_LengthOfTa_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::cont */ cont;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::length */ length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L1 */ _L1;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L2 */ _L2;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L3 */ _L3;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L10 */ _L10;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L11 */ _L11;
  kcg_bool /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L12 */ _L12;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L14 */ _L14;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::_L15 */ _L15;
} outC_MRSP_Determine_LengthOfTa_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP */
extern void MRSP_Determine_LengthOfTa_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::Acc */kcg_int Acc,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::SSP_target_in */SSP_t_indexed_matrix_element_TA_MRSP *SSP_target_in,
  outC_MRSP_Determine_LengthOfTa_TA_MRSP *outC);

extern void MRSP_Determine_LengthOfTa_reset_TA_MRSP(
  outC_MRSP_Determine_LengthOfTa_TA_MRSP *outC);

#endif /* _MRSP_Determine_LengthOfTa_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTa_TA_MRSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

