/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Read_P137_Legacy_TM_specific_H_
#define _Read_P137_Legacy_TM_specific_H_

#include "kcg_types.h"
#include "Read_P137_TM.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* TM_specific::Read_P137_Legacy::P137_legacy_out */ P137_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P137_TM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* TM_specific::Read_P137_Legacy::_L2 */ _L2;
  kcg_bool /* TM_specific::Read_P137_Legacy::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* TM_specific::Read_P137_Legacy::_L3 */ _L3;
} outC_Read_P137_Legacy_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P137_Legacy */
extern void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P137_Legacy_TM_specific *outC);

extern void Read_P137_Legacy_reset_TM_specific(
  outC_Read_P137_Legacy_TM_specific *outC);

#endif /* _Read_P137_Legacy_TM_specific_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P137_Legacy_TM_specific.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

