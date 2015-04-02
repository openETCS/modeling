/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupRadioPacketLoop.h"

void RECV_LookupRadioPacketLoop_reset(outC_RECV_LookupRadioPacketLoop *outC)
{
}

/* RECV_LookupRadioPacketLoop */
void RECV_LookupRadioPacketLoop(
  /* RECV_LookupRadioPacketLoop::Index */kcg_int Index,
  /* RECV_LookupRadioPacketLoop::HeaderInit */MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* RECV_LookupRadioPacketLoop::Message_in */MetadataElement_T_Common_Types_Pkg *Message_in,
  /* RECV_LookupRadioPacketLoop::ID_in */kcg_int ID_in,
  outC_RECV_LookupRadioPacketLoop *outC)
{
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _1_noname;
  
  outC->_L31 = Index;
  _1_noname = outC->_L31;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L30, HeaderInit);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L30);
  outC->_L3 = ID_in;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L4, Message_in);
  outC->_L27 = outC->_L4.nid_packet;
  outC->_L28 = outC->_L3 == outC->_L27;
  outC->_L29 = !outC->_L28;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L4);
  outC->Cont = outC->_L29;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupRadioPacketLoop.c
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

