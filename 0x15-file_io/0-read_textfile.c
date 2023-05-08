#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Open - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);
	fread = read(fopen, buffer, letters);
	fwrite = write(STDOUT_FILENO, buffer, fread);

	if (fopen == -1 || fread == -1 || fwrite == -1 || fwrite != fread)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fopen);

	return (fwrite);
}
