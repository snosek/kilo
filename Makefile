kilo: kilo.c
	$(CC) -o kilo kilo.c init.c cli.c input.c output.c abuf.c fileio.c rowop.c editorop.c find.c -Wall -Wextra -pedantic -std=c99
