#include <stdio.h>
#include "dog.h"

/**
 * No Comment
 */

int main(void)
{
	dog_t *my_dog = new_dog("", 3.5, "Bob");

	print_dog(my_dog);

	return (0);
}
