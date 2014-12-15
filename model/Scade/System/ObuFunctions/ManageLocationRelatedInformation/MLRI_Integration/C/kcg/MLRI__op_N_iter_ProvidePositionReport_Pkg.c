/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_N_iter_ProvidePositionReport_Pkg.h"

void MLRI__op_N_iter_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_N_iter_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* op_StoreIterPacket58 */
  MLRI__op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_StoreIterPacket58);
}

/* ProvidePositionReport_Pkg::op_N_iter */
void MLRI__op_N_iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_N_iter::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::op_N_iter::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_N_iter::minSafeRearEnd */kcg_int minSafeRearEnd,
  MLRI__outC_op_N_iter_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp1;
  kcg_int tmp;
  /* ProvidePositionReport_Pkg::op_N_iter::_L45 */ MLRI__Location_T_Obu_BasicTypes_Pkg _L45;
  
  if (outC->init) {
    tmp1 = kcg_false;
  }
  else {
    tmp1 = outC->b;
  }
  /* op_StoreIterPacket58 */
  MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg(
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
      tmp = outC->currTriggerDistance;
    }
    _L45 = outC->Context_op_StoreIterPacket58.currDLOC + tmp;
  }
  if (outC->Context_op_StoreIterPacket58.currLGTLOC ==
    MLRI__Q_LGTLOC_Min_safe_rear_end) {
    tmp = minSafeRearEnd;
  }
  else {
    tmp = (*trainPosition).maxSafeFrontEndPostion;
  }
  outC->b = (_L45 <= tmp) & !(*trainPosition).trainPositionIsUnknown &
    (*trainPosition).valid & outC->Context_op_StoreIterPacket58.valid;
  if (outC->Context_op_StoreIterPacket58.newN_ITER | outC->b) {
    outC->currTriggerDistance = _L45;
  }
  else if (outC->init) {
    outC->currTriggerDistance = 0;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_N_iter_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

