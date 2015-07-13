/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */
#ifndef _Convert_P27_to_DistancePr_TA_SSP_H_
#define _Convert_P27_to_DistancePr_TA_SSP_H_

#include "kcg_types.h"
#include "_3_Convert_P27_to_DistancePr_TA_SSP.h"
#include "_2_Convert_P27_to_DistancePr_TA_SSP.h"

/* ========================  input structure  ====================== */
typedef struct {
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::Packet_in */ Packet_in;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::TrainLength */ TrainLength;
} inC_Convert_P27_to_DistancePr_TA_SSP;

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
  outC__3_Convert_P27_to_DistancePr_TA_SSP /* 3 */ _1_Context_3[33];
  outC__2_Convert_P27_to_DistancePr_TA_SSP /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L73 */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L72 */ _L72;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L71 */ _L71;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L70 */ _L70;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L69 */ _L69;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L66 */ _L66;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L67 */ _L67;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile::_L68 */ _L68;
  Q_SCALE /* TA_SSP::Convert_P27_to_DistanceProfile::_L65 */ _L65;
  array__491 /* TA_SSP::Convert_P27_to_DistanceProfile::_L64 */ _L64;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L63 */ _L63;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L62 */ _L62;
  array__494 /* TA_SSP::Convert_P27_to_DistanceProfile::_L74 */ _L74;
  array__497 /* TA_SSP::Convert_P27_to_DistanceProfile::_L76 */ _L76;
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L77 */ _L77;
  array_int_33 /* TA_SSP::Convert_P27_to_DistanceProfile::_L81 */ _L81;
  array_int_33 /* TA_SSP::Convert_P27_to_DistanceProfile::_L82 */ _L82;
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile::_L83 */ _L83;
  array__473 /* TA_SSP::Convert_P27_to_DistanceProfile::_L84 */ _L84;
  array__503 /* TA_SSP::Convert_P27_to_DistanceProfile::_L85 */ _L85;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile::_L86 */ _L86;
} outC_Convert_P27_to_DistancePr_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Convert_P27_to_DistanceProfile */
extern void Convert_P27_to_DistancePr_TA_SSP(
  inC_Convert_P27_to_DistancePr_TA_SSP *inC,
  outC_Convert_P27_to_DistancePr_TA_SSP *outC);

extern void Convert_P27_to_DistancePr_reset_TA_SSP(
  outC_Convert_P27_to_DistancePr_TA_SSP *outC);

#endif /* _Convert_P27_to_DistancePr_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistancePr_TA_SSP.h
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

