project(system_cmds-zdump)

add_darling_executable(zdump
	zdump.c
)

install(TARGETS zdump DESTINATION libexec/darling/usr/sbin)

install(FILES zdump.8 DESTINATION libexec/darling/usr/share/man/man8)
