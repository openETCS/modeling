#initialization of variables
set basedir "[file dirname [info script]]"
source "$basedir/lib/init_values.tcl"
#package require function 1.0

proc Removing_Files {DEL} {
	puts "Removing directory: $DEL\n"
	file delete -force -- $DEL
}
proc Build_Source_Files {SCADE CODE PATH_TO_ETP ROOT ROOT_NAME CONF CONF_NAME} {
	puts "Generating SCADE code for $CONF_NAME\n"
	exec $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
}

proc Copying_Files {PATH_TO_TEMPLATE_C PATH_TO_TEMPLATE_H PATH_TO} {
	puts "copying templates to: $PATH_TO\n"
	file copy -force -- $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO
}

proc delete_DC_and_DH_files {DEL_DC DEL_DH} {
	file delete -- $DEL_DC
	file delete -- $DEL_DH
}

proc rename_DC_and_DH_files {RENAME_ProbeEVC_EnvSim_DH ProbeEVC_EnvSim_H RENAME_ProbeSDM_EnvSim_DH ProbeSDM_EnvSim_H RENAME_ProbeEVC_EnvSim_DC ProbeEVC_EnvSim_C RENAME_ProbeSDM_EnvSim_DC ProbeSDM_EnvSim_C} {
	file rename -force -- $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H
	file rename -force -- $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H
	file rename -force -- $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C
	file rename -force -- $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C
}

