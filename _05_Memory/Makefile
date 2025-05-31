CC = gcc
CFLAGS = -lcs50

.PHONY: all clean

# Default: show usage
all:
	@echo "Usage: make <filename-without-.c>"

# Rule to build any single file
%: %.c
	@$(CC) $< -o $@ $(CFLAGS)
