#include <stdio.h>

/**
 * main - prints all the arguments that it receives
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
		printf("%s\n", argv[s]);

	return (0);
}
