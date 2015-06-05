/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:46:37
*************************************************************$ */
#ifndef _TOOLS_calculate_L_PACKET_TM_conversions_H_
#define _TOOLS_calculate_L_PACKET_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::L_PACKET */ L_PACKET;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::N_ITER_out */ N_ITER_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L1 */ _L1;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L2 */ _L2;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L3 */ _L3;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L4 */ _L4;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L5 */ _L5;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L6 */ _L6;
  kcg_int /* TM_conversions::TOOLS_calculate_L_PACKET::_L7 */ _L7;
} outC_TOOLS_calculate_L_PACKET_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::TOOLS_calculate_L_PACKET */
extern void TOOLS_calculate_L_PACKET_TM_conversions(
  /* TM_conversions::TOOLS_calculate_L_PACKET::N_ITER */kcg_int _1_N_ITER,
  /* TM_conversions::TOOLS_calculate_L_PACKET::l_common_data */kcg_int l_common_data,
  /* TM_conversions::TOOLS_calculate_L_PACKET::l_section */kcg_int l_section,
  outC_TOOLS_calculate_L_PACKET_TM_conversions *outC);

extern void TOOLS_calculate_L_PACKET_reset_TM_conversions(
  outC_TOOLS_calculate_L_PACKET_TM_conversions *outC);

#endif /* _TOOLS_calculate_L_PACKET_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_calculate_L_PACKET_TM_conversions.h
** Generation date: 2015-06-05T13:46:37
*************************************************************$ */

