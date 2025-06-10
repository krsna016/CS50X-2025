CC = gcc

.PHONY: all clean

all:
	@echo "Usage: make <filename-without-.c>"

%: %.c
	@if grep -q '#include *<cs50\.h>' $<; then \
	    echo "Compiling along with CS50 library..."; \
	    $(CC) $< -o $@ -lcs50; \
	else \
	    echo "Compiling without CS50 library..."; \
	    $(CC) $< -o $@; \
	fi