#include "main.h"

/**
* clear_bit - a function that sets the value of a bit
* @n: a pointer
* @index: is the index
* Return: 1, or -1
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

