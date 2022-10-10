#include <stdio.h>
#include "dog.h"

/**
 * No Comment
 */

int main(void)
{
	dog_t my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");

	print_dog(&my_dog);

	return (0);
}
