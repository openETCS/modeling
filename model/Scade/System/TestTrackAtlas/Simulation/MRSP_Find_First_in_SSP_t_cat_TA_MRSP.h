/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_Find_First_in_SSP_t_cat_TA_MRSP_H_
#define _MRSP_Find_First_in_SSP_t_cat_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_trgt_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::SSP_indexed_loc */ SSP_indexed_loc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L1 */ _L1;
  SSP_t_cat_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L2 */ _L2;
  kcg_bool /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L3 */ _L3;
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L4 */ _L4;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L5 */ _L5;
  SSP_t_indexed_trgt_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L6 */ _L6;
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L7 */ _L7;
  kcg_int /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L8 */ _L8;
} outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat */
extern void MRSP_Find_First_in_SSP_t_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::SSP_cat_in */SSP_t_cat_t_TA_MRSP *SSP_cat_in,
  outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP *outC);

extern void MRSP_Find_First_in_SSP_t_cat_reset_TA_MRSP(
  outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP *outC);

#endif /* _MRSP_Find_First_in_SSP_t_cat_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_SSP_t_cat_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

