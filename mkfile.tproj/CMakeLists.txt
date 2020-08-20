project(system_cmds-mkfile)

add_darling_executable(mkfile
	mkfile.c
)

install(TARGETS mkfile DESTINATION libexec/darling/usr/sbin)

install(FILES mkfile.8 DESTINATION libexec/darling/usr/share/man/man8)
