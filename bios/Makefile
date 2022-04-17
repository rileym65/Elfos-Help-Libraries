PROJECT=bios.lbr
FILES=\
	api.hlp\
	f_atoi.hlp\
	f_boot.hlp\
	f_bootide.hlp\
	f_div16.hlp\
	f_freemem.hlp\
	f_hexin.hlp\
	f_hexout2.hlp\
	f_hexout4.hlp\
	f_ideread.hlp\
	f_idereset.hlp\
	f_idewrite.hlp\
	f_idnum.hlp\
	f_initcall.hlp\
	f_inmsg.hlp\
	f_input.hlp\
	f_inputl.hlp\
	f_intout.hlp\
	f_isalnum.hlp\
	f_isalpha.hlp\
	f_ishex.hlp\
	f_isnum.hlp\
	f_isterm.hlp\
	f_ltrim.hlp\
	f_memcpy.hlp\
	f_minimon.hlp\
	f_msg.hlp\
	f_mul16.hlp\
	f_read.hlp\
	f_setbd.hlp\
	f_strcmp.hlp\
	f_strcpy.hlp\
	f_tty.hlp\
	f_type.hlp\
	f_uintout.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

