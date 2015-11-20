/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Balise_Localisation_InfraLib_H_
#define _Balise_Localisation_InfraLib_H_

#include "kcg_types.h"
#include "TOOLS_convert_engineering_location_TM_conversions.h"
#include "Balise_Interdistance_InfraLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InfraLib::Balise_Localisation */
extern void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */ B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */ kcg_int PIG_nom,
  /* InfraLib::Balise_Localisation::PIG_0_out */ kcg_int *PIG_0_out,
  /* InfraLib::Balise_Localisation::TrainPass */ kcg_bool *TrainPass);

#endif /* _Balise_Localisation_InfraLib_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Localisation_InfraLib.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

