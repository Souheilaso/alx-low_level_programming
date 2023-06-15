#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: node data
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		for (temp = *head; temp->next; temp = temp->next)
			;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
