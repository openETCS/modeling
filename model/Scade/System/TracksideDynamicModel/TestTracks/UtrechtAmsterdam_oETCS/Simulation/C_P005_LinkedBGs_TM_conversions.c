/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

void C_P005_LinkedBGs_reset_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC)
{
}

/* TM_conversions::C_P005_LinkedBGs */
void C_P005_LinkedBGs_TM_conversions(
  /* TM_conversions::C_P005_LinkedBGs::LRBG */NID_LRBG LRBG,
  /* TM_conversions::C_P005_LinkedBGs::q_dir */Q_DIR q_dir,
  /* TM_conversions::C_P005_LinkedBGs::q_scale */Q_SCALE q_scale,
  /* TM_conversions::C_P005_LinkedBGs::SectionsIn */P005_section_enum_T_TM *SectionsIn,
  outC_C_P005_LinkedBGs_TM_conversions *outC)
{
  kcg_copy_P005_section_enum_T_TM(&outC->_L6, SectionsIn);
  outC->_L14 = outC->_L6.q_locacc;
  outC->_L13 = outC->_L6.q_linkreaction;
  outC->_L12 = outC->_L6.q_linkorientation;
  outC->_L11 = outC->_L6.nid_bg;
  outC->_L10 = outC->_L6.nid_c;
  outC->_L9 = outC->_L6.q_newcountry;
  outC->_L8 = outC->_L6.d_link;
  outC->_L7 = outC->_L6.valid;
  outC->_L5 = q_scale;
  outC->_L4 = q_dir;
  outC->_L3 = LRBG;
  outC->_L2.valid = outC->_L7;
  outC->_L2.nid_LRBG = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_link = outC->_L8;
  outC->_L2.q_newcountry = outC->_L9;
  outC->_L2.nid_c = outC->_L10;
  outC->_L2.nid_bg = outC->_L11;
  outC->_L2.q_linkorientation = outC->_L12;
  outC->_L2.q_linkreaction = outC->_L13;
  outC->_L2.q_locacc = outC->_L14;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_LinkedBGs_TM_conversions.c
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */

