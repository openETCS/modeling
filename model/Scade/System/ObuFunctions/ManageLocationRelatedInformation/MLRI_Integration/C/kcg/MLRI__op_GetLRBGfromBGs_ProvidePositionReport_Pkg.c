/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
void MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */MLRI__positionedBG_T_TrainPosition_Types_Pck *lrbg)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L3 */ kcg_int _L3;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    tmp1 = *found;
    /* 1 */
    MLRI__op_findBG_ProvidePositionReport_Pkg(
      tmp1,
      &(*posBGs)[i],
      (*trainPos).LRBG.nid_bg,
      &tmp,
      found);
    _L3 = i + 1;
    if (!tmp) {
      break;
    }
  }
  if ((0 <= _L3) & (_L3 < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      lrbg,
      &(*posBGs)[_L3]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      lrbg,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cPassedBG_ProvidePositionReport_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

