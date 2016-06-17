#
#  Config file for BeagleBoard.
#

include $(RTEMS_ROOT)/make/custom/default.cfg

RTEMS_CPU = arm

CFLAGS_OPTIMIZE_V ?= -O2 -g

# Add CFLAGS and LDFLAGS for compiling and linking with per item sections
CFLAGS_OPTIMIZE_V += -ffunction-sections -fdata-sections
LDFLAGS            = -Wl,--gc-sections
