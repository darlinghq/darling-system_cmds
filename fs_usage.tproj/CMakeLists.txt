project(system_cmds-fs_usage)

add_darling_executable(fs_usage
	fs_usage.c
)

target_link_libraries(fs_usage
	ktrace
	util
)

install(TARGETS fs_usage DESTINATION libexec/darling/usr/bin)

install(FILES fs_usage.1 DESTINATION libexec/darling/usr/share/man/man1)
