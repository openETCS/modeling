/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg.h"

void MLRI__op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_StoreIterPacket58 */
void MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::incrCounter */kcg_bool incrCounter,
  MLRI__outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC)
{
  kcg_int tmp;
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::_L44 */ MLRI__IterPacket58_T_ProvidePositionReport_Pkg _L44;
  
  outC->initialLocation = (*pRepPara).bgLocation;
  outC->newN_ITER = (*pRepPara).present & ((*pRepPara).packet58.n_iter != 0);
  if (outC->newN_ITER) {
    MLRI__kcg_copy_IterPacket58List_T_ProvidePositionReport_Pkg(
      &outC->_L15,
      &(*pRepPara).packet58.iterPacket58List);
    outC->counter = 0;
  }
  else {
    if (outC->init) {
      MLRI__kcg_copy_IterPacket58List_T_ProvidePositionReport_Pkg(
        &outC->_L15,
        (MLRI__IterPacket58List_T_ProvidePositionReport_Pkg *)
          &MLRI__cNITER_List_ProvidePositionReport_Pkg);
    }
    if (incrCounter) {
      if (outC->init) {
        tmp = 0;
      }
      else {
        tmp = outC->counter;
      }
      outC->counter = tmp + 1;
    }
    else if (outC->init) {
      outC->counter = 0;
    }
  }
  if ((0 <= outC->counter) & (outC->counter < 2)) {
    MLRI__kcg_copy_IterPacket58_T_ProvidePositionReport_Pkg(
      &_L44,
      &outC->_L15[outC->counter]);
  }
  else {
    MLRI__kcg_copy_IterPacket58_T_ProvidePositionReport_Pkg(
      &_L44,
      (MLRI__IterPacket58_T_ProvidePositionReport_Pkg *)
        &MLRI__cNITER_Pair_ProvidePositionReport_Pkg);
  }
  outC->currLGTLOC = _L44.q_lgtloc;
  outC->valid = outC->counter <= (*pRepPara).packet58.n_iter;
  outC->currDLOC = _L44.d_loc;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_StoreIterPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

