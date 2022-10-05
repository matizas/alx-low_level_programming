#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - to concatenate arguments
 * @ac: number of arguments
 * @av: an array of string
 * Return: pointer to the string or NULL
 */

char *argstostr(int ac, char **av)
{
	int Words, i, k = 0, lenStr = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	Words = 0;
	while (Words < ac)
	{
		i = 0;
		while (av[Words][i] != '\0')
		{
			lenStr++;
			i++;
		}
		Words++;
	}
	lenStr += ac;

	str = malloc(sizeof(char) * lenStr + 1);
	if (str == NULL)
		return (NULL);

	for (Words = 0; Words < ac; Words++)
	{
		for (i = 0; av[Words][i]; i++)
		{
			str[k] = av[Words][i];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
