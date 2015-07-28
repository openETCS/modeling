/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Convert_P21_to_DistancePr_TA_Gradient_H_
#define _Convert_P21_to_DistancePr_TA_Gradient_H_

#include "kcg_types.h"
#include "Normalize_Distance_d_inte_TA_Lib_internal.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::GradientProfile */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_inte_TA_Lib_internal /* 4 */ Context_4;
  outC_EVAL_Q_GDIR_TA_Lib_internal /* 2 */ Context_2;
  outC_Normalize_Distance_d_inte_TA_Lib_internal /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L141 */ _L141;
  P021_section_enum_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L140 */ _L140;
  Q_SCALE /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L139 */ _L139;
  D_GRADIENT /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L138 */ _L138;
  D_GRADIENT /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L137 */ _L137;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L136 */ _L136;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L135 */ _L135;
  kcg_int /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L134 */ _L134;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L133 */ _L133;
  kcg_int /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L132 */ _L132;
  kcg_int /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L131 */ _L131;
  kcg_bool /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L130 */ _L130;
  Q_GDIR /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L129 */ _L129;
  P021_OBU_sectionlist_enum_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L128 */ _L128;
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L127 */ _L127;
  kcg_int /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L126 */ _L126;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L125 */ _L125;
  G_A /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L124 */ _L124;
  P021_section_enum_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L123 */ _L123;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L122 */ _L122;
  P021_OBU_sectionlist_enum_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L121 */ _L121;
} outC_Convert_P21_to_DistancePr_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Convert_P21_to_DistanceProfile_loop */
extern void Convert_P21_to_DistancePr_TA_Gradient(
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::acc */GradientProfile_t_TrackAtlasTypes *acc,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::SectionIn */P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC);

extern void Convert_P21_to_DistancePr_reset_TA_Gradient(
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC);

#endif /* _Convert_P21_to_DistancePr_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P21_to_DistancePr_TA_Gradient.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

