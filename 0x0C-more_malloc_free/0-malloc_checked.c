#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: a pointer if successful, or NULL if fails
 */

void *malloc_checked(unsigned int b)
{
	void *my_p;

	my_p = malloc(b);

	if (my_p == NULL)
	{
		exit(98);
	}
	return (my_p);
}
