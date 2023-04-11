#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * alloc_grid - creates a 2D array of integers and initializes it to 0
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Return: a pointer to the 2D array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
       	int **two_dim;
	unsigned int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_dim = malloc(sizeof(int *) * height);
	if (two_dim == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (unsigned int)height; i++)
	{
		two_dim[i] = malloc(sizeof(int) * width);
		if (two_dim[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_dim[j]);
			}
			free(two_dim);
			return (NULL);
		}
	}
	return (two_dim);
}
