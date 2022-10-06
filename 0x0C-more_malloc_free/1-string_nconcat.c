#include "main.h"
#include <stdlib.h>
unsigned int _strlen(char *);


/**
 * *string_nconcat - to allocate space required for joined strings
 * @s1: address to destination string
 * @s2: address to source string
 * @n: number of bytes from source string
 * Return: concatenated string else null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_dest, l_src, i;
	char *dest;

	l_dest = _strlen(s1);
	l_src = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	dest = malloc(sizeof(char) * (n + l_dest) + 1);

	if (dest == NULL)
		return (NULL);

	if (n > l_src)
		n = l_src;

	i = 0;
	while (i < n)
	{
		s1[l_dest] = s2[i];
		l_dest++;
		i++;
	}

	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}

	return (dest);
}

/**
 * _strlen - to determine the length of a string
 * @s: address to string to count characters from
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	int strLength = 0;

	while (s[strLength] != '\0')
		strLength++;

	return (strLength);
}
