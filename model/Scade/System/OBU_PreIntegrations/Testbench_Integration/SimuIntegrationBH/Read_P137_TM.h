/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Read_P137_TM_H_
#define _Read_P137_TM_H_

#include "kcg_types.h"
#include "C_P137_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P137 */
extern void Read_P137_TM(
  /* TM::Read_P137::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P137::received */ kcg_bool *received,
  /* TM::Read_P137::P137_OBU_out */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_OBU_out);

#endif /* _Read_P137_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_TM.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

