CC=gcc

CFLAGS=-Wall -Wextra -std=c11

TARGET=phantom

SOURCES= \
engine/terminal/terminal.c \
engine/renderer/renderer.c \
tests/renderer_test.c

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
