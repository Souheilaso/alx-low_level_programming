#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head
 * @idx: index of the list where the new node should be added.
 * @n: node data
 * Return: address or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = dlistint_len(*h);
	int i;
	dlistint_t *temp, *new_node;

	if (!(*h) || len < idx)
		return (NULL);
	if (!idx)
		new_node = add_dnodeint(h, n);
	else if (idx == len)
		new_node = add_dnodeint_end(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		for (temp = *h, i = 0; i < (int)idx; i++, temp = temp->next)
			;
		new_node->n = n;
		temp->prev->next = new_node;
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev = new_node;
	}
	return (new_node);
}

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
