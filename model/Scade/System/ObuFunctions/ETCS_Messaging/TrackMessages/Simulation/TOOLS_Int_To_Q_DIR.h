/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-04T20:16:46
*************************************************************$ */
#ifndef _TOOLS_Int_To_Q_DIR_H_
#define _TOOLS_Int_To_Q_DIR_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TOOLS_Int_To_Q_DIR::Q_DIR_as_sInt */ Q_DIR_as_sInt;
} inC_TOOLS_Int_To_Q_DIR;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIR /* TOOLS_Int_To_Q_DIR::QDIR */ QDIR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_Int_To_Q_DIR::_L2 */ _L2;
  Q_DIR /* TOOLS_Int_To_Q_DIR::_L3 */ _L3;
  kcg_bool /* TOOLS_Int_To_Q_DIR::_L4 */ _L4;
  kcg_int /* TOOLS_Int_To_Q_DIR::_L5 */ _L5;
  Q_DIR /* TOOLS_Int_To_Q_DIR::_L6 */ _L6;
  kcg_bool /* TOOLS_Int_To_Q_DIR::_L7 */ _L7;
  Q_DIR /* TOOLS_Int_To_Q_DIR::_L8 */ _L8;
  kcg_int /* TOOLS_Int_To_Q_DIR::_L9 */ _L9;
  Q_DIR /* TOOLS_Int_To_Q_DIR::_L10 */ _L10;
  Q_DIR /* TOOLS_Int_To_Q_DIR::_L11 */ _L11;
} outC_TOOLS_Int_To_Q_DIR;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_Int_To_Q_DIR */
extern void TOOLS_Int_To_Q_DIR(
  inC_TOOLS_Int_To_Q_DIR *inC,
  outC_TOOLS_Int_To_Q_DIR *outC);

extern void TOOLS_Int_To_Q_DIR_reset(outC_TOOLS_Int_To_Q_DIR *outC);

#endif /* _TOOLS_Int_To_Q_DIR_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_To_Q_DIR.h
** Generation date: 2015-03-04T20:16:46
*************************************************************$ */

