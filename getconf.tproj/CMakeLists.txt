project(system_cmds-getconf)

add_compile_definitions(
	APPLE_GETCONF_UNDERSCORE
	APPLE_GETCONF_SPEC
)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_darling_executable(getconf
	getconf.c

	../gen/getconf.tproj/confstr.c
	../gen/getconf.tproj/limits.c
	../gen/getconf.tproj/pathconf.c
	../gen/getconf.tproj/progenv.c
	../gen/getconf.tproj/sysconf.c
)

install(TARGETS getconf DESTINATION libexec/darling/usr/bin)

install(FILES getconf.1 DESTINATION libexec/darling/usr/share/man/man1)
