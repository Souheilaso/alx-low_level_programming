#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name File
 * @text_content: Input Text
 *
 * Return: Depend Condition
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, file_write, i;

	if (filename == NULL)
		return (-1);
	file_open = open(filename, O_WRONLY | O_APPEND);
	if (file_open < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_open);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	file_write = write(file_open, text_content, i);
	if (file_write < 0)
		return (-1);
	close(file_open);
	return (1);
}