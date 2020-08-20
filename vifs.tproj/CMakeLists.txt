project(system_cmds-vifs)

add_darling_executable(vifs
	vifs.c
)

install(TARGETS trace DESTINATION libexec/darling/usr/sbin)

install(FILES vifs.8 DESTINATION libexec/darling/usr/share/man/man8)
