#include "lists.h"
<<<<<<< HEAD

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: head
 * Return: int number of nodes
=======
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
>>>>>>> origin/master
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

<<<<<<< HEAD
	for (i = 0; h; h = h->next, i++)
		printf("%d\n", h->n);
=======
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
>>>>>>> origin/master
	return (i);
}
