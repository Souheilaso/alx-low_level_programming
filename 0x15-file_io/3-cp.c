#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * @argc: Input Number of Arguments
 * @argv: Input Arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int re, wt, i, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	re = open(argv[1], O_RDONLY);
	if (re < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(re, buffer, BUFSIZ)) > 0)
	{
		if (wt < 0 || write(wt, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(re);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(re);
	b = close(wt);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", re);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wt);
		exit(100);
	}
	return (0);
}
