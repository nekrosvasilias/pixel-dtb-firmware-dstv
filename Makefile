CC = gcc
CFLAGS = -Wall -Werror -g

SRCS = src/main.c src/mock_hardware.c src/dstv_signal.c src/dstv_smartcard.c
OBJS = $(SRCS:.c=.o)
EXEC = dstv_firmware

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean