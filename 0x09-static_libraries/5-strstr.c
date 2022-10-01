#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: first ref parameter
 * @needle: second ref parameter
 * Return: address to the found substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
				break;
			j++;
		}

		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
