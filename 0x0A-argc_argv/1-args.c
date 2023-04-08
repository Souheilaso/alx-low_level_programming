#include <stdio.h>

/**
 * main - prints the number of arguments, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return (0);
}
