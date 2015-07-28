/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef __16_Convert_P27_to_DistancePr_TA_SSP_H_
#define __16_Convert_P27_to_DistancePr_TA_SSP_H_

#include "kcg_types.h"
#include "Normalize_Distance_d_inte_TA_Lib_internal.h"
#include "DetectSpeedIncrease_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SpeedProfile */ SpeedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_inte_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_DetectSpeedIncrease_TA_Lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L44 */ _L44;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L45 */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L46 */ _L46;
  Q_SCALE /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L47 */ _L47;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L48 */ _L48;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L52 */ _L52;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L58 */ _L58;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L57 */ _L57;
  kcg_bool /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L64 */ _L64;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L65 */ _L65;
  Q_FRONT /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L66 */ _L66;
  kcg_bool /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L67 */ _L67;
  Q_FRONT /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L68 */ _L68;
  kcg_bool /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L69 */ _L69;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L70 */ _L70;
  D_STATIC /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L71 */ _L71;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L84 */ _L84;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L85 */ _L85;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L86 */ _L86;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L87 */ _L87;
  V_STATIC /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L88 */ _L88;
  SSP_section_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L89 */ _L89;
  SSP_cat_t_TA_MRSP /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L90 */ _L90;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L91 */ _L91;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L92 */ _L92;
  kcg_int /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L93 */ _L93;
} outC__16_Convert_P27_to_DistancePr_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Convert_P27_to_DistanceProfile_loop */
extern void _16_Convert_P27_to_DistancePr_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::acc */SSP_cat_t_TA_MRSP *acc,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  outC__16_Convert_P27_to_DistancePr_TA_SSP *outC);

extern void _16_Convert_P27_to_DistancePr_reset_TA_SSP(
  outC__16_Convert_P27_to_DistancePr_TA_SSP *outC);

#endif /* __16_Convert_P27_to_DistancePr_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _16_Convert_P27_to_DistancePr_TA_SSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

