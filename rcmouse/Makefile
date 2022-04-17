PROJECT=rcmouse.lbr
FILES=\
	_AT_.hlp\
	_BS_.hlp\
	_CN_.hlp\
	_CP_.hlp\
	_CS_.hlp\
	_CT_.hlp\
	_DL_.hlp\
	_DT_.hlp\
	_DV_.hlp\
	_EQ_.hlp\
	_EX_.hlp\
	_EX__SQ_.hlp\
	_GT_.hlp\
	_LT_.hlp\
	_MN_.hlp\
	_MP_.hlp\
	_NM_.hlp\
	_OP_.hlp\
	_OS_.hlp\
	_PC_.hlp\
	_PL_.hlp\
	_PP_.hlp\
	_QS_.hlp\
	_QS__SQ_.hlp\
	_QT_.hlp\
	_SQ_.hlp\
	variables.hlp\
	summary.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

