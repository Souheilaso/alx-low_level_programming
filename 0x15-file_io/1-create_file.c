#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: Input Name File
 * @text_content: Input Text
 *
 * Return: Depend Condition
*/

int create_file(const char *filename, char *text_content)
{
	int op, wt, i;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(op);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	wt = write(op, text_content, i);
	if (wt < 0)
		return (-1);
	close(op);
	return (1);
}
