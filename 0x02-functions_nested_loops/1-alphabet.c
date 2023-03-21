#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int my_alphabets;

	for (my_alphabets = 97; my_alphabets <= 122; my_alphabets++)
	{
		_putchar(my_alphabets);
	}
	_putchar('\n');
}
