#include "dog.h"

/**
 * print_dog - prints dog
 * @d: pointer to the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	/*printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);*/

	printf("Name %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
