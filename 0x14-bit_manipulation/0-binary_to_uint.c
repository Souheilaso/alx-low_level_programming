#include "main.h"

/**
* binary_to_uint - a function that converts a
*binary number to an unsigned int
* @b: pointing to a string
* Return: converted number or 0
**/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		k <<= 1;
		if (b[i] == '1')
			k += 1;
	}
	return (k);
}
