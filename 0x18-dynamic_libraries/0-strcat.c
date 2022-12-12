#include "main.h"

int count_string(char *str);

/**
 * _strcat - a copy of strcat, concantinate two strings.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * Return: updated pointer to the destination string [dest].
 */

char *_strcat(char *dest, char *src)
{
	int src_lenght, dest_lenght, i;

	src_lenght = count_string(src);
	dest_lenght = count_string(dest);

	for (i = 0; i < src_lenght; i++)
		dest[i + dest_lenght] = src[i];
	dest[src_lenght + dest_lenght + 1] = '\0';

	return (dest);
}

/**
 * count_string - Count  number of char in a string excluding '\0'
 * Return: total string lenght
 * @str: being the string to count
 */

int count_string(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;

	return (count);
}
