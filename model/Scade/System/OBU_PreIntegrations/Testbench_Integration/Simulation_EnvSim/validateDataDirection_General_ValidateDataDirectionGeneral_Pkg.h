/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_
#define _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */


/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
extern void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage);

#endif /* _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

