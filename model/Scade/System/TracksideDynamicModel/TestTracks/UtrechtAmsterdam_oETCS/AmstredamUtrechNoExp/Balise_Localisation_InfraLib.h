/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:50
*************************************************************$ */
#ifndef _Balise_Localisation_InfraLib_H_
#define _Balise_Localisation_InfraLib_H_

#include "kcg_types.h"
#include "Balise_Interdistance_InfraLib.h"
#include "TOOLS_convert_engineering_location_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* InfraLib::Balise_Localisation */
extern void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  /* InfraLib::Balise_Localisation::PIG_0_out */kcg_int *PIG_0_out,
  /* InfraLib::Balise_Localisation::TrainPass */kcg_bool *TrainPass);

#endif /* _Balise_Localisation_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_InfraLib.h
** Generation date: 2015-07-22T11:03:50
*************************************************************$ */

