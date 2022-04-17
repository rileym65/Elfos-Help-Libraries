PROJECT=rclisp.lbr
FILES=\
	add.hlp\
	atom.hlp\
	boundp.hlp\
	bye.hlp\
	car.hlp\
	cdr.hlp\
	clear.hlp\
	cond.hlp\
	cons.hlp\
	defun.hlp\
	eq.hlp\
	eval.hlp\
	free.hlp\
	gc.hlp\
	lessp.hlp\
	list.hlp\
	load.hlp\
	nil.hlp\
	null.hlp\
	oblist.hlp\
	print.hlp\
	return.hlp\
	reverse.hlp\
	save.hlp\
	set.hlp\
	sub.hlp\
	summary.hlp\
	t.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

