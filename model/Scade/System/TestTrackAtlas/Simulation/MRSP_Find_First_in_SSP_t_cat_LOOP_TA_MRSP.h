/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP_H_
#define _MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::cont */ cont;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::Last_Loc */ Last_Loc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L1 */ _L1;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L2 */ _L2;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L3 */ _L3;
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L4 */ _L4;
  kcg_bool /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L5 */ _L5;
  kcg_bool /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::_L6 */ _L6;
} outC_MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP */
extern void MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::Loc */SSP_target_t_TA_MRSP Loc,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::SSP_section_in */SSP_t_section_t_TA_MRSP SSP_section_in,
  outC_MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP *outC);

extern void MRSP_Find_First_in_SSP_t_cat_LOOP_reset_TA_MRSP(
  outC_MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP *outC);

#endif /* _MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

