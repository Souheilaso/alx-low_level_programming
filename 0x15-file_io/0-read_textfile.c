#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer.
 * @letters: The number of letters
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open, file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	if (file_open < 0)
		return (0);
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	file_read = read(file_open, buffer, letters);
	if (file_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[file_read] = '\0';
	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_open);
	return (file_write);
}
