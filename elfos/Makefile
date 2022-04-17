PROJECT=elfos.lbr
FILES=\
	api.hlp\
	o_chdir.hlp\
	o_close.hlp\
	o_delete.hlp\
	o_exec.hlp\
	o_mkdir.hlp\
	o_opendir.hlp\
	o_open.hlp\
	o_rdlump.hlp\
	o_read.hlp\
	o_rename.hlp\
	o_rmdir.hlp\
	o_seek.hlp\
	o_write.hlp\
	o_wrlump.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

