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
	ssize_t fop, frd, fwr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fop = open(filename, O_RDONLY);
	frd = read(fop, buf, letters);
	fwr = write(STDOUT_FILENO, buf, frd);

	if (fop == -1 || frd == -1 || fwr == -1 || fwr != frd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fop);

	return (fwr);
}
