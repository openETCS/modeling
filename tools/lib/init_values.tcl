proc Checking_Directory {} {
	cd "../../"

	set PARENT_DIR [pwd]
	catch {file exists $PARENT_DIR/modeling} fid
	catch {file exists $PARENT_DIR/srcAndBinary} fid2


	if {$fid==1 && $fid2==1} {
		puts "Both directories are setup correctly\n"
		puts "Working\n"
		set MODEL_ROOT "modeling"
		set srcAndBinary_ROOT "srcAndBinary"
		return [list "$PARENT_DIR/$MODEL_ROOT" "$PARENT_DIR/$srcAndBinary_ROOT"]
	} else {
		puts "Both directories 'PARENT_DIR/modeling' and 'PARENT_DIR/srcAndBinary' must have the same parent folder\n"
		exit
	}
}

set List_directories [Checking_Directory]


#setting root directories
set 1_Modelling_ROOT [lindex $List_directories 0]
set 2_srcAndBinary [lindex $List_directories 1]


set delete_ERSA_EVC_IP_DMI $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner
set delete_Trackside $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside
set delete_Trainside $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside
set delete_KCG_GreenField $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField
set delete_KCG_Releases $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases


#settings for scade interface
set SCADE "SCADE"
set CODE "-code"

set PATH_TO_ETP $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/Demonstrators.etp
set PATH_TO_ETP_openETCS_EVC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/openETCS_EVC.etp

set ROOT "-root"
set ROOT_NAME "ERSA_EVC_Testrunner::ROOT_EVC"
set ROOT_NAME_EVC "EVC"
set ROOT_NAME_Trackside "GreenDemonstrator::Trackside::Trackside"
set ROOT_NAME_Trainside "GreenDemonstrator::Trainside::Trainside"

set CONF "-conf"
set CONF_NAME "ERSA_Testrunner_CodeGeneration"
set CONF_NAME_EVC "KCG_GreenField"
set CONF_NAME_Releases "KCG-Releases"
set CONF_NAME_Trackside "GreenTrackside"
set CONF_NAME_Trainside "GreenTrainside"


#copying of templates RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
set PATH_TO_TEMPLATE_C $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.c
set PATH_TO_TEMPLATE_H $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.h
set PATH_TO_ERSA_EVC_Testrunner $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner
set PATH_TO_KCG_GreenField $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField
set PATH_TO_KCG_Releases $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases
set PATH_TO_Trackside $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside
set PATH_TO_Trainside $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside

#deletion of .dh and .dc files
set DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dc
set DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dh
set KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/RemoteDMIBus_EnvSim.dc
set KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/RemoteDMIBus_EnvSim.dh
set KCG_Releases_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/RemoteDMIBus_EnvSim.dc
set KCG_Releases_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/RemoteDMIBus_EnvSim.dh
set Trainside_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/RemoteDMIBus_EnvSim.dc
set Trainside_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/RemoteDMIBus_EnvSim.dh
set Trackside_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/RemoteDMIBus_EnvSim.dc
set Trackside_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/RemoteDMIBus_EnvSim.dh

#renaming of copied files
set RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.dh
set RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.dh
set ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.h
set ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.h

set KCG_GreenField_RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeEVC_EnvSim.dh
set KCG_GreenField_RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeSDM_EnvSim.dh
set KCG_GreenField_ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeEVC_EnvSim.h
set KCG_GreenField_ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeSDM_EnvSim.h

set KCG_Releases_RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeEVC_EnvSim.dh
set KCG_Releases_RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeSDM_EnvSim.dh
set KCG_Releases_ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeEVC_EnvSim.h
set KCG_Releases_ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeSDM_EnvSim.h

set Trackside_RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeEVC_EnvSim.dh
set Trackside_RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeSDM_EnvSim.dh
set Trackside_ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeEVC_EnvSim.h
set Trackside_ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeSDM_EnvSim.h

set Trainside_RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeEVC_EnvSim.dh
set Trainside_RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeSDM_EnvSim.dh
set Trainside_ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeEVC_EnvSim.h
set Trainside_ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeSDM_EnvSim.h







set RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.dc
set RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.dc
set ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.c
set ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.c

set KCG_GreenField_RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeEVC_EnvSim.dc
set KCG_GreenField_RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeSDM_EnvSim.dc
set KCG_GreenField_ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeEVC_EnvSim.c
set KCG_GreenField_ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/ProbeSDM_EnvSim.c

set KCG_Releases_RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeEVC_EnvSim.dc
set KCG_Releases_RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeSDM_EnvSim.dc
set KCG_Releases_ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeEVC_EnvSim.c
set KCG_Releases_ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/ProbeSDM_EnvSim.c

set Trackside_RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeEVC_EnvSim.dc
set Trackside_RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeSDM_EnvSim.dc
set Trackside_ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeEVC_EnvSim.c
set Trackside_ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/ProbeSDM_EnvSim.c

set Trainside_RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeEVC_EnvSim.dc
set Trainside_RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeSDM_EnvSim.dc
set Trainside_ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeEVC_EnvSim.c
set Trainside_ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/ProbeSDM_EnvSim.c






set BUILD_DIR_libraries $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/libraries
set BUILD_DIR_Char_to_Int_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Char_to_Int.c
set BUILD_DIR_Int_to_Char_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Int_to_Char.c
set BUILD_DIR_kcg_assign_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_assign.h
set BUILD_DIR_kcg_conv_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_conv.h



set APPENED_srcAndBinary "GreenDemonstrator/src/OBU/Generated_Code/KCG-ERSA"
set KCG_GreenField_APPENED_srcAndBinary "GreenDemonstrator/src/OBU/Generated_Code/KCG_GreenField"
set KCG_Releases_APPENED_srcAndBinary "GreenDemonstrator/src/OBU/Generated_Code/KCG-Releases"
set Trackside_APPENED_srcAndBinary "GreenDemonstrator/src/Track/Generated_Code/KCG-Raspberry"
set Trainside_APPENED_srcAndBinary "tree/master/GreenDemonstrator/src/OBU/Generated_Code/KCG_GreenField"

#deletion and creation of srcAndBinary directories
set DEL_DIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary
set MKDIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary


set KCG_GreenField_DEL_DIR_KCG_ERSA $2_srcAndBinary/$KCG_GreenField_APPENED_srcAndBinary
set KCG_GreenField_MKDIR_KCG_ERSA $2_srcAndBinary/$KCG_GreenField_APPENED_srcAndBinary

set KCG_Releases_DEL_DIR_KCG_ERSA $2_srcAndBinary/$KCG_Releases_APPENED_srcAndBinary
set KCG_Releases_MKDIR_KCG_ERSA $2_srcAndBinary/$KCG_Releases_APPENED_srcAndBinary

set Trackside_DEL_DIR_KCG_ERSA $2_srcAndBinary/$Trackside_APPENED_srcAndBinary
set Trackside_MKDIR_KCG_ERSA $2_srcAndBinary/$Trackside_APPENED_srcAndBinary

set Trainside_DEL_DIR_KCG_ERSA $2_srcAndBinary/$Trainside_APPENED_srcAndBinary
set Trainside_MKDIR_KCG_ERSA $2_srcAndBinary/$Trainside_APPENED_srcAndBinary
