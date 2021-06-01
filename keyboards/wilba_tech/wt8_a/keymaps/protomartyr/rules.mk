CONSOLE_ENABLE = yes       # Console for debug
BACKLIGHT_ENABLE = yes     # Enable keyboard backlight functionality

RYS_STOKEN1 = "poop"
RYS_STOKEN2 = "poop"
RYS_STOKEN3 = "poop"
RYS_STOKEN4 = "poop"
RYS_STOKEN5 = "poop"

CFLAGS += -DRYS_STOKEN1=\"$(RYS_STOKEN1)\"
CFLAGS += -DRYS_STOKEN2=\"$(RYS_STOKEN2)\"
CFLAGS += -DRYS_STOKEN3=\"$(RYS_STOKEN3)\"
CFLAGS += -DRYS_STOKEN4=\"$(RYS_STOKEN4)\"
CFLAGS += -DRYS_STOKEN5=\"$(RYS_STOKEN5)\"

# project specific files
SRC =	drivers/issi/is31fl3736.c \
		drivers/avr/i2c_master.c \
		quantum/color.c \
		keyboards/wilba_tech/wt_mono_backlight.c
