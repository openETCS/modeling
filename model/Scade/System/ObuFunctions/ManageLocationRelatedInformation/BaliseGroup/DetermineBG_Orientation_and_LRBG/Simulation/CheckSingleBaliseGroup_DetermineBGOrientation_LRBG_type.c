
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_type.h"
#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_mapping.h"

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
TypeUtils _SCSIM_struct__464_Utils = {struct__464_to_string,
	check_struct__464_string,
	string_to_struct__464,
	is_struct__464_allow_double_convertion,
	0,
	compare_struct__464_type,
	get_struct__464_signature,
	get_struct__464_filter_utils,
	struct__464_filter_size,
	struct__464_filter_values};
TypeUtils _SCSIM_struct__469_Utils = {struct__469_to_string,
	check_struct__469_string,
	string_to_struct__469,
	is_struct__469_allow_double_convertion,
	0,
	compare_struct__469_type,
	get_struct__469_signature,
	get_struct__469_filter_utils,
	struct__469_filter_size,
	struct__469_filter_values};
TypeUtils _SCSIM_struct__482_Utils = {struct__482_to_string,
	check_struct__482_string,
	string_to_struct__482,
	is_struct__482_allow_double_convertion,
	0,
	compare_struct__482_type,
	get_struct__482_signature,
	get_struct__482_filter_utils,
	struct__482_filter_size,
	struct__482_filter_values};
TypeUtils _SCSIM_struct__486_Utils = {struct__486_to_string,
	check_struct__486_string,
	string_to_struct__486,
	is_struct__486_allow_double_convertion,
	0,
	compare_struct__486_type,
	get_struct__486_signature,
	get_struct__486_filter_utils,
	struct__486_filter_size,
	struct__486_filter_values};
TypeUtils _SCSIM_array__491_Utils = {array__491_to_string,
	check_array__491_string,
	string_to_array__491,
	is_array__491_allow_double_convertion,
	0,
	compare_array__491_type,
	get_array__491_signature,
	get_array__491_filter_utils,
	array__491_filter_size,
	array__491_filter_values};
TypeUtils _SCSIM_struct__494_Utils = {struct__494_to_string,
	check_struct__494_string,
	string_to_struct__494,
	is_struct__494_allow_double_convertion,
	0,
	compare_struct__494_type,
	get_struct__494_signature,
	get_struct__494_filter_utils,
	struct__494_filter_size,
	struct__494_filter_values};
TypeUtils _SCSIM_struct__499_Utils = {struct__499_to_string,
	check_struct__499_string,
	string_to_struct__499,
	is_struct__499_allow_double_convertion,
	0,
	compare_struct__499_type,
	get_struct__499_signature,
	get_struct__499_filter_utils,
	struct__499_filter_size,
	struct__499_filter_values};
TypeUtils _SCSIM_struct__504_Utils = {struct__504_to_string,
	check_struct__504_string,
	string_to_struct__504,
	is_struct__504_allow_double_convertion,
	0,
	compare_struct__504_type,
	get_struct__504_signature,
	get_struct__504_filter_utils,
	struct__504_filter_size,
	struct__504_filter_values};
TypeUtils _SCSIM_struct__508_Utils = {struct__508_to_string,
	check_struct__508_string,
	string_to_struct__508,
	is_struct__508_allow_double_convertion,
	0,
	compare_struct__508_type,
	get_struct__508_signature,
	get_struct__508_filter_utils,
	struct__508_filter_size,
	struct__508_filter_values};
TypeUtils _SCSIM_array__513_Utils = {array__513_to_string,
	check_array__513_string,
	string_to_array__513,
	is_array__513_allow_double_convertion,
	0,
	compare_array__513_type,
	get_array__513_signature,
	get_array__513_filter_utils,
	array__513_filter_size,
	array__513_filter_values};
TypeUtils _SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils = {ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string,
	check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string,
	string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs,
	is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion,
	ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double,
	compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_type,
	get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature,
	get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_utils,
	ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_size,
	ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_values};
TypeUtils _SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils = {CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string,
	check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string,
	string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
	is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion,
	CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double,
	compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type,
	get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature,
	get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils,
	CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size,
	CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values};
