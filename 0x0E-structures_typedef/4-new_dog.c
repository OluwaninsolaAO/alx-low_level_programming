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
	char *cpy_name, *cpy_owner;

	ptr = &doggy;

	if (name == NULL || *name == '\0')
		return (NULL);

	if (age < 0 || owner == NULL || *owner == '\0')
		return (NULL);
	cpy_name = name;
	cpy_owner = owner;

	ptr->name = cpy_name;
	ptr->age = age;
	ptr->owner = cpy_owner;

	return (ptr);
}
