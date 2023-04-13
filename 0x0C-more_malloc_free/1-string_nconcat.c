#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 *
 * Return: a pointer if successful, or NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *outcome;
	unsigned int lenght;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	lenght = strlen(s2);

	if (lenght < n)
	{
		n = lenght;
	}

	outcome = malloc(strlen(s1) + strlen(s2) * n + 1);

	if (outcome == NULL)
	{
		return (NULL);
	}

	strcpy(outcome, s1);
	strncat(outcome, s2, n);

	return (outcome);
}
