/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::TargetsOfMRSP */ extractTargetsMRSPACC_TargetManagement_pkg *TargetsOfMRSP)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
  static extractTargetsMRSPACC_TargetManagement_pkg acc;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L1 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L1;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L3 */
  static kcg_int _L3;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L7 */
  static MRSP_internal_T_TargetManagement_types _L7;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L12 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L12;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L13 */
  static kcg_int _L13;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L14 */
  static array_168941 _L14;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L21 */
  static MRSP_internal_T_TargetManagement_types _L21;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L22 */
  static kcg_bool _L22;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L24 */
  static Target_list_MRSP_real_T_TargetManagement_types _L24;
  
  /* pow */ for (i2 = 0; i2 < 110; i2++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L24[i2],
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  _L13 = - 1;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L12.targetList,
    &_L24);
  _L12.lastInsertedTargetIndex = _L13;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L7, MRSP);
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    kcg_copy_MRSP_internal_T_TargetManagement_types(&_L14[i1], &_L7);
  }
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L21, MRSP);
  _L22 = _L21[0].valid;
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L1, &_L12);
  if (_L22) {
    for (i = 0; i < 110; i++) {
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&acc, &_L1);
      /* 1 */
      extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
        i,
        &acc,
        &_L14[i],
        &cond_iterw,
        &_L1);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  noname = _L3;
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(TargetsOfMRSP, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

