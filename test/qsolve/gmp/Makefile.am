EXTRA_DIST = 					\
	44.c.mat 44.c.qhom.chk 44.c.sign	\
	44.r.mat 44.r.qhom.chk 44.r.sign	\
	ppp.c.mat ppp.c.qhom.chk ppp.c.sign

check-local:
	@../../check.template $(srcdir) "" src/groebner/qsolve -q -p arb

CLEANFILES = .num_failures

