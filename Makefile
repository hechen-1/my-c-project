CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lm
SRC = src/main.c src/utils/caculator.c	
OBJ = $(SRC:.c=.o)
EXEC = my-program	
.PHONY: all clean
all: $(EXEC)
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(EXEC)
test: $(EXEC)
	./$(EXEC) --test
install: $(EXEC)
	cp $(EXEC) /usr/local/bin/
uninstall:
	rm -f /usr/local/bin/$(EXEC)
version:
	@echo "my_program version 1.0.0"
help:
	@echo "Usage: make [target]"
	@echo "Targets:"
	@echo "  all       - Build the program (default)"
	@echo "  clean     - Remove object files and executable"
	@echo "  test      - Run tests"
	@echo "  install   - Install the program to /usr/local/bin"
	@echo "  uninstall - Remove the program from /usr/local/bin"
	@echo "  version   - Show program version"
	@echo "  help      - Show this help message"
debug: CFLAGS += -g -DDEBUG
debug: $(EXEC)
