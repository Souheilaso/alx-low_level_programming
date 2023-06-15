#include <stdlib.h>
#include "dog.h"
#include <stddef.h>

/**
 * free_dog - a function that frees dog
 * @d: pointer to structure
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
