PROJECT=rcpilot.lbr
FILES=\
	a.hlp\
	_AT_.hlp\
	b.hlp\
	c.hlp\
	e.hlp\
	f.hlp\
	format.hlp\
	i.hlp\
	j.hlp\
	k.hlp\
	l.hlp\
	m.hlp\
	n.hlp\
	o.hlp\
	q.hlp\
	r.hlp\
	s.hlp\
	summary.hlp\
	t.hlp\
	u.hlp\
	v.hlp\
	y.hlp

.SUFFIXES: .help .hlp

$(PROJECT): $(FILES)
	-rm $(PROJECT)
	../lbradd $(PROJECT) $(FILES)

.help.hlp:
	../crlf $< $@

clean:
	-rm *.hlp
	-rm $(PROJECT)

