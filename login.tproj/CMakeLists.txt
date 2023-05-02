project(system_cmds-login)

add_compile_definitions(
	USE_PAM
	USE_BSM_AUDIT
)

add_darling_executable(login-exe
	login.c
	login_audit.c
)

set_target_properties(login-exe PROPERTIES OUTPUT_NAME "login")

target_link_libraries(login-exe
	bsm.0
	pam.2
)

install(TARGETS login-exe DESTINATION libexec/darling/usr/bin)

install(FILES login.1 DESTINATION libexec/darling/usr/share/man/man1)

install(DIRECTORY pam.d DESTINATION libexec/darling/private/etc)
