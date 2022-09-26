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
	while (!0)
	{
		if (*s++ == c)
		{
			return (s - 1);
		}

		if (*s == 0)
			return (NULL);
	}
}
