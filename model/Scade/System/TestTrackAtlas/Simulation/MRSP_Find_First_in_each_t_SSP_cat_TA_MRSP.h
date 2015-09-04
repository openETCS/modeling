/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP_H_
#define _MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_Find_First_in_SSP_t_cat_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_targets_list_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_indexed_targets_per_cat_out */ SSP_indexed_targets_per_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__23964 /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::_L1 */ _L1;
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::_L3 */ _L3;
} outC_MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat */
extern void MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP *outC);

extern void MRSP_Find_First_in_each_t_SSP_cat_reset_TA_MRSP(
  outC_MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP *outC);

#endif /* _MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

