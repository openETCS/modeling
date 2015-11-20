/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManagement_pkg.h"

void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  outC->init = kcg_true;
}

/* TargetManagement_pkg::TargetManagement */
void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  static struct__158176 tmp;
  static kcg_int i;
  static Target_list_MRSP_real_T_TargetManagement_types tmp3;
  static extractTargetsMRSPACC_TargetManagement_pkg tmp2;
  static array__157964 tmp1;
  static array__157964 tmp4;
  /* TargetManagement_pkg::TargetManagement::_L88 */
  static kcg_bool _L88;
  
  if (MA_updated) {
    /* 1 */
    calcMATargets_TargetManagement_pkg_internalOperators(
      MA,
      &outC->_L12,
      &outC->_L93);
  }
  else if (outC->init) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L93,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L12,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.SvL_LoA_target,
    &outC->_L93);
  for (i = 0; i < 110; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &tmp4[i],
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  if (MRSP_updated) {
    /* 1 */
    extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(MRSP, &tmp2);
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &tmp3,
      &tmp2.targetList);
  }
  else {
    if (outC->init) {
      kcg_copy_array__157964(&tmp1, &tmp4);
    }
    else {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
        &tmp1,
        &outC->rem_MRSPTargetList);
    }
    kcg_copy_array__157964(&tmp.targetList, &tmp1);
    tmp.lastInsertedTargetIndex = - 1;
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &tmp3,
      &tmp.targetList);
  }
  /* 1 */
  removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
    &tmp3,
    (*trainLocations).d_maxSafeFrontEndPos,
    &outC->rem_MRSPTargetList,
    &_L88);
  outC->targetCollection.updatedTargetList = MRSP_updated | MA_updated | _L88;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->targetCollection.MRSP_targetList,
    &outC->rem_MRSPTargetList);
  outC->init = kcg_false;
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.EOA_target,
    &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetManagement_TargetManagement_pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

