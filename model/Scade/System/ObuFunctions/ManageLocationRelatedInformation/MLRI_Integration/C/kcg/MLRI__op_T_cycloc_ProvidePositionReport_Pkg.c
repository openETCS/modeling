/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_T_cycloc_ProvidePositionReport_Pkg.h"

void MLRI__op_T_cycloc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_T_cycloc */
void MLRI__op_T_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_T_cycloc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_T_cycloc::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg *outC)
{
  kcg_int tmp;
  /* ProvidePositionReport_Pkg::op_T_cycloc::_L52 */ MLRI__SystemTime_T_ProvidePositionReport_Pkg _L52;
  
  if ((*pRepPara).present) {
    outC->_L21 = (*pRepPara).packet58.t_cycloc;
    _L52 = systemTime;
  }
  else {
    if (outC->init) {
      outC->_L21 = 255;
      tmp = 0;
    }
    else {
      tmp = outC->Local1;
    }
    _L52 = tmp + outC->_L21;
  }
  outC->b = (_L52 <= systemTime) & (outC->_L21 != 255);
  if (outC->b) {
    outC->Local1 = _L52;
  }
  else if (outC->init) {
    outC->Local1 = 0;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_T_cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

