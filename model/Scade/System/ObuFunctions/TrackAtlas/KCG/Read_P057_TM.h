/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Read_P057_TM_H_
#define _Read_P057_TM_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "C_P057_compr_onboard_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P057 */
extern void Read_P057_TM(
  /* TM::Read_P057::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P057::received */kcg_bool *received,
  /* TM::Read_P057::P057_OBU_out */P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *P057_OBU_out);

#endif /* _Read_P057_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P057_TM.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

