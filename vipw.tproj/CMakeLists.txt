project(system_cmds-vipw)

add_darling_executable(vipw
	pw_util.c
	vipw.c
)

install(TARGETS vipw DESTINATION libexec/darling/usr/sbin)

install(FILES vipw.8 DESTINATION libexec/darling/usr/share/man/man8)
