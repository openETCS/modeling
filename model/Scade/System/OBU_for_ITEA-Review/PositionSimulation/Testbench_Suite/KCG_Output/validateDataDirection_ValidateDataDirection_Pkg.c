/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */ positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L13 */ positionedBG_T_TrainPosition_Types_Pck _L13_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*inMessage).source == msrc_Eurobalise_Common_Types_Pkg;
  if (IfBlock1_clock) {
    /* 2 */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      inMessage,
      (*inMessage).BG_Common_Header.trainRunningDirectionToBG,
      (*inLRBG).valid,
      trainPosition,
      (kcg_bool)
        !(*inMessage).BG_Common_Header.noCoordinateSystemHasBeenAssigned,
      outMessage);
  }
  else {
    else_clock_IfBlock1 = (*inMessage).source ==
      msrc_Euroradio_Common_Types_Pkg;
    if (else_clock_IfBlock1) {
      /* 2 */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        inMessage,
        inPositionedBGs,
        &_L13_IfBlock1);
      /* 1 */
      validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
        inMessage,
        _L13_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG,
        (*inLRBG).valid,
        trainPosition,
        (kcg_bool)
          !_L13_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned,
        outMessage);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, inMessage);
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

