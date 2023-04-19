#include "function_pointers.h"

/**
 * int_index - finds integer in an array
 * @array: the array to find
 * @size: the size of the array
 * @cmp: a function pointer to a comparison function
 *
 * Return: not 0, or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
