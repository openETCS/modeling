/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Read_P015_TM.h"

/* TM::Read_P015 */
void UAB_Read_P015_TM(
  /* TM::Read_P015::Message_IN */UAB_CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P015::received */kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */UAB_P015_OBU_T_TM *P015_OBU_out)
{
  /* TM::Read_P015::_L5 */
  static UAB_array_int_500 _L5;
  /* TM::Read_P015::_L30 */
  static UAB_MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  UAB_RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    15032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ UAB_C_P015_compr_onboard_TM_conversions(&_L5, &_L30, P015_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Read_P015_TM.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

