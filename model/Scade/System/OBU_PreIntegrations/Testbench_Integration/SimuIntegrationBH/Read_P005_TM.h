/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Read_P005_TM_H_
#define _Read_P005_TM_H_

#include "kcg_types.h"
#include "C_P005_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P005 */
extern void Read_P005_TM(
  /* TM::Read_P005::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P005::received */ kcg_bool *received,
  /* TM::Read_P005::P005_OBU_out */ P005_OBU_T_TM *P005_OBU_out);

#endif /* _Read_P005_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P005_TM.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

