/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */
#ifndef _Update_GP_per_LRBG_loop_TA_Lib_internal_H_
#define _Update_GP_per_LRBG_loop_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Update_GP_per_LRBG_loop::GradientProfile_out */ GradientProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L5 */ _L5;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L7 */ _L7;
  kcg_int /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L11 */ _L11;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L19 */ _L19;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Update_GP_per_LRBG_loop::_L20 */ _L20;
} outC_Update_GP_per_LRBG_loop_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Update_GP_per_LRBG_loop */
extern void Update_GP_per_LRBG_loop_TA_Lib_internal(
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::i */kcg_int i,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::GP */GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Lib_internal::Update_GP_per_LRBG_loop::new_GP_received */GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_Update_GP_per_LRBG_loop_TA_Lib_internal *outC);

extern void Update_GP_per_LRBG_loop_reset_TA_Lib_internal(
  outC_Update_GP_per_LRBG_loop_TA_Lib_internal *outC);

#endif /* _Update_GP_per_LRBG_loop_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_per_LRBG_loop_TA_Lib_internal.h
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

