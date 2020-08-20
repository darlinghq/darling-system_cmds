project(system_cmds-chpass)

include_directories(
	../vipw.tproj
)

add_compile_definitions(
	OPEN_DIRECTORY
)

add_darling_executable(chpass
	chpass.c
	edit.c
	field.c
	open_directory.c
	pw_copy.c
	table.c
	util.c

	# not in Xcode build files but apparently necessary
	../vipw.tproj/pw_util.c
)

target_link_libraries(chpass
	CoreFoundation
	OpenDirectory
)

install(TARGETS chpass DESTINATION libexec/darling/usr/bin)

InstallSymlink(chpass ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/chfn)
InstallSymlink(chpass ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/chsh)

install(FILES chpass.1 DESTINATION libexec/darling/usr/share/man/man1)

InstallSymlink(chpass.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/chfn.1)
InstallSymlink(chpass.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/chsh.1)