TypeUtils _SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils = {Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string,
	check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string,
	string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
	is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion,
	Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double,
	compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type,
	get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature,
	get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils,
	Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size,
	Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values};
TypeUtils _SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils = {FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string,
	check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string,
	string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage,
	is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion,
	FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double,
	compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_type,
	get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature,
	get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_utils,
	FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_size,
	FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_values};
TypeUtils _SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
	check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
	string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
	is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion,
	Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
	compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type,
	get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
	get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils,
	Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size,
	Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values};
TypeUtils _SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
	check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
	string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
	is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion,
	CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
	compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type,
	get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
	get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils,
	CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size,
	CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values};
TypeUtils _SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
	check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
	string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
	is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion,
	HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
	compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type,
	get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
	get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils,
	HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size,
	HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values};
TypeUtils _SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
	check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
	string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
	is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion,
	HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
	compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type,
	get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
	get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils,
	HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size,
	HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values};
TypeUtils _SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
	check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
	string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
	is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion,
	Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
	compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type,
	get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
	get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils,
	Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size,
	Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values};
TypeUtils _SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils = {Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string,
	check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string,
	string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM,
	is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion,
	Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double,
	compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_type,
	get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature,
	get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils,
	Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size,
	Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values};
TypeUtils _SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils = {AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string,
	check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string,
	string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM,
	is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion,
	AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double,
	compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_type,
	get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature,
	get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils,
	AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size,
	AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values};
TypeUtils _SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils = {TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string,
	check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string,
	string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo,
	is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_allow_double_convertion,
	TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double,
	compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_type,
	get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature,
	get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_utils,
	TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_size,
	TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_values};

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
 ** struct__464
 ****************************************************************/
