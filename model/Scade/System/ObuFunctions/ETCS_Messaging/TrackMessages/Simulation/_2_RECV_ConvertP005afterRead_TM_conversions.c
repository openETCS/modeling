/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_2_RECV_ConvertP005afterRead_TM_conversions.h"

void _2_RECV_ConvertP005afterRead_reset_TM_conversions(
  outC__2_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  /* 1 */ RECV_ConvertP005afterRead_reset_TM_conversions(&outC->Context_1);
  /* 2 */ RECV_ConvertP005afterRead_reset_TM_conversions(&outC->Context_2);
  /* 3 */ RECV_ConvertP005afterRead_reset_TM_conversions(&outC->Context_3);
  /* 4 */ RECV_ConvertP005afterRead_reset_TM_conversions(&outC->Context_4);
  /* 5 */ RECV_ConvertP005afterRead_reset_TM_conversions(&outC->Context_5);
}

/* TM_conversions::RECV_ConvertP005afterRead_CT */
void _2_RECV_ConvertP005afterRead_TM_conversions(
  /* TM_conversions::RECV_ConvertP005afterRead_CT::LRBG */NID_LRBG LRBG,
  /* TM_conversions::RECV_ConvertP005afterRead_CT::RP005 */P005_array_T_TM *RP005,
  /* TM_conversions::RECV_ConvertP005afterRead_CT::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC__2_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  LinkedBG_T_BG_Types_Pkg noname;
  
  kcg_copy_P005_array_T_TM(&outC->_L1, RP005);
  outC->_L129 = outC->_L1[38];
  outC->_L130 = outC->_L1[37];
  outC->_L131 = outC->_L1[36];
  outC->_L132 = outC->_L1[35];
  outC->_L133 = outC->_L1[34];
  outC->_L71 = outC->_L1[33];
  outC->_L70 = outC->_L1[32];
  outC->_L69 = outC->_L1[31];
  outC->_L68 = outC->_L1[30];
  outC->_L67 = outC->_L1[29];
  outC->_L66 = outC->_L1[28];
  outC->_L65 = outC->_L1[27];
  outC->_L64 = outC->_L1[26];
  outC->_L63 = outC->_L1[25];
  outC->_L62 = outC->_L1[24];
  outC->_L61 = outC->_L1[23];
  outC->_L60 = outC->_L1[22];
  outC->_L59 = outC->_L1[21];
  outC->_L58 = outC->_L1[20];
  outC->_L57 = outC->_L1[19];
  outC->_L56 = outC->_L1[18];
  outC->_L55 = outC->_L1[17];
  outC->_L54 = outC->_L1[16];
  outC->_L53 = outC->_L1[15];
  outC->_L52 = outC->_L1[14];
  outC->_L51 = outC->_L1[13];
  outC->_L50 = outC->_L1[12];
  outC->_L49 = outC->_L1[11];
  outC->_L48 = outC->_L1[10];
  outC->_L47 = outC->_L1[9];
  outC->_L46 = outC->_L1[8];
  outC->_L45 = outC->_L1[7];
  outC->_L44 = outC->_L1[6];
  outC->_L43 = outC->_L1[5];
  outC->_L42 = outC->_L1[4];
  outC->_L41 = outC->_L1[3];
  outC->_L40 = outC->_L1[2];
  outC->_L39 = outC->_L1[1];
  outC->_L139[0] = outC->_L70;
  outC->_L139[1] = outC->_L71;
  outC->_L139[2] = outC->_L133;
  outC->_L139[3] = outC->_L132;
  outC->_L139[4] = outC->_L131;
  outC->_L139[5] = outC->_L130;
  outC->_L139[6] = outC->_L129;
  outC->_L126 = LRBG;
  outC->_L38 = outC->_L1[0];
  outC->_L122[0] = outC->_L38;
  outC->_L122[1] = outC->_L39;
  outC->_L122[2] = outC->_L40;
  outC->_L122[3] = outC->_L41;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L123, Metadata_Element);
  outC->_L124 = outC->_L123.valid;
  /* 5 */
  RECV_ConvertP005afterRead_TM_conversions(
    outC->_L126,
    &outC->_L122,
    &outC->_L139,
    outC->_L124,
    4,
    &outC->Context_5);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L138, &outC->Context_5.Linked_BG);
  outC->_L137[0] = outC->_L63;
  outC->_L137[1] = outC->_L64;
  outC->_L137[2] = outC->_L65;
  outC->_L137[3] = outC->_L66;
  outC->_L137[4] = outC->_L67;
  outC->_L137[5] = outC->_L68;
  outC->_L137[6] = outC->_L69;
  outC->_L136[0] = outC->_L56;
  outC->_L136[1] = outC->_L57;
  outC->_L136[2] = outC->_L58;
  outC->_L136[3] = outC->_L59;
  outC->_L136[4] = outC->_L60;
  outC->_L136[5] = outC->_L61;
  outC->_L136[6] = outC->_L62;
  outC->_L135[0] = outC->_L49;
  outC->_L135[1] = outC->_L50;
  outC->_L135[2] = outC->_L51;
  outC->_L135[3] = outC->_L52;
  outC->_L135[4] = outC->_L53;
  outC->_L135[5] = outC->_L54;
  outC->_L135[6] = outC->_L55;
  outC->_L134[0] = outC->_L42;
  outC->_L134[1] = outC->_L43;
  outC->_L134[2] = outC->_L44;
  outC->_L134[3] = outC->_L45;
  outC->_L134[4] = outC->_L46;
  outC->_L134[5] = outC->_L47;
  outC->_L134[6] = outC->_L48;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&noname, &outC->_L138);
  /* 4 */
  RECV_ConvertP005afterRead_TM_conversions(
    outC->_L126,
    &outC->_L122,
    &outC->_L137,
    outC->_L124,
    3,
    &outC->Context_4);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L120, &outC->Context_4.Linked_BG);
  /* 3 */
  RECV_ConvertP005afterRead_TM_conversions(
    outC->_L126,
    &outC->_L122,
    &outC->_L136,
    outC->_L124,
    2,
    &outC->Context_3);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L119, &outC->Context_3.Linked_BG);
  /* 2 */
  RECV_ConvertP005afterRead_TM_conversions(
    outC->_L126,
    &outC->_L122,
    &outC->_L135,
    outC->_L124,
    1,
    &outC->Context_2);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L118, &outC->Context_2.Linked_BG);
  /* 1 */
  RECV_ConvertP005afterRead_TM_conversions(
    outC->_L126,
    &outC->_L122,
    &outC->_L134,
    outC->_L124,
    0,
    &outC->Context_1);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L115, &outC->Context_1.Linked_BG);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L107[0], &outC->_L115);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L107[1], &outC->_L118);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L107[2], &outC->_L119);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L107[3], &outC->_L120);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->Packet005_OLD, &outC->_L107);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _2_RECV_ConvertP005afterRead_TM_conversions.c
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

