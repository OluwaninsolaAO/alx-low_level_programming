#include "main.h"

/**
 * argstostr - Concatenates args to  array
 * @ac: count
 * @av: vector
 * Return: ptr to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j, k, count = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}

	s = malloc((count + ac + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		i++;
	}
	s[k] = '\0';

	return (s);
}

