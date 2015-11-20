/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _packetValidBasics_xdebugSupport_Pkg_H_
#define _packetValidBasics_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::continue */ _1_continue;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::packtIsValid */ packtIsValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::packetValidBasics::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L2 */ _L2;
  NID_PACKET /* xdebugSupport_Pkg::packetValidBasics::_L6 */ _L6;
  NID_PACKET /* xdebugSupport_Pkg::packetValidBasics::_L7 */ _L7;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L8 */ _L8;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L9 */ _L9;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L10 */ _L10;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L11 */ _L11;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L12 */ _L12;
  kcg_int /* xdebugSupport_Pkg::packetValidBasics::_L13 */ _L13;
  NID_PACKET /* xdebugSupport_Pkg::packetValidBasics::_L14 */ _L14;
  kcg_bool /* xdebugSupport_Pkg::packetValidBasics::_L15 */ _L15;
  kcg_int /* xdebugSupport_Pkg::packetValidBasics::_L16 */ _L16;
} outC_packetValidBasics_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::packetValidBasics */
extern void packetValidBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValidBasics::accu */ kcg_bool accu,
  /* xdebugSupport_Pkg::packetValidBasics::element */ MetadataElement_T_Common_Types_Pkg *element,
  /* xdebugSupport_Pkg::packetValidBasics::which_ID */ NID_PACKET which_ID,
  outC_packetValidBasics_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void packetValidBasics_reset_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void packetValidBasics_init_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _packetValidBasics_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** packetValidBasics_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

