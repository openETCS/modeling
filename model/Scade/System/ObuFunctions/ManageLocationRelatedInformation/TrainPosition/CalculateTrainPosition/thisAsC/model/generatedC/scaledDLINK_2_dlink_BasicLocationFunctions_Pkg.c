/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/** "Remark_1" {Description = "Converts the linking distance variables into the uniform distance type - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */ Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */ D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */ Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  kcg_int tmp;
  
  tmp = q_locacc * cQLOCACC_resolution_TrainPosition_Types_Pck;
  (*distance).d_min = - tmp;
  (*distance).d_max = tmp;
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      tmp = d_link * cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      tmp = d_link * cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      tmp = d_link * cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
  (*distance).nominal = tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

