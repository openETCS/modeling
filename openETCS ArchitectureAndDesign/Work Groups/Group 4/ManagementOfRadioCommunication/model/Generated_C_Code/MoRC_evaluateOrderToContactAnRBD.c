/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_evaluateOrderToContactAnRBD.h"

void MoRC_evaluateOrderToContactAnRBD_init(
  MoRC_outC_evaluateOrderToContactAnRBD *outC)
{
  outC->init = kcg_true;
  outC->rem_order_in.appliesAlsoToSleepingUnits = kcg_true;
  outC->rem_order_in.actionToBePerformed = MoRC_morc_rbca_noAction;
  outC->rem_order_in.telephoneNoOfTheRBC = 0;
  outC->rem_order_in.rbc_id = 0;
  outC->rem_order_in.valid = kcg_true;
  outC->_L16.appliesAlsoToSleepingUnits = kcg_true;
  outC->_L16.actionToBePerformed = MoRC_morc_rbca_noAction;
  outC->_L16.telephoneNoOfTheRBC = 0;
  outC->_L16.rbc_id = 0;
  outC->_L16.valid = kcg_true;
  outC->order_out.appliesAlsoToSleepingUnits = kcg_true;
  outC->order_out.actionToBePerformed = MoRC_morc_rbca_noAction;
  outC->order_out.telephoneNoOfTheRBC = 0;
  outC->order_out.rbc_id = 0;
  outC->order_out.valid = kcg_true;
  MoRC_FallingEdge_init_digital(&outC->Context_1);
}


void MoRC_evaluateOrderToContactAnRBD_reset(
  MoRC_outC_evaluateOrderToContactAnRBD *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_FallingEdge_reset_digital(&outC->Context_1);
}

/* evaluateOrderToContactAnRBD */
void MoRC_evaluateOrderToContactAnRBD(
  /* evaluateOrderToContactAnRBD::order_in */ MoRC_orderToContactAnRBC_Type *order_in,
  /* evaluateOrderToContactAnRBD::onBoardStoredShortPhoneNo */ MoRC_rbc_phoneNo_Type onBoardStoredShortPhoneNo,
  MoRC_outC_evaluateOrderToContactAnRBD *outC)
{
  /* evaluateOrderToContactAnRBD::_L35 */ MoRC_orderToContactAnRBC_Type _L35;
  
  /* 1 */
  MoRC_FallingEdge_digital(
    (kcg_bool)
      ((*order_in).valid && (*order_in).rbc_id !=
        MoRC_cRBC_id_contactLastKnownRBC && (*order_in).telephoneNoOfTheRBC !=
        MoRC_cRBC_phoneNo_UseOnboardStoredShortNo),
    &outC->Context_1);
  if (outC->Context_1.FE_Output) {
    if (outC->init) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &outC->_L16,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
    else {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&outC->_L16, &outC->rem_order_in);
    }
  }
  else if (outC->init) {
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &outC->_L16,
      (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
  }
  outC->init = kcg_false;
  if (MoRC_cRBC_id_contactLastKnownRBC == (*order_in).rbc_id &&
    (*order_in).valid) {
    MoRC_kcg_copy_orderToContactAnRBC_Type(&_L35, &outC->_L16);
  }
  else {
    MoRC_kcg_copy_orderToContactAnRBC_Type(&_L35, order_in);
  }
  MoRC_kcg_copy_orderToContactAnRBC_Type(&outC->order_out, &_L35);
  if (_L35.telephoneNoOfTheRBC == MoRC_cRBC_phoneNo_UseOnboardStoredShortNo) {
    outC->order_out.telephoneNoOfTheRBC = onBoardStoredShortPhoneNo;
  }
  else {
    outC->order_out.telephoneNoOfTheRBC = _L35.telephoneNoOfTheRBC;
  }
  MoRC_kcg_copy_orderToContactAnRBC_Type(&outC->rem_order_in, order_in);
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_evaluateOrderToContactAnRBD.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

