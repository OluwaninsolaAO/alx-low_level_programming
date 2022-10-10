#include "dog.h"

/**
 * free_dog - Free dog from the memory allocated
 * @d: pointer to where the dog was held
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
