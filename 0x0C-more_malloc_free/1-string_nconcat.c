#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - to allocate space required for joined strings
 * @s1: address to destination string
 * @s2: address to source string
 * @n: number of bytes from source string
 * Return: concatenated string else null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
	char *dest;

	for (i = 0; s1[i] != '\0'; i++)
		;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	dest = malloc((n + i) * sizeof(char *) + 1);

	if (dest == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}

	k = 0;
	while (k < n && s2[k] != '\0')
	{
		dest[i] = s2[k];
		i++;
		k++;
	}
	dest[i] = '\0';

	return (dest);
}
