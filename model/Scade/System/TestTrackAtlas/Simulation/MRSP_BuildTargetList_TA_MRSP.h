/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_BuildTargetList_TA_MRSP_H_
#define _MRSP_BuildTargetList_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_BuildTargetList_LOOP_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_list_t_TA_MRSP /* TA_MRSP::MRSP_BuildTargetList::SSP_list_out */ SSP_list_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_BuildTargetList_LOOP_TA_MRSP /* 1 */ Context_1[363];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__24018 /* TA_MRSP::MRSP_BuildTargetList::_L1 */ _L1;
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_BuildTargetList::_L3 */ _L3;
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_BuildTargetList::_L4 */ _L4;
  SSP_t_list_t_TA_MRSP /* TA_MRSP::MRSP_BuildTargetList::_L5 */ _L5;
} outC_MRSP_BuildTargetList_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_BuildTargetList */
extern void MRSP_BuildTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  outC_MRSP_BuildTargetList_TA_MRSP *outC);

extern void MRSP_BuildTargetList_reset_TA_MRSP(
  outC_MRSP_BuildTargetList_TA_MRSP *outC);

#endif /* _MRSP_BuildTargetList_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

