AM_CFLAGS := -g -Wall -O2

CC        := g++
CFLAGS    := $(AM_CFLAGS)

LD        := g++

APPS      := sort_arr
OBJS      := $(APPS).o
SRCS      := $(APPS).c

sort_arr: sort_arr.o
	$(LD) $(AM_CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -fr $(APPS) *.o *.out
