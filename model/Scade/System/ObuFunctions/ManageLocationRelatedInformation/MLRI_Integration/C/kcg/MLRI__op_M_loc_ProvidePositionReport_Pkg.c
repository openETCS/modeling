/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_M_loc_ProvidePositionReport_Pkg.h"

void MLRI__op_M_loc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_M_loc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_M_loc */
void MLRI__op_M_loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_M_loc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_M_loc::posBGs */MLRI__positionedBG_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_M_loc::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  MLRI__outC_op_M_loc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_M_loc::_L13 */ kcg_bool _L13;
  
  if ((*pRepPara).present) {
    outC->_L24.present = (*pRepPara).present;
    outC->_L24.m_loc = (*pRepPara).packet58.m_loc;
  }
  else if (outC->init) {
    MLRI__kcg_copy_PresentxMLOC_T_ProvidePositionReport_Pkg(
      &outC->_L24,
      (MLRI__PresentxMLOC_T_ProvidePositionReport_Pkg *)
        &MLRI__cPresentxM_LOC_ProvidePositionReport_Pkg);
  }
  _L13 = /* 1 */
    MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg(posBGs, trainPos);
  outC->b = outC->_L24.present & ((MLRI__M_LOC_Now == outC->_L24.m_loc) |
      ((MLRI__M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group ==
          outC->_L24.m_loc) & !_L13) | (_L13 &
        (MLRI__M_LOC_Every_LRBG_compliant_balise_group == outC->_L24.m_loc)));
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_M_loc_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

