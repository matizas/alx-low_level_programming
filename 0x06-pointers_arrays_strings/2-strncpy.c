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
	int l_src, i;

	l_src = _strlen(src);

	if (n > l_src)
	{
		n = l_src;
	}

	if (n > sizeof(dest))
	{
		n = sizeof(dest);
	}

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
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

