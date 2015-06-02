/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */
#ifndef _RECV_ConvertP005afterRead_TM_conversions_H_
#define _RECV_ConvertP005afterRead_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
#include "CAST_Int_to_Q_DIR_TM_conversions.h"
#include "CAST_Int_to_Q_SCALE_TM_conversions.h"
#include "TOOLS_evaluate_N_ITER_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBG_T_BG_Types_Pkg /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Linked_BG */ Linked_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions /* 2 */ Context_2;
  outC_CAST_Int_to_Q_DIR_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_SCALE_TM_conversions /* 1 */ _1_Context_1;
  outC_TOOLS_evaluate_N_ITER_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Array4_TM /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L1 */ _L1;
  P005E_array_T_TM /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L2 */ _L2;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L6 */ _L6;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L5 */ _L5;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L4 */ _L4;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L3 */ _L3;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L28 */ _L28;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L27 */ _L27;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L26 */ _L26;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L25 */ _L25;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L24 */ _L24;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L23 */ _L23;
  Q_LINKREACTION /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L36 */ _L36;
  Q_LINKORIENTATION /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L37 */ _L37;
  Q_NEWCOUNTRY /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L39 */ _L39;
  Q_DIR /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L40 */ _L40;
  kcg_bool /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L41 */ _L41;
  NID_LRBG /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L42 */ _L42;
  LinkedBG_T_BG_Types_Pkg /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L44 */ _L44;
  Q_SCALE /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L45 */ _L45;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L46 */ _L46;
  kcg_bool /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L47 */ _L47;
  kcg_int /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L48 */ _L48;
  kcg_bool /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L49 */ _L49;
} outC_RECV_ConvertP005afterRead_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::RECV_ConvertP005afterRead_Element_CT */
extern void RECV_ConvertP005afterRead_TM_conversions(
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::LRBG */NID_LRBG LRBG,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Common */Array4_TM *Common,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Element */P005E_array_T_TM *Element,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::n_section */kcg_int n_section,
  outC_RECV_ConvertP005afterRead_TM_conversions *outC);

extern void RECV_ConvertP005afterRead_reset_TM_conversions(
  outC_RECV_ConvertP005afterRead_TM_conversions *outC);

#endif /* _RECV_ConvertP005afterRead_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertP005afterRead_TM_conversions.h
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

