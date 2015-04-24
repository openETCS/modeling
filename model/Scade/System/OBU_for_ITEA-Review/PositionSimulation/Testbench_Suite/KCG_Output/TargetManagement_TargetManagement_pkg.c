/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManagement_pkg.h"

void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 10; i++) {
    outC->rem_LOATargetList[i].valid = kcg_true;
    outC->rem_LOATargetList[i].speed = 0.0;
    outC->rem_LOATargetList[i].distance = 0.0;
    outC->rem_LOATargetList[i].targetType = EoA_TargetManagement_types;
  }
  for (i = 0; i < 200; i++) {
    outC->rem_MRSPTargetList[i].valid = kcg_true;
    outC->rem_MRSPTargetList[i].speed = 0.0;
    outC->rem_MRSPTargetList[i].distance = 0.0;
    outC->rem_MRSPTargetList[i].targetType = EoA_TargetManagement_types;
  }
  outC->_L93.valid = kcg_true;
  outC->_L93.speed = 0.0;
  outC->_L93.distance = 0.0;
  outC->_L93.targetType = EoA_TargetManagement_types;
  outC->_L12.valid = kcg_true;
  outC->_L12.speed = 0.0;
  outC->_L12.distance = 0.0;
  outC->_L12.targetType = EoA_TargetManagement_types;
  outC->V_releaseFromMAValid = kcg_true;
  outC->V_releaseFromMA = 0.0;
  outC->targetCollection.SvL_target.valid = kcg_true;
  outC->targetCollection.SvL_target.speed = 0.0;
  outC->targetCollection.SvL_target.distance = 0.0;
  outC->targetCollection.SvL_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.EOA_target.valid = kcg_true;
  outC->targetCollection.EOA_target.speed = 0.0;
  outC->targetCollection.EOA_target.distance = 0.0;
  outC->targetCollection.EOA_target.targetType = EoA_TargetManagement_types;
  for (i = 0; i < 200; i++) {
    outC->targetCollection.MRSP_targetList[i].valid = kcg_true;
    outC->targetCollection.MRSP_targetList[i].speed = 0.0;
    outC->targetCollection.MRSP_targetList[i].distance = 0.0;
    outC->targetCollection.MRSP_targetList[i].targetType =
      EoA_TargetManagement_types;
  }
  for (i = 0; i < 10; i++) {
    outC->targetCollection.LOA_targetList[i].valid = kcg_true;
    outC->targetCollection.LOA_targetList[i].speed = 0.0;
    outC->targetCollection.LOA_targetList[i].distance = 0.0;
    outC->targetCollection.LOA_targetList[i].targetType =
      EoA_TargetManagement_types;
  }
  outC->targetCollection.updatedTargetList = kcg_true;
}


void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  outC->init = kcg_true;
}

/* TargetManagement_pkg::TargetManagement */
void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MAs_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  kcg_int i;
  Target_list_LOA_real_T_TargetManagement_types tmp6;
  extractTargetsLOAACC_TargetManagement_pkg tmp5;
  Target_list_LOA_real_T_TargetManagement_types tmp4;
  Target_list_MRSP_real_T_TargetManagement_types tmp3;
  extractTargetsMRSPACC_TargetManagement_pkg tmp2;
  Target_list_MRSP_real_T_TargetManagement_types tmp1;
  kcg_real tmp;
  /* TargetManagement_pkg::TargetManagement::_L88 */ kcg_bool _L88;
  /* TargetManagement_pkg::TargetManagement::_L92 */ kcg_bool _L92;
  
  if (MA_updated) {
    /* 1 */
    extractLOATargetsFromMA_TargetManagement_pkg_internalOperators(MA, &tmp5);
    kcg_copy_Target_list_LOA_real_T_TargetManagement_types(
      &tmp6,
      &tmp5.targetList);
    /* 1 */
    extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators(
      MA,
      &outC->_L12,
      &outC->_L93,
      &outC->V_releaseFromMA,
      &outC->V_releaseFromMAValid);
  }
  else {
    if (outC->init) {
      for (i = 0; i < 10; i++) {
        kcg_copy_Target_real_T_TargetManagement_types(
          &tmp4[i],
          (Target_real_T_TargetManagement_types *)
            &emptyTargetLOA_TargetManagement_pkg);
      }
      kcg_copy_Target_real_T_TargetManagement_types(
        &outC->_L12,
        (Target_real_T_TargetManagement_types *)
          &emptyTargetEOA_TargetManagement_pkg);
      kcg_copy_Target_real_T_TargetManagement_types(
        &outC->_L93,
        (Target_real_T_TargetManagement_types *)
          &emptyTargetSvL_TargetManagement_pkg);
      tmp = 0.0;
      outC->V_releaseFromMAValid = kcg_false;
    }
    else {
      kcg_copy_Target_list_LOA_real_T_TargetManagement_types(
        &tmp4,
        &outC->rem_LOATargetList);
      tmp = outC->V_releaseFromMA;
    }
    kcg_copy_Target_list_LOA_real_T_TargetManagement_types(&tmp6, &tmp4);
    outC->V_releaseFromMA = tmp;
  }
  /* 1 */
  removeOverpassedLOA_TargetManagement_pkg_internalOperators(
    &tmp6,
    (*trainLocations).d_maxSafeFrontEndPos,
    &outC->rem_LOATargetList,
    &_L92);
  kcg_copy_Target_list_LOA_real_T_TargetManagement_types(
    &outC->targetCollection.LOA_targetList,
    &outC->rem_LOATargetList);
  if (MRSP_updated) {
    /* 1 */
    extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(MRSP, &tmp2);
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &tmp3,
      &tmp2.targetList);
  }
  else {
    if (outC->init) {
      for (i = 0; i < 200; i++) {
        kcg_copy_Target_real_T_TargetManagement_types(
          &tmp1[i],
          (Target_real_T_TargetManagement_types *)
            &emptyTargetMRSP_TargetManagement_pkg);
      }
    }
    else {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
        &tmp1,
        &outC->rem_MRSPTargetList);
    }
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&tmp3, &tmp1);
  }
  /* 1 */
  removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
    &tmp3,
    (*trainLocations).d_maxSafeFrontEndPos,
    &outC->rem_MRSPTargetList,
    &_L88);
  outC->targetCollection.updatedTargetList = _L92 | MRSP_updated | MA_updated |
    _L88;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->targetCollection.MRSP_targetList,
    &outC->rem_MRSPTargetList);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.EOA_target,
    &outC->_L12);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.SvL_target,
    &outC->_L93);
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetManagement_TargetManagement_pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

