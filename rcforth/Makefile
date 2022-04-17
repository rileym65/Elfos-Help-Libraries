PROJECT=rcforth.lbr
FILES=\
	allot.hlp\
	and.hlp\
	_AT_.hlp\
	begin.hlp\
	bye.hlp\
	c_AT_.hlp\
	c_EX_.hlp\
	_CN_.hlp\
	cr.hlp\
	depth.hlp\
	do.hlp\
	drop.hlp\
	_DT_.hlp\
	dup.hlp\
	_DV_.hlp\
	ef.hlp\
	else.hlp\
	emit.hlp\
	_EQ_.hlp\
	_EX_.hlp\
	forget.hlp\
	_GT_r.hlp\
	if.hlp\
	i.hlp\
	inp.hlp\
	key.hlp\
	load.hlp\
	loop.hlp\
	_LT__GT_.hlp\
	mem.hlp\
	_MN_.hlp\
	_MN_rot.hlp\
	_MP_.hlp\
	or.hlp\
	out.hlp\
	over.hlp\
	_PL_.hlp\
	_PL_loop.hlp\
	repeat.hlp\
	r_GT_.hlp\
	rot.hlp\
	save.hlp\
	see.hlp\
	_SM_.hlp\
	swap.hlp\
	then.hlp\
	u_DT_.hlp\
	until.hlp\
	variable.hlp\
	while.hlp\
	words.hlp\
	xor.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

