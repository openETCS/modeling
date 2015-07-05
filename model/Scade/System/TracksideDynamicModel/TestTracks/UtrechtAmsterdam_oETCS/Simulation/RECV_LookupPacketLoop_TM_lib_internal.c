/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"

void RECV_LookupPacketLoop_reset_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC)
{
  /* 1 */ T_Filter_Metadata_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_lib_internal::RECV_LookupPacketLoop */
void RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */kcg_bool F_id,
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC)
{
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _1_noname;
  
  outC->_L34 = F_id;
  outC->_L33 = F_version;
  outC->_L3 = ID_in;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L4, Message_in);
  outC->_L27 = outC->_L4.nid_packet;
  /* 1 */
  T_Filter_Metadata_TM_lib_internal(
    outC->_L3,
    outC->_L27,
    outC->_L33,
    outC->_L34,
    &outC->Context_1);
  outC->_L32 = outC->Context_1.data_match;
  outC->_L31 = Index;
  _1_noname = outC->_L31;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L30, HeaderInit);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L30);
  outC->_L29 = !outC->_L32;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L4);
  outC->Cont = outC->_L29;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacketLoop_TM_lib_internal.c
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

