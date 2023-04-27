#include "lists.h"

/**
 * free_list - function that frees
 * @head: Const double pointer of structure
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *t;

	for (t = head; t != NULL; t = t->next)
	{
		free(t->str);
		free(t);
	}
}
