#include "main.h"

/**
 * *_strchr - search for a char in a string
 *
 * @s: ref parameter
 * @c: value parameter
 * Return: the address of the modified string
 */

char *_strchr(char *s, char c)
{
	int index, bfound, i, j, length;
	char d[1000000];

	index = 0;
	bfound = 0;

	for (length = 0; s[length] != '\0'; length++)
		;

	while (s[index] != '\0' && bfound == 0)
	{
		if (s[index] == c)
		{
			j = 0;
			for (i = index; i < length; i++)
			{
				d[j] = s[i];
				j++;
			}

			bfound = 1;
		}
		index++;
	}

	j = 0;
	while (d[j] != '\0')
	{
		*(s + j) = *(d + j);
		j++;
	}
	s[j] = '\0';

	while (j < length)
	{
		s[j + 1] = '\0';
		j++;
	}

	return (s);
}
