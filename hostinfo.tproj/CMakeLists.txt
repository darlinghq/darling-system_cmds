project(system_cmds-hostinfo)

add_darling_executable(hostinfo
	hostinfo.c
)

install(TARGETS hostinfo DESTINATION libexec/darling/usr/bin)

install(FILES hostinfo.8 DESTINATION libexec/darling/usr/share/man/man8)
