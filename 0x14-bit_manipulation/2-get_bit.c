#include "main.h"

/**
* get_bit - a function that returns the value of a bit
* @n: unsigned long integer
* @index: index
* Return: the value of the bit at index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}

