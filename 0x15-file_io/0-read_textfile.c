#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to stdout.
 * @filename: filename/ path
 * @letters: number of letters to be printed
 * Return: actual number of letters printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *fsave;

	if (filename == NULL)
		return (0);

	fsave = malloc(sizeof(char) * letters);
	if (fsave == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);
	fread = read(fopen, fsave, letters);
	fwrite = write(STDOUT_FILENO, fsave, fread);

	if (fopen == -1 || fread == -1 || fwrite == -1 || fwrite != fread)
	{
		free(fsave);
		return (0);
	}

	free(fsave);
	close(fopen);

	return (fwrite);
}
