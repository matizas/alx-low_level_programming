#include "main.h"
int _strlen(char *s);
/**
 * *_strcat - to concatenate strings
 *
 * @dest: first ref parameter
 * @src: second ref parameter
 * Return: an address of dest is returned
 */

char *_strcat(char *dest, char *src)
{
	int l_src, l_dest, i;

	l_src = _strlen(src);
	l_dest = _strlen(dest);

	i = 0;
	while (i < l_src)
	{
		dest[l_dest] = src[i];
		l_dest++;
		i++;
	}

	return (dest);
}

/**
 * _strlen - determine the length of the string
 *
 * @s: ref parameter
 * Return: length of string
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
