/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Read_P046_TM_H_
#define _Read_P046_TM_H_

#include "kcg_types.h"
#include "C_P046_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P046 */
extern void Read_P046_TM(
  /* TM::Read_P046::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P046::received */kcg_bool *received,
  /* TM::Read_P046::P046_OBU_out */P046_OBU_T_TM *P046_OBU_out);

#endif /* _Read_P046_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P046_TM.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

