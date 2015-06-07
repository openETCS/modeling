/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */
#ifndef _RECV_ConvertP005afterRead_TM_conversions_H_
#define _RECV_ConvertP005afterRead_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
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
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions /* 2 */ Context_2;
  outC_TOOLS_evaluate_N_ITER_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _16_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ _8_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _4_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_118_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_117_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_115_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_114_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_113_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_112_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ _11_else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_110_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_19_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ _7_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_16_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_13_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  Array4_TM /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L1 */ _L1;
  P005E_array_Told_TM /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::_L2 */ _L2;
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
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Element */P005E_array_Told_TM *Element,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::n_section */kcg_int n_section,
  outC_RECV_ConvertP005afterRead_TM_conversions *outC);

extern void RECV_ConvertP005afterRead_reset_TM_conversions(
  outC_RECV_ConvertP005afterRead_TM_conversions *outC);

#endif /* _RECV_ConvertP005afterRead_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertP005afterRead_TM_conversions.h
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */

