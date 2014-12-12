/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__BuildBGheader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildBGheader */
void MLRI__BuildBGheader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildBGheader::telegramHeader */MLRI__TelegramHeader_T_BG_Types_Pkg *telegramHeader,
  /* CheckBGConsistency_Pkg::SubFunction::BuildBGheader::bgHeader */MLRI__BG_Header_T_BG_Types_Pkg *bgHeader)
{
  (*bgHeader).q_updown = (*telegramHeader).q_updown;
  (*bgHeader).m_version = (*telegramHeader).m_version;
  (*bgHeader).q_media = (*telegramHeader).q_media;
  (*bgHeader).n_total = (*telegramHeader).n_total;
  (*bgHeader).m_mcount = (*telegramHeader).m_mcount;
  (*bgHeader).nid_c = (*telegramHeader).nid_c;
  (*bgHeader).nid_bg = (*telegramHeader).nid_bg;
  (*bgHeader).q_link = (*telegramHeader).q_link;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__BuildBGheader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

