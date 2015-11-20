/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

/* TM_conversions::C_P005_LinkedBGs */
void C_P005_LinkedBGs_TM_conversions(
  /* TM_conversions::C_P005_LinkedBGs::LRBG */NID_LRBG LRBG,
  /* TM_conversions::C_P005_LinkedBGs::q_dir */Q_DIR q_dir,
  /* TM_conversions::C_P005_LinkedBGs::q_scale */Q_SCALE q_scale,
  /* TM_conversions::C_P005_LinkedBGs::SectionsIn */P005_section_enum_T_TM *SectionsIn,
  /* TM_conversions::C_P005_LinkedBGs::NID_C_onboard */NID_C NID_C_onboard,
  /* TM_conversions::C_P005_LinkedBGs::LinkedBGsOUT */LinkedBG_T_BG_Types_Pkg *LinkedBGsOUT)
{
  (*LinkedBGsOUT).valid = (*SectionsIn).valid;
  (*LinkedBGsOUT).nid_LRBG = LRBG;
  (*LinkedBGsOUT).q_dir = q_dir;
  (*LinkedBGsOUT).q_scale = q_scale;
  (*LinkedBGsOUT).d_link = (*SectionsIn).d_link;
  (*LinkedBGsOUT).q_newcountry = (*SectionsIn).q_newcountry;
  (*LinkedBGsOUT).nid_bg = (*SectionsIn).nid_bg;
  (*LinkedBGsOUT).q_linkorientation = (*SectionsIn).q_linkorientation;
  (*LinkedBGsOUT).q_linkreaction = (*SectionsIn).q_linkreaction;
  (*LinkedBGsOUT).q_locacc = (*SectionsIn).q_locacc;
  if ((*SectionsIn).q_newcountry == ENUM_Q_NEWCOUNTRY_same_TM_conversions) {
    (*LinkedBGsOUT).nid_c = NID_C_onboard;
  }
  else {
    (*LinkedBGsOUT).nid_c = (*SectionsIn).nid_c;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_LinkedBGs_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

