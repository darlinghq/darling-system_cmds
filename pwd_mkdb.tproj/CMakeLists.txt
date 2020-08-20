project(system_cmds-pwd_mkdb)

add_compile_definitions(
	_PW_NAME_LEN=MAXLOGNAME
	_PW_YPTOKEN="__YP!"
)

add_darling_executable(pwd_mkdb
	pw_scan.c
	pwd_mkdb.c
)

install(TARGETS pwd_mkdb DESTINATION libexec/darling/usr/sbin)

install(FILES pwd_mkdb.8 DESTINATION libexec/darling/usr/share/man/man8)
