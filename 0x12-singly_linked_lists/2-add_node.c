#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a node
 * @head: double pointer of structure list_t for beginning
 * @str: char pointer for data to be added
 * Return: List with new node
 */

list_t *add_node(list_t **head, const char *str)
{

	unsigned int counter;
	list_t *novo;

	novo  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		novo->str = NULL;
		novo->len = 0;
		novo->next = *head;
	}

	if (novo == NULL)
		return (NULL);

	novo->next = *head;
	*head = novo;

	novo->str = strdup(str);

	for (counter = 0; str[counter]; counter++)
		;

	novo->len = counter;

	return (novo);
}
