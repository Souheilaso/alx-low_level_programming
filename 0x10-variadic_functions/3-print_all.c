#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int p;
	char *string;
	va_list lists;

	va_start(lists, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int));
				p = 0;
				break;
			case 'i':
				printf("%i", va_arg(lists, int));
				p = 0;
				break;
			case 'f':
				printf("%f", va_arg(lists, double));
				p = 0;
				break;
			case 's':
				string = va_arg(lists, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				p = 0;
				break;
			default:
				p = 1;
				break;
		}
		if (format[i + 1] != '\0' && p == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lists);
}
