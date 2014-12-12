/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_D_cycloc_ProvidePositionReport_Pkg.h"

void MLRI__op_D_cycloc_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_D_cycloc */
void MLRI__op_D_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_D_cycloc::pRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_D_cycloc::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg *outC)
{
  kcg_int tmp1;
  kcg_bool tmp;
  /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ MLRI__SSM_ST_SM1 SM1_state_sel;
  /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ MLRI__SSM_ST_SM1 SM1_state_act;
  /* ProvidePositionReport_Pkg::op_D_cycloc::validPositionData */ kcg_bool validPositionData;
  /* ProvidePositionReport_Pkg::op_D_cycloc::_L24 */ MLRI__L_internal_Type_Obu_BasicTypes_Pkg _L24;
  
  validPositionData = (*trainPos).valid & !(*trainPos).trainPositionIsUnknown;
  if (outC->init) {
    SM1_state_sel = MLRI__SSM_st_Init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case MLRI__SSM_st_SimpleCase_SM1 :
      if ((*pRepPara).present & !validPositionData) {
        SM1_state_act = MLRI__SSM_st_SpecialCase_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_SimpleCase_SM1;
      }
      break;
    case MLRI__SSM_st_SpecialCase_SM1 :
      if ((*pRepPara).present & validPositionData) {
        SM1_state_act = MLRI__SSM_st_SimpleCase_SM1;
      }
      else if (!(*pRepPara).present & validPositionData) {
        SM1_state_act = MLRI__SSM_st_Intermediate_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_SpecialCase_SM1;
      }
      break;
    case MLRI__SSM_st_Init_SM1 :
      SM1_state_act = MLRI__SSM_st_SimpleCase_SM1;
      break;
    case MLRI__SSM_st_Intermediate_SM1 :
      if ((*pRepPara).present & !validPositionData) {
        SM1_state_act = MLRI__SSM_st_SpecialCase_SM1;
      }
      else if (!(*pRepPara).present | validPositionData) {
        SM1_state_act = MLRI__SSM_st_SimpleCase_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_Intermediate_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case MLRI__SSM_st_SimpleCase_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_SimpleCase_SM1;
      break;
    case MLRI__SSM_st_SpecialCase_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_SpecialCase_SM1;
      break;
    case MLRI__SSM_st_Init_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Init_SM1;
      break;
    case MLRI__SSM_st_Intermediate_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Intermediate_SM1;
      break;
    
  }
  if ((*pRepPara).present) {
    outC->_L21 = (*pRepPara).packet58.d_cycloc;
  }
  else if (outC->init) {
    outC->_L21 = 32766;
  }
  switch (SM1_state_act) {
    case MLRI__SSM_st_SimpleCase_SM1 :
      tmp = kcg_false;
      break;
    case MLRI__SSM_st_SpecialCase_SM1 :
      tmp = kcg_false;
      break;
    case MLRI__SSM_st_Init_SM1 :
      tmp = kcg_false;
      break;
    case MLRI__SSM_st_Intermediate_SM1 :
      tmp = kcg_true;
      break;
    
  }
  if ((*pRepPara).present | tmp) {
    _L24 = (*trainPos).trainPosition.nominal;
  }
  else {
    if (outC->init) {
      tmp1 = 0;
    }
    else {
      tmp1 = outC->currTriggerDistance;
    }
    _L24 = tmp1 + outC->_L21;
  }
  switch (SM1_state_act) {
    case MLRI__SSM_st_SimpleCase_SM1 :
      tmp = !kcg_false;
      break;
    case MLRI__SSM_st_SpecialCase_SM1 :
      tmp = !kcg_true;
      break;
    case MLRI__SSM_st_Init_SM1 :
      tmp = !kcg_false;
      break;
    case MLRI__SSM_st_Intermediate_SM1 :
      tmp = !kcg_false;
      break;
    
  }
  outC->b = (_L24 <= (*trainPos).trainPosition.nominal) & tmp &
    validPositionData & (outC->_L21 != 32766);
  if (outC->b) {
    outC->currTriggerDistance = _L24;
  }
  else if (outC->init) {
    outC->currTriggerDistance = 0;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_D_cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

