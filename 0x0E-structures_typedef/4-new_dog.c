#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner:owner of dog
 * Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	d->name = malloc(namelen * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(ownerlen * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ownerlen; i++)
		d->owner[i] = owner[i];
	return (d);
}
