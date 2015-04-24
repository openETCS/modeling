
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Story00A_FirstTest_type.h"
#include "Story00A_FirstTest_mapping.h"

extern ScSimulator * pSimulator;

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
int _SCSIM_BoolEntity_is_active(void* pValue) {
	return *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
}

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
TypeUtils _SCSIM_kcg_real_Utils = {kcg_real_to_string,
	check_kcg_real_string,
	string_to_kcg_real,
	is_kcg_real_allow_double_convertion,
	kcg_real_to_double,
	compare_kcg_real_type,
	get_kcg_real_signature,
	get_kcg_real_filter_utils,
	kcg_real_filter_size,
	kcg_real_filter_values};
TypeUtils _SCSIM_kcg_bool_Utils = {kcg_bool_to_string,
	check_kcg_bool_string,
	string_to_kcg_bool,
	is_kcg_bool_allow_double_convertion,
	kcg_bool_to_double,
	compare_kcg_bool_type,
	get_kcg_bool_signature,
	get_kcg_bool_filter_utils,
	kcg_bool_filter_size,
	kcg_bool_filter_values};
TypeUtils _SCSIM_kcg_char_Utils = {kcg_char_to_string,
	check_kcg_char_string,
	string_to_kcg_char,
	is_kcg_char_allow_double_convertion,
	kcg_char_to_double,
	compare_kcg_char_type,
	get_kcg_char_signature,
	get_kcg_char_filter_utils,
	kcg_char_filter_size,
	kcg_char_filter_values};
TypeUtils _SCSIM_kcg_int_Utils = {kcg_int_to_string,
	check_kcg_int_string,
	string_to_kcg_int,
	is_kcg_int_allow_double_convertion,
	kcg_int_to_double,
	compare_kcg_int_type,
	get_kcg_int_signature,
	get_kcg_int_filter_utils,
	kcg_int_filter_size,
	kcg_int_filter_values};
TypeUtils _SCSIM_struct__3653_Utils = {struct__3653_to_string,
	check_struct__3653_string,
	string_to_struct__3653,
	is_struct__3653_allow_double_convertion,
	0,
	compare_struct__3653_type,
	get_struct__3653_signature,
	get_struct__3653_filter_utils,
	struct__3653_filter_size,
	struct__3653_filter_values};
TypeUtils _SCSIM_array_int_500_Utils = {array_int_500_to_string,
	check_array_int_500_string,
	string_to_array_int_500,
	is_array_int_500_allow_double_convertion,
	0,
	compare_array_int_500_type,
	get_array_int_500_signature,
	get_array_int_500_filter_utils,
	array_int_500_filter_size,
	array_int_500_filter_values};
TypeUtils _SCSIM_struct__3669_Utils = {struct__3669_to_string,
	check_struct__3669_string,
	string_to_struct__3669,
	is_struct__3669_allow_double_convertion,
	0,
	compare_struct__3669_type,
	get_struct__3669_signature,
	get_struct__3669_filter_utils,
	struct__3669_filter_size,
	struct__3669_filter_values};
TypeUtils _SCSIM_array__3677_Utils = {array__3677_to_string,
	check_array__3677_string,
	string_to_array__3677,
	is_array__3677_allow_double_convertion,
	0,
	compare_array__3677_type,
	get_array__3677_signature,
	get_array__3677_filter_utils,
	array__3677_filter_size,
	array__3677_filter_values};
TypeUtils _SCSIM_struct__3680_Utils = {struct__3680_to_string,
	check_struct__3680_string,
	string_to_struct__3680,
	is_struct__3680_allow_double_convertion,
	0,
	compare_struct__3680_type,
	get_struct__3680_signature,
	get_struct__3680_filter_utils,
	struct__3680_filter_size,
	struct__3680_filter_values};
TypeUtils _SCSIM_struct__3685_Utils = {struct__3685_to_string,
	check_struct__3685_string,
	string_to_struct__3685,
	is_struct__3685_allow_double_convertion,
	0,
	compare_struct__3685_type,
	get_struct__3685_signature,
	get_struct__3685_filter_utils,
	struct__3685_filter_size,
	struct__3685_filter_values};
TypeUtils _SCSIM_struct__3693_Utils = {struct__3693_to_string,
	check_struct__3693_string,
	string_to_struct__3693,
	is_struct__3693_allow_double_convertion,
	0,
	compare_struct__3693_type,
	get_struct__3693_signature,
	get_struct__3693_filter_utils,
	struct__3693_filter_size,
	struct__3693_filter_values};
TypeUtils _SCSIM_struct__3706_Utils = {struct__3706_to_string,
	check_struct__3706_string,
	string_to_struct__3706,
	is_struct__3706_allow_double_convertion,
	0,
	compare_struct__3706_type,
	get_struct__3706_signature,
	get_struct__3706_filter_utils,
	struct__3706_filter_size,
	struct__3706_filter_values};
TypeUtils _SCSIM_struct__3715_Utils = {struct__3715_to_string,
	check_struct__3715_string,
	string_to_struct__3715,
	is_struct__3715_allow_double_convertion,
	0,
	compare_struct__3715_type,
	get_struct__3715_signature,
	get_struct__3715_filter_utils,
	struct__3715_filter_size,
	struct__3715_filter_values};
TypeUtils _SCSIM_struct__3720_Utils = {struct__3720_to_string,
	check_struct__3720_string,
	string_to_struct__3720,
	is_struct__3720_allow_double_convertion,
	0,
	compare_struct__3720_type,
	get_struct__3720_signature,
	get_struct__3720_filter_utils,
	struct__3720_filter_size,
	struct__3720_filter_values};
TypeUtils _SCSIM_array__3731_Utils = {array__3731_to_string,
	check_array__3731_string,
	string_to_array__3731,
	is_array__3731_allow_double_convertion,
	0,
	compare_array__3731_type,
	get_array__3731_signature,
	get_array__3731_filter_utils,
	array__3731_filter_size,
	array__3731_filter_values};
TypeUtils _SCSIM_struct__3734_Utils = {struct__3734_to_string,
	check_struct__3734_string,
	string_to_struct__3734,
	is_struct__3734_allow_double_convertion,
	0,
	compare_struct__3734_type,
	get_struct__3734_signature,
	get_struct__3734_filter_utils,
	struct__3734_filter_size,
	struct__3734_filter_values};
TypeUtils _SCSIM_array_int_7_Utils = {array_int_7_to_string,
	check_array_int_7_string,
	string_to_array_int_7,
	is_array_int_7_allow_double_convertion,
	0,
	compare_array_int_7_type,
	get_array_int_7_signature,
	get_array_int_7_filter_utils,
	array_int_7_filter_size,
	array_int_7_filter_values};
TypeUtils _SCSIM_array_int_461_Utils = {array_int_461_to_string,
	check_array_int_461_string,
	string_to_array_int_461,
	is_array_int_461_allow_double_convertion,
	0,
	compare_array_int_461_type,
	get_array_int_461_signature,
	get_array_int_461_filter_utils,
	array_int_461_filter_size,
	array_int_461_filter_values};
TypeUtils _SCSIM_array_int_11_Utils = {array_int_11_to_string,
	check_array_int_11_string,
	string_to_array_int_11,
	is_array_int_11_allow_double_convertion,
	0,
	compare_array_int_11_type,
	get_array_int_11_signature,
	get_array_int_11_filter_utils,
	array_int_11_filter_size,
	array_int_11_filter_values};
TypeUtils _SCSIM_array_int_18_Utils = {array_int_18_to_string,
	check_array_int_18_string,
	string_to_array_int_18,
	is_array_int_18_allow_double_convertion,
	0,
	compare_array_int_18_type,
	get_array_int_18_signature,
	get_array_int_18_filter_utils,
	array_int_18_filter_size,
	array_int_18_filter_values};
TypeUtils _SCSIM_array_int_25_Utils = {array_int_25_to_string,
	check_array_int_25_string,
	string_to_array_int_25,
	is_array_int_25_allow_double_convertion,
	0,
	compare_array_int_25_type,
	get_array_int_25_signature,
	get_array_int_25_filter_utils,
	array_int_25_filter_size,
	array_int_25_filter_values};
TypeUtils _SCSIM_array_int_32_Utils = {array_int_32_to_string,
	check_array_int_32_string,
	string_to_array_int_32,
	is_array_int_32_allow_double_convertion,
	0,
	compare_array_int_32_type,
	get_array_int_32_signature,
	get_array_int_32_filter_utils,
	array_int_32_filter_size,
	array_int_32_filter_values};
TypeUtils _SCSIM_array_int_39_Utils = {array_int_39_to_string,
	check_array_int_39_string,
	string_to_array_int_39,
	is_array_int_39_allow_double_convertion,
	0,
	compare_array_int_39_type,
	get_array_int_39_signature,
	get_array_int_39_filter_utils,
	array_int_39_filter_size,
	array_int_39_filter_values};
TypeUtils _SCSIM_array_int_4_Utils = {array_int_4_to_string,
	check_array_int_4_string,
	string_to_array_int_4,
	is_array_int_4_allow_double_convertion,
	0,
	compare_array_int_4_type,
	get_array_int_4_signature,
	get_array_int_4_filter_utils,
	array_int_4_filter_size,
	array_int_4_filter_values};
TypeUtils _SCSIM_array_int_500_500_Utils = {array_int_500_500_to_string,
	check_array_int_500_500_string,
	string_to_array_int_500_500,
	is_array_int_500_500_allow_double_convertion,
	0,
	compare_array_int_500_500_type,
	get_array_int_500_500_signature,
	get_array_int_500_500_filter_utils,
	array_int_500_500_filter_size,
	array_int_500_500_filter_values};
TypeUtils _SCSIM_TM_CompressedBaliseMessage_Utils = {TM_CompressedBaliseMessage_to_string,
	check_TM_CompressedBaliseMessage_string,
	string_to_TM_CompressedBaliseMessage,
	is_TM_CompressedBaliseMessage_allow_double_convertion,
	TM_CompressedBaliseMessage_to_double,
	compare_TM_CompressedBaliseMessage_type,
	get_TM_CompressedBaliseMessage_signature,
	get_TM_CompressedBaliseMessage_filter_utils,
	TM_CompressedBaliseMessage_filter_size,
	TM_CompressedBaliseMessage_filter_values};
TypeUtils _SCSIM_TM_BaliseTelegramHeader_int_T_Utils = {TM_BaliseTelegramHeader_int_T_to_string,
	check_TM_BaliseTelegramHeader_int_T_string,
	string_to_TM_BaliseTelegramHeader_int_T,
	is_TM_BaliseTelegramHeader_int_T_allow_double_convertion,
	TM_BaliseTelegramHeader_int_T_to_double,
	compare_TM_BaliseTelegramHeader_int_T_type,
	get_TM_BaliseTelegramHeader_int_T_signature,
	get_TM_BaliseTelegramHeader_int_T_filter_utils,
	TM_BaliseTelegramHeader_int_T_filter_size,
	TM_BaliseTelegramHeader_int_T_filter_values};
