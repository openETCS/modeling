/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */
#ifndef _Determine_Lowest_Speed_H_
#define _Determine_Lowest_Speed_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t /* Determine_Lowest_Speed::MRSpeed */ MRSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* math::Min::_L21 */ _L21_1;
  kcg_int /* math::Min::_L22 */ _L22_1;
  kcg_int /* math::Min::_L24 */ _L24_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_int /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_int /* math::Min::I2 */ I2_1;
  kcg_int /* math::Min::I1 */ I1_1;
  SSP_s_section_t /* Determine_Lowest_Speed::_L1 */ _L1;
  SSP_s_section_t /* Determine_Lowest_Speed::_L2 */ _L2;
  SSP_s_section_t /* Determine_Lowest_Speed::_L3 */ _L3;
  kcg_int /* Determine_Lowest_Speed::_L4 */ _L4;
  kcg_int /* Determine_Lowest_Speed::_L5 */ _L5;
  kcg_bool /* Determine_Lowest_Speed::_L6 */ _L6;
  SSP_s_section_t /* Determine_Lowest_Speed::_L7 */ _L7;
} outC_Determine_Lowest_Speed;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_Lowest_Speed */
extern void Determine_Lowest_Speed(
  /* Determine_Lowest_Speed::i */kcg_int i,
  /* Determine_Lowest_Speed::Acc */SSP_s_section_t Acc,
  /* Determine_Lowest_Speed::ValidSpeed */SSP_s_section_t ValidSpeed,
  outC_Determine_Lowest_Speed *outC);

extern void Determine_Lowest_Speed_reset(outC_Determine_Lowest_Speed *outC);

#endif /* _Determine_Lowest_Speed_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_Lowest_Speed.h
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

