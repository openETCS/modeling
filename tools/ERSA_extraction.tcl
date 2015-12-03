#you should run this code in cygwin
#example: wish main.tcl

# Declare the auto_path variable to allow tcl to find the files
cd ".."

set 1_Modelling_ROOT [pwd]

puts "Working\n"

#First step

set delete_dir $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_IP_DMI

#removing directory ERSA_EVC_IP_DMI
file delete -force -- $delete_dir

#Second step
#set Tester "SCADE -code D:/1_Modelling/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/Demonstrators.etp -node ERSA_CodeGeneration -all"
set SCADE "SCADE"
set CODE "-code"

set PATH_TO_ETP $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/Demonstrators.etp
set ROOT "-root"
set ROOT_NAME "ERSA_EVC_Testrunner::ROOT_EVC"
set CONF "-conf"
set CONF_NAME "ERSA_Testrunner_CodeGeneration"

#generation of ERSA_Testrunner code
exec $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;

#Third step
#copying of templates RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh


set PATH_TO_TEMPLATE_C $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.c
set PATH_TO_TEMPLATE_H $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.h
set PATH_TO_ERSA_EVC_Testrunner $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner
#copying files RemoteDMIBus_EnvSim.c RemoteDMIBus_EnvSim.h from PATH_TO_TEMPLATE to PATH_TO_ERSA_EVC_Testrunner
file copy -force -- $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_ERSA_EVC_Testrunner


set DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dc
set DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dh
#removing of RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
file delete -- $DEL_RemoteDMIBus_EnvSim_DC
file delete -- $DEL_RemoteDMIBus_EnvSim_DH


set RENAME_ProbeEVC_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.dh
set RENAME_ProbeSDM_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.dh
set ProbeEVC_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.h
set ProbeSDM_EnvSim_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.h


set RENAME_ProbeEVC_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.dc
set RENAME_ProbeSDM_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.dc
set ProbeEVC_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeEVC_EnvSim.c
set ProbeSDM_EnvSim_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/ProbeSDM_EnvSim.c
#renaming of ProbeEVC_EnvSim.dh ProbeSDM_EnvSim.dh to ProbeEVC_EnvSim.h ProbeSDM_EnvSim.h
file rename -force -- $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H
file rename -force -- $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H

#renaming of ProbeEVC_EnvSim.dc ProbeSDM_EnvSim.dc to ProbeEVC_EnvSim.c ProbeSDM_EnvSim.c
file rename -force -- $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C
file rename -force -- $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C

#copying content of build directory BUILD_DIR to PATH_TO_ERSA_EVC_Testrunner
set BUILD_DIR_libraries $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/libraries
set BUILD_DIR_Char_to_Int_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Char_to_Int.c
set BUILD_DIR_Int_to_Char_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Int_to_Char.c
set BUILD_DIR_kcg_assign_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_assign.h
set BUILD_DIR_kcg_conv_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_conv.h


#checking and copying files
if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_ERSA_EVC_Testrunner} fid] } {
   puts stderr "Could not copy files\n$fid"
   puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
   exit 1
 }



cd "../srcAndBinary"

set 2_srcAndBinary [pwd]

#remove all files in folder DEL_DIR_KCG_ERSA
set APPENED_srcAndBinary "Green openETCS Non-Vital Demonstrator/Source Code/Source Code ETCS Onboard Unit System/Generated_Code/KCG-ERSA"
set DEL_DIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary
set MKDIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary
file delete -force -- $DEL_DIR_KCG_ERSA
file mkdir $MKDIR_KCG_ERSA

#copy all files from PATH_TO_ERSA_EVC_Testrunner to MKDIR_KCG_ERSA
#gathering all files in PATH_TO_ERSA_EVC_Testrunner
set gathering_all_files [
    concat [
	glob -directory $PATH_TO_ERSA_EVC_Testrunner *]]

#copying them to MKDIR_KCG_ERSA
foreach copy_element $gathering_all_files {
    file copy -force -- $copy_element $MKDIR_KCG_ERSA
}

puts "Done\n"

