project(system_cmds-gcore)

add_darling_executable(gcore
	convert.c
	corefile.c
	dyld_shared_cache.c
	dyld.c
	main.c
	sparse.c
	threads.c
	utils.c
	vanilla.c
	vm.c
)

target_link_libraries(gcore
	util
	compression
)

install(TARGETS gcore DESTINATION libexec/darling/usr/bin)

install(FILES gcore.1 DESTINATION libexec/darling/usr/share/man/man1)