static void Fill_struct__464_StructSimValue(struct__464 * pStruct, StructSimValue * pValues) {
	/*m_leveltr label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->m_leveltr) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[0].m_pszName = "m_leveltr";
	/*m_mode label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_mode) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[1].m_pszName = "m_mode";
}

const char * struct__464_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__464_StructSimValue(((struct__464*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__464(const char* strValue, void* pValue) {
	static struct__464 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__464(&(rTemp), &(*((struct__464*)pValue)));
	Fill_struct__464_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__464(&(*((struct__464*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__464_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__464_StructSimValue((struct__464*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__464_allow_double_convertion() {
	return 0;
}


const char * get_struct__464_signature() {
	static StructSimValue values[2];
	Fill_struct__464_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__464_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__464_StructSimValue((struct__464*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__464_filter_values[2] = {"m_leveltr", "m_mode"};
int check_struct__464_string(const char* strValue) {
	static struct__464 rTemp;
	return string_to_struct__464(strValue, &rTemp);
}


/****************************************************************
 ** struct__469
 ****************************************************************/
static void Fill_struct__469_StructSimValue(struct__469 * pStruct, StructSimValue * pValues) {
	/*m_version label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[0].m_pszName = "m_version";
	/*n_total label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[1].m_pszName = "n_total";
	/*n_pig label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[2].m_pszName = "n_pig";
	/*q_media label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[3].m_pszName = "q_media";
	/*q_updown label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[4].m_pszName = "q_updown";
	/*q_link label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[5].m_pszName = "q_link";
	/*nid_bg label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "nid_bg";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*m_mcount label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[8].m_pszName = "m_mcount";
	/*m_dup label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[9].m_pszName = "m_dup";
}

const char * struct__469_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__469_StructSimValue(((struct__469*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__469(const char* strValue, void* pValue) {
	static struct__469 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__469(&(rTemp), &(*((struct__469*)pValue)));
	Fill_struct__469_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__469(&(*((struct__469*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__469_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__469_StructSimValue((struct__469*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__469_allow_double_convertion() {
	return 0;
}


const char * get_struct__469_signature() {
	static StructSimValue values[10];
	Fill_struct__469_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__469_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__469_StructSimValue((struct__469*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__469_filter_values[10] = {"m_version", "n_total", "n_pig", "q_media", "q_updown", "q_link", "nid_bg", "nid_c", "m_mcount", "m_dup"};
int check_struct__469_string(const char* strValue) {
	static struct__469 rTemp;
	return string_to_struct__469(strValue, &rTemp);
}


/****************************************************************
 ** struct__482
 ****************************************************************/
static void Fill_struct__482_StructSimValue(struct__482 * pStruct, StructSimValue * pValues) {
	/*boolean_ label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->boolean_) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "boolean_";
}

const char * struct__482_to_string(const void* pValue) {
	static StructSimValue values[1];
	Fill_struct__482_StructSimValue(((struct__482*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 1);
}

int string_to_struct__482(const char* strValue, void* pValue) {
	static struct__482 rTemp;
	int nResult = 0;
	static StructSimValue values[1];
	kcg_copy_struct__482(&(rTemp), &(*((struct__482*)pValue)));
	Fill_struct__482_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 1);
	if (nResult == 1)
		kcg_copy_struct__482(&(*((struct__482*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__482_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[1];
	Fill_struct__482_StructSimValue((struct__482*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 1);
}


int is_struct__482_allow_double_convertion() {
	return 0;
}


const char * get_struct__482_signature() {
	static StructSimValue values[1];
	Fill_struct__482_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 1);
}

FilterUtils get_struct__482_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[1];
	Fill_struct__482_StructSimValue((struct__482*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 1, strFilter);
}

const char * struct__482_filter_values[1] = {"boolean_"};
int check_struct__482_string(const char* strValue) {
	static struct__482 rTemp;
	return string_to_struct__482(strValue, &rTemp);
}


/****************************************************************
 ** struct__486
 ****************************************************************/
static void Fill_struct__486_StructSimValue(struct__486 * pStruct, StructSimValue * pValues) {
	/*header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__469_Utils;
	pValues[0].m_pszName = "header";
	/*flag label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->flag) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__482_Utils;
	pValues[1].m_pszName = "flag";
}

const char * struct__486_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__486_StructSimValue(((struct__486*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__486(const char* strValue, void* pValue) {
	static struct__486 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__486(&(rTemp), &(*((struct__486*)pValue)));
	Fill_struct__486_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__486(&(*((struct__486*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__486_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__486_StructSimValue((struct__486*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__486_allow_double_convertion() {
	return 0;
}


const char * get_struct__486_signature() {
	static StructSimValue values[2];
	Fill_struct__486_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__486_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__486_StructSimValue((struct__486*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__486_filter_values[2] = {"header", "flag"};
int check_struct__486_string(const char* strValue) {
	static struct__486 rTemp;
	return string_to_struct__486(strValue, &rTemp);
}


/****************************************************************
 ** array__491
 ****************************************************************/
void* array__491_projection(void** pValues, int nIndex) {
	return &((*(array__491*)pValues)[nIndex]);
}

const char * array__491_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__486_to_string, 8, array__491_projection);
}

int compare_array__491_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__486_type , 8, array__491_projection);
}

int is_array__491_allow_double_convertion() {
	return 0;
}

int string_to_array__491(const char* strValue, void* pValue) {
	static array__491 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__486, 8, array__491_projection);
	if (nResult == 1)
		kcg_copy_array__491(&(*((array__491*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__491_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__486_signature, 8);
}

FilterUtils get_array__491_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__486_Utils, strFilter, (void**)pValue, 8, array__491_projection);
}

int check_array__491_string(const char* strValue) {
	static array__491 rTemp;
	return string_to_array__491(strValue, &rTemp);
}


/****************************************************************
 ** struct__494
 ****************************************************************/
