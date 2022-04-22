PROJECT=hlp.lbr
FILES=\
	chdir.hlp\
	chmod.hlp\
	copy.hlp\
    cls.hlp\
	crc.hlp\
	date.hlp\
	del.hlp\
	dir.hlp\
	dump.hlp\
	edit.hlp\
	exec.hlp\
	free.hlp\
    heap.hlp\
	help.hlp\
	hexdump.hlp\
	himem.hlp\
	install.hlp\
	kread.hlp\
	lbr.hlp\
	load.hlp\
	minimon.hlp\
	mkdir.hlp\
	patch.hlp\
    reboot.hlp\
	rename.hlp\
    retval.hlp\
	rmdir.hlp\
	save.hlp\
	sedit.hlp\
    boot2.hlp\
    setboot.hlp\
    setboot2.hlp\
    shell.hlp\
	stat.hlp\
	sys.hlp\
    touch.hlp\
	type.hlp\
	ver.hlp\
	visual02.hlp\
	xr.hlp\
	xs.hlp   


.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

