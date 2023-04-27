#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Const pointer of structure list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *str = h;

	if (h == NULL)
	{
		return (0);
	}

	while (str != NULL)
	{
		if (str->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("%s\n", str->str);
		}
		str = str->next;
		counter++;
	}
	return (counter);
}
