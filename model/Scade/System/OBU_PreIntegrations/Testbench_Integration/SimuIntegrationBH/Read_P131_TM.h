/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Read_P131_TM_H_
#define _Read_P131_TM_H_

#include "kcg_types.h"
#include "C_P131_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P131 */
extern void Read_P131_TM(
  /* TM::Read_P131::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P131::received */ kcg_bool *received,
  /* TM::Read_P131::P131_OBU_out */ P131_OBU_T_TM *P131_OBU_out);

#endif /* _Read_P131_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P131_TM.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

