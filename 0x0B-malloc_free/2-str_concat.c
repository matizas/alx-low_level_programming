#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: to store address of string 1
 * @s2: to store address of string 2
 * Return: NULL if not successfull
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, m, n;

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	j++;

	s = malloc(i * sizeof(*s1) + j * sizeof(*s2));

	if (s == 0)
		return (NULL);
	for (m = 0, n = 0; m < i + j; m++)
	{
		if (m < i)
			s[m] = s1[m];
		else
			s[m] = s2[n++];
	}
	return (s);
}
