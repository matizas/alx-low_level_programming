#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: first ref parameter
 * @needle: second ref parameter
 * Return: address of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	if (!*haystack)
		return (NULL);

	while (*haystack)
	{
		j = 0;
		while (*needle)
		{
			if (needle[j] != haystack[i + j])
				break;
			j++;
		}

		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
}
