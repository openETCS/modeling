/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_M_loc_ProvidePositionReport_Pkg.h"

void op_M_loc_init_ProvidePositionReport_Pkg(
  outC_op_M_loc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L24.m_loc = M_LOC_Now;
  outC->_L24.present = kcg_true;
  outC->b = kcg_true;
}


void op_M_loc_reset_ProvidePositionReport_Pkg(
  outC_op_M_loc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_M_loc */
void op_M_loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_M_loc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_M_loc::posBGs */ positionedBG_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_M_loc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_M_loc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_M_loc::_L13 */ kcg_bool _L13;
  
  if ((*pRepPara).present) {
    outC->_L24.present = (*pRepPara).present;
    outC->_L24.m_loc = (*pRepPara).packet58.m_loc;
  }
  else if (outC->init) {
    kcg_copy_PresentxMLOC_T_ProvidePositionReport_Pkg(
      &outC->_L24,
      (PresentxMLOC_T_ProvidePositionReport_Pkg *)
        &cPresentxM_LOC_ProvidePositionReport_Pkg);
  }
  outC->init = kcg_false;
  _L13 = /* 1 */ op_3_6_5_1_4_j_ProvidePositionReport_Pkg(posBGs, trainPos);
  outC->b = outC->_L24.present & ((M_LOC_Now == outC->_L24.m_loc) |
      ((M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group ==
          outC->_L24.m_loc) & !_L13) | (_L13 &
        (M_LOC_Every_LRBG_compliant_balise_group == outC->_L24.m_loc)));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_M_loc_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

