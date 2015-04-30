/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP041forWrite_IT.h"

/* SEND_ConvertP041forWrite_IT */
void SEND_ConvertP041forWrite_IT(
  /* SEND_ConvertP041forWrite_IT::BM41 */ TM_P041_T *BM41,
  /* SEND_ConvertP041forWrite_IT::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* SEND_ConvertP041forWrite_IT::BM41_out */ CompressedPacketData_T_Common_Types_Pkg *BM41_out)
{
  kcg_int i;
  
  (&(*BM41_out)[0])[0] = (*BM41).q_dir;
  (&(*BM41_out)[0])[1] = (*BM41).l_packet;
  (&(*BM41_out)[0])[2] = (*BM41).q_scale;
  (&(*BM41_out)[0])[3] = (*BM41).d_level;
  (&(*BM41_out)[0])[4] = (*BM41).m_level;
  (&(*BM41_out)[0])[5] = (*BM41).n_iter;
  (&(*BM41_out)[0])[6] = (*BM41).sections[0].nid_stm;
  (&(*BM41_out)[0])[7] = (*BM41).sections[0].l_acklevel;
  (*Header).nid_packet = 41;
  (*Header).valid = (*BM41).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = (*BM41).l_packet - 1;
  (*Header).q_dir = /* 1 */ TOOLS_Int_to_Q_DIR((*BM41).q_dir);
  for (i = 0; i < 492; i++) {
    (&(*BM41_out)[8])[i] = 0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_ConvertP041forWrite_IT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

