project(system_cmds-arch)

add_darling_executable(arch
	arch.c
)

target_link_libraries(arch
	CoreFoundation
)

install(TARGETS arch DESTINATION libexec/darling/usr/bin)

install(FILES arch.1 machine.1 DESTINATION libexec/darling/usr/share/man/man1)

InstallSymlink(arch ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/machine)
