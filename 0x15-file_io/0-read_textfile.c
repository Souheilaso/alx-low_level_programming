#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if:
 * filename is NULL
 * file can not be opened
 * write fails or does not write the expected amount of bytes
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wt;
	char *save;

	if (filename == NULL)
		return (0);

	save = malloc(sizeof(char) * letters);
	if (save == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, save, letters);
	wt = write(STDOUT_FILENO, save, re);

	if (op == -1 || re == -1 || wt == -1 || wt != re)
	{
		free(save);
		return (0);
	}

	free(save);
	close(op);

	return (wt);
}
