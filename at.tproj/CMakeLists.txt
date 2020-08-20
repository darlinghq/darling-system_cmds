project(system_cmds-at)

add_compile_definitions(
	DAEMON_UID=1
	DAEMON_GID=1
	DEFAULT_AT_QUEUE='a'
	DEFAULT_BATCH_QUEUE='b'
	PERM_PATH="/usr/lib/cron/"
)

add_darling_executable(at
	at.c
	panic.c
	parsetime.c
	perm.c
)

install(TARGETS at DESTINATION libexec/darling/usr/bin)

install(FILES at.1 DESTINATION libexec/darling/usr/share/man/man1)

InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/atq)
InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/atrm)
InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/batch)

InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/atq.1)
InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/atrm.1)
InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/batch.1)

InstallSymlink("../../var/at" "${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/lib/cron")
