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
	char *d2_name, *d2_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d2_name = strdup(name);
	d2_owner = strdup(owner);

	if (d2_name == NULL || d2_owner == NULL)
	{
		free(d);
		free(d2_name);
		return (NULL);
	}
	d->name = d2_name;
	d->age = age;
	d->owner = d2_owner;
	return (d);
}
