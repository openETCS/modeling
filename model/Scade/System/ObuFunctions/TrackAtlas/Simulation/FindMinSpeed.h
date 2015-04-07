/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */
#ifndef _FindMinSpeed_H_
#define _FindMinSpeed_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t /* FindMinSpeed::SpeedOut */ SpeedOut;
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
  SSP_s_section_t /* FindMinSpeed::_L1 */ _L1;
  SSP_s_section_t /* FindMinSpeed::_L2 */ _L2;
  SSP_s_section_t /* FindMinSpeed::_L3 */ _L3;
} outC_FindMinSpeed;

/* ===========  node initialization and cycle functions  =========== */
/* FindMinSpeed */
extern void FindMinSpeed(
  /* FindMinSpeed::Speed_In */SSP_s_section_t Speed_In,
  /* FindMinSpeed::Speed_Sectiom */SSP_s_section_t Speed_Sectiom,
  outC_FindMinSpeed *outC);

extern void FindMinSpeed_reset(outC_FindMinSpeed *outC);

#endif /* _FindMinSpeed_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMinSpeed.h
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

