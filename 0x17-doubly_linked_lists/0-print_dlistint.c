#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: head
 * Return: int number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
