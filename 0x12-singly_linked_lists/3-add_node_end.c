#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head: Const double pointer
 * @str: Const char pointer
 * Return: List with new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int counter;
	list_t *novo;
	list_t *temp;

	novo  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (novo == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
		;

	if (*head == NULL)
	{
		*head = novo;
		novo->len = counter;
		novo->str = strdup(str);
		novo->next = NULL;
		return (novo);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = novo;

	novo->len = counter;
	novo->str = strdup(str);
	novo->next = NULL;

	return (novo);

}
