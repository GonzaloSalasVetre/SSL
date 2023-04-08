all: hello.exe run

hello.exe: hello.o
	gcc hello.o -o hello.exe -std=c18

run: hello.exe
	hello.exe

hello.o: hello.c
	gcc -c hello.c -o hello.o -std=c18
