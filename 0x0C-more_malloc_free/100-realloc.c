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
	char *novoPtr, *old_ptr, *the_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	novoPtr = realloc(ptr, new_size);

	if (novoPtr == NULL)
	{
		return (NULL);
	}

	old_ptr = ptr;
	the_ptr = novoPtr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		the_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (novoPtr);
}
