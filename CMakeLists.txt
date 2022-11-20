project(system_cmds)

add_compile_definitions(
	PRIVATE
)

add_compile_options(
	-nostdinc
	-fPIC
	-fblocks
	-Wno-error=int-conversion
)

add_subdirectory(ac.tproj)
add_subdirectory(accton.tproj)
add_subdirectory(arch.tproj)
add_subdirectory(at.tproj)
add_subdirectory(atrun.tproj)
#add_subdirectory(chkpasswd.tproj) # missing `rpcsvc/yppasswd.h`
add_subdirectory(chpass.tproj) # compiles, but it's broken because OpenDirectory is just a stub
add_subdirectory(cpuctl.tproj)
add_subdirectory(dmesg.tproj)
add_subdirectory(dynamic_pager.tproj)
#add_subdirectory(fs_usage.tproj) # missing ktrace stuff
add_subdirectory(gcore.tproj)
add_subdirectory(getconf.tproj)
add_subdirectory(getty.tproj)
add_subdirectory(hostinfo.tproj)
add_subdirectory(iosim.tproj)
add_subdirectory(iostat.tproj)
add_subdirectory(kpgo.tproj)
add_subdirectory(latency.tproj)
add_subdirectory(login.tproj)
# missing EVFILT_NW_CHANNEL definition
# it *is* defined in the new libdispatch sources, and it seems like it *should* be defined in sys/event.h,
# but it's not (yes, even after updating kernel sources). for now, just don't build this.
# it's just a developer utility anyways
#add_subdirectory(lskq.tproj)
add_subdirectory(lsmp.tproj)
add_subdirectory(ltop.tproj)
add_subdirectory(mean.tproj)
add_subdirectory(memory_pressure.tproj)
add_subdirectory(mkfile.tproj)
add_subdirectory(mslutil)
add_subdirectory(newgrp.tproj)
add_subdirectory(nologin.tproj)
add_subdirectory(nvram.tproj)
add_subdirectory(pagesize.tproj)
#add_subdirectory(passwd.tproj) # missing `rpcsvc/yppasswd.h`
add_subdirectory(proc_uuid_policy.tproj)
add_subdirectory(purge.tproj)
add_subdirectory(pwd_mkdb.tproj)
add_subdirectory(reboot.tproj)
add_subdirectory(sa.tproj)
add_subdirectory(sc_usage.tproj)
add_subdirectory(shutdown.tproj)
add_subdirectory(stackshot.tproj)
add_subdirectory(sync.tproj)
add_subdirectory(sysctl.tproj)
add_subdirectory(taskpolicy.tproj)
add_subdirectory(trace.tproj)
add_subdirectory(vifs.tproj)
add_subdirectory(vipw.tproj)
add_subdirectory(vm_purgeable_stat.tproj)
add_subdirectory(vm_stat.tproj)
add_subdirectory(wait4path)
add_subdirectory(wordexp-helper.tproj)
add_subdirectory(zdump.tproj)
add_subdirectory(zic.tproj)
add_subdirectory(zlog.tproj)
add_subdirectory(zprint.tproj)
