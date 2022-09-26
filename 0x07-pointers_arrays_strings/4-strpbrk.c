#include <stdlib.h>
#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 *
 * @s: first ref parameter
 * @accept: second ref parameter
 * Return: address of the first parameter
 */

char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	if (*s == '\0')
		return (NULL);

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c)
			break;
		s++;
	}

	if (*accept == '\0')
		s = NULL;

	return (s);
}
