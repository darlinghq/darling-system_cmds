project(system_cmds-cpuctl)

add_darling_executable(cpuctl
	cpuctl.c
)

install(TARGETS cpuctl DESTINATION libexec/darling/usr/bin)

install(FILES cpuctl.8 DESTINATION libexec/darling/usr/share/man/man8)
