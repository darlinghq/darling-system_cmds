project(system_cmds-lsmp)

add_darling_executable(lsmp
	lsmp.c
	port_details.c
	task_details.c
)

target_link_libraries(lsmp
	util
)

install(TARGETS lsmp DESTINATION libexec/darling/usr/bin)

install(FILES lsmp.1 DESTINATION libexec/darling/usr/share/man/man1)
