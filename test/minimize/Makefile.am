EXTRA_DIST =															\
	grin.mat grin.cost grin.gro grin.mar grin.min.chk grin.opt grin.zsol							\
	grin10900.1.mat grin10900.1.cost grin10900.1.gro grin10900.1.mar grin10900.1.min.chk grin10900.1.opt grin10900.1.zsol	\
	grin10900.2.mat grin10900.2.cost grin10900.2.gro grin10900.2.mar grin10900.2.min.chk grin10900.2.opt grin10900.2.zsol	\
	grin10900.3.mat grin10900.3.cost grin10900.3.gro grin10900.3.mar grin10900.3.min.chk grin10900.3.opt grin10900.3.zsol	\
	grin10900.4.mat grin10900.4.cost grin10900.4.gro grin10900.4.mar grin10900.4.min.chk grin10900.4.zsol			\
	grin10900.5.mat grin10900.5.cost grin10900.5.mar grin10900.5.min.chk grin10900.5.opt grin10900.5.zsol			\
	4coins.mat 4coins.zsol 4coins.sign 4coins.cost 4coins.min.chk

check-local:
	@../check.template $(srcdir) "" src/groebner/minimize -q

CLEANFILES = .num_failures
