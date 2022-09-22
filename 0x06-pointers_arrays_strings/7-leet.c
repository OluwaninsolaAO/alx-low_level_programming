#include "main.h"

/**
 * leet - Duh duh duh duuuuuuuuuuuuh
 * @str: passed string.
 * Return: processed string.
 */

char *leet(char *str)
{
	int n = 0, i = 0;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O',
		't', 'T', 'l', 'L'};
	char sub[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[n] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (str[n] == letters[i])
				str[n] = sub[i];
		}
		n++;
	}
	return (str);
}
