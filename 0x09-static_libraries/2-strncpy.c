#include "main.h"

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
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
