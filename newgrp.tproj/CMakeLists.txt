project(system_cmds-newgrp)

add_darling_executable(newgrp
	newgrp.c
)

install(TARGETS newgrp DESTINATION libexec/darling/usr/bin)

install(FILES newgrp.1 DESTINATION libexec/darling/usr/share/man/man1)
