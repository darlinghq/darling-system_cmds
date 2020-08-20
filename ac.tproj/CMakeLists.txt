project(system_cmds-ac)

add_darling_executable(ac
	ac.c
)

install(TARGETS ac DESTINATION libexec/darling/usr/sbin)

install(FILES ac.8 DESTINATION libexec/darling/usr/share/man/man8)
