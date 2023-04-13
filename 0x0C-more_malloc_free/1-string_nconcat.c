#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
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

	if (n > lenght)
	{
		n = lenght;
	}

	outcome = malloc(strlen(s1) + n + 1);

	if (outcome == NULL)
	{
		return (NULL);
	}

	strcpy(outcome, s1);
	strncat(outcome, s2, n);

	return (outcome);
}
