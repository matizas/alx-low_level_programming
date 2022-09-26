#include "main.h"
#include <stdio.h>

/**
 * *_strchr - search for a char in a string
 *
 * @s: ref parameter
 * @c: value parameter
 * Return: the address of the modified string
 */
char *_strchr(char *s, char c)
{
	int i;

	while (!0)
	{
		i = *s++;

		if (*s++ == c)
		{
			return (s - 1);
		}
		if (i == 0)
			return (NULL);
	}
}
