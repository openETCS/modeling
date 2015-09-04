/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

void Read_P137_Legacy_reset_TM_specific(outC_Read_P137_Legacy_TM_specific *outC)
{
  /* 1 */ Read_P137_reset_TM(&outC->Context_1);
}

/* TM_specific::Read_P137_Legacy */
void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P137_Legacy_TM_specific *outC)
{
  kcg_bool noname;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* 1 */ Read_P137_TM(&outC->_L3, &outC->Context_1);
  outC->_L1 = outC->Context_1.received;
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L2,
    &outC->Context_1.P137_OBU_out);
  noname = outC->_L1;
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->P137_legacy_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P137_Legacy_TM_specific.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

