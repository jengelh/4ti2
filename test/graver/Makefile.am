EXTRA_DIST =					\
	333.mat 333.gra.chk			\
	bayer.gra.chk bayer.lat			\
	hppi4.mat hppi4.gra.chk			\
	hppi5.mat hppi5.gra.chk			\
	small.gra.chk small.mat small.sign	\
	ppi3.mat ppi3.gra.chk			\
	trivial-kernel.mat trivial-kernel.gra.chk

check-local:
	@../check.template $(srcdir) "" src/zsolve/graver -q 

CLEANFILES = .num_failures
