/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_T_cycloc_ProvidePositionReport_Pkg.h"

void op_T_cycloc_init_ProvidePositionReport_Pkg(
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_Local1 = 0;
  outC->_L21 = 0;
  outC->b = kcg_true;
}


void op_T_cycloc_reset_ProvidePositionReport_Pkg(
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_T_cycloc */
void op_T_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_T_cycloc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_T_cycloc::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC)
{
  kcg_int tmp;
  /* ProvidePositionReport_Pkg::op_T_cycloc::_L52 */ SystemTime_T_ProvidePositionReport_Pkg _L52;
  
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
      tmp = outC->rem_Local1;
    }
    _L52 = tmp + outC->_L21;
  }
  outC->b = (_L52 <= systemTime) & (outC->_L21 != 255);
  if (outC->b) {
    outC->rem_Local1 = _L52;
  }
  else if (outC->init) {
    outC->rem_Local1 = 0;
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_T_cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

