/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */
#ifndef _TestDistanceConversionSSP_H_
#define _TestDistanceConversionSSP_H_

#include "kcg_types.h"
#include "TestP027V1_Internal_Tests.h"
#include "_6_Convert_P27_to_DistancePr_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TestDistanceConversionSSP::SpeedProfile */ SpeedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__6_Convert_P27_to_DistancePr_TA_SSP /* 1 */ _1_Context_1;
  outC_TestP027V1_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TestDistanceConversionSSP::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TestDistanceConversionSSP::_L2 */ _L2;
  SSP_section_t_TA_MRSP /* TestDistanceConversionSSP::_L5 */ _L5;
  SSP_section_t_TA_MRSP /* TestDistanceConversionSSP::_L4 */ _L4;
  V_internal_Type_Obu_BasicTypes_Pkg /* TestDistanceConversionSSP::_L3 */ _L3;
  kcg_int /* TestDistanceConversionSSP::_L6 */ _L6;
} outC_TestDistanceConversionSSP;

/* ===========  node initialization and cycle functions  =========== */
/* TestDistanceConversionSSP */
extern void TestDistanceConversionSSP(outC_TestDistanceConversionSSP *outC);

extern void TestDistanceConversionSSP_reset(
  outC_TestDistanceConversionSSP *outC);

#endif /* _TestDistanceConversionSSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestDistanceConversionSSP.h
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

