project(system_cmds-accton)

add_darling_executable(accton
	accton.c
)

install(TARGETS accton DESTINATION libexec/darling/usr/sbin)

install(FILES accton.8 DESTINATION libexec/darling/usr/share/man/man8)
