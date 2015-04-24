/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_N_iter_ProvidePositionReport_Pkg.h"

void op_N_iter_init_ProvidePositionReport_Pkg(
  outC_op_N_iter_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_currTriggerDistance = 0;
  outC->b = kcg_true;
  op_StoreIterPacket58_init_ProvidePositionReport_Pkg(
    &outC->Context_op_StoreIterPacket58);
}


void op_N_iter_reset_ProvidePositionReport_Pkg(
  outC_op_N_iter_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* op_StoreIterPacket58 */
  op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_StoreIterPacket58);
}

/* ProvidePositionReport_Pkg::op_N_iter */
void op_N_iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_N_iter::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::op_N_iter::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_N_iter::minSafeRearEnd */ kcg_int minSafeRearEnd,
  outC_op_N_iter_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp1;
  kcg_int tmp;
  /* ProvidePositionReport_Pkg::op_N_iter::_L45 */ Location_T_Obu_BasicTypes_Pkg _L45;
  
  if (outC->init) {
    tmp1 = kcg_false;
  }
  else {
    tmp1 = outC->b;
  }
  /* op_StoreIterPacket58 */
  op_StoreIterPacket58_ProvidePositionReport_Pkg(
    pRepPara,
    tmp1,
    &outC->Context_op_StoreIterPacket58);
  if (outC->Context_op_StoreIterPacket58.newN_ITER) {
    _L45 = outC->Context_op_StoreIterPacket58.initialLocation;
  }
  else {
    if (outC->init) {
      tmp = 0;
    }
    else {
      tmp = outC->rem_currTriggerDistance;
    }
    _L45 = outC->Context_op_StoreIterPacket58.currDLOC + tmp;
  }
  if (outC->Context_op_StoreIterPacket58.currLGTLOC ==
    Q_LGTLOC_Min_safe_rear_end) {
    tmp = minSafeRearEnd;
  }
  else {
    tmp = (*trainPosition).maxSafeFrontEndPostion;
  }
  outC->b = (_L45 <= tmp) & !(*trainPosition).trainPositionIsUnknown &
    (*trainPosition).valid & outC->Context_op_StoreIterPacket58.valid;
  if (outC->Context_op_StoreIterPacket58.newN_ITER | outC->b) {
    outC->rem_currTriggerDistance = _L45;
  }
  else if (outC->init) {
    outC->rem_currTriggerDistance = 0;
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_N_iter_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

