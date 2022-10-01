#include "main.h"
int _strlen(char *s);

/**
 * *_strncat - to merge two strings
 *
 * @dest: first ref parameter
 * @src: second ref parameter
 * @n: value parameter
 * Return: an address
 */

char *_strncat(char *dest, char *src, int n)
{
	int l_dest, l_src, i;

	l_dest = _strlen(dest);
	l_src = _strlen(src);

	if (n > l_src)
		n = l_src;

	i = 0;
	while (i < n)
	{
		dest[l_dest] = src[i];
		l_dest++;
		i++;
	}

	return (dest);
}

/**
 * _strlen - count the number of characters in a string
 *
 * @s: ref parameter
 * Return: number of characters
 */

int _strlen(char *s)
{
	int strLength;

	strLength = 0;

	while (s[strLength] != '\0')
	{
		strLength++;
	}

	return (strLength);
}

