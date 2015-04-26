/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00_Story00_first_test.h"

void Story00_init_Story00_first_test(outC_Story00_Story00_first_test *outC)
{
  int i;
  
  for (i = 0; i < 4; i++) {
    outC->LinkedBGs[i].q_locacc = 0;
    outC->LinkedBGs[i].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->LinkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->LinkedBGs[i].nid_bg = 0;
    outC->LinkedBGs[i].nid_c = 0;
    outC->LinkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->LinkedBGs[i].d_link = 0;
    outC->LinkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->LinkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->LinkedBGs[i].nid_LRBG = 0;
    outC->LinkedBGs[i].valid = kcg_true;
  }
  for (i = 0; i < 500; i++) {
    outC->Packets_Out.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->Packets_Out.PacketHeaders[i].endAddress = 0;
    outC->Packets_Out.PacketHeaders[i].startAddress = 0;
    outC->Packets_Out.PacketHeaders[i].valid = kcg_true;
    outC->Packets_Out.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->Packets_Out.PacketHeaders[i].nid_packet = 0;
  }
  outC->TelegramHeader.q_link = Q_LINK_Unlinked;
  outC->TelegramHeader.nid_bg = 0;
  outC->TelegramHeader.nid_c = 0;
  outC->TelegramHeader.m_mcount = 0;
  outC->TelegramHeader.m_dup = M_DUP_No_duplicates;
  outC->TelegramHeader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TelegramHeader.n_pig = N_PIG_I_am_the_1st;
  outC->TelegramHeader.q_media = Q_MEDIA_Balise;
  outC->TelegramHeader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TelegramHeader.q_updown = Q_UPDOWN_Down_link_telegram;
  Story00_BTM_init_Story00_first_test(&outC->Context_1);
}


void Story00_reset_Story00_first_test(outC_Story00_Story00_first_test *outC)
{
  /* 1 */ Story00_BTM_reset_Story00_first_test(&outC->Context_1);
}

/* Story00_first_test::Story00 */
void Story00_Story00_first_test(
  /* Story00_first_test::Story00::Loc */ kcg_real Loc,
  /* Story00_first_test::Story00::PosReport */ kcg_int PosReport,
  /* Story00_first_test::Story00::UsePosReport */ kcg_bool UsePosReport,
  outC_Story00_Story00_first_test *outC)
{
  /* Story00_first_test::Story00::_L4 */ TM_CompressedBaliseMessage _L4;
  
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->LinkedBGs,
    (LinkedBGs_T_BG_Types_Pkg *) &DEFAULT_Linked_BGs);
  /* 1 */ Story00_BTM_Story00_first_test(Loc, 0, &outC->Context_1);
  kcg_copy_TM_CompressedBaliseMessage(&_L4, &outC->Context_1.BM);
  /* 1 */ RECV_ConvertBaliseHeader_CT(&_L4.Header, &outC->TelegramHeader);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Packets_Out,
    &_L4.Messages);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Story00_Story00_first_test.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

