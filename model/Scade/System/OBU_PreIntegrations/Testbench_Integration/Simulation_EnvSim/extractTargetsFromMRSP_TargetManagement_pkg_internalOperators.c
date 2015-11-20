/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::TargetsOfMRSP */extractTargetsMRSPACC_TargetManagement_pkg *TargetsOfMRSP)
{
  static struct__158176 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  (*TargetsOfMRSP).lastInsertedTargetIndex = - 1;
  for (i = 0; i < 110; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &(*TargetsOfMRSP).targetList[i],
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  if ((*MRSP)[0].valid) {
    for (i = 0; i < 110; i++) {
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&tmp1, TargetsOfMRSP);
      /* 1 */
      extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
        i,
        &tmp1,
        MRSP,
        &tmp,
        TargetsOfMRSP);
      if (!tmp) {
        break;
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

