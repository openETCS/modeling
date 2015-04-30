/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP042forWrite_IT.h"

/* SEND_ConvertP042forWrite_IT */
void SEND_ConvertP042forWrite_IT(
  /* SEND_ConvertP042forWrite_IT::BM42 */ TM_P042_T *BM42,
  /* SEND_ConvertP042forWrite_IT::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* SEND_ConvertP042forWrite_IT::BM42_out */ CompressedPacketData_T_Common_Types_Pkg *BM42_out)
{
  kcg_int i;
  
  (&(*BM42_out)[0])[0] = (*BM42).q_dir;
  (&(*BM42_out)[0])[1] = (*BM42).l_packet;
  (&(*BM42_out)[0])[2] = (*BM42).m_level;
  (&(*BM42_out)[0])[3] = (*BM42).nid_c;
  (&(*BM42_out)[0])[4] = (*BM42).nid_rbc;
  (&(*BM42_out)[0])[5] = (*BM42).nid_radio;
  (&(*BM42_out)[0])[6] = (*BM42).q_sleepsession;
  (*Header).nid_packet = 41;
  (*Header).valid = (*BM42).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = (*BM42).l_packet - 1;
  (*Header).q_dir = /* 1 */ TOOLS_Int_to_Q_DIR((*BM42).q_dir);
  for (i = 0; i < 493; i++) {
    (&(*BM42_out)[7])[i] = 0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_ConvertP042forWrite_IT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

