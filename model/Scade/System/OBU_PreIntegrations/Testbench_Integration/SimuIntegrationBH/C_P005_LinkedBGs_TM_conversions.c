/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

/* TM_conversions::C_P005_LinkedBGs */
void C_P005_LinkedBGs_TM_conversions(
  /* TM_conversions::C_P005_LinkedBGs::LRBG */ NID_LRBG LRBG,
  /* TM_conversions::C_P005_LinkedBGs::q_dir */ Q_DIR q_dir,
  /* TM_conversions::C_P005_LinkedBGs::q_scale */ Q_SCALE q_scale,
  /* TM_conversions::C_P005_LinkedBGs::SectionsIn */ P005_section_enum_T_TM *SectionsIn,
  /* TM_conversions::C_P005_LinkedBGs::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_conversions::C_P005_LinkedBGs::LinkedBGsOUT */ LinkedBG_T_BG_Types_Pkg *LinkedBGsOUT)
{
  /* TM_conversions::C_P005_LinkedBGs::nid_c */
  static NID_C nid_c;
  /* TM_conversions::C_P005_LinkedBGs::q_newcountry */
  static Q_NEWCOUNTRY q_newcountry;
  /* TM_conversions::C_P005_LinkedBGs::_L2 */
  static LinkedBG_T_BG_Types_Pkg _L2;
  /* TM_conversions::C_P005_LinkedBGs::_L3 */
  static NID_LRBG _L3;
  /* TM_conversions::C_P005_LinkedBGs::_L4 */
  static Q_DIR _L4;
  /* TM_conversions::C_P005_LinkedBGs::_L5 */
  static Q_SCALE _L5;
  /* TM_conversions::C_P005_LinkedBGs::_L6 */
  static P005_section_enum_T_TM _L6;
  /* TM_conversions::C_P005_LinkedBGs::_L14 */
  static Q_LOCACC _L14;
  /* TM_conversions::C_P005_LinkedBGs::_L13 */
  static Q_LINKREACTION _L13;
  /* TM_conversions::C_P005_LinkedBGs::_L12 */
  static Q_LINKORIENTATION _L12;
  /* TM_conversions::C_P005_LinkedBGs::_L11 */
  static NID_BG _L11;
  /* TM_conversions::C_P005_LinkedBGs::_L10 */
  static NID_C _L10;
  /* TM_conversions::C_P005_LinkedBGs::_L9 */
  static Q_NEWCOUNTRY _L9;
  /* TM_conversions::C_P005_LinkedBGs::_L8 */
  static D_LINK _L8;
  /* TM_conversions::C_P005_LinkedBGs::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::C_P005_LinkedBGs::_L15 */
  static NID_C _L15;
  /* TM_conversions::C_P005_LinkedBGs::_L16 */
  static Q_NEWCOUNTRY _L16;
  /* TM_conversions::C_P005_LinkedBGs::_L17 */
  static NID_C _L17;
  /* TM_conversions::C_P005_LinkedBGs::_L18 */
  static NID_C _L18;
  /* TM_conversions::C_P005_LinkedBGs::_L19 */
  static Q_NEWCOUNTRY _L19;
  /* TM_conversions::C_P005_LinkedBGs::_L22 */
  static Q_NEWCOUNTRY _L22;
  /* TM_conversions::C_P005_LinkedBGs::_L23 */
  static kcg_bool _L23;
  
  kcg_copy_P005_section_enum_T_TM(&_L6, SectionsIn);
  _L7 = _L6.valid;
  _L3 = LRBG;
  _L4 = q_dir;
  _L5 = q_scale;
  _L8 = _L6.d_link;
  _L9 = _L6.q_newcountry;
  q_newcountry = _L9;
  _L22 = q_newcountry;
  _L16 = q_newcountry;
  _L19 = ENUM_Q_NEWCOUNTRY_same_TM_conversions;
  _L23 = _L16 == _L19;
  _L15 = NID_C_onboard;
  _L10 = _L6.nid_c;
  nid_c = _L10;
  _L17 = nid_c;
  /* 1 */ if (_L23) {
    _L18 = _L15;
  }
  else {
    _L18 = _L17;
  }
  _L11 = _L6.nid_bg;
  _L12 = _L6.q_linkorientation;
  _L13 = _L6.q_linkreaction;
  _L14 = _L6.q_locacc;
  _L2.valid = _L7;
  _L2.nid_LRBG = _L3;
  _L2.q_dir = _L4;
  _L2.q_scale = _L5;
  _L2.d_link = _L8;
  _L2.q_newcountry = _L22;
  _L2.nid_c = _L18;
  _L2.nid_bg = _L11;
  _L2.q_linkorientation = _L12;
  _L2.q_linkreaction = _L13;
  _L2.q_locacc = _L14;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(LinkedBGsOUT, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_LinkedBGs_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

