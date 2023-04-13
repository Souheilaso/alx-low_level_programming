#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb
 * @nmemb: the number of elements in the array
 * @size: the size of elements
 *
 * Return: a pointer to the allocated memory, or NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myP;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	myP = malloc(nmemb * size);
	if (myP == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		myP[i] = 0;
	}

	return (myP);
}
