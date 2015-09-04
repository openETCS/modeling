/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_Determine_LengthOfTargetList_TA_MRSP_H_
#define _MRSP_Determine_LengthOfTargetList_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList::length */ length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP /* 1 */ Context_1[363];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_list_t_TA_MRSP /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L2 */ _L2;
  SSP_t_list_t_TA_MRSP /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L179 */ _L179;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L180 */ _L180;
  kcg_bool /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L181 */ _L181;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L182 */ _L182;
  kcg_int /* TA_MRSP::MRSP_Determine_LengthOfTargetList::_L183 */ _L183;
} outC_MRSP_Determine_LengthOfTargetList_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Determine_LengthOfTargetList */
extern void MRSP_Determine_LengthOfTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::SSP_t_list_in */SSP_t_list_t_TA_MRSP *SSP_t_list_in,
  outC_MRSP_Determine_LengthOfTargetList_TA_MRSP *outC);

extern void MRSP_Determine_LengthOfTargetList_reset_TA_MRSP(
  outC_MRSP_Determine_LengthOfTargetList_TA_MRSP *outC);

#endif /* _MRSP_Determine_LengthOfTargetList_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTargetList_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

