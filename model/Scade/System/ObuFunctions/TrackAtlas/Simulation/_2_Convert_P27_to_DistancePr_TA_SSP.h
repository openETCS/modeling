/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */
#ifndef __2_Convert_P27_to_DistancePr_TA_SSP_H_
#define __2_Convert_P27_to_DistancePr_TA_SSP_H_

#include "kcg_types.h"
#include "Normalize_Distance_d_inte_TA_Lib_internal.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::v_static_section1 */ v_static_section1;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::section1_delay */ section1_delay;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::section1 */ section1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Eval_Q_Front_TA_Lib_internal /* 2 */ _1_Context_2;
  outC_Normalize_Distance_d_inte_TA_Lib_internal /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L97 */ _L97;
  V_STATIC /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L96 */ _L96;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L95 */ _L95;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L94 */ _L94;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L93 */ _L93;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L92 */ _L92;
  Q_FRONT /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L91 */ _L91;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L90 */ _L90;
  Q_SCALE /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L89 */ _L89;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L88 */ _L88;
  D_STATIC /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L87 */ _L87;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L86 */ _L86;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L98 */ _L98;
} outC__2_Convert_P27_to_DistancePr_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section */
extern void _2_Convert_P27_to_DistancePr_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::Section1_in */P027V1_section_enum_T_TM_baseline2 *Section1_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  outC__2_Convert_P27_to_DistancePr_TA_SSP *outC);

extern void _2_Convert_P27_to_DistancePr_reset_TA_SSP(
  outC__2_Convert_P27_to_DistancePr_TA_SSP *outC);

#endif /* __2_Convert_P27_to_DistancePr_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _2_Convert_P27_to_DistancePr_TA_SSP.h
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

