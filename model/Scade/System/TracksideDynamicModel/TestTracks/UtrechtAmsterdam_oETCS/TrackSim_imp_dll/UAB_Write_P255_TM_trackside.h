/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:30
*************************************************************$ */
#ifndef _UAB_Write_P255_TM_trackside_H_
#define _UAB_Write_P255_TM_trackside_H_

#include "kcg_types.h"
#include "UAB_C_P255_tracksim_compr_TM_conversions.h"
#include "UAB_SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "UAB_SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM_trackside::Write_P255 */
extern void UAB_Write_P255_TM_trackside(
  /* TM_trackside::Write_P255::Packet255 */UAB_P255_trackside_int_T_TM *Packet255,
  /* TM_trackside::Write_P255::Packets */UAB_CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P255::Error */kcg_bool *Error,
  /* TM_trackside::Write_P255::RadioPacketsOut */UAB_CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _UAB_Write_P255_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Write_P255_TM_trackside.h
** Generation date: 2015-08-20T20:42:30
*************************************************************$ */