static void Fill_struct__494_StructSimValue(struct__494 * pStruct, StructSimValue * pValues) {
	/*headerflag label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->headerflag) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__491_Utils;
	pValues[0].m_pszName = "headerflag";
	/*additionalinformation label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->additionalinformation) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
	pValues[1].m_pszName = "additionalinformation";
}

const char * struct__494_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__494_StructSimValue(((struct__494*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__494(const char* strValue, void* pValue) {
	static struct__494 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__494(&(rTemp), &(*((struct__494*)pValue)));
	Fill_struct__494_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__494(&(*((struct__494*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__494_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__494_StructSimValue((struct__494*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__494_allow_double_convertion() {
	return 0;
}


const char * get_struct__494_signature() {
	static StructSimValue values[2];
	Fill_struct__494_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__494_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__494_StructSimValue((struct__494*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__494_filter_values[2] = {"headerflag", "additionalinformation"};
int check_struct__494_string(const char* strValue) {
	static struct__494 rTemp;
	return string_to_struct__494(strValue, &rTemp);
}


/****************************************************************
 ** struct__499
 ****************************************************************/
static void Fill_struct__499_StructSimValue(struct__499 * pStruct, StructSimValue * pValues) {
	/*q_dirlrbg label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_dirlrbg) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
	pValues[0].m_pszName = "q_dirlrbg";
	/*checkedbgmessage label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->checkedbgmessage) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__494_Utils;
	pValues[1].m_pszName = "checkedbgmessage";
}

const char * struct__499_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__499_StructSimValue(((struct__499*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__499(const char* strValue, void* pValue) {
	static struct__499 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__499(&(rTemp), &(*((struct__499*)pValue)));
	Fill_struct__499_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__499(&(*((struct__499*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__499_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__499_StructSimValue((struct__499*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__499_allow_double_convertion() {
	return 0;
}


const char * get_struct__499_signature() {
	static StructSimValue values[2];
	Fill_struct__499_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__499_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__499_StructSimValue((struct__499*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__499_filter_values[2] = {"q_dirlrbg", "checkedbgmessage"};
int check_struct__499_string(const char* strValue) {
	static struct__499 rTemp;
	return string_to_struct__499(strValue, &rTemp);
}


/****************************************************************
 ** struct__504
 ****************************************************************/
static void Fill_struct__504_StructSimValue(struct__504 * pStruct, StructSimValue * pValues) {
	/*Position_1 label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Position_1) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "Position_1";
}

const char * struct__504_to_string(const void* pValue) {
	static StructSimValue values[1];
	Fill_struct__504_StructSimValue(((struct__504*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 1);
}

int string_to_struct__504(const char* strValue, void* pValue) {
	static struct__504 rTemp;
	int nResult = 0;
	static StructSimValue values[1];
	kcg_copy_struct__504(&(rTemp), &(*((struct__504*)pValue)));
	Fill_struct__504_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 1);
	if (nResult == 1)
		kcg_copy_struct__504(&(*((struct__504*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__504_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[1];
	Fill_struct__504_StructSimValue((struct__504*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 1);
}


int is_struct__504_allow_double_convertion() {
	return 0;
}


const char * get_struct__504_signature() {
	static StructSimValue values[1];
	Fill_struct__504_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 1);
}

FilterUtils get_struct__504_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[1];
	Fill_struct__504_StructSimValue((struct__504*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 1, strFilter);
}

const char * struct__504_filter_values[1] = {"Position_1"};
int check_struct__504_string(const char* strValue) {
	static struct__504 rTemp;
	return string_to_struct__504(strValue, &rTemp);
}


/****************************************************************
 ** struct__508
 ****************************************************************/
static void Fill_struct__508_StructSimValue(struct__508 * pStruct, StructSimValue * pValues) {
	/*filteredbgmessage label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->filteredbgmessage) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__499_Utils;
	pValues[0].m_pszName = "filteredbgmessage";
	/*position label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->position) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__504_Utils;
	pValues[1].m_pszName = "position";
}

const char * struct__508_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__508_StructSimValue(((struct__508*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__508(const char* strValue, void* pValue) {
	static struct__508 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__508(&(rTemp), &(*((struct__508*)pValue)));
	Fill_struct__508_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__508(&(*((struct__508*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__508_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__508_StructSimValue((struct__508*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__508_allow_double_convertion() {
	return 0;
}


const char * get_struct__508_signature() {
	static StructSimValue values[2];
	Fill_struct__508_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__508_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__508_StructSimValue((struct__508*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__508_filter_values[2] = {"filteredbgmessage", "position"};
int check_struct__508_string(const char* strValue) {
	static struct__508 rTemp;
	return string_to_struct__508(strValue, &rTemp);
}


/****************************************************************
 ** array__513
 ****************************************************************/
void* array__513_projection(void** pValues, int nIndex) {
	return &((*(array__513*)pValues)[nIndex]);
}

const char * array__513_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__508_to_string, 20, array__513_projection);
}

int compare_array__513_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__508_type , 20, array__513_projection);
}

