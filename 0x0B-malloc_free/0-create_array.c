#include "main.h"
#include <stdlib.h>

/**
 * *create_array - to create arrays of char
 * @size: value parameter for number of elements in the array
 * @c: character used to initialise an array
 * Return: return the address of an array else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;


	if (size > 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}

	if (size <= 0)
		return (NULL);
	else
		return (array);
}
