/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__transferPackets_btmSupportPkg.h"

/* btmSupportPkg::transferPackets */
void MLRI__transferPackets_btmSupportPkg(
  /* btmSupportPkg::transferPackets::api_packets */MLRI__API_addInfo_T_API_Msg_Pkg *api_packets,
  /* btmSupportPkg::transferPackets::out_AddInfo */MLRI__AdditionalInformation_T_BG_Types_Pkg *out_AddInfo)
{
  MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &(*out_AddInfo).linkingPackets,
    &(*api_packets).listLinking);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__transferPackets_btmSupportPkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

