#include "main.h"

char upper_case(char obj);

/**
 * cap_string - Capitalize String.
 * @str: Passed string.
 * Return: Capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			str[i] = upper_case(str[i]);
		}

		for (j = 0; j < 13; j++)
		{
			if (separators[j] == str[i - 1])
				str[i] = upper_case(str[i]);
		}
		i++;
	}
	return (str);
}

/**
 * upper_case - Change a give character to uppercase.
 * @obj: being the passed object or type char.
 * Return: The Capitalized object char.
 */
char upper_case(char obj)
{
	if (obj >= 97 && obj <= 122)
		obj = obj - 32;
	return (obj);
}
