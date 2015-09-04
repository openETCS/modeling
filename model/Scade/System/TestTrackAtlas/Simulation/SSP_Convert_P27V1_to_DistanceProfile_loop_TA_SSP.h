/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_H_
#define _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_H_

#include "kcg_types.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::SpeedtProfile */ SpeedtProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* 2 */ Context_2;
  outC_Eval_Q_Front_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L139 */ _L139;
  D_STATIC /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L138 */ _L138;
  V_STATIC /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L137 */ _L137;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L136 */ _L136;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L135 */ _L135;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L134 */ _L134;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L133 */ _L133;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L131 */ _L131;
  kcg_bool /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L130 */ _L130;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L125 */ _L125;
  P027V1_section_enum_T_TM_baseline2 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L123 */ _L123;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L121 */ _L121;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L142 */ _L142;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L143 */ _L143;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L144 */ _L144;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L145 */ _L145;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L146 */ _L146;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L147 */ _L147;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L148 */ _L148;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L154 */ _L154;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L155 */ _L155;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L156 */ _L156;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L157 */ _L157;
  kcg_int /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L158 */ _L158;
  Q_FRONT /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L159 */ _L159;
  kcg_bool /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L160 */ _L160;
} outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop */
extern void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::ProfileAccu */StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP *outC);

extern void SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP *outC);

#endif /* _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

