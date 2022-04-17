PROJECT=rcbasic.lbr
FILES=\
	asc.hlp\
	chr_DL_.hlp\
	clear.hlp\
	data.hlp\
	dim.hlp\
	end.hlp\
	errors.hlp\
	flg.hlp\
	for.hlp\
	fre.hlp\
	gosub.hlp\
	goto.hlp\
	if.hlp\
	inp.hlp\
	input.hlp\
	left_DL_.hlp\
	len.hlp\
	let.hlp\
	list.hlp\
	mid_DL_.hlp\
	new.hlp\
	ongoto.hlp\
	out.hlp\
	peek.hlp\
	poke.hlp\
	print.hlp\
	random.hlp\
	read.hlp\
	rem.hlp\
	restore.hlp\
	return.hlp\
	right_DL_.hlp\
	rnd.hlp\
	run.hlp\
	str_DL_.hlp\
	use.hlp\
	val.hlp\
	varptr.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

