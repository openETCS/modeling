/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _locationOfReferenceLRBG_xdebugSupport_Pkg_H_
#define _locationOfReferenceLRBG_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Decode_NID_LRBG_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::position */ position;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::passed */ passed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L2 */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L3 */ _L3;
  NID_C /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L4 */ _L4;
  NID_BG /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L5 */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L6 */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L8 */ _L8;
  NID_LRBG /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L10 */ _L10;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L12 */ _L12;
  NID_BG /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L14 */ _L14;
  NID_C /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L13 */ _L13;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L15 */ _L15;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L16 */ _L16;
  Location_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L17 */ _L17;
  kcg_bool /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L18 */ _L18;
  kcg_int /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L19 */ _L19;
  trainProperties_T_TrainPosition_Types_Pck /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L20 */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L21 */ _L21;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L22 */ _L22;
} outC_locationOfReferenceLRBG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::locationOfReferenceLRBG */
extern void locationOfReferenceLRBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void locationOfReferenceLRBG_reset_xdebugSupport_Pkg(
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void locationOfReferenceLRBG_init_xdebugSupport_Pkg(
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _locationOfReferenceLRBG_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** locationOfReferenceLRBG_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

