#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char my_alphabet;

	for (letter = 97; letter <= 122; my_alphabet++)
		_putchar(my_alphabet);

	_putchar('\n');
}