int is_array__513_allow_double_convertion() {
	return 0;
}

int string_to_array__513(const char* strValue, void* pValue) {
	static array__513 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__508, 20, array__513_projection);
	if (nResult == 1)
		kcg_copy_array__513(&(*((array__513*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__513_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__508_signature, 20);
}

FilterUtils get_array__513_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__508_Utils, strFilter, (void**)pValue, 20, array__513_projection);
}

int check_array__513_string(const char* strValue) {
	static array__513 rTemp;
	return string_to_array__513(strValue, &rTemp);
}


/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs
 ****************************************************************/
struct SimTypeVTable* pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable;
const char * ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void* pValue) {
	if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != 0 && pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptString, pValue);
	return array__513_to_string(pValue);
}

int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char* strValue, void* pValue) {
	if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != 0 && pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs rTemp;
		int nResult = pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__513(&(*((ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__513(strValue, pValue);
}

int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion() {
	if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__513_allow_double_convertion();
}

int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(double * nValue, const void* pValue) {
	if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != 0) {
		if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptLong, pValue));
		else if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptShort, pValue));
		else if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__513_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__513_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char* strValue) {
	static ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs rTemp;
	return string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(strValue, &rTemp);
}


/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
struct SimTypeVTable* pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable;
const char * CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue) {
	if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0 && pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptString, pValue);
	return struct__508_to_string(pValue);
}

int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue) {
	if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0 && pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
		int nResult = pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__508(&(*((CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__508(strValue, pValue);
}

int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion() {
	if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__508_allow_double_convertion();
}

int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void* pValue) {
	if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0) {
		if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__508_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__508_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue) {
	static CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
	return string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(strValue, &rTemp);
}


/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
struct SimTypeVTable* pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable;
const char * Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue) {
	if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0 && pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptString, pValue);
	return struct__504_to_string(pValue);
}

int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue) {
	if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0 && pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
		int nResult = pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__504(&(*((Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__504(strValue, pValue);
}

int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion() {
	if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__504_allow_double_convertion();
}

int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void* pValue) {
	if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != 0) {
		if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__504_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__504_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue) {
	static Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
	return string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(strValue, &rTemp);
}


/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage
 ****************************************************************/
struct SimTypeVTable* pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable;
const char * FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void* pValue) {
	if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != 0 && pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptString, pValue);
	return struct__499_to_string(pValue);
}

int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char* strValue, void* pValue) {
	if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != 0 && pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage rTemp;
		int nResult = pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__499(&(*((FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__499(strValue, pValue);
}

int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion() {
	if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__499_allow_double_convertion();
}

int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(double * nValue, const void* pValue) {
	if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != 0) {
		if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__499_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__499_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char* strValue) {
	static FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage rTemp;
	return string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_DIRLRBG__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Reverse";
	case Q_DIRLRBG__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Nominal";
	case Q_DIRLRBG__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Unknown";
	case Q_DIRLRBG__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Spare";
	default:
		return "?";
	}
}

int string_to_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimQ_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIRLRBG__Reverse") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Reverse") == 0)
		*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRLRBG__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRLRBG__Nominal") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Nominal") == 0)
		*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRLRBG__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRLRBG__Unknown") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Unknown") == 0)
		*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRLRBG__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRLRBG__Spare") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Spare") == 0)
		*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRLRBG__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_DIRLRBG__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case Q_DIRLRBG__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case Q_DIRLRBG__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case Q_DIRLRBG__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Reverse"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Nominal"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Unknown"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRLRBG__Spare"
		;
}

