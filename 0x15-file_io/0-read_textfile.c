#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_open;
	ssize_t wr;
	ssize_t t;

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file_open, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file_open);
	return (wr);
}
