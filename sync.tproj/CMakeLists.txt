project(system_cmds-sync)

add_darling_executable(sync
	sync.c
)

install(TARGETS sync DESTINATION libexec/darling/bin)

install(FILES sync.8 DESTINATION libexec/darling/usr/share/man/man8)
