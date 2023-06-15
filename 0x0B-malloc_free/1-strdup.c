#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string or NULL if fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
