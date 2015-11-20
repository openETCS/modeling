/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_
#define _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_

#include "kcg_types.h"
#include "DECODE_NID_LRBG_TM_conversions.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
extern void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */ kcg_bool *BG_passed,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */ kcg_bool *onlyBGsAnnouncedViaRadio);

#endif /* _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

