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
	char *dest;
	unsigned int i, len, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
		;

	size = (len + n) * sizeof(char);

	dest = malloc(size + 1);

	if (dest == NULL)
		return (NULL);

	i = 0;
	while (i < size && s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < size && s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
