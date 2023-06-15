#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; head->next && i < index; i++, head = head->next)
		;
	if (i == index)
		return (head);
	return (NULL);
}
