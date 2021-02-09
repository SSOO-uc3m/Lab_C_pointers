CC=gcc
V=valgrind
CFLAGS=-Wall
VFLAGS=--leak-check=yes
main: main.c 
	$(CC) $(CFLAGS) main.c -o main
valgrind:
	$(CC) $(CFLAGS) main.c -o main
	$(V) $(VFLAGS) ./main 
clean:
	rm -f main
