/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */
#ifndef _Send_P015_MessageLibBaseline2_H_
#define _Send_P015_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "C_P015_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* MessageLibBaseline2::Send_P015 */
extern void Send_P015_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P015::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P015::P015 */P015_trackside_int_T_TM *P015,
  /* MessageLibBaseline2::Send_P015::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out);

#endif /* _Send_P015_MessageLibBaseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P015_MessageLibBaseline2.h
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