int check_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__200_mm";
	case M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__300_380_mm";
	case M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__550_mm";
	case M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__580_mm";
	case M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__680_mm";
	case M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__685_mm";
	case M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__730_mm";
	case M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__760_mm";
	case M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__840_mm";
	case M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__900_mm";
	case M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__915_mm";
	case M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__920_mm";
	case M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__960_mm";
	case M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__1100_mm";
	default:
		return "?";
	}
}

int string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_PLATFORM__200_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__200_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__300_380_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__300_380_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__550_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__550_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__580_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__580_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__680_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__680_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__685_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__685_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__730_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__730_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__760_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__760_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__840_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__840_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__900_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__900_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__915_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__915_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__920_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__920_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__960_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__960_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_PLATFORM__1100_mm") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__1100_mm") == 0)
		*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	case M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 4.0;
		break;
	case M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 5.0;
		break;
	case M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 6.0;
		break;
	case M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 7.0;
		break;
	case M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 8.0;
		break;
	case M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 9.0;
		break;
	case M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 10.0;
		break;
	case M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 11.0;
		break;
	case M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 12.0;
		break;
	case M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 13.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__200_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__300_380_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__550_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__580_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__680_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__685_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__730_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__760_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__840_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__900_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__915_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__920_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__960_mm"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__1100_mm"
		;
}

int check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::one_balise_in_the_group";
	case two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::two_balises_in_the_group";
	case tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::tree_balises_in_the_group";
	case four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::four_balises_in_the_group";
	case five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::five_balises_in_the_group";
	case six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::six_balises_in_the_group";
	case seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::seven_balises_in_the_group";
	case eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::eight_balises_in_the_group";
	default:
		return "?";
	}
}

int string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "one_balise_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::one_balise_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "two_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::two_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "tree_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::tree_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "four_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::four_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "five_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::five_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "six_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::six_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "seven_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::seven_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "eight_balises_in_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::eight_balises_in_the_group") == 0)
		*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	case five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 4.0;
		break;
	case six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 5.0;
		break;
	case seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 6.0;
		break;
	case eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 7.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::one_balise_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::two_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::tree_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::four_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::five_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::six_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::seven_balises_in_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::eight_balises_in_the_group"
		;
}

int check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_1th";
	case I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_2nd";
	case I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_3rd";
	case I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_4th";
	case I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_5th";
	case I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_6th";
	case I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_7th";
	case I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_8th";
	case none_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::none";
	default:
		return "?";
	}
}

int string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "I_am_the_1th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_1th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_2nd") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_2nd") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_3rd") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_3rd") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_4th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_4th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_5th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_5th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_6th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_6th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_7th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_7th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "I_am_the_8th") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_8th") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "none") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::none") == 0)
		*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = none_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	case I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 4.0;
		break;
	case I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 5.0;
		break;
	case I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 6.0;
		break;
	case I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 7.0;
		break;
	case none_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 8.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_1th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_2nd"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_3rd"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_4th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_5th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_6th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_7th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_8th"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::none"
		;
}

int check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Balise";
	case Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Loop";
	default:
		return "?";
	}
}

int string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_MEDIA__Balise") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Balise") == 0)
		*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_MEDIA__Loop") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Loop") == 0)
		*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Balise"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Loop"
		;
}

int check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Down_link_telegram";
	case Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Up_link_telegram";
	default:
		return "?";
	}
}

int string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_UPDOWN__Down_link_telegram") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Down_link_telegram") == 0)
		*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_UPDOWN__Up_link_telegram") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Up_link_telegram") == 0)
		*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Down_link_telegram"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Up_link_telegram"
		;
}

int check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Unlinked";
	case Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Linked";
	default:
		return "?";
	}
}

int string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINK__Unlinked") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Unlinked") == 0)
		*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_LINK__Linked") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Linked") == 0)
		*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Unlinked"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Linked"
		;
}

int check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
		int nResult = pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0) {
		if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
		int nResult = pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0) {
		if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_never_fits_any_message_of_the_group";
	case M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group";
	default:
		return "?";
	}
}

int string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_MCOUNT__The_telegram_never_fits_any_message_of_the_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_never_fits_any_message_of_the_group") == 0)
		*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group") == 0)
		*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_never_fits_any_message_of_the_group"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group"
		;
}