TypeUtils _SCSIM_NID_PACKET_Utils = {NID_PACKET_to_string,
	check_NID_PACKET_string,
	string_to_NID_PACKET,
	is_NID_PACKET_allow_double_convertion,
	NID_PACKET_to_double,
	compare_NID_PACKET_type,
	get_NID_PACKET_signature,
	get_NID_PACKET_filter_utils,
	NID_PACKET_filter_size,
	NID_PACKET_filter_values};
TypeUtils _SCSIM_Q_DIR_Utils = {Q_DIR_to_string,
	check_Q_DIR_string,
	string_to_Q_DIR,
	is_Q_DIR_allow_double_convertion,
	Q_DIR_to_double,
	compare_Q_DIR_type,
	get_Q_DIR_signature,
	get_Q_DIR_filter_utils,
	Q_DIR_filter_size,
	Q_DIR_filter_values};
TypeUtils _SCSIM_TM_OrBG_Utils = {TM_OrBG_to_string,
	check_TM_OrBG_string,
	string_to_TM_OrBG,
	is_TM_OrBG_allow_double_convertion,
	TM_OrBG_to_double,
	compare_TM_OrBG_type,
	get_TM_OrBG_signature,
	get_TM_OrBG_filter_utils,
	TM_OrBG_filter_size,
	TM_OrBG_filter_values};
TypeUtils _SCSIM_TM_OrLine_Utils = {TM_OrLine_to_string,
	check_TM_OrLine_string,
	string_to_TM_OrLine,
	is_TM_OrLine_allow_double_convertion,
	TM_OrLine_to_double,
	compare_TM_OrLine_type,
	get_TM_OrLine_signature,
	get_TM_OrLine_filter_utils,
	TM_OrLine_filter_size,
	TM_OrLine_filter_values};
TypeUtils _SCSIM_TM_P005_Utils = {TM_P005_to_string,
	check_TM_P005_string,
	string_to_TM_P005,
	is_TM_P005_allow_double_convertion,
	TM_P005_to_double,
	compare_TM_P005_type,
	get_TM_P005_signature,
	get_TM_P005_filter_utils,
	TM_P005_filter_size,
	TM_P005_filter_values};
TypeUtils _SCSIM_TM_P05Es_T_Utils = {TM_P05Es_T_to_string,
	check_TM_P05Es_T_string,
	string_to_TM_P05Es_T,
	is_TM_P05Es_T_allow_double_convertion,
	TM_P05Es_T_to_double,
	compare_TM_P05Es_T_type,
	get_TM_P05Es_T_signature,
	get_TM_P05Es_T_filter_utils,
	TM_P05Es_T_filter_size,
	TM_P05Es_T_filter_values};
TypeUtils _SCSIM_TM_P005E_T_Utils = {TM_P005E_T_to_string,
	check_TM_P005E_T_string,
	string_to_TM_P005E_T,
	is_TM_P005E_T_allow_double_convertion,
	TM_P005E_T_to_double,
	compare_TM_P005E_T_type,
	get_TM_P005E_T_signature,
	get_TM_P005E_T_filter_utils,
	TM_P005E_T_filter_size,
	TM_P005E_T_filter_values};
TypeUtils _SCSIM_TM_P005E_array_T_Utils = {TM_P005E_array_T_to_string,
	check_TM_P005E_array_T_string,
	string_to_TM_P005E_array_T,
	is_TM_P005E_array_T_allow_double_convertion,
	TM_P005E_array_T_to_double,
	compare_TM_P005E_array_T_type,
	get_TM_P005E_array_T_signature,
	get_TM_P005E_array_T_filter_utils,
	TM_P005E_array_T_filter_size,
	TM_P005E_array_T_filter_values};
TypeUtils _SCSIM_TM_BaliseGroupData_Utils = {TM_BaliseGroupData_to_string,
	check_TM_BaliseGroupData_string,
	string_to_TM_BaliseGroupData,
	is_TM_BaliseGroupData_allow_double_convertion,
	TM_BaliseGroupData_to_double,
	compare_TM_BaliseGroupData_type,
	get_TM_BaliseGroupData_signature,
	get_TM_BaliseGroupData_filter_utils,
	TM_BaliseGroupData_filter_size,
	TM_BaliseGroupData_filter_values};
TypeUtils _SCSIM_Q_UPDOWN_Utils = {Q_UPDOWN_to_string,
	check_Q_UPDOWN_string,
	string_to_Q_UPDOWN,
	is_Q_UPDOWN_allow_double_convertion,
	Q_UPDOWN_to_double,
	compare_Q_UPDOWN_type,
	get_Q_UPDOWN_signature,
	get_Q_UPDOWN_filter_utils,
	Q_UPDOWN_filter_size,
	Q_UPDOWN_filter_values};
TypeUtils _SCSIM_M_VERSION_Utils = {M_VERSION_to_string,
	check_M_VERSION_string,
	string_to_M_VERSION,
	is_M_VERSION_allow_double_convertion,
	M_VERSION_to_double,
	compare_M_VERSION_type,
	get_M_VERSION_signature,
	get_M_VERSION_filter_utils,
	M_VERSION_filter_size,
	M_VERSION_filter_values};
TypeUtils _SCSIM_Q_MEDIA_Utils = {Q_MEDIA_to_string,
	check_Q_MEDIA_string,
	string_to_Q_MEDIA,
	is_Q_MEDIA_allow_double_convertion,
	Q_MEDIA_to_double,
	compare_Q_MEDIA_type,
	get_Q_MEDIA_signature,
	get_Q_MEDIA_filter_utils,
	Q_MEDIA_filter_size,
	Q_MEDIA_filter_values};
TypeUtils _SCSIM_N_PIG_Utils = {N_PIG_to_string,
	check_N_PIG_string,
	string_to_N_PIG,
	is_N_PIG_allow_double_convertion,
	N_PIG_to_double,
	compare_N_PIG_type,
	get_N_PIG_signature,
	get_N_PIG_filter_utils,
	N_PIG_filter_size,
	N_PIG_filter_values};
TypeUtils _SCSIM_N_TOTAL_Utils = {N_TOTAL_to_string,
	check_N_TOTAL_string,
	string_to_N_TOTAL,
	is_N_TOTAL_allow_double_convertion,
	N_TOTAL_to_double,
	compare_N_TOTAL_type,
	get_N_TOTAL_signature,
	get_N_TOTAL_filter_utils,
	N_TOTAL_filter_size,
	N_TOTAL_filter_values};
TypeUtils _SCSIM_M_DUP_Utils = {M_DUP_to_string,
	check_M_DUP_string,
	string_to_M_DUP,
	is_M_DUP_allow_double_convertion,
	M_DUP_to_double,
	compare_M_DUP_type,
	get_M_DUP_signature,
	get_M_DUP_filter_utils,
	M_DUP_filter_size,
	M_DUP_filter_values};
TypeUtils _SCSIM_M_MCOUNT_Utils = {M_MCOUNT_to_string,
	check_M_MCOUNT_string,
	string_to_M_MCOUNT,
	is_M_MCOUNT_allow_double_convertion,
	M_MCOUNT_to_double,
	compare_M_MCOUNT_type,
	get_M_MCOUNT_signature,
	get_M_MCOUNT_filter_utils,
	M_MCOUNT_filter_size,
	M_MCOUNT_filter_values};
TypeUtils _SCSIM_NID_C_Utils = {NID_C_to_string,
	check_NID_C_string,
	string_to_NID_C,
	is_NID_C_allow_double_convertion,
	NID_C_to_double,
	compare_NID_C_type,
	get_NID_C_signature,
	get_NID_C_filter_utils,
	NID_C_filter_size,
	NID_C_filter_values};
TypeUtils _SCSIM_NID_BG_Utils = {NID_BG_to_string,
	check_NID_BG_string,
	string_to_NID_BG,
	is_NID_BG_allow_double_convertion,
	NID_BG_to_double,
	compare_NID_BG_type,
	get_NID_BG_signature,
	get_NID_BG_filter_utils,
	NID_BG_filter_size,
	NID_BG_filter_values};
TypeUtils _SCSIM_Q_LINK_Utils = {Q_LINK_to_string,
	check_Q_LINK_string,
	string_to_Q_LINK,
	is_Q_LINK_allow_double_convertion,
	Q_LINK_to_double,
	compare_Q_LINK_type,
	get_Q_LINK_signature,
	get_Q_LINK_filter_utils,
	Q_LINK_filter_size,
	Q_LINK_filter_values};
TypeUtils _SCSIM_B_data_internal_FirstTest_InfraLib_Utils = {B_data_internal_FirstTest_InfraLib_to_string,
	check_B_data_internal_FirstTest_InfraLib_string,
	string_to_B_data_internal_FirstTest_InfraLib,
	is_B_data_internal_FirstTest_InfraLib_allow_double_convertion,
	B_data_internal_FirstTest_InfraLib_to_double,
	compare_B_data_internal_FirstTest_InfraLib_type,
	get_B_data_internal_FirstTest_InfraLib_signature,
	get_B_data_internal_FirstTest_InfraLib_filter_utils,
	B_data_internal_FirstTest_InfraLib_filter_size,
	B_data_internal_FirstTest_InfraLib_filter_values};
TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils = {CompressedPackets_T_Common_Types_Pkg_to_string,
	check_CompressedPackets_T_Common_Types_Pkg_string,
	string_to_CompressedPackets_T_Common_Types_Pkg,
	is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPackets_T_Common_Types_Pkg_to_double,
	compare_CompressedPackets_T_Common_Types_Pkg_type,
	get_CompressedPackets_T_Common_Types_Pkg_signature,
	get_CompressedPackets_T_Common_Types_Pkg_filter_utils,
	CompressedPackets_T_Common_Types_Pkg_filter_size,
	CompressedPackets_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils = {Metadata_T_Common_Types_Pkg_to_string,
	check_Metadata_T_Common_Types_Pkg_string,
	string_to_Metadata_T_Common_Types_Pkg,
	is_Metadata_T_Common_Types_Pkg_allow_double_convertion,
	Metadata_T_Common_Types_Pkg_to_double,
	compare_Metadata_T_Common_Types_Pkg_type,
	get_Metadata_T_Common_Types_Pkg_signature,
	get_Metadata_T_Common_Types_Pkg_filter_utils,
	Metadata_T_Common_Types_Pkg_filter_size,
	Metadata_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils = {MetadataElement_T_Common_Types_Pkg_to_string,
	check_MetadataElement_T_Common_Types_Pkg_string,
	string_to_MetadataElement_T_Common_Types_Pkg,
	is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion,
	MetadataElement_T_Common_Types_Pkg_to_double,
	compare_MetadataElement_T_Common_Types_Pkg_type,
	get_MetadataElement_T_Common_Types_Pkg_signature,
	get_MetadataElement_T_Common_Types_Pkg_filter_utils,
	MetadataElement_T_Common_Types_Pkg_filter_size,
	MetadataElement_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils = {CompressedPacketData_T_Common_Types_Pkg_to_string,
	check_CompressedPacketData_T_Common_Types_Pkg_string,
	string_to_CompressedPacketData_T_Common_Types_Pkg,
	is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPacketData_T_Common_Types_Pkg_to_double,
	compare_CompressedPacketData_T_Common_Types_Pkg_type,
	get_CompressedPacketData_T_Common_Types_Pkg_signature,
	get_CompressedPacketData_T_Common_Types_Pkg_filter_utils,
	CompressedPacketData_T_Common_Types_Pkg_filter_size,
	CompressedPacketData_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_BaliseGroupData_Basics_Utils = {BaliseGroupData_Basics_to_string,
	check_BaliseGroupData_Basics_string,
	string_to_BaliseGroupData_Basics,
	is_BaliseGroupData_Basics_allow_double_convertion,
	BaliseGroupData_Basics_to_double,
	compare_BaliseGroupData_Basics_type,
	get_BaliseGroupData_Basics_signature,
	get_BaliseGroupData_Basics_filter_utils,
	BaliseGroupData_Basics_filter_size,
	BaliseGroupData_Basics_filter_values};
TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils = {TelegramHeader_T_BG_Types_Pkg_to_string,
	check_TelegramHeader_T_BG_Types_Pkg_string,
	string_to_TelegramHeader_T_BG_Types_Pkg,
	is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion,
	TelegramHeader_T_BG_Types_Pkg_to_double,
	compare_TelegramHeader_T_BG_Types_Pkg_type,
	get_TelegramHeader_T_BG_Types_Pkg_signature,
	get_TelegramHeader_T_BG_Types_Pkg_filter_utils,
	TelegramHeader_T_BG_Types_Pkg_filter_size,
	TelegramHeader_T_BG_Types_Pkg_filter_values};

/****************************************************************
 ** kcg_real
 ****************************************************************/
struct SimTypeVTable* pSimDoubleVTable;
const char * kcg_real_to_string(const void* pValue) {
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		double value = (double)(*(const kcg_real*)pValue);
		return *(char**)pSimDoubleVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnRealToString((double)(*(const kcg_real*)pValue));
}

int string_to_kcg_real(const char* strValue, void* pValue) {
	double nTemp = 0;
	static double rTemp;
	int nResult;
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimDoubleVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_real*)pValue = (kcg_real)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToReal(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_real*)pValue = (kcg_real)nTemp;
	return nResult;
}

int compare_kcg_real_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_real rTemp;
	const kcg_real* pCurrent = (const kcg_real*)pValue;
	if (string_to_kcg_real(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_real_allow_double_convertion() {
	if (pSimDoubleVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_real_to_double(double * nValue, const void* pValue) {
	if (pSimDoubleVTable != 0) {
		double value = (double)(*(const kcg_real*)pValue);
		if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimDoubleVTable->m_pfnToType(SptDouble, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimDoubleVTable->m_pfnToType(SptFloat, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimDoubleVTable->m_pfnToType(SptLong, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimDoubleVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_real*)pValue);
	return 1;
}

const char * get_kcg_real_signature() {
	return "R";
}

int check_kcg_real_string(const char* strValue) {
	static kcg_real rTemp;
	return string_to_kcg_real(strValue, &rTemp);
}


/****************************************************************
 ** kcg_bool
 ****************************************************************/
struct SimTypeVTable* pSimBoolVTable;
const char * kcg_bool_to_string(const void* pValue) {
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
		return *(char**)pSimBoolVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnBoolToString((*(const kcg_bool*)pValue) == kcg_true ? 1 : 0);
}

int string_to_kcg_bool(const char* strValue, void* pValue) {
	int nTemp = 0;
	static SimBool rTemp;
	int nResult;
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimBoolVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((kcg_bool*)pValue) = (rTemp == SbTrue)? kcg_true : kcg_false;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToBool(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_bool*)pValue = nTemp == 1 ? kcg_true : kcg_false;
	return nResult;
}

int compare_kcg_bool_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_bool rTemp;
	const kcg_bool* pCurrent = (const kcg_bool*)pValue;
	if (string_to_kcg_bool(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_bool_allow_double_convertion() {
	if (pSimBoolVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_bool_to_double(double * nValue, const void* pValue) {
	if (pSimBoolVTable != 0) {
		SimBool value = (*(const kcg_bool*)pValue == kcg_true)? SbTrue : SbFalse;
		if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBoolVTable->m_pfnToType(SptDouble, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBoolVTable->m_pfnToType(SptFloat, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBoolVTable->m_pfnToType(SptLong, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBoolVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = *((const kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
	return 1;
}

const char * get_kcg_bool_signature() {
	return "B";
}

int check_kcg_bool_string(const char* strValue) {
	static kcg_bool rTemp;
	return string_to_kcg_bool(strValue, &rTemp);
}


/****************************************************************
 ** kcg_char
 ****************************************************************/
struct SimTypeVTable* pSimCharVTable;
const char * kcg_char_to_string(const void* pValue) {
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		char value = (char)(*(const kcg_char*)pValue);
		return *(char**)pSimCharVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnCharToString((char)(*(const kcg_char*)pValue));
}

int string_to_kcg_char(const char* strValue, void* pValue) {
	char nTemp = 0;
	static char rTemp;
	int nResult;
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimCharVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_char*)pValue = (kcg_char)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToChar(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_char*)pValue = (kcg_char)nTemp;
	return nResult;
}

int compare_kcg_char_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_char rTemp;
	const kcg_char* pCurrent = (const kcg_char*)pValue;
	if (string_to_kcg_char(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_char_allow_double_convertion() {
	if (pSimCharVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_char_to_double(double * nValue, const void* pValue) {
	if (pSimCharVTable != 0) {
		char value = (char)(*(const kcg_char*)pValue);
		if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCharVTable->m_pfnToType(SptDouble, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCharVTable->m_pfnToType(SptFloat, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCharVTable->m_pfnToType(SptLong, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCharVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_char*)pValue);
	return 1;
}

const char * get_kcg_char_signature() {
	return "C";
}

int check_kcg_char_string(const char* strValue) {
	static kcg_char rTemp;
	return string_to_kcg_char(strValue, &rTemp);
}


/****************************************************************
 ** kcg_int
 ****************************************************************/
struct SimTypeVTable* pSimLongVTable;
const char * kcg_int_to_string(const void* pValue) {
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		long value = (long)(*(const kcg_int*)pValue);
		return *(char**)pSimLongVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnIntToString(*(const int*)pValue);
}

int string_to_kcg_int(const char* strValue, void* pValue) {
	int nTemp = 0;
	static long rTemp;
	int nResult;
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimLongVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_int*)pValue = (kcg_int)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToInt(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_int*)pValue = (kcg_int)nTemp;
	return nResult;
}

int compare_kcg_int_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_int rTemp;
	const kcg_int* pCurrent = (const kcg_int*)pValue;
	if (string_to_kcg_int(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_int_allow_double_convertion() {
	if (pSimLongVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_int_to_double(double * nValue, const void* pValue) {
	if (pSimLongVTable != 0) {
		long value = (long)(*(const kcg_int*)pValue);
		if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLongVTable->m_pfnToType(SptDouble, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLongVTable->m_pfnToType(SptFloat, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLongVTable->m_pfnToType(SptLong, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLongVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_int*)pValue);
	return 1;
}

const char * get_kcg_int_signature() {
	return "I";
}

int check_kcg_int_string(const char* strValue) {
	static kcg_int rTemp;
	return string_to_kcg_int(strValue, &rTemp);
}


/****************************************************************
 ** struct__3653
 ****************************************************************/
static void Fill_struct__3653_StructSimValue(struct__3653 * pStruct, StructSimValue * pValues) {
	/*q_updown label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_Q_UPDOWN_Utils;
	pValues[0].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_M_VERSION_Utils;
	pValues[1].m_pszName = "m_version";
	/*q_media label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_MEDIA_Utils;
	pValues[2].m_pszName = "q_media";
	/*n_pig label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_N_PIG_Utils;
	pValues[3].m_pszName = "n_pig";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_N_TOTAL_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_dup label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_M_DUP_Utils;
	pValues[5].m_pszName = "m_dup";
	/*m_mcount label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_Q_LINK_Utils;
	pValues[9].m_pszName = "q_link";
}

const char * struct__3653_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3653_StructSimValue(((struct__3653*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__3653(const char* strValue, void* pValue) {
	static struct__3653 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__3653(&(rTemp), &(*((struct__3653*)pValue)));
	Fill_struct__3653_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__3653(&(*((struct__3653*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3653_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3653_StructSimValue((struct__3653*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__3653_allow_double_convertion() {
	return 0;
}


const char * get_struct__3653_signature() {
	static StructSimValue values[10];
	Fill_struct__3653_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__3653_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3653_StructSimValue((struct__3653*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__3653_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__3653_string(const char* strValue) {
	static struct__3653 rTemp;
	return string_to_struct__3653(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500
 ****************************************************************/
void* array_int_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500*)pValues)[nIndex]);
}

const char * array_int_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 500, array_int_500_projection);
}

int compare_array_int_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 500, array_int_500_projection);
}

int is_array_int_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500(const char* strValue, void* pValue) {
	static array_int_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 500, array_int_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500(&(*((array_int_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 500);
}

FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 500, array_int_500_projection);
}

int check_array_int_500_string(const char* strValue) {
	static array_int_500 rTemp;
	return string_to_array_int_500(strValue, &rTemp);
}


/****************************************************************
 ** struct__3669
 ****************************************************************/
static void Fill_struct__3669_StructSimValue(struct__3669 * pStruct, StructSimValue * pValues) {
	/*nid_packet label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->nid_packet) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "nid_packet";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*valid label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "valid";
	/*startAddress label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->startAddress) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "startAddress";
	/*endAddress label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->endAddress) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "endAddress";
}

const char * struct__3669_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3669_StructSimValue(((struct__3669*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__3669(const char* strValue, void* pValue) {
	static struct__3669 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__3669(&(rTemp), &(*((struct__3669*)pValue)));
	Fill_struct__3669_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__3669(&(*((struct__3669*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3669_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3669_StructSimValue((struct__3669*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__3669_allow_double_convertion() {
	return 0;
}


const char * get_struct__3669_signature() {
	static StructSimValue values[5];
	Fill_struct__3669_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__3669_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3669_StructSimValue((struct__3669*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__3669_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__3669_string(const char* strValue) {
	static struct__3669 rTemp;
	return string_to_struct__3669(strValue, &rTemp);
}


/****************************************************************
 ** array__3677
 ****************************************************************/
void* array__3677_projection(void** pValues, int nIndex) {
	return &((*(array__3677*)pValues)[nIndex]);
}

const char * array__3677_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__3669_to_string, 30, array__3677_projection);
}

int compare_array__3677_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__3669_type , 30, array__3677_projection);
}

int is_array__3677_allow_double_convertion() {
	return 0;
}

int string_to_array__3677(const char* strValue, void* pValue) {
	static array__3677 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__3669, 30, array__3677_projection);
	if (nResult == 1)
		kcg_copy_array__3677(&(*((array__3677*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__3677_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__3669_signature, 30);
}

FilterUtils get_array__3677_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__3669_Utils, strFilter, (void**)pValue, 30, array__3677_projection);
}

int check_array__3677_string(const char* strValue) {
	static array__3677 rTemp;
	return string_to_array__3677(strValue, &rTemp);
}


/****************************************************************
 ** struct__3680
 ****************************************************************/
static void Fill_struct__3680_StructSimValue(struct__3680 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__3677_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__3680_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3680_StructSimValue(((struct__3680*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__3680(const char* strValue, void* pValue) {
	static struct__3680 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__3680(&(rTemp), &(*((struct__3680*)pValue)));
	Fill_struct__3680_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__3680(&(*((struct__3680*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3680_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3680_StructSimValue((struct__3680*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__3680_allow_double_convertion() {
	return 0;
}


const char * get_struct__3680_signature() {
	static StructSimValue values[2];
	Fill_struct__3680_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__3680_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3680_StructSimValue((struct__3680*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__3680_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__3680_string(const char* strValue) {
	static struct__3680 rTemp;
	return string_to_struct__3680(strValue, &rTemp);
}


/****************************************************************
 ** struct__3685
 ****************************************************************/
static void Fill_struct__3685_StructSimValue(struct__3685 * pStruct, StructSimValue * pValues) {
	/*NID_C label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "NID_BG";
	/*Pos label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Pos) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Pos";
	/*Or_BG label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Or_BG) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_TM_OrBG_Utils;
	pValues[3].m_pszName = "Or_BG";
	/*Or_Line label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Or_Line) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_TM_OrLine_Utils;
	pValues[4].m_pszName = "Or_Line";
}

const char * struct__3685_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3685_StructSimValue(((struct__3685*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__3685(const char* strValue, void* pValue) {
	static struct__3685 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__3685(&(rTemp), &(*((struct__3685*)pValue)));
	Fill_struct__3685_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__3685(&(*((struct__3685*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3685_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3685_StructSimValue((struct__3685*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__3685_allow_double_convertion() {
	return 0;
}


const char * get_struct__3685_signature() {
	static StructSimValue values[5];
	Fill_struct__3685_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__3685_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__3685_StructSimValue((struct__3685*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__3685_filter_values[5] = {"NID_C", "NID_BG", "Pos", "Or_BG", "Or_Line"};
int check_struct__3685_string(const char* strValue) {
	static struct__3685 rTemp;
	return string_to_struct__3685(strValue, &rTemp);
}


/****************************************************************
 ** struct__3693
 ****************************************************************/
static void Fill_struct__3693_StructSimValue(struct__3693 * pStruct, StructSimValue * pValues) {
	/*q_updown label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "m_version";
	/*q_media label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "q_media";
	/*n_pig label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "n_pig";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_dup label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "m_dup";
	/*m_mcount label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "q_link";
}

const char * struct__3693_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3693_StructSimValue(((struct__3693*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__3693(const char* strValue, void* pValue) {
	static struct__3693 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__3693(&(rTemp), &(*((struct__3693*)pValue)));
	Fill_struct__3693_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__3693(&(*((struct__3693*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3693_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3693_StructSimValue((struct__3693*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__3693_allow_double_convertion() {
	return 0;
}


const char * get_struct__3693_signature() {
	static StructSimValue values[10];
	Fill_struct__3693_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__3693_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__3693_StructSimValue((struct__3693*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__3693_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__3693_string(const char* strValue) {
	static struct__3693 rTemp;
	return string_to_struct__3693(strValue, &rTemp);
}


/****************************************************************
 ** struct__3706
 ****************************************************************/
static void Fill_struct__3706_StructSimValue(struct__3706 * pStruct, StructSimValue * pValues) {
	/*header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__3693_Utils;
	pValues[0].m_pszName = "header";
	/*packets label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__3680_Utils;
	pValues[1].m_pszName = "packets";
	/*engineering_BG_location label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->engineering_BG_location) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "engineering_BG_location";
	/*TrainPos label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->TrainPos) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[3].m_pszName = "TrainPos";
	/*pig_nom_0 label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->pig_nom_0) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "pig_nom_0";
	/*balise_passed label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->balise_passed) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[5].m_pszName = "balise_passed";
}

const char * struct__3706_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3706_StructSimValue(((struct__3706*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__3706(const char* strValue, void* pValue) {
	static struct__3706 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__3706(&(rTemp), &(*((struct__3706*)pValue)));
	Fill_struct__3706_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__3706(&(*((struct__3706*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3706_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3706_StructSimValue((struct__3706*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__3706_allow_double_convertion() {
	return 0;
}


const char * get_struct__3706_signature() {
	static StructSimValue values[6];
	Fill_struct__3706_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__3706_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3706_StructSimValue((struct__3706*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__3706_filter_values[6] = {"header", "packets", "engineering_BG_location", "TrainPos", "pig_nom_0", "balise_passed"};
int check_struct__3706_string(const char* strValue) {
	static struct__3706 rTemp;
	return string_to_struct__3706(strValue, &rTemp);
}


/****************************************************************
 ** struct__3715
 ****************************************************************/
static void Fill_struct__3715_StructSimValue(struct__3715 * pStruct, StructSimValue * pValues) {
	/*Header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__3693_Utils;
	pValues[0].m_pszName = "Header";
	/*Messages label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Messages) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__3680_Utils;
	pValues[1].m_pszName = "Messages";
}

const char * struct__3715_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3715_StructSimValue(((struct__3715*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__3715(const char* strValue, void* pValue) {
	static struct__3715 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__3715(&(rTemp), &(*((struct__3715*)pValue)));
	Fill_struct__3715_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__3715(&(*((struct__3715*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3715_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3715_StructSimValue((struct__3715*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__3715_allow_double_convertion() {
	return 0;
}


const char * get_struct__3715_signature() {
	static StructSimValue values[2];
	Fill_struct__3715_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__3715_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__3715_StructSimValue((struct__3715*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__3715_filter_values[2] = {"Header", "Messages"};
int check_struct__3715_string(const char* strValue) {
	static struct__3715 rTemp;
	return string_to_struct__3715(strValue, &rTemp);
}


/****************************************************************
 ** struct__3720
 ****************************************************************/
static void Fill_struct__3720_StructSimValue(struct__3720 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*D_LINK label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "Q_LOCACC";
}

const char * struct__3720_to_string(const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__3720_StructSimValue(((struct__3720*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 8);
}

int string_to_struct__3720(const char* strValue, void* pValue) {
	static struct__3720 rTemp;
	int nResult = 0;
	static StructSimValue values[8];
	kcg_copy_struct__3720(&(rTemp), &(*((struct__3720*)pValue)));
	Fill_struct__3720_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 8);
	if (nResult == 1)
		kcg_copy_struct__3720(&(*((struct__3720*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3720_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__3720_StructSimValue((struct__3720*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 8);
}


int is_struct__3720_allow_double_convertion() {
	return 0;
}


const char * get_struct__3720_signature() {
	static StructSimValue values[8];
	Fill_struct__3720_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 8);
}

FilterUtils get_struct__3720_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[8];
	Fill_struct__3720_StructSimValue((struct__3720*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 8, strFilter);
}

const char * struct__3720_filter_values[8] = {"valid", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC"};
int check_struct__3720_string(const char* strValue) {
	static struct__3720 rTemp;
	return string_to_struct__3720(strValue, &rTemp);
}


/****************************************************************
 ** array__3731
 ****************************************************************/
void* array__3731_projection(void** pValues, int nIndex) {
	return &((*(array__3731*)pValues)[nIndex]);
}

const char * array__3731_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__3720_to_string, 5, array__3731_projection);
}

int compare_array__3731_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__3720_type , 5, array__3731_projection);
}

int is_array__3731_allow_double_convertion() {
	return 0;
}

int string_to_array__3731(const char* strValue, void* pValue) {
	static array__3731 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__3720, 5, array__3731_projection);
	if (nResult == 1)
		kcg_copy_array__3731(&(*((array__3731*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__3731_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__3720_signature, 5);
}

FilterUtils get_array__3731_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__3720_Utils, strFilter, (void**)pValue, 5, array__3731_projection);
}

int check_array__3731_string(const char* strValue) {
	static array__3731 rTemp;
	return string_to_array__3731(strValue, &rTemp);
}


/****************************************************************
 ** struct__3734
 ****************************************************************/
static void Fill_struct__3734_StructSimValue(struct__3734 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*Q_DIR label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Q_DIR) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Q_DIR";
	/*L_PACKET label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->L_PACKET) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "L_PACKET";
	/*Q_SCALE label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Q_SCALE) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "Q_SCALE";
	/*N_ITER label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "N_ITER";
	/*SECTIONS label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_array__3731_Utils;
	pValues[5].m_pszName = "SECTIONS";
}

const char * struct__3734_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3734_StructSimValue(((struct__3734*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__3734(const char* strValue, void* pValue) {
	static struct__3734 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__3734(&(rTemp), &(*((struct__3734*)pValue)));
	Fill_struct__3734_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__3734(&(*((struct__3734*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__3734_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3734_StructSimValue((struct__3734*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__3734_allow_double_convertion() {
	return 0;
}


const char * get_struct__3734_signature() {
	static StructSimValue values[6];
	Fill_struct__3734_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__3734_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__3734_StructSimValue((struct__3734*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__3734_filter_values[6] = {"valid", "Q_DIR", "L_PACKET", "Q_SCALE", "N_ITER", "SECTIONS"};
int check_struct__3734_string(const char* strValue) {
	static struct__3734 rTemp;
	return string_to_struct__3734(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7
 ****************************************************************/
void* array_int_7_projection(void** pValues, int nIndex) {
	return &((*(array_int_7*)pValues)[nIndex]);
}

const char * array_int_7_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 7, array_int_7_projection);
}

int compare_array_int_7_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 7, array_int_7_projection);
}

int is_array_int_7_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7(const char* strValue, void* pValue) {
	static array_int_7 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 7, array_int_7_projection);
	if (nResult == 1)
		kcg_copy_array_int_7(&(*((array_int_7*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 7);
}

FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 7, array_int_7_projection);
}

int check_array_int_7_string(const char* strValue) {
	static array_int_7 rTemp;
	return string_to_array_int_7(strValue, &rTemp);
}


/****************************************************************
 ** array_int_461
 ****************************************************************/
void* array_int_461_projection(void** pValues, int nIndex) {
	return &((*(array_int_461*)pValues)[nIndex]);
}

const char * array_int_461_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 461, array_int_461_projection);
}

int compare_array_int_461_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 461, array_int_461_projection);
}

int is_array_int_461_allow_double_convertion() {
	return 0;
}

int string_to_array_int_461(const char* strValue, void* pValue) {
	static array_int_461 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 461, array_int_461_projection);
	if (nResult == 1)
		kcg_copy_array_int_461(&(*((array_int_461*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_461_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 461);
}

FilterUtils get_array_int_461_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 461, array_int_461_projection);
}

int check_array_int_461_string(const char* strValue) {
	static array_int_461 rTemp;
	return string_to_array_int_461(strValue, &rTemp);
}


/****************************************************************
 ** array_int_11
 ****************************************************************/
void* array_int_11_projection(void** pValues, int nIndex) {
	return &((*(array_int_11*)pValues)[nIndex]);
}

const char * array_int_11_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 11, array_int_11_projection);
}

int compare_array_int_11_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 11, array_int_11_projection);
}

int is_array_int_11_allow_double_convertion() {
	return 0;
}

int string_to_array_int_11(const char* strValue, void* pValue) {
	static array_int_11 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 11, array_int_11_projection);
	if (nResult == 1)
		kcg_copy_array_int_11(&(*((array_int_11*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_11_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 11);
}

FilterUtils get_array_int_11_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 11, array_int_11_projection);
}

int check_array_int_11_string(const char* strValue) {
	static array_int_11 rTemp;
	return string_to_array_int_11(strValue, &rTemp);
}


/****************************************************************
 ** array_int_18
 ****************************************************************/
void* array_int_18_projection(void** pValues, int nIndex) {
	return &((*(array_int_18*)pValues)[nIndex]);
}

const char * array_int_18_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 18, array_int_18_projection);
}

int compare_array_int_18_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 18, array_int_18_projection);
}

int is_array_int_18_allow_double_convertion() {
	return 0;
}

int string_to_array_int_18(const char* strValue, void* pValue) {
	static array_int_18 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 18, array_int_18_projection);
	if (nResult == 1)
		kcg_copy_array_int_18(&(*((array_int_18*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_18_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 18);
}

FilterUtils get_array_int_18_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 18, array_int_18_projection);
}

int check_array_int_18_string(const char* strValue) {
	static array_int_18 rTemp;
	return string_to_array_int_18(strValue, &rTemp);
}


/****************************************************************
 ** array_int_25
 ****************************************************************/
void* array_int_25_projection(void** pValues, int nIndex) {
	return &((*(array_int_25*)pValues)[nIndex]);
}

const char * array_int_25_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 25, array_int_25_projection);
}

int compare_array_int_25_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 25, array_int_25_projection);
}

int is_array_int_25_allow_double_convertion() {
	return 0;
}

int string_to_array_int_25(const char* strValue, void* pValue) {
	static array_int_25 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 25, array_int_25_projection);
	if (nResult == 1)
		kcg_copy_array_int_25(&(*((array_int_25*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_25_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 25);
}

FilterUtils get_array_int_25_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 25, array_int_25_projection);
}

int check_array_int_25_string(const char* strValue) {
	static array_int_25 rTemp;
	return string_to_array_int_25(strValue, &rTemp);
}


/****************************************************************
 ** array_int_32
 ****************************************************************/
void* array_int_32_projection(void** pValues, int nIndex) {
	return &((*(array_int_32*)pValues)[nIndex]);
}

const char * array_int_32_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 32, array_int_32_projection);
}

int compare_array_int_32_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 32, array_int_32_projection);
}

int is_array_int_32_allow_double_convertion() {
	return 0;
}

int string_to_array_int_32(const char* strValue, void* pValue) {
	static array_int_32 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 32, array_int_32_projection);
	if (nResult == 1)
		kcg_copy_array_int_32(&(*((array_int_32*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_32_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 32);
}

FilterUtils get_array_int_32_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 32, array_int_32_projection);
}

int check_array_int_32_string(const char* strValue) {
	static array_int_32 rTemp;
	return string_to_array_int_32(strValue, &rTemp);
}


/****************************************************************
 ** array_int_39
 ****************************************************************/
void* array_int_39_projection(void** pValues, int nIndex) {
	return &((*(array_int_39*)pValues)[nIndex]);
}

const char * array_int_39_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 39, array_int_39_projection);
}

int compare_array_int_39_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 39, array_int_39_projection);
}

int is_array_int_39_allow_double_convertion() {
	return 0;
}

int string_to_array_int_39(const char* strValue, void* pValue) {
	static array_int_39 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 39, array_int_39_projection);
	if (nResult == 1)
		kcg_copy_array_int_39(&(*((array_int_39*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_39_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 39);
}

FilterUtils get_array_int_39_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 39, array_int_39_projection);
}

int check_array_int_39_string(const char* strValue) {
	static array_int_39 rTemp;
	return string_to_array_int_39(strValue, &rTemp);
}


/****************************************************************
 ** array_int_4
 ****************************************************************/
void* array_int_4_projection(void** pValues, int nIndex) {
	return &((*(array_int_4*)pValues)[nIndex]);
}

const char * array_int_4_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 4, array_int_4_projection);
}

int compare_array_int_4_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 4, array_int_4_projection);
}

int is_array_int_4_allow_double_convertion() {
	return 0;
}

int string_to_array_int_4(const char* strValue, void* pValue) {
	static array_int_4 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 4, array_int_4_projection);
	if (nResult == 1)
		kcg_copy_array_int_4(&(*((array_int_4*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_4_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 4);
}

FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 4, array_int_4_projection);
}

int check_array_int_4_string(const char* strValue) {
	static array_int_4 rTemp;
	return string_to_array_int_4(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500_500
 ****************************************************************/
void* array_int_500_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500_500*)pValues)[nIndex]);
}

const char * array_int_500_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_500_to_string, 500, array_int_500_500_projection);
}

int compare_array_int_500_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_500_type , 500, array_int_500_500_projection);
}

int is_array_int_500_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500_500(const char* strValue, void* pValue) {
	static array_int_500_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_500, 500, array_int_500_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500_500(&(*((array_int_500_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_500_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_500_signature, 500);
}

FilterUtils get_array_int_500_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_500_Utils, strFilter, (void**)pValue, 500, array_int_500_500_projection);
}

int check_array_int_500_500_string(const char* strValue) {
	static array_int_500_500 rTemp;
	return string_to_array_int_500_500(strValue, &rTemp);
}


/****************************************************************
 ** TM_CompressedBaliseMessage
 ****************************************************************/
struct SimTypeVTable* pSimTM_CompressedBaliseMessageVTable;
const char * TM_CompressedBaliseMessage_to_string(const void* pValue) {
	if (pSimTM_CompressedBaliseMessageVTable != 0 && pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptString, pValue);
	return struct__3715_to_string(pValue);
}

int string_to_TM_CompressedBaliseMessage(const char* strValue, void* pValue) {
	if (pSimTM_CompressedBaliseMessageVTable != 0 && pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_CompressedBaliseMessage rTemp;
		int nResult = pSimTM_CompressedBaliseMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3715(&(*((TM_CompressedBaliseMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3715(strValue, pValue);
}

int is_TM_CompressedBaliseMessage_allow_double_convertion() {
	if (pSimTM_CompressedBaliseMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3715_allow_double_convertion();
}

int TM_CompressedBaliseMessage_to_double(double * nValue, const void* pValue) {
	if (pSimTM_CompressedBaliseMessageVTable != 0) {
		if (pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3715_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3715_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_CompressedBaliseMessage_string(const char* strValue) {
	static TM_CompressedBaliseMessage rTemp;
	return string_to_TM_CompressedBaliseMessage(strValue, &rTemp);
}


/****************************************************************
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
struct SimTypeVTable* pSimTM_BaliseTelegramHeader_int_TVTable;
const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue) {
	if (pSimTM_BaliseTelegramHeader_int_TVTable != 0 && pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptString, pValue);
	return struct__3693_to_string(pValue);
}

int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue) {
	if (pSimTM_BaliseTelegramHeader_int_TVTable != 0 && pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_BaliseTelegramHeader_int_T rTemp;
		int nResult = pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3693(&(*((TM_BaliseTelegramHeader_int_T*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3693(strValue, pValue);
}

int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion() {
	if (pSimTM_BaliseTelegramHeader_int_TVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3693_allow_double_convertion();
}

int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void* pValue) {
	if (pSimTM_BaliseTelegramHeader_int_TVTable != 0) {
		if (pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3693_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3693_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue) {
	static TM_BaliseTelegramHeader_int_T rTemp;
	return string_to_TM_BaliseTelegramHeader_int_T(strValue, &rTemp);
}


/****************************************************************
 ** NID_PACKET
 ****************************************************************/
struct SimTypeVTable* pSimNID_PACKETVTable;
const char * NID_PACKET_to_string(const void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_PACKET(const char* strValue, void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_PACKET rTemp;
		int nResult = pSimNID_PACKETVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_PACKET*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_PACKET_allow_double_convertion() {
	if (pSimNID_PACKETVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_PACKET_to_double(double * nValue, const void* pValue) {
	if (pSimNID_PACKETVTable != 0) {
		if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_PACKETVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_PACKETVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_PACKETVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_PACKETVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_PACKET_string(const char* strValue) {
	static NID_PACKET rTemp;
	return string_to_NID_PACKET(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIR
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRVTable;
const char * Q_DIR_to_string(const void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		return "Q_DIR_Reverse";
	case Q_DIR_Nominal:
		return "Q_DIR_Nominal";
	case Q_DIR_Both_directions:
		return "Q_DIR_Both_directions";
	default:
		return "?";
	}
}

int string_to_Q_DIR(const char* strValue, void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIR rTemp;		int nResult = pSimQ_DIRVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIR*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIR_Reverse") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Reverse;
	else if(strcmp(strValue, "Q_DIR_Nominal") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Nominal;
	else if(strcmp(strValue, "Q_DIR_Both_directions") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Both_directions;
	else 
		return 0;
	return 1;
}

int is_Q_DIR_allow_double_convertion() {
	return 1;
}


int Q_DIR_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		*nValue = 0.0;
		break;
	case Q_DIR_Nominal:
		*nValue = 1.0;
		break;
	case Q_DIR_Both_directions:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIR_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIR rTemp;
	const Q_DIR* pCurrent = (const Q_DIR*)pValue;
	if (string_to_Q_DIR(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIR_signature() {
	return "E"
		"|Q_DIR_Reverse"
		"|Q_DIR_Nominal"
		"|Q_DIR_Both_directions"
		;
}

int check_Q_DIR_string(const char* strValue) {
	static Q_DIR rTemp;
	return string_to_Q_DIR(strValue, &rTemp);
}


/****************************************************************
 ** TM_OrBG
 ****************************************************************/
struct SimTypeVTable* pSimTM_OrBGVTable;
const char * TM_OrBG_to_string(const void* pValue) {
	if (pSimTM_OrBGVTable != 0 && pSimTM_OrBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_OrBGVTable->m_pfnToType(SptString, pValue);
	switch (*((TM_OrBG*)pValue)) {
	case Amsterdam:
		return "Amsterdam";
	case Utrecht:
		return "Utrecht";
	default:
		return "?";
	}
}

int string_to_TM_OrBG(const char* strValue, void* pValue) {
	if (pSimTM_OrBGVTable != 0 && pSimTM_OrBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		TM_OrBG rTemp;		int nResult = pSimTM_OrBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((TM_OrBG*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Amsterdam") == 0)
		*((TM_OrBG*)pValue) = Amsterdam;
	else if(strcmp(strValue, "Utrecht") == 0)
		*((TM_OrBG*)pValue) = Utrecht;
	else 
		return 0;
	return 1;
}

int is_TM_OrBG_allow_double_convertion() {
	return 1;
}


int TM_OrBG_to_double(double * nValue, const void* pValue) {
	switch (*((TM_OrBG*)pValue)) {
	case Amsterdam:
		*nValue = 0.0;
		break;
	case Utrecht:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_TM_OrBG_type(int* pResult, const char* toCompare, const void* pValue) {
	static TM_OrBG rTemp;
	const TM_OrBG* pCurrent = (const TM_OrBG*)pValue;
	if (string_to_TM_OrBG(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_TM_OrBG_signature() {
	return "E"
		"|Amsterdam"
		"|Utrecht"
		;
}

int check_TM_OrBG_string(const char* strValue) {
	static TM_OrBG rTemp;
	return string_to_TM_OrBG(strValue, &rTemp);
}


/****************************************************************
 ** TM_OrLine
 ****************************************************************/
struct SimTypeVTable* pSimTM_OrLineVTable;
const char * TM_OrLine_to_string(const void* pValue) {
	if (pSimTM_OrLineVTable != 0 && pSimTM_OrLineVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_OrLineVTable->m_pfnToType(SptString, pValue);
	switch (*((TM_OrLine*)pValue)) {
	case N:
		return "N";
	case Z:
		return "Z";
	default:
		return "?";
	}
}

int string_to_TM_OrLine(const char* strValue, void* pValue) {
	if (pSimTM_OrLineVTable != 0 && pSimTM_OrLineVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		TM_OrLine rTemp;		int nResult = pSimTM_OrLineVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((TM_OrLine*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N") == 0)
		*((TM_OrLine*)pValue) = N;
	else if(strcmp(strValue, "Z") == 0)
		*((TM_OrLine*)pValue) = Z;
	else 
		return 0;
	return 1;
}

int is_TM_OrLine_allow_double_convertion() {
	return 1;
}


int TM_OrLine_to_double(double * nValue, const void* pValue) {
	switch (*((TM_OrLine*)pValue)) {
	case N:
		*nValue = 0.0;
		break;
	case Z:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_TM_OrLine_type(int* pResult, const char* toCompare, const void* pValue) {
	static TM_OrLine rTemp;
	const TM_OrLine* pCurrent = (const TM_OrLine*)pValue;
	if (string_to_TM_OrLine(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_TM_OrLine_signature() {
	return "E"
		"|N"
		"|Z"
		;
}

int check_TM_OrLine_string(const char* strValue) {
	static TM_OrLine rTemp;
	return string_to_TM_OrLine(strValue, &rTemp);
}


/****************************************************************
 ** TM_P005
 ****************************************************************/
struct SimTypeVTable* pSimTM_P005VTable;
const char * TM_P005_to_string(const void* pValue) {
	if (pSimTM_P005VTable != 0 && pSimTM_P005VTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_P005VTable->m_pfnToType(SptString, pValue);
	return struct__3734_to_string(pValue);
}

int string_to_TM_P005(const char* strValue, void* pValue) {
	if (pSimTM_P005VTable != 0 && pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_P005 rTemp;
		int nResult = pSimTM_P005VTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3734(&(*((TM_P005*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3734(strValue, pValue);
}

int is_TM_P005_allow_double_convertion() {
	if (pSimTM_P005VTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3734_allow_double_convertion();
}

int TM_P005_to_double(double * nValue, const void* pValue) {
	if (pSimTM_P005VTable != 0) {
		if (pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_P005VTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_P005VTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_P005VTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_P005VTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_P005VTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3734_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3734_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_P005_string(const char* strValue) {
	static TM_P005 rTemp;
	return string_to_TM_P005(strValue, &rTemp);
}


/****************************************************************
 ** TM_P05Es_T
 ****************************************************************/
struct SimTypeVTable* pSimTM_P05Es_TVTable;
const char * TM_P05Es_T_to_string(const void* pValue) {
	if (pSimTM_P05Es_TVTable != 0 && pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_P05Es_TVTable->m_pfnToType(SptString, pValue);
	return array__3731_to_string(pValue);
}

int string_to_TM_P05Es_T(const char* strValue, void* pValue) {
	if (pSimTM_P05Es_TVTable != 0 && pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_P05Es_T rTemp;
		int nResult = pSimTM_P05Es_TVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__3731(&(*((TM_P05Es_T*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__3731(strValue, pValue);
}

int is_TM_P05Es_T_allow_double_convertion() {
	if (pSimTM_P05Es_TVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__3731_allow_double_convertion();
}

int TM_P05Es_T_to_double(double * nValue, const void* pValue) {
	if (pSimTM_P05Es_TVTable != 0) {
		if (pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_P05Es_TVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_P05Es_TVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_P05Es_TVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_P05Es_TVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__3731_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__3731_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_P05Es_T_string(const char* strValue) {
	static TM_P05Es_T rTemp;
	return string_to_TM_P05Es_T(strValue, &rTemp);
}


/****************************************************************
 ** TM_P005E_T
 ****************************************************************/
struct SimTypeVTable* pSimTM_P005E_TVTable;
const char * TM_P005E_T_to_string(const void* pValue) {
	if (pSimTM_P005E_TVTable != 0 && pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_P005E_TVTable->m_pfnToType(SptString, pValue);
	return struct__3720_to_string(pValue);
}

int string_to_TM_P005E_T(const char* strValue, void* pValue) {
	if (pSimTM_P005E_TVTable != 0 && pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_P005E_T rTemp;
		int nResult = pSimTM_P005E_TVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3720(&(*((TM_P005E_T*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3720(strValue, pValue);
}

int is_TM_P005E_T_allow_double_convertion() {
	if (pSimTM_P005E_TVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3720_allow_double_convertion();
}

int TM_P005E_T_to_double(double * nValue, const void* pValue) {
	if (pSimTM_P005E_TVTable != 0) {
		if (pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_P005E_TVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_P005E_TVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_P005E_TVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_P005E_TVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3720_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3720_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_P005E_T_string(const char* strValue) {
	static TM_P005E_T rTemp;
	return string_to_TM_P005E_T(strValue, &rTemp);
}


/****************************************************************
 ** TM_P005E_array_T
 ****************************************************************/
struct SimTypeVTable* pSimTM_P005E_array_TVTable;
const char * TM_P005E_array_T_to_string(const void* pValue) {
	if (pSimTM_P005E_array_TVTable != 0 && pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_P005E_array_TVTable->m_pfnToType(SptString, pValue);
	return array_int_7_to_string(pValue);
}

int string_to_TM_P005E_array_T(const char* strValue, void* pValue) {
	if (pSimTM_P005E_array_TVTable != 0 && pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_P005E_array_T rTemp;
		int nResult = pSimTM_P005E_array_TVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7(&(*((TM_P005E_array_T*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7(strValue, pValue);
}

int is_TM_P005E_array_T_allow_double_convertion() {
	if (pSimTM_P005E_array_TVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_allow_double_convertion();
}

int TM_P005E_array_T_to_double(double * nValue, const void* pValue) {
	if (pSimTM_P005E_array_TVTable != 0) {
		if (pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_P005E_array_TVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_P005E_array_TVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_P005E_array_TVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_P005E_array_TVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_P005E_array_T_string(const char* strValue) {
	static TM_P005E_array_T rTemp;
	return string_to_TM_P005E_array_T(strValue, &rTemp);
}


/****************************************************************
 ** TM_BaliseGroupData
 ****************************************************************/
struct SimTypeVTable* pSimTM_BaliseGroupDataVTable;
const char * TM_BaliseGroupData_to_string(const void* pValue) {
	if (pSimTM_BaliseGroupDataVTable != 0 && pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptString, pValue);
	return struct__3685_to_string(pValue);
}

int string_to_TM_BaliseGroupData(const char* strValue, void* pValue) {
	if (pSimTM_BaliseGroupDataVTable != 0 && pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TM_BaliseGroupData rTemp;
		int nResult = pSimTM_BaliseGroupDataVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3685(&(*((TM_BaliseGroupData*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3685(strValue, pValue);
}

int is_TM_BaliseGroupData_allow_double_convertion() {
	if (pSimTM_BaliseGroupDataVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3685_allow_double_convertion();
}

int TM_BaliseGroupData_to_double(double * nValue, const void* pValue) {
	if (pSimTM_BaliseGroupDataVTable != 0) {
		if (pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3685_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3685_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TM_BaliseGroupData_string(const char* strValue) {
	static TM_BaliseGroupData rTemp;
	return string_to_TM_BaliseGroupData(strValue, &rTemp);
}


/****************************************************************
 ** Q_UPDOWN
 ****************************************************************/
struct SimTypeVTable* pSimQ_UPDOWNVTable;
const char * Q_UPDOWN_to_string(const void* pValue) {
	if (pSimQ_UPDOWNVTable != 0 && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_UPDOWN*)pValue)) {
	case Q_UPDOWN_Down_link_telegram:
		return "Q_UPDOWN_Down_link_telegram";
	case Q_UPDOWN_Up_link_telegram:
		return "Q_UPDOWN_Up_link_telegram";
	default:
		return "?";
	}
}

int string_to_Q_UPDOWN(const char* strValue, void* pValue) {
	if (pSimQ_UPDOWNVTable != 0 && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_UPDOWN rTemp;		int nResult = pSimQ_UPDOWNVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_UPDOWN*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_UPDOWN_Down_link_telegram") == 0)
		*((Q_UPDOWN*)pValue) = Q_UPDOWN_Down_link_telegram;
	else if(strcmp(strValue, "Q_UPDOWN_Up_link_telegram") == 0)
		*((Q_UPDOWN*)pValue) = Q_UPDOWN_Up_link_telegram;
	else 
		return 0;
	return 1;
}

int is_Q_UPDOWN_allow_double_convertion() {
	return 1;
}


int Q_UPDOWN_to_double(double * nValue, const void* pValue) {
	switch (*((Q_UPDOWN*)pValue)) {
	case Q_UPDOWN_Down_link_telegram:
		*nValue = 0.0;
		break;
	case Q_UPDOWN_Up_link_telegram:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_UPDOWN_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_UPDOWN rTemp;
	const Q_UPDOWN* pCurrent = (const Q_UPDOWN*)pValue;
	if (string_to_Q_UPDOWN(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_UPDOWN_signature() {
	return "E"
		"|Q_UPDOWN_Down_link_telegram"
		"|Q_UPDOWN_Up_link_telegram"
		;
}

int check_Q_UPDOWN_string(const char* strValue) {
	static Q_UPDOWN rTemp;
	return string_to_Q_UPDOWN(strValue, &rTemp);
}


/****************************************************************
 ** M_VERSION
 ****************************************************************/
struct SimTypeVTable* pSimM_VERSIONVTable;
const char * M_VERSION_to_string(const void* pValue) {
	if (pSimM_VERSIONVTable != 0 && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue);
	switch (*((M_VERSION*)pValue)) {
	case M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS:
		return "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS";
	case M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0:
		return "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0";
	case M_VERSION_Version_1_1_introduced_in_SRS_3_3_0:
		return "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0";
	case M_VERSION_Version_2_0_introduced_in_SRS_3_3_0:
		return "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0";
	default:
		return "?";
	}
}

int string_to_M_VERSION(const char* strValue, void* pValue) {
	if (pSimM_VERSIONVTable != 0 && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_VERSION rTemp;		int nResult = pSimM_VERSIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_VERSION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
	else if(strcmp(strValue, "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0;
	else if(strcmp(strValue, "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_1_1_introduced_in_SRS_3_3_0;
	else if(strcmp(strValue, "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_2_0_introduced_in_SRS_3_3_0;
	else 
		return 0;
	return 1;
}

int is_M_VERSION_allow_double_convertion() {
	return 1;
}


int M_VERSION_to_double(double * nValue, const void* pValue) {
	switch (*((M_VERSION*)pValue)) {
	case M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS:
		*nValue = 0.0;
		break;
	case M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0:
		*nValue = 1.0;
		break;
	case M_VERSION_Version_1_1_introduced_in_SRS_3_3_0:
		*nValue = 2.0;
		break;
	case M_VERSION_Version_2_0_introduced_in_SRS_3_3_0:
		*nValue = 3.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_VERSION_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_VERSION rTemp;
	const M_VERSION* pCurrent = (const M_VERSION*)pValue;
	if (string_to_M_VERSION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_VERSION_signature() {
	return "E"
		"|M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS"
		"|M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0"
		"|M_VERSION_Version_1_1_introduced_in_SRS_3_3_0"
		"|M_VERSION_Version_2_0_introduced_in_SRS_3_3_0"
		;
}

int check_M_VERSION_string(const char* strValue) {
	static M_VERSION rTemp;
	return string_to_M_VERSION(strValue, &rTemp);
}


/****************************************************************
 ** Q_MEDIA
 ****************************************************************/
struct SimTypeVTable* pSimQ_MEDIAVTable;
const char * Q_MEDIA_to_string(const void* pValue) {
	if (pSimQ_MEDIAVTable != 0 && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_MEDIA*)pValue)) {
	case Q_MEDIA_Balise:
		return "Q_MEDIA_Balise";
	case Q_MEDIA_Loop:
		return "Q_MEDIA_Loop";
	default:
		return "?";
	}
}

int string_to_Q_MEDIA(const char* strValue, void* pValue) {
	if (pSimQ_MEDIAVTable != 0 && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_MEDIA rTemp;		int nResult = pSimQ_MEDIAVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_MEDIA*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_MEDIA_Balise") == 0)
		*((Q_MEDIA*)pValue) = Q_MEDIA_Balise;
	else if(strcmp(strValue, "Q_MEDIA_Loop") == 0)
		*((Q_MEDIA*)pValue) = Q_MEDIA_Loop;
	else 
		return 0;
	return 1;
}

int is_Q_MEDIA_allow_double_convertion() {
	return 1;
}


int Q_MEDIA_to_double(double * nValue, const void* pValue) {
	switch (*((Q_MEDIA*)pValue)) {
	case Q_MEDIA_Balise:
		*nValue = 0.0;
		break;
	case Q_MEDIA_Loop:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_MEDIA_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_MEDIA rTemp;
	const Q_MEDIA* pCurrent = (const Q_MEDIA*)pValue;
	if (string_to_Q_MEDIA(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_MEDIA_signature() {
	return "E"
		"|Q_MEDIA_Balise"
		"|Q_MEDIA_Loop"
		;
}

int check_Q_MEDIA_string(const char* strValue) {
	static Q_MEDIA rTemp;
	return string_to_Q_MEDIA(strValue, &rTemp);
}


/****************************************************************
 ** N_PIG
 ****************************************************************/
struct SimTypeVTable* pSimN_PIGVTable;
const char * N_PIG_to_string(const void* pValue) {
	if (pSimN_PIGVTable != 0 && pSimN_PIGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_PIGVTable->m_pfnToType(SptString, pValue);
	switch (*((N_PIG*)pValue)) {
	case N_PIG_I_am_the_1st:
		return "N_PIG_I_am_the_1st";
	case N_PIG_I_am_the_2nd:
		return "N_PIG_I_am_the_2nd";
	case N_PIG_I_am_the_3rd:
		return "N_PIG_I_am_the_3rd";
	case N_PIG_I_am_the_4th:
		return "N_PIG_I_am_the_4th";
	case N_PIG_I_am_the_5th:
		return "N_PIG_I_am_the_5th";
	case N_PIG_I_am_the_6th:
		return "N_PIG_I_am_the_6th";
	case N_PIG_I_am_the_7th:
		return "N_PIG_I_am_the_7th";
	case N_PIG_I_am_the_8th:
		return "N_PIG_I_am_the_8th";
	default:
		return "?";
	}
}

int string_to_N_PIG(const char* strValue, void* pValue) {
	if (pSimN_PIGVTable != 0 && pSimN_PIGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_PIG rTemp;		int nResult = pSimN_PIGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_PIG*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N_PIG_I_am_the_1st") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_1st;
	else if(strcmp(strValue, "N_PIG_I_am_the_2nd") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_2nd;
	else if(strcmp(strValue, "N_PIG_I_am_the_3rd") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_3rd;
	else if(strcmp(strValue, "N_PIG_I_am_the_4th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_4th;
	else if(strcmp(strValue, "N_PIG_I_am_the_5th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_5th;
	else if(strcmp(strValue, "N_PIG_I_am_the_6th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_6th;
	else if(strcmp(strValue, "N_PIG_I_am_the_7th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_7th;
	else if(strcmp(strValue, "N_PIG_I_am_the_8th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_8th;
	else 
		return 0;
	return 1;
}

int is_N_PIG_allow_double_convertion() {
	return 1;
}


int N_PIG_to_double(double * nValue, const void* pValue) {
	switch (*((N_PIG*)pValue)) {
	case N_PIG_I_am_the_1st:
		*nValue = 0.0;
		break;
	case N_PIG_I_am_the_2nd:
		*nValue = 1.0;
		break;
	case N_PIG_I_am_the_3rd:
		*nValue = 2.0;
		break;
	case N_PIG_I_am_the_4th:
		*nValue = 3.0;
		break;
	case N_PIG_I_am_the_5th:
		*nValue = 4.0;
		break;
	case N_PIG_I_am_the_6th:
		*nValue = 5.0;
		break;
	case N_PIG_I_am_the_7th:
		*nValue = 6.0;
		break;
	case N_PIG_I_am_the_8th:
		*nValue = 7.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_PIG_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_PIG rTemp;
	const N_PIG* pCurrent = (const N_PIG*)pValue;
	if (string_to_N_PIG(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_PIG_signature() {
	return "E"
		"|N_PIG_I_am_the_1st"
		"|N_PIG_I_am_the_2nd"
		"|N_PIG_I_am_the_3rd"
		"|N_PIG_I_am_the_4th"
		"|N_PIG_I_am_the_5th"
		"|N_PIG_I_am_the_6th"
		"|N_PIG_I_am_the_7th"
		"|N_PIG_I_am_the_8th"
		;
}

int check_N_PIG_string(const char* strValue) {
	static N_PIG rTemp;
	return string_to_N_PIG(strValue, &rTemp);
}


/****************************************************************
 ** N_TOTAL
 ****************************************************************/
struct SimTypeVTable* pSimN_TOTALVTable;
const char * N_TOTAL_to_string(const void* pValue) {
	if (pSimN_TOTALVTable != 0 && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue);
	switch (*((N_TOTAL*)pValue)) {
	case N_TOTAL_1_balise_in_the_group:
		return "N_TOTAL_1_balise_in_the_group";
	case N_TOTAL_2_balises_in_the_group:
		return "N_TOTAL_2_balises_in_the_group";
	case N_TOTAL_3_balises_in_the_group:
		return "N_TOTAL_3_balises_in_the_group";
	case N_TOTAL_4_balises_in_the_group:
		return "N_TOTAL_4_balises_in_the_group";
	case N_TOTAL_5_balises_in_the_group:
		return "N_TOTAL_5_balises_in_the_group";
	case N_TOTAL_6_balises_in_the_group:
		return "N_TOTAL_6_balises_in_the_group";
	case N_TOTAL_7_balises_in_the_group:
		return "N_TOTAL_7_balises_in_the_group";
	case N_TOTAL_8_balises_in_the_group:
		return "N_TOTAL_8_balises_in_the_group";
	default:
		return "?";
	}
}

int string_to_N_TOTAL(const char* strValue, void* pValue) {
	if (pSimN_TOTALVTable != 0 && pSimN_TOTALVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_TOTAL rTemp;		int nResult = pSimN_TOTALVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_TOTAL*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N_TOTAL_1_balise_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_1_balise_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_2_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_2_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_3_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_3_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_4_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_4_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_5_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_5_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_6_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_6_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_7_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_7_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_8_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_8_balises_in_the_group;
	else 
		return 0;
	return 1;
}

int is_N_TOTAL_allow_double_convertion() {
	return 1;
}


int N_TOTAL_to_double(double * nValue, const void* pValue) {
	switch (*((N_TOTAL*)pValue)) {
	case N_TOTAL_1_balise_in_the_group:
		*nValue = 0.0;
		break;
	case N_TOTAL_2_balises_in_the_group:
		*nValue = 1.0;
		break;
	case N_TOTAL_3_balises_in_the_group:
		*nValue = 2.0;
		break;
	case N_TOTAL_4_balises_in_the_group:
		*nValue = 3.0;
		break;
	case N_TOTAL_5_balises_in_the_group:
		*nValue = 4.0;
		break;
	case N_TOTAL_6_balises_in_the_group:
		*nValue = 5.0;
		break;
	case N_TOTAL_7_balises_in_the_group:
		*nValue = 6.0;
		break;
	case N_TOTAL_8_balises_in_the_group:
		*nValue = 7.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_TOTAL_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_TOTAL rTemp;
	const N_TOTAL* pCurrent = (const N_TOTAL*)pValue;
	if (string_to_N_TOTAL(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_TOTAL_signature() {
	return "E"
		"|N_TOTAL_1_balise_in_the_group"
		"|N_TOTAL_2_balises_in_the_group"
		"|N_TOTAL_3_balises_in_the_group"
		"|N_TOTAL_4_balises_in_the_group"
		"|N_TOTAL_5_balises_in_the_group"
		"|N_TOTAL_6_balises_in_the_group"
		"|N_TOTAL_7_balises_in_the_group"
		"|N_TOTAL_8_balises_in_the_group"
		;
}

int check_N_TOTAL_string(const char* strValue) {
	static N_TOTAL rTemp;
	return string_to_N_TOTAL(strValue, &rTemp);
}


/****************************************************************
 ** M_DUP
 ****************************************************************/
struct SimTypeVTable* pSimM_DUPVTable;
const char * M_DUP_to_string(const void* pValue) {
	if (pSimM_DUPVTable != 0 && pSimM_DUPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_DUPVTable->m_pfnToType(SptString, pValue);
	switch (*((M_DUP*)pValue)) {
	case M_DUP_No_duplicates:
		return "M_DUP_No_duplicates";
	case _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
		return "M_DUP_This_balise_is_a_duplicate_of_the_next_balise";
	case M_DUP_This_balise_is_a_duplicate_of_the_previous_balise:
		return "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise";
	default:
		return "?";
	}
}

int string_to_M_DUP(const char* strValue, void* pValue) {
	if (pSimM_DUPVTable != 0 && pSimM_DUPVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_DUP rTemp;		int nResult = pSimM_DUPVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_DUP*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_DUP_No_duplicates") == 0)
		*((M_DUP*)pValue) = M_DUP_No_duplicates;
	else if(strcmp(strValue, "M_DUP_This_balise_is_a_duplicate_of_the_next_balise") == 0)
		*((M_DUP*)pValue) = _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
	else if(strcmp(strValue, "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise") == 0)
		*((M_DUP*)pValue) = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
	else 
		return 0;
	return 1;
}

int is_M_DUP_allow_double_convertion() {
	return 1;
}


int M_DUP_to_double(double * nValue, const void* pValue) {
	switch (*((M_DUP*)pValue)) {
	case M_DUP_No_duplicates:
		*nValue = 0.0;
		break;
	case _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
		*nValue = 1.0;
		break;
	case M_DUP_This_balise_is_a_duplicate_of_the_previous_balise:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_DUP_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_DUP rTemp;
	const M_DUP* pCurrent = (const M_DUP*)pValue;
	if (string_to_M_DUP(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_DUP_signature() {
	return "E"
		"|M_DUP_No_duplicates"
		"|M_DUP_This_balise_is_a_duplicate_of_the_next_balise"
		"|M_DUP_This_balise_is_a_duplicate_of_the_previous_balise"
		;
}

int check_M_DUP_string(const char* strValue) {
	static M_DUP rTemp;
	return string_to_M_DUP(strValue, &rTemp);
}


/****************************************************************
 ** M_MCOUNT
 ****************************************************************/
struct SimTypeVTable* pSimM_MCOUNTVTable;
const char * M_MCOUNT_to_string(const void* pValue) {
	if (pSimM_MCOUNTVTable != 0 && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_MCOUNTVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_M_MCOUNT(const char* strValue, void* pValue) {
	if (pSimM_MCOUNTVTable != 0 && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static M_MCOUNT rTemp;
		int nResult = pSimM_MCOUNTVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_MCOUNT*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_M_MCOUNT_allow_double_convertion() {
	if (pSimM_MCOUNTVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int M_MCOUNT_to_double(double * nValue, const void* pValue) {
	if (pSimM_MCOUNTVTable != 0) {
		if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimM_MCOUNTVTable->m_pfnToType(SptLong, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimM_MCOUNTVTable->m_pfnToType(SptShort, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimM_MCOUNTVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimM_MCOUNTVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_M_MCOUNT_string(const char* strValue) {
	static M_MCOUNT rTemp;
	return string_to_M_MCOUNT(strValue, &rTemp);
}


/****************************************************************
 ** NID_C
 ****************************************************************/
struct SimTypeVTable* pSimNID_CVTable;
const char * NID_C_to_string(const void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_C(const char* strValue, void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_C rTemp;
		int nResult = pSimNID_CVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_C*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_C_allow_double_convertion() {
	if (pSimNID_CVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_C_to_double(double * nValue, const void* pValue) {
	if (pSimNID_CVTable != 0) {
		if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_CVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_CVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_CVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_CVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_C_string(const char* strValue) {
	static NID_C rTemp;
	return string_to_NID_C(strValue, &rTemp);
}


/****************************************************************
 ** NID_BG
 ****************************************************************/
struct SimTypeVTable* pSimNID_BGVTable;
const char * NID_BG_to_string(const void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_BG(const char* strValue, void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_BG rTemp;
		int nResult = pSimNID_BGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_BG*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_BG_allow_double_convertion() {
	if (pSimNID_BGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_BG_to_double(double * nValue, const void* pValue) {
	if (pSimNID_BGVTable != 0) {
		if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_BGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_BGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_BGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_BGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_BG_string(const char* strValue) {
	static NID_BG rTemp;
	return string_to_NID_BG(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINK
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKVTable;
const char * Q_LINK_to_string(const void* pValue) {
	if (pSimQ_LINKVTable != 0 && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINK*)pValue)) {
	case Q_LINK_Unlinked:
		return "Q_LINK_Unlinked";
	case Q_LINK_Linked:
		return "Q_LINK_Linked";
	default:
		return "?";
	}
}

int string_to_Q_LINK(const char* strValue, void* pValue) {
	if (pSimQ_LINKVTable != 0 && pSimQ_LINKVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINK rTemp;		int nResult = pSimQ_LINKVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINK*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINK_Unlinked") == 0)
		*((Q_LINK*)pValue) = Q_LINK_Unlinked;
	else if(strcmp(strValue, "Q_LINK_Linked") == 0)
		*((Q_LINK*)pValue) = Q_LINK_Linked;
	else 
		return 0;
	return 1;
}

int is_Q_LINK_allow_double_convertion() {
	return 1;
}


int Q_LINK_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINK*)pValue)) {
	case Q_LINK_Unlinked:
		*nValue = 0.0;
		break;
	case Q_LINK_Linked:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINK_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINK rTemp;
	const Q_LINK* pCurrent = (const Q_LINK*)pValue;
	if (string_to_Q_LINK(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINK_signature() {
	return "E"
		"|Q_LINK_Unlinked"
		"|Q_LINK_Linked"
		;
}

int check_Q_LINK_string(const char* strValue) {
	static Q_LINK rTemp;
	return string_to_Q_LINK(strValue, &rTemp);
}


/****************************************************************
 ** B_data_internal_FirstTest_InfraLib
 ****************************************************************/
struct SimTypeVTable* pSimB_data_internal_FirstTest_InfraLibVTable;
const char * B_data_internal_FirstTest_InfraLib_to_string(const void* pValue) {
	if (pSimB_data_internal_FirstTest_InfraLibVTable != 0 && pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptString, pValue);
	return struct__3706_to_string(pValue);
}

int string_to_B_data_internal_FirstTest_InfraLib(const char* strValue, void* pValue) {
	if (pSimB_data_internal_FirstTest_InfraLibVTable != 0 && pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static B_data_internal_FirstTest_InfraLib rTemp;
		int nResult = pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3706(&(*((B_data_internal_FirstTest_InfraLib*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3706(strValue, pValue);
}

int is_B_data_internal_FirstTest_InfraLib_allow_double_convertion() {
	if (pSimB_data_internal_FirstTest_InfraLibVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3706_allow_double_convertion();
}

int B_data_internal_FirstTest_InfraLib_to_double(double * nValue, const void* pValue) {
	if (pSimB_data_internal_FirstTest_InfraLibVTable != 0) {
		if (pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptLong, pValue));
		else if (pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptShort, pValue));
		else if (pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3706_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3706_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_B_data_internal_FirstTest_InfraLib_string(const char* strValue) {
	static B_data_internal_FirstTest_InfraLib rTemp;
	return string_to_B_data_internal_FirstTest_InfraLib(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPackets_T_Common_Types_PkgVTable;
const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__3680_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3680(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3680(strValue, pValue);
}

int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3680_allow_double_convertion();
}

int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3680_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3680_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__3677_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__3677(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__3677(strValue, pValue);
}

int is_Metadata_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__3677_allow_double_convertion();
}

int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__3677_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__3677_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Metadata_T_Common_Types_Pkg_string(const char* strValue) {
	static Metadata_T_Common_Types_Pkg rTemp;
	return string_to_Metadata_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadataElement_T_Common_Types_PkgVTable;
const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__3669_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3669(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3669(strValue, pValue);
}

int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3669_allow_double_convertion();
}

int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3669_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3669_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue) {
	static MetadataElement_T_Common_Types_Pkg rTemp;
	return string_to_MetadataElement_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPacketData_T_Common_Types_PkgVTable;
const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array_int_500_to_string(pValue);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPacketData_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_500(&(*((CompressedPacketData_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_500(strValue, pValue);
}

int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_500_allow_double_convertion();
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_500_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_500_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPacketData_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPacketData_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** BaliseGroupData_Basics
 ****************************************************************/
struct SimTypeVTable* pSimBaliseGroupData_BasicsVTable;
const char * BaliseGroupData_Basics_to_string(const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue);
	return struct__3685_to_string(pValue);
}

int string_to_BaliseGroupData_Basics(const char* strValue, void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseGroupData_Basics rTemp;
		int nResult = pSimBaliseGroupData_BasicsVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3685(&(*((BaliseGroupData_Basics*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3685(strValue, pValue);
}

int is_BaliseGroupData_Basics_allow_double_convertion() {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3685_allow_double_convertion();
}

int BaliseGroupData_Basics_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3685_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3685_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseGroupData_Basics_string(const char* strValue) {
	static BaliseGroupData_Basics rTemp;
	return string_to_BaliseGroupData_Basics(strValue, &rTemp);
}


/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegramHeader_T_BG_Types_PkgVTable;
const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__3653_to_string(pValue);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TelegramHeader_T_BG_Types_Pkg rTemp;
		int nResult = pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__3653(&(*((TelegramHeader_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__3653(strValue, pValue);
}

int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__3653_allow_double_convertion();
}

int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0) {
		if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__3653_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__3653_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue) {
	static TelegramHeader_T_BG_Types_Pkg rTemp;
	return string_to_TelegramHeader_T_BG_Types_Pkg(strValue, &rTemp);
}


