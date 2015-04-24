/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SIM_SEND_WriteBaliseMessageHeader_H_
#define _SIM_SEND_WriteBaliseMessageHeader_H_

#include "kcg_types.h"
#include "SEND_FindSlot.h"

/* =====================  no input structure  ====================== */


/* SIM_SEND_WriteBaliseMessageHeader */
extern void SIM_SEND_WriteBaliseMessageHeader(
  /* SIM_SEND_WriteBaliseMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* SIM_SEND_WriteBaliseMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  /* SIM_SEND_WriteBaliseMessageHeader::HeadersOut */ Metadata_T_Common_Types_Pkg *HeadersOut,
  /* SIM_SEND_WriteBaliseMessageHeader::NewStartAddr */ kcg_int *NewStartAddr,
  /* SIM_SEND_WriteBaliseMessageHeader::NewEndAddr */ kcg_int *NewEndAddr);

#endif /* _SIM_SEND_WriteBaliseMessageHeader_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SIM_SEND_WriteBaliseMessageHeader.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

