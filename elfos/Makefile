PROJECT=elfos.lbr
FILES=\
	api.hlp\
    o_alloc.hlp\
    o_boot.hlp\
    o_brktest.hlp\
	o_chdir.hlp\
    o_cldboot.hlp\
	o_close.hlp\
    o_dealloc.hlp\
    o_devctrl.hlp\
	o_delete.hlp\
	o_exec.hlp\
    o_execbin.hlp\
    o_getdev.hlp\
    o_gettod.hlp\
    o_initcall.hlp\
    o_inmsg.hlp\
    o_input.hlp\
    o_inputl.hlp\
    o_kinit.hlp\
    o_memctrl.hlp\
    o_msg.hlp\
	o_mkdir.hlp\
    o_nbread.hlp\
	o_opendir.hlp\
	o_open.hlp\
    o_print.hlp\
    o_prtstat.hlp\
	o_rdlump.hlp\
	o_read.hlp\
    o_readkey.hlp\
	o_rename.hlp\
	o_rmdir.hlp\
	o_seek.hlp\
    o_setbd.hlp\
    o_setdef.hlp\
    o_settod.hlp\
    o_termctrl.hlp\
    o_type.hlp\
    o_wrmboot.hlp\
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

