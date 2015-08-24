/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG_MEN_QNX\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* TM_conversions::INT_Q_RBC_establish */
#define INT_Q_RBC_establish_TM_conversions 1

/* TM_conversions::INT_Q_RBC_terminate */
#define INT_Q_RBC_terminate_TM_conversions 0

/* TM_conversions::ENUM_Q_RBC_terminate */
#define ENUM_Q_RBC_terminate_TM_conversions Q_RBC_Terminate_communication_session

/* TM_conversions::ENUM_Q_RBC_establish */
#define ENUM_Q_RBC_establish_TM_conversions Q_RBC_Establish_communication_session

/* TM_conversions::INT_Q_SLEEPSESSION_execute */
#define INT_Q_SLEEPSESSION_execute_TM_conversions 1

/* TM_conversions::INT_Q_SLEEPSESSION_ignore */
#define INT_Q_SLEEPSESSION_ignore_TM_conversions 0

/* TM_conversions::ENUM_Q_SLEEPSESSION_execute */
#define ENUM_Q_SLEEPSESSION_execute_TM_conversions Q_SLEEPSESSION_Execute_session_establishment_order

/* TM_conversions::ENUM_Q_SLEEPSESSION_ignore */
#define ENUM_Q_SLEEPSESSION_ignore_TM_conversions Q_SLEEPSESSION_Ignore_session_establishment_order

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM_lib_internal::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal;

/* TM_lib_internal::DIM_P041_n_sections */
#define DIM_P041_n_sections_TM_lib_internal 3

/* TM_conversions::INT_M_LEVELTR_Level_0 */
#define INT_M_LEVELTR_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVELTR_Level_1 */
#define INT_M_LEVELTR_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVELTR_Level_2 */
#define INT_M_LEVELTR_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVELTR_Level_3 */
#define INT_M_LEVELTR_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVELTR_Level_NTC */
#define INT_M_LEVELTR_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC */
#define ENUM_M_LEVELTR_Level_NTC_TM_conversions M_LEVELTR_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVELTR_Level_3 */
#define ENUM_M_LEVELTR_Level_3_TM_conversions M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_2 */
#define ENUM_M_LEVELTR_Level_2_TM_conversions M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_1 */
#define ENUM_M_LEVELTR_Level_1_TM_conversions M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_0 */
#define ENUM_M_LEVELTR_Level_0_TM_conversions M_LEVELTR_Level_0

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::INT_Q_SRSTOP_go */
#define INT_Q_SRSTOP_go_TM_conversions 1

/* TM_conversions::INT_Q_SRSTOP_stop */
#define INT_Q_SRSTOP_stop_TM_conversions 0

/* TM_conversions::ENUM_Q_SRSTOP_stop */
#define ENUM_Q_SRSTOP_stop_TM_conversions Q_SRSTOP_Stop_if_in_SR_mode

/* TM_conversions::ENUM_Q_SRSTOP_go */
#define ENUM_Q_SRSTOP_go_TM_conversions Q_SRSTOP_Go_if_in_SR_mode

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* TM_conversions::INT_Q_SCALE_10cm */
#define INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define ENUM_Q_SCALE_10cm_TM_conversions Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes */
#define INT_Q_NVSBTSMPERM_Yes_TM_conversions 1

/* TM_conversions::INT_Q_NVSBTSMPERM_No */
#define INT_Q_NVSBTSMPERM_No_TM_conversions 0

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No */
#define ENUM_Q_NVSBTSMPERM_No_TM_conversions Q_NVSBTSMPERM_No

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conversions Q_NVSBTSMPERM_Yes

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill */
#define INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions 0

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions 1

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill */
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake */
#define INT_M_NVCONTACT_Apply_service_brake_TM_conversions 1

/* TM_conversions::INT_M_NVCONTACT_No_Reaction */
#define INT_M_NVCONTACT_No_Reaction_TM_conversions 2

/* TM_conversions::INT_M_NVCONTACT_Train_trip */
#define INT_M_NVCONTACT_Train_trip_TM_conversions 0

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip */
#define ENUM_M_NVCONTACT_Train_trip_TM_conversions M_NVCONTACT_Train_trip

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake */
#define ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions M_NVCONTACT_Apply_service_brake

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction */
#define ENUM_M_NVCONTACT_No_Reaction_TM_conversions M_NVCONTACT_No_Reaction

/* TM_conversions::INT_M_NVDERUN_no */
#define INT_M_NVDERUN_no_TM_conversions 0

/* TM_conversions::INT_M_NVDERUN_yes */
#define INT_M_NVDERUN_yes_TM_conversions 1

/* TM_conversions::ENUM_M_NVDERUN_yes */
#define ENUM_M_NVDERUN_yes_TM_conversions M_NVDERUN_Yes

/* TM_conversions::ENUM_M_NVDERUN_no */
#define ENUM_M_NVDERUN_no_TM_conversions M_NVDERUN_No

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions 1

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed */
#define INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions 0

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions Q_NVDRIVER_ADHES_Allowed

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */

