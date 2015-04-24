/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _TOOLS_calculate_L_PACKET_H_
#define _TOOLS_calculate_L_PACKET_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TOOLS_calculate_L_PACKET::L_PACKET */ L_PACKET;
  kcg_int /* TOOLS_calculate_L_PACKET::N_ITER_out */ N_ITER_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_calculate_L_PACKET::_L1 */ _L1;
  kcg_int /* TOOLS_calculate_L_PACKET::_L2 */ _L2;
  kcg_int /* TOOLS_calculate_L_PACKET::_L3 */ _L3;
  kcg_int /* TOOLS_calculate_L_PACKET::_L4 */ _L4;
  kcg_int /* TOOLS_calculate_L_PACKET::_L5 */ _L5;
  kcg_int /* TOOLS_calculate_L_PACKET::_L6 */ _L6;
  kcg_int /* TOOLS_calculate_L_PACKET::_L7 */ _L7;
} outC_TOOLS_calculate_L_PACKET;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_calculate_L_PACKET */
extern void TOOLS_calculate_L_PACKET(
  /* TOOLS_calculate_L_PACKET::N_ITER */kcg_int N_ITER,
  /* TOOLS_calculate_L_PACKET::l_common_data */kcg_int l_common_data,
  /* TOOLS_calculate_L_PACKET::l_section */kcg_int l_section,
  outC_TOOLS_calculate_L_PACKET *outC);

extern void TOOLS_calculate_L_PACKET_reset(outC_TOOLS_calculate_L_PACKET *outC);

#endif /* _TOOLS_calculate_L_PACKET_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_calculate_L_PACKET.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

