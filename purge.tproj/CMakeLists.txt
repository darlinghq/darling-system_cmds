project(system_cmds-purge)

add_darling_executable(purge
	purge.c
)

install(TARGETS purge DESTINATION libexec/darling/usr/sbin)

install(FILES purge.8 DESTINATION libexec/darling/usr/share/man/man8)
