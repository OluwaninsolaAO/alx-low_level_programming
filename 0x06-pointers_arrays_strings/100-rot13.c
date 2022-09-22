#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @src: pointer to string params
 * Return: src
 */

char *rot13(char *src)
{
	int i;
	int j;
	char dataset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[i] == dataset[j])
			{
				src[i] = rot[j];
				break;
			}
		}
	}
	return (src);
}
