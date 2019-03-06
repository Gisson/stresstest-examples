CC=gcc
CFLAGS= -g
FILENAME=main
.PHONY=run clean

$(FILENAME):
	$(CC) $(FILENAME).c -o $(FILENAME)

run: $(FILENAME)
	./$(FILENAME)

clean: $(FILENAME)
	$(RM) $(FILENAME)

