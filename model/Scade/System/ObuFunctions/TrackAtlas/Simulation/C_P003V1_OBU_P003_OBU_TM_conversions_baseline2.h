/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_
#define _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003_onbaord_out */ P003_onbaord_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_OBU_T_TM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L50 */ _L50;
  kcg_int /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L52 */ _L52;
  kcg_bool /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L53 */ _L53;
  P003V1_OBU_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L54 */ _L54;
  Q_DIR /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L55 */ _L55;
  Q_SCALE /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L57 */ _L57;
  D_VALIDNV /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L58 */ _L58;
  _5_P003_OBU_nid_c_sectionlist_enum_T_TM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L59 */ _L59;
  N_ITER /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L60 */ _L60;
  NID_C /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L61 */ _L61;
  V_NVSHUNT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L62 */ _L62;
  V_NVSTFF /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L63 */ _L63;
  V_NVONSIGHT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L64 */ _L64;
  P003_permanent_data_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L65 */ _L65;
  V_NVLIMSUPERV /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L70 */ _L70;
  V_NVONSIGHT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L71 */ _L71;
  V_NVREL /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L72 */ _L72;
  D_NVROLL /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L73 */ _L73;
  Q_NVSBTSMPERM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L74 */ _L74;
  Q_NVEMRRLS /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L75 */ _L75;
  P203V1_OBU_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L76 */ _L76;
  Q_NVGUIPERM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L77 */ _L77;
  Q_NVLOCACC /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L78 */ _L78;
  Q_NVSBFBPERM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L79 */ _L79;
  Q_NVINHSMICPERM /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L80 */ _L80;
  V_NVALLOWOVTRP /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L137 */ _L137;
  V_NVSUPOVTRP /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L138 */ _L138;
  D_NVOVTRP /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L139 */ _L139;
  T_NVOVTRP /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L140 */ _L140;
  D_NVPOTRP /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L141 */ _L141;
  M_NVCONTACT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L142 */ _L142;
  T_NVCONTACT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L143 */ _L143;
  M_NVDERUN /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L144 */ _L144;
  D_NVSTFF /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L145 */ _L145;
  Q_NVDRIVER_ADHES /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L146 */ _L146;
  A_NVMAXREDADH1 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L147 */ _L147;
  A_NVMAXREDADH2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L204 */ _L204;
  A_NVMAXREDADH3 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L205 */ _L205;
  M_NVAVADH /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L206 */ _L206;
  M_NVEBCL /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L207 */ _L207;
  Q_NVKINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L208 */ _L208;
  Q_NVKVINTSET /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L209 */ _L209;
  A_NVP23 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L210 */ _L210;
  A_NVP12 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L211 */ _L211;
  V_NVKVINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L212 */ _L212;
  M_NVKVINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L213 */ _L213;
  M_NVKVINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L214 */ _L214;
  N_ITER /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L215 */ _L215;
  P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L216 */ _L216;
  N_ITER /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L217 */ _L217;
  P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L218 */ _L218;
  L_NVKRINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L219 */ _L219;
  M_NVKRINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L220 */ _L220;
  N_ITER /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L221 */ _L221;
  P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L222 */ _L222;
  M_NVKTINT /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L223 */ _L223;
} outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU */
extern void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC);

extern void C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC);

#endif /* _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

