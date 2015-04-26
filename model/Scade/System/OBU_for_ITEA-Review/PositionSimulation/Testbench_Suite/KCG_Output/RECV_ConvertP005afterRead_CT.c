/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertP005afterRead_CT.h"

/* RECV_ConvertP005afterRead_CT */
void RECV_ConvertP005afterRead_CT(
  /* RECV_ConvertP005afterRead_CT::LRBG */ kcg_int LRBG,
  /* RECV_ConvertP005afterRead_CT::RP005 */ TM_P005_array_T *RP005,
  /* RECV_ConvertP005afterRead_CT::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* RECV_ConvertP005afterRead_CT::Packet005_OLD */ LinkedBGs_T_BG_Types_Pkg *Packet005_OLD)
{
  TM_P005E_array_T tmp3;
  TM_P005E_array_T tmp2;
  TM_P005E_array_T tmp1;
  TM_P005E_array_T tmp;
  /* RECV_ConvertP005afterRead_CT::_L122 */ Array4 _L122;
  
  tmp[0] = (*RP005)[25];
  tmp[1] = (*RP005)[26];
  tmp[2] = (*RP005)[27];
  tmp[3] = (*RP005)[28];
  tmp[4] = (*RP005)[29];
  tmp[5] = (*RP005)[30];
  tmp[6] = (*RP005)[31];
  tmp1[0] = (*RP005)[18];
  tmp1[1] = (*RP005)[19];
  tmp1[2] = (*RP005)[20];
  tmp1[3] = (*RP005)[21];
  tmp1[4] = (*RP005)[22];
  tmp1[5] = (*RP005)[23];
  tmp1[6] = (*RP005)[24];
  tmp2[0] = (*RP005)[11];
  tmp2[1] = (*RP005)[12];
  tmp2[2] = (*RP005)[13];
  tmp2[3] = (*RP005)[14];
  tmp2[4] = (*RP005)[15];
  tmp2[5] = (*RP005)[16];
  tmp2[6] = (*RP005)[17];
  tmp3[0] = (*RP005)[4];
  tmp3[1] = (*RP005)[5];
  tmp3[2] = (*RP005)[6];
  tmp3[3] = (*RP005)[7];
  tmp3[4] = (*RP005)[8];
  tmp3[5] = (*RP005)[9];
  tmp3[6] = (*RP005)[10];
  _L122[0] = (*RP005)[0];
  _L122[1] = (*RP005)[1];
  _L122[2] = (*RP005)[2];
  _L122[3] = (*RP005)[3];
  /* 1 */
  RECV_ConvertP005afterRead_Element_CT(
    LRBG,
    &_L122,
    &tmp3,
    (*Metadata_Element).valid,
    0,
    &(*Packet005_OLD)[0]);
  /* 3 */
  RECV_ConvertP005afterRead_Element_CT(
    LRBG,
    &_L122,
    &tmp2,
    (*Metadata_Element).valid,
    1,
    &(*Packet005_OLD)[1]);
  /* 4 */
  RECV_ConvertP005afterRead_Element_CT(
    LRBG,
    &_L122,
    &tmp1,
    (*Metadata_Element).valid,
    2,
    &(*Packet005_OLD)[2]);
  /* 5 */
  RECV_ConvertP005afterRead_Element_CT(
    LRBG,
    &_L122,
    &tmp,
    (*Metadata_Element).valid,
    3,
    &(*Packet005_OLD)[3]);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ConvertP005afterRead_CT.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

