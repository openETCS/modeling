/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePacket_4_ProvidePositionReport_Pkg.h"

void AggregatePacket_4_init_ProvidePositionReport_Pkg(
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L33 = M_ERROR_Balise_group_linking_consistency_error;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->packet4.M_ERROR = M_ERROR_Balise_group_linking_consistency_error;
  outC->packet4.valid = kcg_true;
}


void AggregatePacket_4_reset_ProvidePositionReport_Pkg(
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::AggregatePacket_4 */
void AggregatePacket_4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_4::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::AggregatePacket_4::trigger */ kcg_bool trigger,
  outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ _28_SSM_ST_SM1 SM1_state_sel;
  /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ _28_SSM_ST_SM1 SM1_state_act;
  
  if ((*errorMsg).present) {
    outC->_L33 = (*errorMsg).errorType;
  }
  else if (outC->init) {
    outC->_L33 = M_ERROR_Balise_group_linking_consistency_error;
  }
  outC->packet4.M_ERROR = outC->_L33;
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_init_SM1 :
      SM1_state_act = SSM_st_emptyStorage_SM1;
      break;
    case SSM_st_emptyStorage_SM1 :
      if (!trigger & (*errorMsg).present) {
        SM1_state_act = SSM_st_filledStorage_SM1;
      }
      else {
        SM1_state_act = SSM_st_emptyStorage_SM1;
      }
      break;
    case SSM_st_filledStorage_SM1 :
      if (trigger) {
        SM1_state_act = SSM_st_intermediate_SM1;
      }
      else {
        SM1_state_act = SSM_st_filledStorage_SM1;
      }
      break;
    case SSM_st_intermediate_SM1 :
      if (!trigger & (*errorMsg).present) {
        SM1_state_act = SSM_st_filledStorage_SM1;
      }
      else if (trigger | !(*errorMsg).present) {
        SM1_state_act = SSM_st_emptyStorage_SM1;
      }
      else {
        SM1_state_act = SSM_st_intermediate_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_init_SM1 :
      tmp = kcg_true;
      tmp1 = kcg_false;
      outC->SM1_state_nxt = SSM_st_init_SM1;
      break;
    case SSM_st_emptyStorage_SM1 :
      tmp = kcg_true;
      tmp1 = kcg_false;
      outC->SM1_state_nxt = SSM_st_emptyStorage_SM1;
      break;
    case SSM_st_filledStorage_SM1 :
      tmp = kcg_false;
      tmp1 = kcg_false;
      outC->SM1_state_nxt = SSM_st_filledStorage_SM1;
      break;
    case SSM_st_intermediate_SM1 :
      tmp = kcg_true;
      tmp1 = kcg_true;
      outC->SM1_state_nxt = SSM_st_intermediate_SM1;
      break;
    
  }
  outC->packet4.valid = (tmp1 & trigger) | (trigger & (*errorMsg).present &
      tmp);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_4_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

