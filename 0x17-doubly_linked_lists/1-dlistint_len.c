#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: head
 * Return: int number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
