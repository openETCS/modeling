/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _C_P005_LinkedBGs_TM_conversions_H_
#define _C_P005_LinkedBGs_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBG_T_BG_Types_Pkg /* TM_conversions::C_P005_LinkedBGs::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* TM_conversions::C_P005_LinkedBGs::nid_c */ nid_c;
  Q_NEWCOUNTRY /* TM_conversions::C_P005_LinkedBGs::q_newcountry */ q_newcountry;
  LinkedBG_T_BG_Types_Pkg /* TM_conversions::C_P005_LinkedBGs::_L2 */ _L2;
  NID_LRBG /* TM_conversions::C_P005_LinkedBGs::_L3 */ _L3;
  Q_DIR /* TM_conversions::C_P005_LinkedBGs::_L4 */ _L4;
  Q_SCALE /* TM_conversions::C_P005_LinkedBGs::_L5 */ _L5;
  P005_section_enum_T_TM /* TM_conversions::C_P005_LinkedBGs::_L6 */ _L6;
  Q_LOCACC /* TM_conversions::C_P005_LinkedBGs::_L14 */ _L14;
  Q_LINKREACTION /* TM_conversions::C_P005_LinkedBGs::_L13 */ _L13;
  Q_LINKORIENTATION /* TM_conversions::C_P005_LinkedBGs::_L12 */ _L12;
  NID_BG /* TM_conversions::C_P005_LinkedBGs::_L11 */ _L11;
  NID_C /* TM_conversions::C_P005_LinkedBGs::_L10 */ _L10;
  Q_NEWCOUNTRY /* TM_conversions::C_P005_LinkedBGs::_L9 */ _L9;
  D_LINK /* TM_conversions::C_P005_LinkedBGs::_L8 */ _L8;
  kcg_bool /* TM_conversions::C_P005_LinkedBGs::_L7 */ _L7;
  NID_C /* TM_conversions::C_P005_LinkedBGs::_L15 */ _L15;
  Q_NEWCOUNTRY /* TM_conversions::C_P005_LinkedBGs::_L16 */ _L16;
  NID_C /* TM_conversions::C_P005_LinkedBGs::_L17 */ _L17;
  NID_C /* TM_conversions::C_P005_LinkedBGs::_L18 */ _L18;
  Q_NEWCOUNTRY /* TM_conversions::C_P005_LinkedBGs::_L19 */ _L19;
  Q_NEWCOUNTRY /* TM_conversions::C_P005_LinkedBGs::_L22 */ _L22;
  kcg_bool /* TM_conversions::C_P005_LinkedBGs::_L23 */ _L23;
} outC_C_P005_LinkedBGs_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_LinkedBGs */
extern void C_P005_LinkedBGs_TM_conversions(
  /* TM_conversions::C_P005_LinkedBGs::LRBG */NID_LRBG LRBG,
  /* TM_conversions::C_P005_LinkedBGs::q_dir */Q_DIR q_dir,
  /* TM_conversions::C_P005_LinkedBGs::q_scale */Q_SCALE q_scale,
  /* TM_conversions::C_P005_LinkedBGs::SectionsIn */P005_section_enum_T_TM *SectionsIn,
  /* TM_conversions::C_P005_LinkedBGs::NID_C_onboard */NID_C NID_C_onboard,
  outC_C_P005_LinkedBGs_TM_conversions *outC);

extern void C_P005_LinkedBGs_reset_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC);

#endif /* _C_P005_LinkedBGs_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_LinkedBGs_TM_conversions.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

