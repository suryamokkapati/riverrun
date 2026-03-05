CC      = cc
CFLAGS  = -std=c99 -Wall -Wextra -O2
TARGET  = riverrun
SRC     = riverrun.c

PREFIX  ?= /usr/local
BINDIR  = $(PREFIX)/bin

.PHONY: all install uninstall clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

install: $(TARGET)
	install -d $(DESTDIR)$(BINDIR)
	install -m 755 $(TARGET) $(DESTDIR)$(BINDIR)/$(TARGET)

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/$(TARGET)

clean:
	rm -f $(TARGET)