proc checking_and_copying_files {setSearch BUILD_DIR_libraries BUILD_DIR_Char_to_Int_C BUILD_DIR_Int_to_Char_C BUILD_DIR_kcg_assign_C BUILD_DIR_kcg_conv_H PATH_TO} {
	if {$setSearch=="KCG_GreenField"} {
		if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
			puts stderr "Could not copy files for KCG_GreenField\n$fid"
			puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
			exit 1
			}
		}
	if {$setSearch=="ERSA_EVC_Testrunner"} {
		if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
			 puts stderr "Could not copy files for ERSA_EVC_Testrunner\n$fid"
			 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
			 exit 1
			 }
		}
	if {$setSearch=="KCG-Releases"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for KCG-Releases\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
	if {$setSearch=="Trackside"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for Trackside\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
	if {$setSearch=="Trainside"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for Trainside\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
}

proc Delete_and_Create_Folder {DEL_DIR MKDIR setSearch} {
	if {$setSearch=="KCG_ERSA"} {
		puts "deletion and creation of folders for KCG_ERSA\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
	if {$setSearch=="KCG_GreenField"} {
		puts "deletion and creation of folders for KCG_GreenField\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
	if {$setSearch=="KCG_Releases"} {
		puts "deletion and creation of folders for KCG_Releases\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
		}

proc Gathering_and_Copying {PATH_TO MKDIR} {
	set gathering_all_files [
	    concat [
		glob -directory $PATH_TO *]]
	foreach copy_element $gathering_all_files {
	    file copy -force -- $copy_element $MKDIR
	}
}

proc Testing_SCADE_PATH {} {
	if {![catch {exec scade -version}] || [lindex $::errorCode 0] eq "NONE"} {
	    puts  "'scade' is in PATH available"
	} else {
		puts stderr "You should add SCADE to your PATH variable"
	}
}

#you should run this code in cygwin
#example: wish main.tcl

#checking if SCADE is in PATH
Testing_SCADE_PATH

#First step
#removing directories
Removing_Files $delete_ERSA_EVC_IP_DMI
Removing_Files $delete_KCG_GreenField
Removing_Files $delete_KCG_Releases
Removing_Files $delete_Trackside
Removing_Files $delete_Trainside

#Second step
#generation of code
Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_EVC;
Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_Releases;
Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trackside $CONF $CONF_NAME_Trackside
Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trainside $CONF $CONF_NAME_Trainside


#Third step
#copying of templates RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
#copying files RemoteDMIBus_EnvSim.c RemoteDMIBus_EnvSim.h from PATH_TO_TEMPLATE to PATH_TO_ERSA_EVC_Testrunner
puts "copying templates  RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh\n"
Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_ERSA_EVC_Testrunner
Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_GreenField
Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_Releases
Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trackside
Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trainside


#removing of RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
puts "removing of RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh\n"
delete_DC_and_DH_files $DEL_RemoteDMIBus_EnvSim_DC $DEL_RemoteDMIBus_EnvSim_DH
delete_DC_and_DH_files $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DC $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DH
delete_DC_and_DH_files $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DC $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DH
delete_DC_and_DH_files $Trainside_DEL_RemoteDMIBus_EnvSim_DC $Trainside_DEL_RemoteDMIBus_EnvSim_DH
delete_DC_and_DH_files $Trackside_DEL_RemoteDMIBus_EnvSim_DC $Trackside_DEL_RemoteDMIBus_EnvSim_DH


#renaming of ProbeEVC_EnvSim.dh ProbeSDM_EnvSim.dh to ProbeEVC_EnvSim.h ProbeSDM_EnvSim.h
puts "renaming of ProbeEVC_EnvSim.dh ProbeSDM_EnvSim.dh to ProbeEVC_EnvSim.h ProbeSDM_EnvSim.h\n"
rename_DC_and_DH_files $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C
rename_DC_and_DH_files $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DH $KCG_GreenField_ProbeEVC_EnvSim_H $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DH $KCG_GreenField_ProbeSDM_EnvSim_H $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DC $KCG_GreenField_ProbeEVC_EnvSim_C $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DC $KCG_GreenField_ProbeSDM_EnvSim_C
rename_DC_and_DH_files $KCG_Releases_RENAME_ProbeEVC_EnvSim_DH $KCG_Releases_ProbeEVC_EnvSim_H $KCG_Releases_RENAME_ProbeSDM_EnvSim_DH $KCG_Releases_ProbeSDM_EnvSim_H $KCG_Releases_RENAME_ProbeEVC_EnvSim_DC $KCG_Releases_ProbeEVC_EnvSim_C $KCG_Releases_RENAME_ProbeSDM_EnvSim_DC $KCG_Releases_ProbeSDM_EnvSim_C
rename_DC_and_DH_files $Trackside_RENAME_ProbeEVC_EnvSim_DH $Trackside_ProbeEVC_EnvSim_H $Trackside_RENAME_ProbeSDM_EnvSim_DH $Trackside_ProbeSDM_EnvSim_H $Trackside_RENAME_ProbeEVC_EnvSim_DC $Trackside_ProbeEVC_EnvSim_C $Trackside_RENAME_ProbeSDM_EnvSim_DC $Trackside_ProbeSDM_EnvSim_C
rename_DC_and_DH_files $Trainside_RENAME_ProbeEVC_EnvSim_DH $Trainside_ProbeEVC_EnvSim_H $Trainside_RENAME_ProbeSDM_EnvSim_DH $Trainside_ProbeSDM_EnvSim_H $Trainside_RENAME_ProbeEVC_EnvSim_DC $Trainside_ProbeEVC_EnvSim_C $Trainside_RENAME_ProbeSDM_EnvSim_DC $Trainside_ProbeSDM_EnvSim_C


#checking and copying files
checking_and_copying_files "ERSA_EVC_Testrunner" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_ERSA_EVC_Testrunner
checking_and_copying_files "KCG_GreenField" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_GreenField
checking_and_copying_files "KCG-Releases" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_Releases
checking_and_copying_files "Trackside" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_Trackside
checking_and_copying_files "Trainside" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_Trainside


#Deletion and Creation of folders
Delete_and_Create_Folder $DEL_DIR_KCG_ERSA $MKDIR_KCG_ERSA "KCG_ERSA"
Delete_and_Create_Folder $KCG_GreenField_DEL_DIR_KCG_ERSA $KCG_GreenField_MKDIR_KCG_ERSA "KCG_GreenField"
Delete_and_Create_Folder $KCG_Releases_DEL_DIR_KCG_ERSA $KCG_Releases_MKDIR_KCG_ERSA "KCG_Releases"
Delete_and_Create_Folder $Trackside_DEL_DIR_KCG_ERSA $Trackside_MKDIR_KCG_ERSA
Delete_and_Create_Folder $Trainside_DEL_DIR_KCG_ERSA $Trainside_MKDIR_KCG_ERSA


#copy all files from PATH_TO_ERSA_EVC_Testrunner to MKDIR_KCG_ERSA
#gathering all files in PATH_TO_ERSA_EVC_Testrunner
puts "gathering all files to $MKDIR_KCG_ERSA\n"
Gathering_and_Copying $PATH_TO_ERSA_EVC_Testrunner $MKDIR_KCG_ERSA
puts "gathering all files to $KCG_GreenField_MKDIR_KCG_ERSA\n"
Gathering_and_Copying $PATH_TO_KCG_GreenField $KCG_GreenField_MKDIR_KCG_ERSA
puts "gathering all files to $KCG_Releases_MKDIR_KCG_ERSA\n"
Gathering_and_Copying $PATH_TO_KCG_Releases $KCG_Releases_MKDIR_KCG_ERSA
puts "gathering all files to $Trackside_MKDIR_KCG_ERSA\n"
Gathering_and_Copying $PATH_TO_Trackside $Trackside_MKDIR_KCG_ERSA
puts "gathering all files to $Trainside_MKDIR_KCG_ERSA\n"
Gathering_and_Copying $PATH_TO_Trainside $Trainside_MKDIR_KCG_ERSA


puts "Done\n"
