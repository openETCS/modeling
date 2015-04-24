/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP046forWrite_IT.h"

/* SEND_ConvertP046forWrite_IT */
void SEND_ConvertP046forWrite_IT(
  /* SEND_ConvertP046forWrite_IT::BM46 */ TM_P046_T *BM46,
  /* SEND_ConvertP046forWrite_IT::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* SEND_ConvertP046forWrite_IT::BM46_out */ CompressedPacketData_T_Common_Types_Pkg *BM46_out)
{
  kcg_int i;
  
  (*Header).nid_packet = 41;
  (*Header).valid = (*BM46).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = (*BM46).l_packet - 1;
  (&(*BM46_out)[0])[0] = (*BM46).q_dir;
  (&(*BM46_out)[0])[1] = (*BM46).l_packet;
  (&(*BM46_out)[0])[2] = (*BM46).m_level;
  (&(*BM46_out)[0])[3] = (*BM46).n_iter;
  (&(*BM46_out)[0])[4] = (*BM46).sections[0].m_leveltr;
  (&(*BM46_out)[0])[5] = (*BM46).sections[0].nid_stm;
  for (i = 0; i < 494; i++) {
    (&(*BM46_out)[6])[i] = 0;
  }
  (*Header).q_dir = /* 1 */ TOOLS_Int_to_Q_DIR((*BM46).q_dir);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_ConvertP046forWrite_IT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