int check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__No_duplicates";
	case _1_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__";
	case M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__";
	default:
		return "?";
	}
}

int string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_DUP__No_duplicates") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__No_duplicates") == 0)
		*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__") == 0)
		*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = _1_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__") == 0)
		*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case _1_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__No_duplicates"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__"
		;
}

int check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_0";
	case M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_NTC_specified_by_NID_NTC";
	case M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_1";
	case M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_2";
	case M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_3";
	default:
		return "?";
	}
}

int string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_LEVELTR__Level_0") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_0") == 0)
		*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_LEVELTR__Level_NTC_specified_by_NID_NTC") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_NTC_specified_by_NID_NTC") == 0)
		*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_LEVELTR__Level_1") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_1") == 0)
		*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_LEVELTR__Level_2") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_2") == 0)
		*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_LEVELTR__Level_3") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_3") == 0)
		*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	case M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 4.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_0"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_NTC_specified_by_NID_NTC"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_1"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_2"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_3"
		;
}

int check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Full_Supervision";
	case M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__On_Sight";
	case M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Staff_Responsible";
	case M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Shunting";
	case M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Unfitted";
	case M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Sleeping";
	case M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Stand_By";
	case M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Trip";
	case M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Post_Trip";
	case M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__System_Failure";
	case M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Isolation";
	case M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Non_Leading";
	case M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Limited_Supervision";
	case M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__National_System";
	case M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Reversing";
	case M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Passive_Shunting";
	default:
		return "?";
	}
}

int string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_MODE__Full_Supervision") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Full_Supervision") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__On_Sight") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__On_Sight") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Staff_Responsible") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Staff_Responsible") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Shunting") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Shunting") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Unfitted") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Unfitted") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Sleeping") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Sleeping") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Stand_By") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Stand_By") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Trip") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Trip") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Post_Trip") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Post_Trip") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__System_Failure") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__System_Failure") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Isolation") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Isolation") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Non_Leading") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Non_Leading") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Limited_Supervision") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Limited_Supervision") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__National_System") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__National_System") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Reversing") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Reversing") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "M_MODE__Passive_Shunting") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Passive_Shunting") == 0)
		*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	case M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 4.0;
		break;
	case M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 5.0;
		break;
	case M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 6.0;
		break;
	case M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 7.0;
		break;
	case M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 8.0;
		break;
	case M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 9.0;
		break;
	case M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 10.0;
		break;
	case M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 11.0;
		break;
	case M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 12.0;
		break;
	case M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 13.0;
		break;
	case M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 14.0;
		break;
	case M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 15.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Full_Supervision"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__On_Sight"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Staff_Responsible"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Shunting"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Unfitted"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Sleeping"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Stand_By"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Trip"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Post_Trip"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__System_Failure"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Isolation"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Non_Leading"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Limited_Supervision"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__National_System"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Reversing"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Passive_Shunting"
		;
}

int check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;
const char * Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue) {
	if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Reverse";
	case Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Nominal";
	case Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Unknown";
	case Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		return "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Spare";
	default:
		return "?";
	}
}

int string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue) {
	if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != 0 && pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;		int nResult = pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIRTRAIN__Reverse") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Reverse") == 0)
		*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRTRAIN__Nominal") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Nominal") == 0)
		*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRTRAIN__Unknown") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Unknown") == 0)
		*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else if(strcmp(strValue, "Q_DIRTRAIN__Spare") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Spare") == 0)
		*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue) = Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable;
	else 
		return 0;
	return 1;
}

int is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion() {
	return 1;
}


