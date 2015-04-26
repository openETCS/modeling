/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
void op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */ positionedBG_T_TrainPosition_Types_Pck *lrbg)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::_L3 */ kcg_int _L3;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    tmp1 = *found;
    /* 1 */
    op_findBG_ProvidePositionReport_Pkg(
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
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(lrbg, &(*posBGs)[_L3]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      lrbg,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cPassedBG_ProvidePositionReport_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_GetLRBGfromBGs_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

