/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P071_TM.h"

void Read_P071_reset_TM(outC_Read_P071_TM *outC)
{
}

/* TM::Read_P071 */
void Read_P071_TM(inC_Read_P071_TM *inC, outC_Read_P071_TM *outC)
{
  /* TM::Read_P071::_L5 */ array_int_500 _L5;
  /* TM::Read_P071::_L30 */ MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &inC->Message_IN,
    71032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    &outC->received);
  /* 1 */ C_P071_compr_onboard_TM_conversions(&_L5, &_L30, &outC->P071_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P071_TM.c
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

