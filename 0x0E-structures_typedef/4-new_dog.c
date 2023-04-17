#include <stdio.h>
#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);
	d->owner = strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
