/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _Write_P005_TM_trackside_H_
#define _Write_P005_TM_trackside_H_

#include "kcg_types.h"
#include "C_P005_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM_trackside::Write_P005 */
extern void Write_P005_TM_trackside(
  /* TM_trackside::Write_P005::Packet05 */P005_trackside_int_T_TM *Packet05,
  /* TM_trackside::Write_P005::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P005::Error */kcg_bool *Error,
  /* TM_trackside::Write_P005::RadioPacketsOut */CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P005_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P005_TM_trackside.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

