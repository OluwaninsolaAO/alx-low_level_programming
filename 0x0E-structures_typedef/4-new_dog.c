#include "dog.h"

/**
 * new_dog - births new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the  dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr, doggy;

	ptr = &doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
