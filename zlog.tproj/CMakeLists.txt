project(system_cmds-zlog)

add_darling_executable(zlog
	SymbolicationHelper.c
	zlog.c
)

target_link_libraries(zlog
	CoreFoundation
	CoreSymbolication
)

install(TARGETS zlog DESTINATION libexec/darling/usr/bin)

install(FILES zlog.1 DESTINATION libexec/darling/usr/share/man/man1)
