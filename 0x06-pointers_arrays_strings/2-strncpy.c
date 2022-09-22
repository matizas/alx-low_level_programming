#include "main.h"
int _strlen(char *s);

/**
* *_strncpy - to merge two strings
*
* @dest: first ref parameter
* @src: second ref parameter
* @n: value parameter
* Return: an address
*/

char *_strncpy(char *dest, char *src, int n)
{
	int l_dest, i;

	l_dest = _strlen(dest);

	if (n > l_dest)
	{
		n = l_dest;
	}

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';

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

