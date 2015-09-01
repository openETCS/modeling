/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */
#ifndef _UAB_Read_P015_TM_H_
#define _UAB_Read_P015_TM_H_

#include "kcg_types.h"
#include "UAB_RECV_ReadPackets_TM_lib_internal.h"
#include "UAB_C_P015_compr_onboard_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P015 */
extern void UAB_Read_P015_TM(
  /* TM::Read_P015::Message_IN */UAB_CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P015::received */kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */UAB_P015_OBU_T_TM *P015_OBU_out);

#endif /* _UAB_Read_P015_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Read_P015_TM.h
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

