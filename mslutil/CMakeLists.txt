project(system_cmds-mslutil)

add_darling_executable(mslutil
	mslutil.c
)

install(TARGETS mslutil DESTINATION libexec/darling/usr/bin)

install(FILES mslutil.1 DESTINATION libexec/darling/usr/share/man/man1)
