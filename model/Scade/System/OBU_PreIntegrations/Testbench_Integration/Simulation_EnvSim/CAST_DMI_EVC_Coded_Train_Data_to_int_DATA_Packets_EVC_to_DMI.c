/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int */
void CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_ct */DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_int */DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int)
{
  (*dmi_evc_coded_train_data_int)[1] =
    (*dmi_evc_coded_train_data_ct).system_clock;
  (*dmi_evc_coded_train_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_coded_train_data_ct).valid);
  (*dmi_evc_coded_train_data_int)[2] = /* 1 */
    CAST_DMI_train_id_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).trainID);
  (*dmi_evc_coded_train_data_int)[3] = /* 1 */
    CAST_DMI_train_length_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).trainLength);
  (*dmi_evc_coded_train_data_int)[4] = /* 1 */
    CAST_DMI_brakeModel_id_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).brakeModel);
  (*dmi_evc_coded_train_data_int)[5] = /* 1 */
    CAST_DMI_vMax_id_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).vmax);
  (*dmi_evc_coded_train_data_int)[6] = /* 1 */
    CAST_M_AXLELOADCAT_to_int_TM_conversions(
      (*dmi_evc_coded_train_data_ct).mAxleLoad);
  (*dmi_evc_coded_train_data_int)[7] = /* 1 */
    CAST_DMI_airtightSystem_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).airTightSystem);
  (*dmi_evc_coded_train_data_int)[8] = /* 1 */
    CAST_DMI_loadingGauge_to_int_DATA_Variables(
      &(*dmi_evc_coded_train_data_ct).mLoadingGauge);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

