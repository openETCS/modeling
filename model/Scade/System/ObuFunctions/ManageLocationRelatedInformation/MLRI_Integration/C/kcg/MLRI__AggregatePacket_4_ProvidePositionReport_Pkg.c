/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__AggregatePacket_4_ProvidePositionReport_Pkg.h"

void MLRI__AggregatePacket_4_reset_ProvidePositionReport_Pkg(
  MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::AggregatePacket_4 */
void MLRI__AggregatePacket_4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_4::errorMsg */MLRI__ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::AggregatePacket_4::trigger */kcg_bool trigger,
  MLRI__outC_AggregatePacket_4_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ MLRI___1_SSM_ST_SM1 SM1_state_sel;
  /* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */ MLRI___1_SSM_ST_SM1 SM1_state_act;
  
  if (outC->init) {
    SM1_state_sel = MLRI__SSM_st_init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case MLRI__SSM_st_init_SM1 :
      SM1_state_act = MLRI__SSM_st_emptyStorage_SM1;
      break;
    case MLRI__SSM_st_emptyStorage_SM1 :
      if (!trigger & (*errorMsg).present) {
        SM1_state_act = MLRI__SSM_st_filledStorage_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_emptyStorage_SM1;
      }
      break;
    case MLRI__SSM_st_filledStorage_SM1 :
      if (trigger) {
        SM1_state_act = MLRI__SSM_st_intermediate_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_filledStorage_SM1;
      }
      break;
    case MLRI__SSM_st_intermediate_SM1 :
      if (!trigger & (*errorMsg).present) {
        SM1_state_act = MLRI__SSM_st_filledStorage_SM1;
      }
      else if (trigger | !(*errorMsg).present) {
        SM1_state_act = MLRI__SSM_st_emptyStorage_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_intermediate_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case MLRI__SSM_st_init_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_init_SM1;
      break;
    case MLRI__SSM_st_emptyStorage_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_emptyStorage_SM1;
      break;
    case MLRI__SSM_st_filledStorage_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_filledStorage_SM1;
      break;
    case MLRI__SSM_st_intermediate_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_intermediate_SM1;
      break;
    
  }
  if ((*errorMsg).present) {
    outC->_L33 = (*errorMsg).errorType;
  }
  else if (outC->init) {
    outC->_L33 = MLRI__M_ERROR_Balise_group_linking_consistency_error;
  }
  outC->packet4.packet4.NID_PACKET = 4;
  outC->packet4.packet4.L_PACKET = 0;
  outC->packet4.packet4.error = outC->_L33;
  switch (SM1_state_act) {
    case MLRI__SSM_st_init_SM1 :
      tmp1 = kcg_false;
      tmp = kcg_true;
      break;
    case MLRI__SSM_st_emptyStorage_SM1 :
      tmp1 = kcg_false;
      tmp = kcg_true;
      break;
    case MLRI__SSM_st_filledStorage_SM1 :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case MLRI__SSM_st_intermediate_SM1 :
      tmp1 = kcg_true;
      tmp = kcg_true;
      break;
    
  }
  outC->packet4.valid = (tmp1 & trigger) | (trigger & (*errorMsg).present &
      tmp);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_4_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

