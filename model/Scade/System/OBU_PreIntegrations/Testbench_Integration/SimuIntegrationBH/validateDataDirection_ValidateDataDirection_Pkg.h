/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _validateDataDirection_ValidateDataDirection_Pkg_H_
#define _validateDataDirection_ValidateDataDirection_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ValidateDataDirection_Pkg::validateDataDirection */
extern void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */ positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg *_11_outMessage);

#endif /* _validateDataDirection_ValidateDataDirection_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_ValidateDataDirection_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

