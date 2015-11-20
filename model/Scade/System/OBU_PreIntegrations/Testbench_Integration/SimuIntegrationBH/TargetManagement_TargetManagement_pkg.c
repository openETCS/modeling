/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManagement_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L93.targetType = EoA_TargetManagement_types;
  outC->_L93.distance = 0.0;
  outC->_L93.speed = 0.0;
  outC->_L12.targetType = EoA_TargetManagement_types;
  outC->_L12.distance = 0.0;
  outC->_L12.speed = 0.0;
  for (i = 0; i < 110; i++) {
    outC->MRSPTargetList[i].targetType = EoA_TargetManagement_types;
    outC->MRSPTargetList[i].distance = 0.0;
    outC->MRSPTargetList[i].speed = 0.0;
  }
  outC->targetCollection.updatedTargetList = kcg_true;
  for (i1 = 0; i1 < 110; i1++) {
    outC->targetCollection.MRSP_targetList[i1].targetType =
      EoA_TargetManagement_types;
    outC->targetCollection.MRSP_targetList[i1].distance = 0.0;
    outC->targetCollection.MRSP_targetList[i1].speed = 0.0;
  }
  outC->targetCollection.EOA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.EOA_target.distance = 0.0;
  outC->targetCollection.EOA_target.speed = 0.0;
  outC->targetCollection.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.SvL_LoA_target.distance = 0.0;
  outC->targetCollection.SvL_LoA_target.speed = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TargetManagement_pkg::TargetManagement */
void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  static kcg_int i;
  /* TargetManagement_pkg::TargetManagement */
  static Target_real_T_TargetManagement_types tmp1;
  /* TargetManagement_pkg::TargetManagement */
  static Target_real_T_TargetManagement_types tmp;
  /* TargetManagement_pkg::TargetManagement */
  static Target_real_T_TargetManagement_types _2_op_call;
  /* TargetManagement_pkg::TargetManagement */
  static Target_real_T_TargetManagement_types _3_op_call;
  /* TargetManagement_pkg::TargetManagement */
  static extractTargetsMRSPACC_TargetManagement_pkg op_call;
  /* TargetManagement_pkg::TargetManagement */
  static kcg_bool ck_every;
  /* TargetManagement_pkg::TargetManagement */
  static kcg_bool _4_ck_every;
  /* TargetManagement_pkg::TargetManagement::MRSPTargetList */
  static Target_list_MRSP_real_T_TargetManagement_types last_MRSPTargetList;
  /* TargetManagement_pkg::TargetManagement::_L1 */
  static MRSP_internal_T_TargetManagement_types _L1;
  /* TargetManagement_pkg::TargetManagement::_L2 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L2;
  /* TargetManagement_pkg::TargetManagement::_L3 */
  static kcg_bool _L3;
  /* TargetManagement_pkg::TargetManagement::_L15 */
  static kcg_bool _L15;
  /* TargetManagement_pkg::TargetManagement::_L16 */
  static kcg_bool _L16;
  /* TargetManagement_pkg::TargetManagement::_L17 */
  static kcg_bool _L17;
  /* TargetManagement_pkg::TargetManagement::_L19 */
  static kcg_bool _L19;
  /* TargetManagement_pkg::TargetManagement::_L79 */
  static TargetCollection_T_TargetManagement_types _L79;
  /* TargetManagement_pkg::TargetManagement::_L88 */
  static kcg_bool _L88;
  /* TargetManagement_pkg::TargetManagement::_L87 */
  static Target_list_MRSP_real_T_TargetManagement_types _L87;
  /* TargetManagement_pkg::TargetManagement::_L90 */
  static L_internal_real_Type_SDM_Types_Pkg _L90;
  /* TargetManagement_pkg::TargetManagement::_L89 */
  static TrainLocations_real_T_SDM_Types_Pkg _L89;
  /* TargetManagement_pkg::TargetManagement::_L97 */
  static MA_section_real_T_TargetManagement_types _L97;
  /* TargetManagement_pkg::TargetManagement::_L98 */
  static extractTargetsMRSPACC_TargetManagement_pkg _L98;
  /* TargetManagement_pkg::TargetManagement::_L99 */
  static kcg_int _L99;
  /* TargetManagement_pkg::TargetManagement::_L107 */
  static Target_list_MRSP_real_T_TargetManagement_types _L107;
  /* TargetManagement_pkg::TargetManagement::_L121 */
  static Target_list_MRSP_real_T_TargetManagement_types _L121;
  /* TargetManagement_pkg::TargetManagement::_L14 */
  static Target_real_T_TargetManagement_types _L14;
  
  _L15 = MA_updated;
  ck_every = _L15;
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L97, MA);
  /* ck_TargetManagement */ if (ck_every) {
    /* 1 */
    calcMATargets_TargetManagement_pkg_internalOperators(
      &_L97,
      &_3_op_call,
      &_2_op_call);
  }
  _L3 = MRSP_updated;
  _4_ck_every = _L3;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L1, MRSP);
  /* ck_TargetManagement */ if (_4_ck_every) {
    /* 1 */
    extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
      &_L1,
      &op_call);
  }
  /* last_init_ck_MRSPTargetList */ if (outC->init) {
    /* pow */ for (i = 0; i < 110; i++) {
      kcg_copy_Target_real_T_TargetManagement_types(
        &last_MRSPTargetList[i],
        (Target_real_T_TargetManagement_types *)
          &emptyTarget_TargetManagement_pkg);
    }
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &last_MRSPTargetList,
      &outC->MRSPTargetList);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L107,
    &last_MRSPTargetList);
  _L99 = - 1;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L98.targetList,
    &_L107);
  _L98.lastInsertedTargetIndex = _L99;
  /* ck_TargetManagement */ if (_4_ck_every) {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L2, &op_call);
  }
  else {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&_L2, &_L98);
  }
  kcg_copy_Target_real_T_TargetManagement_types(
    &_L14,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  /* ck_TargetManagement */ if (ck_every) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L93, &_2_op_call);
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L12, &_3_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp1, &_L14);
    }
    else {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp1, &outC->_L93);
    }
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L93, &tmp1);
    if (outC->init) {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp, &_L14);
    }
    else {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp, &outC->_L12);
    }
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L12, &tmp);
  }
  _L17 = MRSP_updated;
  _L19 = MA_updated;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L121,
    &_L2.targetList);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L89, trainLocations);
  _L90 = _L89.d_maxSafeFrontEndPos;
  /* 1 */
  removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
    &_L121,
    _L90,
    &_L87,
    &_L88);
  _L16 = _L17 | _L19 | _L88;
  _L79.updatedTargetList = _L16;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L79.MRSP_targetList,
    &_L87);
  kcg_copy_Target_real_T_TargetManagement_types(&_L79.EOA_target, &outC->_L12);
  kcg_copy_Target_real_T_TargetManagement_types(
    &_L79.SvL_LoA_target,
    &outC->_L93);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->targetCollection,
    &_L79);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->MRSPTargetList,
    &_L87);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetManagement_TargetManagement_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

