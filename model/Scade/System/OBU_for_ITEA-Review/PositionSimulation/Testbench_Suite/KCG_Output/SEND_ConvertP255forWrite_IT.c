/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP255forWrite_IT.h"

/* SEND_ConvertP255forWrite_IT */
void SEND_ConvertP255forWrite_IT(
  /* SEND_ConvertP255forWrite_IT::BM255 */ TM_P255_T *BM255,
  /* SEND_ConvertP255forWrite_IT::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* SEND_ConvertP255forWrite_IT::BM255_out */ CompressedPacketData_T_Common_Types_Pkg *BM255_out)
{
  kcg_int i;
  
  (*Header).nid_packet = 41;
  (*Header).valid = (*BM255).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = 2;
  (&(*BM255_out)[0])[0] = (*BM255).q_dir;
  (&(*BM255_out)[0])[1] = (*BM255).packet_ID;
  for (i = 0; i < 498; i++) {
    (&(*BM255_out)[2])[i] = 0;
  }
  (*Header).q_dir = /* 1 */ TOOLS_Int_to_Q_DIR((*BM255).q_dir);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_ConvertP255forWrite_IT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

