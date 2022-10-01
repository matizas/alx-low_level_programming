#include "main.h"

/**
 * *_strcpy - copy a string from one address to the other
 * @dest: first ref parameter
 * @src: second ref parameter
 * Return: a poniter is successful
 */

char *_strcpy(char *dest, char *src)
{
	int i, flag;

	i = 0;
	flag = 0;
	while (!flag)
	{
		if (src[i] != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
			flag = 1;
	}

	*(dest + i) = '\0';

	return (dest);
}
