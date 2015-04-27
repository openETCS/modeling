/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_StoreIterPacket58_ProvidePositionReport_Pkg.h"

void op_StoreIterPacket58_init_ProvidePositionReport_Pkg(
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 2; i++) {
    outC->_L15[i].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
    outC->_L15[i].d_loc = 0;
  }
  outC->counter = 0;
  outC->valid = kcg_true;
  outC->currLGTLOC = Q_LGTLOC_Min_safe_rear_end;
  outC->currDLOC = 0;
  outC->initialLocation = 0;
  outC->newN_ITER = kcg_true;
}


void op_StoreIterPacket58_reset_ProvidePositionReport_Pkg(
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_StoreIterPacket58 */
void op_StoreIterPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::incrCounter */ kcg_bool incrCounter,
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_StoreIterPacket58::_L44 */ IterPacket58_T_Packet_Types_Pkg _L44;
  
  outC->newN_ITER = (*pRepPara).present & ((*pRepPara).packet58.n_iter != 0);
  if (outC->newN_ITER) {
    kcg_copy_IterPacket58List_T_Packet_Types_Pkg(
      &outC->_L15,
      &(*pRepPara).packet58.iterPacket58List);
    outC->counter = 0;
  }
  else {
    if (outC->init) {
      kcg_copy_IterPacket58List_T_Packet_Types_Pkg(
        &outC->_L15,
        (IterPacket58List_T_Packet_Types_Pkg *)
          &cNITER_List_ProvidePositionReport_Pkg);
    }
    if (incrCounter) {
      if (outC->init) {
        outC->counter = 0 + 1;
      }
      else {
        outC->counter = outC->counter + 1;
      }
    }
    else if (outC->init) {
      outC->counter = 0;
    }
  }
  outC->init = kcg_false;
  outC->valid = (outC->counter <= (*pRepPara).packet58.n_iter) &
    ((*pRepPara).packet58.n_iter != 0);
  if ((0 <= outC->counter) & (outC->counter < 2)) {
    kcg_copy_IterPacket58_T_Packet_Types_Pkg(&_L44, &outC->_L15[outC->counter]);
  }
  else {
    kcg_copy_IterPacket58_T_Packet_Types_Pkg(
      &_L44,
      (IterPacket58_T_Packet_Types_Pkg *)
        &cNITER_Pair_ProvidePositionReport_Pkg);
  }
  outC->currDLOC = _L44.d_loc;
  outC->initialLocation = (*pRepPara).bgLocation;
  outC->currLGTLOC = _L44.q_lgtloc;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_StoreIterPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

