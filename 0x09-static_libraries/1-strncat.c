#include "main.h"

int count_string(char *str);

/**
 * _strncat - a copy of strcat, cat two strings using cat limit number.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: limit stop.
 * Return: updated pointer to the destination string [dest].
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_lenght, dest_lenght, i;

	src_lenght = count_string(src);
	dest_lenght = count_string(dest);
	for (i = 0; i < src_lenght && i < n; i++)
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
