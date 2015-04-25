/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_
#define _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */


/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
extern void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */ Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage);

#endif /* _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

