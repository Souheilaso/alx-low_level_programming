#include "main.h"

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
	int file_read, file_write, i, r, w;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(file_read, buffer, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_read);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = close(file_read);
	w = close(file_write);
	if (r < 0 || w < 0)
	{
		if (r < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		exit(100);
	}
	return (0);
}
