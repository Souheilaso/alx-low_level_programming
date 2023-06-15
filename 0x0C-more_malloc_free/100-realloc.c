#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _realloc -reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the old allocated memory
 * @old_size: is the size of the allocated space for ptr
 * @new_size: the new size
 *
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *theptr;
	unsigned int i;

	theptr = (char *)ptr;
	if (new_size == 0 && theptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; theptr != NULL && i < old_size && i < new_size; i++)
	{
		p[i] = theptr[i];
	}
	free(theptr);
	return (p);
}
