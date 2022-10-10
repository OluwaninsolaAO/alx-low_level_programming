#include "dog.h"

/**
 * init_dog - Initialize the variable dog
 * @d: pointer to the variable dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
