#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: a pointer to a new array
 */

int *array_range(int min, int max)
{
	int *myP;
	int array_size, i;

	if (min > max)
	{
		return (NULL);
	}

	array_size = max - min + 1;
	myP = malloc(sizeof(int) * array_size);

	if (myP == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < array_size; i++)
	{
		myP[i] = min + i;
	}
	return (myP);
}
