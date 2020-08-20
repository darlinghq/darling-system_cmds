project(system_cmds-chkpasswd)

add_darling_executable(chkpasswd
	file_passwd.c
	nis_passwd.c
	od_passwd.c
	pam_passwd.c
	passwd.c
	stringops.c
)

target_link_libraries(chkpasswd
	pam.2
	CoreFoundation
	OpenDirectory
)

install(FILES chkpasswd.pam DESTINATION libexec/darling/etc/pam.d RENAME chkpasswd)
