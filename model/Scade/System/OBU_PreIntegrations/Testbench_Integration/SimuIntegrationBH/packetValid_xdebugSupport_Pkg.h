/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _packetValid_xdebugSupport_Pkg_H_
#define _packetValid_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "packetValidBasics_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::packetValid::isValid */ isValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_packetValidBasics_xdebugSupport_Pkg /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* xdebugSupport_Pkg::packetValid::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::packetValid::_L3 */ _L3;
  kcg_int /* xdebugSupport_Pkg::packetValid::_L5 */ _L5;
  kcg_bool /* xdebugSupport_Pkg::packetValid::_L7 */ _L7;
  NID_PACKET /* xdebugSupport_Pkg::packetValid::_L13 */ _L13;
  array_int_30 /* xdebugSupport_Pkg::packetValid::_L15 */ _L15;
  kcg_bool /* xdebugSupport_Pkg::packetValid::_L16 */ _L16;
} outC_packetValid_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::packetValid */
extern void packetValid_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValid::packetHeader */ Metadata_T_Common_Types_Pkg *packetHeader,
  /* xdebugSupport_Pkg::packetValid::which_ID */ NID_PACKET which_ID,
  outC_packetValid_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void packetValid_reset_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void packetValid_init_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _packetValid_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** packetValid_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

