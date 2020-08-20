project(system_cmds-dmesg)

add_darling_executable(dmesg
	dmesg.c
)

install(TARGETS dmesg DESTINATION libexec/darling/sbin)

install(FILES dmesg.8 DESTINATION libexec/darling/usr/share/man/man8)
