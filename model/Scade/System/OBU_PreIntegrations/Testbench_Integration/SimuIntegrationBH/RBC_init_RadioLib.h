/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC_init_RadioLib_H_
#define _RBC_init_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RadioLib::RBC_init */
extern void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */ M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* RadioLib::RBC_init::Packets_in */ CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */ kcg_int Trigger_in,
  /* RadioLib::RBC_init::Message_sent */ kcg_bool Message_sent,
  /* RadioLib::RBC_init::R_data_out */ R_data_internal_T_InfraLib *R_data_out);

#endif /* _RBC_init_RadioLib_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_init_RadioLib.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

