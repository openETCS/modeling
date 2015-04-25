/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _sendDynamic_manage_DMI_Output_Pkg_H_
#define _sendDynamic_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Output_Pkg::sendDynamic */
extern void sendDynamic_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendDynamic::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendDynamic::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::sendDynamic::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::sendDynamic::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inMorePositions */ morePositions_T_DMI_Types_Pkg *inMorePositions,
  /* manage_DMI_Output_Pkg::sendDynamic::inRadioConnectionStatus */ safeRadioConnectionStatus_Type_MoRC_Pck inRadioConnectionStatus,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *packetDynamic);

#endif /* _sendDynamic_manage_DMI_Output_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** sendDynamic_manage_DMI_Output_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

