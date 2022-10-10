#include "dog.h"

/**
 * print_dog - prints dog
 * @d: pointer to the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
