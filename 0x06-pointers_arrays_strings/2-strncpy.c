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
	int l_dest, i, m, l_src;

	l_dest = _strlen(dest);
	l_src = _strlen(src);

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

	if (n > l_src)
	{
		for (m = l_src; m <= n - l_src; m++)
		{
			dest[m] = 0;
		}
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

