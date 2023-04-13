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
	char *novoPtr, *old_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	novoPtr = malloc(new_size);
	if (novoPtr == NULL)
	{
		return (NULL);
	}

	old_ptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		novoPtr[i] = old_ptr[i];
	}

	free(ptr);
	return (novoPtr);
}
