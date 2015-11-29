# Make *.c to individual executables

SRC = $(wildcard *.c)
CFLAGS = -std=c99


EXEC = $(patsubst %.c,%,$(SRC))

all: $(EXEC)

clean:
	$(RM) $(EXEC)
	$(RM) a.out

.PHONY: clean


