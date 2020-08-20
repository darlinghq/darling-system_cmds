project(system_cmds-passwd)

add_darling_executable(passwd
	file_passwd.c
	nis_passwd.c
	od_passwd.c
	pam_passwd.c
	passwd.c
)

install(TARGETS passwd DESTINATION libexec/darling/usr/bin)

install(FILES passwd.1 DESTINATION libexec/darling/usr/share/man/man1)

install(FILES passwd.pam DESTINATION libexec/darling/private/etc/pam.d/passwd)
