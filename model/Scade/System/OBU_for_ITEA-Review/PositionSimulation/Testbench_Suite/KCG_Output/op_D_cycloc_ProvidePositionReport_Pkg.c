/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_D_cycloc_ProvidePositionReport_Pkg.h"

void op_D_cycloc_init_ProvidePositionReport_Pkg(
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_currTriggerDistance = 0;
  outC->_L21 = 0;
  outC->SM1_state_nxt = SSM_st_SimpleCase_SM1;
  outC->b = kcg_true;
}


void op_D_cycloc_reset_ProvidePositionReport_Pkg(
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_D_cycloc */
void op_D_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_D_cycloc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_D_cycloc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp2;
  kcg_int tmp1;
  kcg_bool tmp;
  /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ _25_SSM_ST_SM1 SM1_state_sel;
  /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ _25_SSM_ST_SM1 SM1_state_act;
  /* ProvidePositionReport_Pkg::op_D_cycloc::validPositionData */ kcg_bool validPositionData;
  /* ProvidePositionReport_Pkg::op_D_cycloc::_L24 */ L_internal_Type_Obu_BasicTypes_Pkg _L24;
  
  if ((*pRepPara).present) {
    outC->_L21 = (*pRepPara).packet58.d_cycloc;
  }
  else if (outC->init) {
    outC->_L21 = 32766;
  }
  if (outC->init) {
    SM1_state_sel = SSM_st_Init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  validPositionData = (*trainPos).valid & !(*trainPos).trainPositionIsUnknown;
  switch (SM1_state_sel) {
    case SSM_st_SimpleCase_SM1 :
      if ((*pRepPara).present & !validPositionData) {
        SM1_state_act = SSM_st_SpecialCase_SM1;
      }
      else {
        SM1_state_act = SSM_st_SimpleCase_SM1;
      }
      break;
    case SSM_st_SpecialCase_SM1 :
      if ((*pRepPara).present & validPositionData) {
        SM1_state_act = SSM_st_SimpleCase_SM1;
      }
      else if (!(*pRepPara).present & validPositionData) {
        SM1_state_act = SSM_st_Intermediate_SM1;
      }
      else {
        SM1_state_act = SSM_st_SpecialCase_SM1;
      }
      break;
    case SSM_st_Init_SM1 :
      SM1_state_act = SSM_st_SimpleCase_SM1;
      break;
    case SSM_st_Intermediate_SM1 :
      if ((*pRepPara).present & !validPositionData) {
        SM1_state_act = SSM_st_SpecialCase_SM1;
      }
      else if (!(*pRepPara).present | validPositionData) {
        SM1_state_act = SSM_st_SimpleCase_SM1;
      }
      else {
        SM1_state_act = SSM_st_Intermediate_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_Intermediate_SM1 :
      tmp2 = kcg_true;
      tmp = !kcg_false;
      outC->SM1_state_nxt = SSM_st_Intermediate_SM1;
      break;
    case SSM_st_Init_SM1 :
      tmp2 = kcg_false;
      tmp = !kcg_false;
      outC->SM1_state_nxt = SSM_st_Init_SM1;
      break;
    case SSM_st_SpecialCase_SM1 :
      tmp2 = kcg_false;
      tmp = !kcg_true;
      outC->SM1_state_nxt = SSM_st_SpecialCase_SM1;
      break;
    case SSM_st_SimpleCase_SM1 :
      tmp2 = kcg_false;
      tmp = !kcg_false;
      outC->SM1_state_nxt = SSM_st_SimpleCase_SM1;
      break;
    
  }
  if ((*pRepPara).present | tmp2) {
    _L24 = (*trainPos).trainPosition.nominal;
  }
  else {
    if (outC->init) {
      tmp1 = 0;
    }
    else {
      tmp1 = outC->rem_currTriggerDistance;
    }
    _L24 = tmp1 + outC->_L21;
  }
  outC->b = (_L24 <= (*trainPos).trainPosition.nominal) & tmp &
    validPositionData & (outC->_L21 != 32766);
  if (outC->b) {
    outC->rem_currTriggerDistance = _L24;
  }
  else if (outC->init) {
    outC->rem_currTriggerDistance = 0;
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_D_cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

