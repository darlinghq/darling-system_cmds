project(system_cmds-sysctl)

add_darling_executable(sysctl
	sysctl.c
)

install(TARGETS sysctl DESTINATION libexec/darling/usr/sbin)

install(FILES sysctl.8 DESTINATION libexec/darling/usr/share/man/man8)

install(FILES sysctl.conf.5 DESTINATION libexec/darling/usr/share/man/man5)
