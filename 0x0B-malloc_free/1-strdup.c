#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - allocates memory to a copy of a string
 * @str: pointer to the original string
 * Return: pointer to the new string else NULL
 */

char *_strdup(char *str)
{
	int size = 0;
	char *new_str, *str_size;

	if (!str)
		return (NULL);

	new_str = str;
	while (*new_str++)
		size++;

	str_size = malloc(size + 1);
	if (!str_size)
		return (NULL);

	new_str = str_size;
	while (*str)
		*new_str++ = *str++;

	*new_str = 0;
	return (str_size);
}
