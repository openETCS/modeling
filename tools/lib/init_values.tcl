#main root
cd "../../modeling"

set 1_Modelling_ROOT [pwd]

puts $1_Modelling_ROOT

set delete_ERSA_EVC_IP_DMI $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner
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

set CONF "-conf"
set CONF_NAME "ERSA_Testrunner_CodeGeneration"
set CONF_NAME_EVC "KCG_GreenField"
set CONF_NAME_Releases "KCG-Releases"


#copying of templates RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
set PATH_TO_TEMPLATE_C $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.c
set PATH_TO_TEMPLATE_H $1_Modelling_ROOT/test/EnvSim/libenvsim/src/scade/RemoteDMIBus_EnvSim.h
set PATH_TO_ERSA_EVC_Testrunner $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner
set PATH_TO_KCG_GreenField $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField
set PATH_TO_KCG_Releases $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases

#deletion of .dh and .dc files
set DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dc
set DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/RemoteDMIBus_EnvSim.dh
set KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/RemoteDMIBus_EnvSim.dc
set KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/RemoteDMIBus_EnvSim.dh
set KCG_Releases_DEL_RemoteDMIBus_EnvSim_DC $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/RemoteDMIBus_EnvSim.dc
set KCG_Releases_DEL_RemoteDMIBus_EnvSim_DH $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/RemoteDMIBus_EnvSim.dh

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


set BUILD_DIR_libraries $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/libraries
set BUILD_DIR_Char_to_Int_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Char_to_Int.c
set BUILD_DIR_Int_to_Char_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/Int_to_Char.c
set BUILD_DIR_kcg_assign_C $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_assign.h
set BUILD_DIR_kcg_conv_H $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Demonstrators/build/include/kcg_conv.h

#part of main root
cd "../srcAndBinary"

set 2_srcAndBinary [pwd]

puts $2_srcAndBinary

set APPENED_srcAndBinary "Green openETCS Non-Vital Demonstrator/Source Code/Source Code ETCS Onboard Unit System/Generated_Code/KCG-ERSA"
set KCG_GreenField_APPENED_srcAndBinary "Green openETCS Non-Vital Demonstrator/Source Code/Source Code ETCS Onboard Unit System/Generated_Code/KCG_GreenField"
set KCG_Releases_APPENED_srcAndBinary "Green openETCS Non-Vital Demonstrator/Source Code/Source Code ETCS Onboard Unit System/Generated_Code/KCG-Releases"

#deletion and creation of srcAndBinary directories
set DEL_DIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary
set MKDIR_KCG_ERSA $2_srcAndBinary/$APPENED_srcAndBinary


set KCG_GreenField_DEL_DIR_KCG_ERSA $2_srcAndBinary/$KCG_GreenField_APPENED_srcAndBinary
set KCG_GreenField_MKDIR_KCG_ERSA $2_srcAndBinary/$KCG_GreenField_APPENED_srcAndBinary

set KCG_Releases_DEL_DIR_KCG_ERSA $2_srcAndBinary/$KCG_Releases_APPENED_srcAndBinary
set KCG_Releases_MKDIR_KCG_ERSA $2_srcAndBinary/$KCG_Releases_APPENED_srcAndBinary
