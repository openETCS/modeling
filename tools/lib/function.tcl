

proc Removing_Files {DEL} {
	file delete -force -- $DEL
}
proc Build_Source_Files {SCADE CODE PATH_TO_ETP ROOT ROOT_NAME CONF CONF_NAME} {
	exec $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
}

proc Copying_Files {PATH_TO_TEMPLATE_C PATH_TO_TEMPLATE_H PATH_TO} {
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
}

proc Delete_and_Create_Folder {DEL_DIR MKDIR} {
	file delete -force -- $DEL_DIR
	file mkdir $MKDIR
}

proc Gathering_and_Copying {PATH_TO MKDIR} {
	set gathering_all_files [
	    concat [
		glob -directory $PATH_TO *]]
	foreach copy_element $gathering_all_files {
	    file copy -force -- $copy_element $MKDIR
	}
}