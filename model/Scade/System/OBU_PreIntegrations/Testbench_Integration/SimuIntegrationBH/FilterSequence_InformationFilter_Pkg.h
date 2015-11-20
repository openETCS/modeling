/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FilterSequence_InformationFilter_Pkg_H_
#define _FilterSequence_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FilterSequence */
extern void FilterSequence_InformationFilter_Pkg(
  /* InformationFilter_Pkg::FilterSequence::message */ ReceivedMessage_T_Common_Types_Pkg *message,
  /* InformationFilter_Pkg::FilterSequence::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FilterSequence::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FilterSequence::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::FilterSequence::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::FilterSequence::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage,
  /* InformationFilter_Pkg::FilterSequence::bufferMessage */ ReceivedMessage_T_Common_Types_Pkg *bufferMessage,
  /* InformationFilter_Pkg::FilterSequence::storeInBuffer */ kcg_bool *storeInBuffer);

#endif /* _FilterSequence_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FilterSequence_InformationFilter_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

