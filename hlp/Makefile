PROJECT=hlp.lbr
FILES=\
	chdir.hlp\
	chmod.hlp\
	copy.hlp\
	crc.hlp\
	date.hlp\
	del.hlp\
	dir.hlp\
	dump.hlp\
	edit.hlp\
	exec.hlp\
	free.hlp\
	help.help\
	hexdump.hlp\
	himem.hlp\
	install.hlp\
	kread.hlp\
	lbr.hlp\
	load.hlp\
	minimon.hlp\
	mkdir.hlp\
	patch.hlp\
	rename.hlp\
	rmdir.hlp\
	save.hlp\
	sedit.hlp\
	stat.hlp\
	sys.hlp\
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

