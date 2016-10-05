BIN_BASE=run_me
CLANG_BIN=$(BIN_BASE)_clang
GCC_BIN=$(BIN_BASE)_gcc
CCFLAGS=-Wall -Werror


$(GCC_BIN): main.c
	gcc $(CCFLAGS) main.c -o $(GCC_BIN)
	./$(GCC_BIN)

$(CLANG_BIN): main.c
	gcc $(CCFLAGS) main.c -o $(CLANG_BIN)
	./$(CLANG_BIN)

clean:
	rm -f *.o $(GCC_BIN) $(CLANG_BIN)

default: all

all: clean $(GCC_BIN) $(CLANG_BIN)

