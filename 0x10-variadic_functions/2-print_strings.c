#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lists;
	char *string;

	va_start(lists, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(lists, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lists);
}
