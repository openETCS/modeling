/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */
#ifndef _SEND_ConvertP005forWrite_IT_H_
#define _SEND_ConvertP005forWrite_IT_H_

#include "kcg_types.h"
#include "TOOLS_Int_to_Q_DIR.h"
#include "SEND_ConvertP005forWriteS.h"
#include "TOOLS_calculate_L_PACKET.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* SEND_ConvertP005forWrite_IT::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* SEND_ConvertP005forWrite_IT::RM05_out */ RM05_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TOOLS_Int_to_Q_DIR /* 1 */ _2_Context_1;
  outC_SEND_ConvertP005forWriteS /* 1 */ _1_Context_1;
  outC_SEND_ConvertP005forWriteS /* 2 */ Context_2;
  outC_SEND_ConvertP005forWriteS /* 3 */ Context_3;
  outC_SEND_ConvertP005forWriteS /* 4 */ Context_4;
  outC_SEND_ConvertP005forWriteS /* 5 */ Context_5;
  outC_TOOLS_calculate_L_PACKET /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TM_P005 /* SEND_ConvertP005forWrite_IT::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* SEND_ConvertP005forWrite_IT::_L204 */ _L204;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L205 */ _L205;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L206 */ _L206;
  array_int_461 /* SEND_ConvertP005forWrite_IT::_L209 */ _L209;
  array_int_500 /* SEND_ConvertP005forWrite_IT::_L211 */ _L211;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L212 */ _L212;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L213 */ _L213;
  TM_P005E_T /* SEND_ConvertP005forWrite_IT::_L230 */ _L230;
  TM_P005E_T /* SEND_ConvertP005forWrite_IT::_L229 */ _L229;
  TM_P005E_T /* SEND_ConvertP005forWrite_IT::_L228 */ _L228;
  TM_P005E_T /* SEND_ConvertP005forWrite_IT::_L227 */ _L227;
  TM_P005E_T /* SEND_ConvertP005forWrite_IT::_L226 */ _L226;
  array_int_11 /* SEND_ConvertP005forWrite_IT::_L325 */ _L325;
  array_int_18 /* SEND_ConvertP005forWrite_IT::_L327 */ _L327;
  array_int_25 /* SEND_ConvertP005forWrite_IT::_L328 */ _L328;
  array_int_32 /* SEND_ConvertP005forWrite_IT::_L329 */ _L329;
  array_int_39 /* SEND_ConvertP005forWrite_IT::_L330 */ _L330;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L336 */ _L336;
  array_int_4 /* SEND_ConvertP005forWrite_IT::_L355 */ _L355;
  TM_P05Es_T /* SEND_ConvertP005forWrite_IT::_L219 */ _L219;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L218 */ _L218;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L217 */ _L217;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L216 */ _L216;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L215 */ _L215;
  kcg_bool /* SEND_ConvertP005forWrite_IT::_L214 */ _L214;
  Q_DIR /* SEND_ConvertP005forWrite_IT::_L356 */ _L356;
  TM_P005E_array_T /* SEND_ConvertP005forWrite_IT::_L357 */ _L357;
  TM_P005E_array_T /* SEND_ConvertP005forWrite_IT::_L358 */ _L358;
  TM_P005E_array_T /* SEND_ConvertP005forWrite_IT::_L359 */ _L359;
  TM_P005E_array_T /* SEND_ConvertP005forWrite_IT::_L360 */ _L360;
  TM_P005E_array_T /* SEND_ConvertP005forWrite_IT::_L361 */ _L361;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L364 */ _L364;
  kcg_int /* SEND_ConvertP005forWrite_IT::_L363 */ _L363;
} outC_SEND_ConvertP005forWrite_IT;

/* ===========  node initialization and cycle functions  =========== */
/* SEND_ConvertP005forWrite_IT */
extern void SEND_ConvertP005forWrite_IT(
  /* SEND_ConvertP005forWrite_IT::RM05 */TM_P005 *RM05,
  outC_SEND_ConvertP005forWrite_IT *outC);

extern void SEND_ConvertP005forWrite_IT_reset(
  outC_SEND_ConvertP005forWrite_IT *outC);

#endif /* _SEND_ConvertP005forWrite_IT_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_ConvertP005forWrite_IT.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */

