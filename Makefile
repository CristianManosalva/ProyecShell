animals: libfuncionesShell.a
	gcc -L. -o shell shell.c -lfuncionesShell
	./shell
	make clean
libfuncionesShell.a: funcionesShell.o
	ar -cvq libfuncionesShell.a funcionesShell.o
funcionesShell.o:
	gcc -c funcionesShell.c
clean:
	rm -f shell a.out lib*.a *.o
