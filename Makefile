CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -D_POSIX_C_SOURCE=199309L

UTILS = utilidades.c timer.c
BIN = bin

PROGRAMS = bubble linear binary merge

.PHONY: all clean $(PROGRAMS)

all: $(PROGRAMS)

$(PROGRAMS): %: $(BIN)/%
	@:

$(BIN)/%: %.c $(UTILS) | $(BIN)
	$(CC) $(CFLAGS) $< $(UTILS) -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -rf $(BIN)
