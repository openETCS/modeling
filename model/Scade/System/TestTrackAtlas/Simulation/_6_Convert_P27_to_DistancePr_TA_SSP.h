/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */
#ifndef __6_Convert_P27_to_DistancePr_TA_SSP_H_
#define __6_Convert_P27_to_DistancePr_TA_SSP_H_

#include "kcg_types.h"
#include "_5_Convert_P27_to_DistancePr_TA_SSP.h"
#include "Convert_P27_to_DistancePr_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::SpeedProfile */ SpeedProfile;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::v_static_section1 */ v_static_section1;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::section1_delay */ section1_delay;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::section1 */ section1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__5_Convert_P27_to_DistancePr_TA_SSP /* 3 */ _1_Context_3[33];
  outC_Convert_P27_to_DistancePr_TA_SSP /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L73 */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L72 */ _L72;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L71 */ _L71;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L70 */ _L70;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L69 */ _L69;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L66 */ _L66;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L67 */ _L67;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L68 */ _L68;
  Q_SCALE /* TA_SSP::Convert_P27_to_DistanceProfile::_L65 */ _L65;
  array__2829 /* TA_SSP::Convert_P27_to_DistanceProfile::_L64 */ _L64;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L63 */ _L63;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L62 */ _L62;
  array__2832 /* TA_SSP::Convert_P27_to_DistanceProfile::_L74 */ _L74;
  array__2835 /* TA_SSP::Convert_P27_to_DistanceProfile::_L76 */ _L76;
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L77 */ _L77;
  array_int_33 /* TA_SSP::Convert_P27_to_DistanceProfile::_L81 */ _L81;
  array_int_33 /* TA_SSP::Convert_P27_to_DistanceProfile::_L82 */ _L82;
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L83 */ _L83;
  array__2700 /* TA_SSP::Convert_P27_to_DistanceProfile::_L84 */ _L84;
  array__2838 /* TA_SSP::Convert_P27_to_DistanceProfile::_L85 */ _L85;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L86 */ _L86;
} outC__6_Convert_P27_to_DistancePr_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Convert_P27_to_DistanceProfile */
extern void _6_Convert_P27_to_DistancePr_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile::Packet27_in */P027V1_OBU_T_TM_baseline2 *Packet27_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  outC__6_Convert_P27_to_DistancePr_TA_SSP *outC);

extern void _6_Convert_P27_to_DistancePr_reset_TA_SSP(
  outC__6_Convert_P27_to_DistancePr_TA_SSP *outC);

#endif /* __6_Convert_P27_to_DistancePr_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _6_Convert_P27_to_DistancePr_TA_SSP.h
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

