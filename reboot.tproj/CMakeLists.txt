project(system_cmds-reboot)

mig(kextmanager.defs)

include_directories(
	${CMAKE_CURRENT_BINARY_DIR}
)

add_darling_executable(reboot
	reboot.c

	${CMAKE_CURRENT_BINARY_DIR}/kextmanagerUser.c
)

install(TARGETS reboot DESTINATION libexec/darling/sbin)

InstallSymlink(reboot ${CMAKE_INSTALL_PREFIX}/libexec/darling/sbin/halt)

install(FILES reboot.8 DESTINATION libexec/darling/usr/share/man/man8)

InstallSymlink(reboot.8 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man8/halt.8)
