# Subdirs where we run our test machinery
CHECKLOCAL_SUBDIRS =

if HAVE_GMP_WITH_CXX
CHECKLOCAL_SUBDIRS += gmp
endif

# All subdirs
SUBDIRS = $(CHECKLOCAL_SUBDIRS) api

EXTRA_DIST =									\
	33.1.mat 33.1.qhom.chk 33.1.sign					\
	33.2.mat 33.2.qhom.chk 33.2.sign					\
	33.3.mat 33.3.qhom.chk 33.3.sign					\
	33.c.mat 33.c.qhom.chk 33.c.sign					\
	33.r.mat 33.r.qhom.chk 33.r.sign					\
	44.c.mat 44.c.qhom.chk 44.c.sign					\
	44.r.mat 44.r.qhom.chk 44.r.sign					\
	55.r.mat 55.r.qhom.chk 55.r.sign					\
	ex.mat ex.qhom.chk ex.rel ex.sign					\
	ppp.r.mat ppp.r.qfree.chk ppp.r.qhom.chk ppp.r.sign			\
	small.mat small.qhom.chk small.rel small.sign				\
	subspace.mat subspace.qfree.chk subspace.qhom.chk			\
	subspace2.mat subspace2.qfree.chk subspace2.qhom.chk subspace2.sign

check-maxcutoff:
	@../check.template $(srcdir) "-maxcutoff" src/groebner/qsolve -q -m -o maxcutoff

check-maxinter:
	@../check.template $(srcdir) "-maxinter" src/groebner/qsolve -q -s -o maxinter 

check-local: check-maxcutoff check-maxinter
	@../flavorsum "-maxcutoff" "-maxinter"
	@../subdirsum $(CHECKLOCAL_SUBDIRS)

CLEANFILES = .num_failures .num_failures-maxcutoff .num_failures-maxinter

