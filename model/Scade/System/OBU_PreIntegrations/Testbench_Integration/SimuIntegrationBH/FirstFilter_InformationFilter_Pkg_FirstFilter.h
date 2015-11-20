/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_Pkg_FirstFilter_H_
#define _FirstFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::FirstFilter */
extern void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *messageForBuffer,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::storeInBuffer1 */ kcg_bool *storeInBuffer1);

#endif /* _FirstFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

