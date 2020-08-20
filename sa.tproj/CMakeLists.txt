project(system_cmds-sa)

add_compile_definitions(
	AHZV1=64
)

add_darling_executable(sa
	db.c
	main.c
	pdb.c
	usrdb.c
)

install(TARGETS sa DESTINATION libexec/darling/usr/sbin)

install(FILES sa.8 DESTINATION libexec/darling/usr/share/man/man8)
