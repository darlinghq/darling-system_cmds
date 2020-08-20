project(system_cmds-kpgo)

add_darling_executable(kpgo
	kpgo.c
)

install(TARGETS kpgo DESTINATION libexec/darling/usr/bin)
