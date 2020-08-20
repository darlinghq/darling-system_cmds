project(system_cmds-ltop)

add_darling_executable(ltop
	ltop.c
)

target_link_libraries(ltop
	util
)

install(TARGETS ltop DESTINATION libexec/darling/usr/bin)

install(FILES ltop.1 DESTINATION libexec/darling/usr/share/man/man1)
