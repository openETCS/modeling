/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P136_TM.h"

void Read_P136_reset_TM(outC_Read_P136_TM *outC)
{
}

/* TM::Read_P136 */
void Read_P136_TM(inC_Read_P136_TM *inC, outC_Read_P136_TM *outC)
{
  /* TM::Read_P136::_L5 */ array_int_500 _L5;
  /* TM::Read_P136::_L30 */ MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &inC->Message_IN,
    136032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    &outC->received);
  /* 1 */ C_P136_compr_onboard_TM_conversions(&_L5, &_L30, &outC->P136_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P136_TM.c
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

