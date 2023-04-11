#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch_ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ch_ptr = malloc(sizeof(char) * size);

	if (ch_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ch_ptr[i] = c;
	}
	return (ch_ptr);
}
