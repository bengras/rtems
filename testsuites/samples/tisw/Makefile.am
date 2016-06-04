rtems_tests_PROGRAMS = tisw
tisw_SOURCES = init.c

dist_rtems_tests_DATA = tisw.scn
dist_rtems_tests_DATA += tisw.doc

include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(top_srcdir)/../automake/compile.am
include $(top_srcdir)/../automake/leaf.am


LINK_OBJS = $(tisw_OBJECTS)
LINK_LIBS = $(tisw_LDLIBS)

hello$(EXEEXT): $(tisw_OBJECTS) $(tisw_DEPENDENCIES)
	@rm -f tisw$(EXEEXT)
	$(make-exe)

include $(top_srcdir)/../automake/local.am
