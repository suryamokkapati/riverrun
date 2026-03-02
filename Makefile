CC=gcc
CFLAGS=-Wall -O2
PREFIX=/usr

all:
	$(CC) $(CFLAGS) src/riverrun.c -o riverrun

install:
	install -d $(DESTDIR)$(PREFIX)/bin
	install -m 755 riverrun $(DESTDIR)$(PREFIX)/bin/

clean:
	rm -f riverrun