int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue)) {
	case Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 0.0;
		break;
	case Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 1.0;
		break;
	case Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 2.0;
		break;
	case Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable:
		*nValue = 3.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	const Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable* pCurrent = (const Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue;
	if (string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Reverse"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Nominal"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Unknown"
		"|DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Spare"
		;
}

int check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue) {
	static Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
	return string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(strValue, &rTemp);
}


/****************************************************************
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
struct SimTypeVTable* pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;
const char * CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue) {
	if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue);
	return struct__494_to_string(pValue);
}

int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue) {
	if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
		int nResult = pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__494(&(*((CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__494(strValue, pValue);
}

int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion() {
	if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__494_allow_double_convertion();
}

int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void* pValue) {
	if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__494_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__494_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue) {
	static CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
	return string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(strValue, &rTemp);
}


/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
struct SimTypeVTable* pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;
const char * HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue) {
	if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue);
	return array__491_to_string(pValue);
}

int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue) {
	if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
		int nResult = pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__491(&(*((HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__491(strValue, pValue);
}

int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion() {
	if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__491_allow_double_convertion();
}

int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void* pValue) {
	if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__491_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__491_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue) {
	static HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
	return string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(strValue, &rTemp);
}


/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
struct SimTypeVTable* pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;
const char * HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue) {
	if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue);
	return struct__486_to_string(pValue);
}

int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue) {
	if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
		int nResult = pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__486(&(*((HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__486(strValue, pValue);
}

int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion() {
	if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__486_allow_double_convertion();
}

int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void* pValue) {
	if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__486_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__486_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue) {
	static HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
	return string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(strValue, &rTemp);
}


/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
struct SimTypeVTable* pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;
const char * Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue) {
	if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue);
	return struct__482_to_string(pValue);
}

int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue) {
	if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0 && pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
		int nResult = pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__482(&(*((Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__482(strValue, pValue);
}

int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion() {
	if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__482_allow_double_convertion();
}

int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void* pValue) {
	if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != 0) {
		if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptLong, pValue));
		else if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptShort, pValue));
		else if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__482_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__482_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue) {
	static Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
	return string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(strValue, &rTemp);
}


/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
struct SimTypeVTable* pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable;
const char * Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue) {
	if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0 && pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptString, pValue);
	return struct__469_to_string(pValue);
}

int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue) {
	if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0 && pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Header_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
		int nResult = pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__469(&(*((Header_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__469(strValue, pValue);
}

int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion() {
	if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__469_allow_double_convertion();
}

int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void* pValue) {
	if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0) {
		if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__469_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__469_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue) {
	static Header_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
	return string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(strValue, &rTemp);
}


/****************************************************************
 ** AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
struct SimTypeVTable* pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable;
const char * AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue) {
	if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0 && pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptString, pValue);
	switch (*((AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue)) {
	case value1_DetermineBGOrientation_LRBG_DataDctionary_BTM:
		return "DetermineBGOrientation_LRBG::DataDctionary::BTM::value1";
	default:
		return "?";
	}
}

int string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue) {
	if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != 0 && pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;		int nResult = pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "value1") == 0 || strcmp(strValue, "DetermineBGOrientation_LRBG::DataDctionary::BTM::value1") == 0)
		*((AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue) = value1_DetermineBGOrientation_LRBG_DataDctionary_BTM;
	else 
		return 0;
	return 1;
}

int is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion() {
	return 1;
}


int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void* pValue) {
	switch (*((AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue)) {
	case value1_DetermineBGOrientation_LRBG_DataDctionary_BTM:
		*nValue = 0.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_type(int* pResult, const char* toCompare, const void* pValue) {
	static AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
	const AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM* pCurrent = (const AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue;
	if (string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature() {
	return "E"
		"|DetermineBGOrientation_LRBG::DataDctionary::BTM::value1"
		;
}

int check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue) {
	static AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
	return string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(strValue, &rTemp);
}


/****************************************************************
 ** TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo
 ****************************************************************/
struct SimTypeVTable* pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable;
const char * TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string(const void* pValue) {
	if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != 0 && pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptString, pValue);
	return struct__464_to_string(pValue);
}

int string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(const char* strValue, void* pValue) {
	if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != 0 && pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo rTemp;
		int nResult = pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__464(&(*((TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__464(strValue, pValue);
}

int is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_allow_double_convertion() {
	if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__464_allow_double_convertion();
}

int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double(double * nValue, const void* pValue) {
	if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != 0) {
		if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__464_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__464_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string(const char* strValue) {
	static TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo rTemp;
	return string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(strValue, &rTemp);
}


