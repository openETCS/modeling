/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG_MEN_QNX\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_RBC */
typedef enum {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* Q_NVEMRRLS */
typedef enum {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
/* M_NVCONTACT */
typedef enum {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum { M_NVDERUN_No = 0, M_NVDERUN_Yes = 1 } M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_MN */
typedef kcg_int NID_MN;

/* NID_C */
typedef kcg_int NID_C;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* N_ITER */
typedef kcg_int N_ITER;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* D_NVROLL */
typedef kcg_int D_NVROLL;

/* V_NVALLOWOVTRP */
typedef kcg_int V_NVALLOWOVTRP;

/* V_NVSUPOVTRP */
typedef kcg_int V_NVSUPOVTRP;

/* D_NVOVTRP */
typedef kcg_int D_NVOVTRP;

/* T_NVOVTRP */
typedef kcg_int T_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int D_NVPOTRP;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

typedef struct { kcg_bool valid; NID_C nid_c; } struct__11861;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__11861 P003V1_section_enum_T_TM_baseline2;

typedef P003V1_section_enum_T_TM_baseline2 array__11866[32];

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__11866 P003V1_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_baseline2 SECTIONS;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsopovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
} struct__11869;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__11869 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__11902;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__11902 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef MetadataElement_T_Common_Types_Pkg array__11913[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__11913 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__11916;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__11916 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__11921;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__11921 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__11927;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__11927 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__11937;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__11937 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__11946;

/* TM::P041_section_enum_T */
typedef struct__11946 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__11953[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__11953 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__11956;

/* TM::P041_OBU_T */
typedef struct__11956 P041_OBU_T_TM;

typedef struct {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__11965;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__11965 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__11978;

/* TM::CompressedBaliseMessage */
typedef struct__11978 CompressedBaliseMessage_TM;

#ifndef kcg_copy_struct__11861
#define kcg_copy_struct__11861(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11861)))
#endif /* kcg_copy_struct__11861 */

#ifndef kcg_copy_struct__11869
#define kcg_copy_struct__11869(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11869)))
#endif /* kcg_copy_struct__11869 */

#ifndef kcg_copy_struct__11902
#define kcg_copy_struct__11902(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11902)))
#endif /* kcg_copy_struct__11902 */

#ifndef kcg_copy_struct__11916
#define kcg_copy_struct__11916(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11916)))
#endif /* kcg_copy_struct__11916 */

#ifndef kcg_copy_struct__11921
#define kcg_copy_struct__11921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11921)))
#endif /* kcg_copy_struct__11921 */

#ifndef kcg_copy_struct__11927
#define kcg_copy_struct__11927(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11927)))
#endif /* kcg_copy_struct__11927 */

#ifndef kcg_copy_struct__11937
#define kcg_copy_struct__11937(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11937)))
#endif /* kcg_copy_struct__11937 */

#ifndef kcg_copy_struct__11946
#define kcg_copy_struct__11946(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11946)))
#endif /* kcg_copy_struct__11946 */

#ifndef kcg_copy_struct__11956
#define kcg_copy_struct__11956(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11956)))
#endif /* kcg_copy_struct__11956 */

#ifndef kcg_copy_struct__11965
#define kcg_copy_struct__11965(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11965)))
#endif /* kcg_copy_struct__11965 */

#ifndef kcg_copy_struct__11978
#define kcg_copy_struct__11978(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11978)))
#endif /* kcg_copy_struct__11978 */

#ifndef kcg_copy_array__11866
#define kcg_copy_array__11866(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11866)))
#endif /* kcg_copy_array__11866 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__11913
#define kcg_copy_array__11913(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11913)))
#endif /* kcg_copy_array__11913 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__11953
#define kcg_copy_array__11953(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11953)))
#endif /* kcg_copy_array__11953 */

#ifndef kcg_comp_struct__11861
extern kcg_bool kcg_comp_struct__11861(
  struct__11861 *kcg_c1,
  struct__11861 *kcg_c2);
#endif /* kcg_comp_struct__11861 */

#ifndef kcg_comp_struct__11869
extern kcg_bool kcg_comp_struct__11869(
  struct__11869 *kcg_c1,
  struct__11869 *kcg_c2);
#endif /* kcg_comp_struct__11869 */

#ifndef kcg_comp_struct__11902
extern kcg_bool kcg_comp_struct__11902(
  struct__11902 *kcg_c1,
  struct__11902 *kcg_c2);
#endif /* kcg_comp_struct__11902 */

#ifndef kcg_comp_struct__11916
extern kcg_bool kcg_comp_struct__11916(
  struct__11916 *kcg_c1,
  struct__11916 *kcg_c2);
#endif /* kcg_comp_struct__11916 */

#ifndef kcg_comp_struct__11921
extern kcg_bool kcg_comp_struct__11921(
  struct__11921 *kcg_c1,
  struct__11921 *kcg_c2);
#endif /* kcg_comp_struct__11921 */

#ifndef kcg_comp_struct__11927
extern kcg_bool kcg_comp_struct__11927(
  struct__11927 *kcg_c1,
  struct__11927 *kcg_c2);
#endif /* kcg_comp_struct__11927 */

#ifndef kcg_comp_struct__11937
extern kcg_bool kcg_comp_struct__11937(
  struct__11937 *kcg_c1,
  struct__11937 *kcg_c2);
#endif /* kcg_comp_struct__11937 */

#ifndef kcg_comp_struct__11946
extern kcg_bool kcg_comp_struct__11946(
  struct__11946 *kcg_c1,
  struct__11946 *kcg_c2);
#endif /* kcg_comp_struct__11946 */

#ifndef kcg_comp_struct__11956
extern kcg_bool kcg_comp_struct__11956(
  struct__11956 *kcg_c1,
  struct__11956 *kcg_c2);
#endif /* kcg_comp_struct__11956 */

#ifndef kcg_comp_struct__11965
extern kcg_bool kcg_comp_struct__11965(
  struct__11965 *kcg_c1,
  struct__11965 *kcg_c2);
#endif /* kcg_comp_struct__11965 */

#ifndef kcg_comp_struct__11978
extern kcg_bool kcg_comp_struct__11978(
  struct__11978 *kcg_c1,
  struct__11978 *kcg_c2);
#endif /* kcg_comp_struct__11978 */

#ifndef kcg_comp_array__11866
extern kcg_bool kcg_comp_array__11866(
  array__11866 *kcg_c1,
  array__11866 *kcg_c2);
#endif /* kcg_comp_array__11866 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__11913
extern kcg_bool kcg_comp_array__11913(
  array__11913 *kcg_c1,
  array__11913 *kcg_c2);
#endif /* kcg_comp_array__11913 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__11953
extern kcg_bool kcg_comp_array__11953(
  array__11953 *kcg_c1,
  array__11953 *kcg_c2);
#endif /* kcg_comp_array__11953 */

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__11902

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__11902

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__11913

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__11913

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__11916

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__11916

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__11956

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__11956

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__11953

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__11953

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__11946

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__11946

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__11965

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__11965

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__11978

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__11978

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__11869

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__11869

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__11866

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__11866

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__11861

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__11861

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__11921

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__11921

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__11927

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__11927

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__11937

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__11937

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */

