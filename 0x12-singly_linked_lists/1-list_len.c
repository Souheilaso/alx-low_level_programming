#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: Const pointer of linked list
 * Return: nodes number
 */

size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
