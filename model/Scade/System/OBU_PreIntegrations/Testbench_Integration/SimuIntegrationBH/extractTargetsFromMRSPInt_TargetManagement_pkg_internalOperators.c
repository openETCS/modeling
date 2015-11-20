/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt */
void extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::index */ kcg_int index,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::ACCU */ extractTargetsMRSPACC_TargetManagement_pkg *ACCU,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::endCondition */ kcg_bool *endCondition,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::ACCUout */ extractTargetsMRSPACC_TargetManagement_pkg *ACCUout)
{
  static L_internal_real_Type_SDM_Types_Pkg noname;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L14 */
  static MRSP_internal_section_T_TargetManagement_types _L14;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L15 */
  static MRSP_internal_section_T_TargetManagement_types _L15;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L16 */
  static kcg_int _L16;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L17 */
  static kcg_int _L17;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L18 */
  static kcg_int _L18;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L30 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L30;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L31 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L31;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L33 */
  static Target_list_MRSP_real_T_TargetManagement_types _L33;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L32 */
  static kcg_int _L32;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L34 */
  static kcg_int _L34;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L35 */
  static kcg_int _L35;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L36 */
  static Target_list_MRSP_real_T_TargetManagement_types _L36;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L3 */
  static MRSP_internal_T_TargetManagement_types _L3;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L53 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L53;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L62 */
  static Target_real_T_TargetManagement_types _L62;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L63 */
  static TargetType_T_TargetManagement_types _L63;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L64 */
  static MRSP_internal_section_T_TargetManagement_types _L64;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L67 */
  static kcg_bool _L67;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L81 */
  static L_internal_real_Type_SDM_Types_Pkg _L81;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L80 */
  static V_internal_real_Type_SDM_Types_Pkg _L80;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L79 */
  static kcg_bool _L79;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L82 */
  static L_internal_real_Type_SDM_Types_Pkg _L82;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L83 */
  static V_internal_real_Type_SDM_Types_Pkg _L83;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L84 */
  static kcg_bool _L84;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt::_L85 */
  static kcg_bool _L85;
  
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L3, MRSP);
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &_L64,
    (MRSP_internal_section_T_TargetManagement_types *)
      &emptyMRSPSection_TargetManagement_pkg);
  _L17 = index;
  if ((0 <= _L17) & (_L17 < 110)) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L14, &_L3[_L17]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L14, &_L64);
  }
  _L18 = 1;
  _L16 = _L17 + _L18;
  if ((0 <= _L16) & (_L16 < 110)) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L15, &_L3[_L16]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L15, &_L64);
  }
  _L80 = _L14.MRS;
  _L83 = _L15.MRS;
  _L85 = _L80 > _L83;
  _L79 = _L14.valid;
  _L84 = _L15.valid;
  _L67 = _L85 & _L79 & _L84;
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L31, ACCU);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L33,
    &_L31.targetList);
  _L63 = MRSP_TargetManagement_types;
  _L82 = _L15.Loc_Abs;
  _L62.targetType = _L63;
  _L62.distance = _L82;
  _L62.speed = _L83;
  _L35 = 1;
  _L32 = _L31.lastInsertedTargetIndex;
  _L34 = _L35 + _L32;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L36, &_L33);
  if ((0 <= _L34) & (_L34 < 110)) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L36[_L34], &_L62);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L53.targetList,
    &_L36);
  _L53.lastInsertedTargetIndex = _L34;
  /* 1 */ if (_L67) {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L30, &_L53);
  }
  else {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L30, &_L31);
  }
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(ACCUout, &_L30);
  *endCondition = _L84;
  _L81 = _L14.Loc_Abs;
  noname = _L81;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

